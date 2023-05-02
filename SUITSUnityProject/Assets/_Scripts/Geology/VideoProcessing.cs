using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using HoloLensCameraStream;
using UnityEngine.XR.ARSubsystems;
using Unity.Barracuda;
#if WINDOWS_UWP && XR_PLUGIN_OPENXR
    using Windows.Perception.Spatial;
#endif
public class VideoProcessing : MonoBehaviour
{
    public delegate void GeoPointWorldCoordsFoundCallback(Vector3 cameraLocation, Vector3[] worldCoords, Texture2D[] boundingBoxes);

    private byte[] m_LatestImageBytes;
    private HoloLensCameraStream.Resolution m_Resolution;

    private Inference m_Inference;          // Script that identifies GeoPoints in an image
    private VideoCapture m_VideoCapture;  // HoloLensCameraStream object that provides video frames
    private Texture2D m_VideoTexture;     // Stores the current video texture generated from m_LatestImageBytes

    private IntPtr m_SpatialCoordinateSystemPtr;

    // uhhhh this better not change by the time between the time it's set by GetGeoPointLocations
    // and when it's called by OnFrameSampleAcquired... i couldn't figure a better solution
    private GeoPointWorldCoordsFoundCallback m_GeoPointWorldCoordsFoundCallback;

#if WINDOWS_UWP && XR_PLUGIN_OPENXR
    SpatialCoordinateSystem m_SpatialCoordinateSystem;
#endif

    // Analyzes the next available camera frame and returns the world-space coordinate for any geological
    // points of interest
    public void GetGeoPointLocations(GeoPointWorldCoordsFoundCallback callback)
    {
        m_VideoCapture.RequestNextFrameSample(OnFrameSampleAcquired);
        m_GeoPointWorldCoordsFoundCallback = callback;
    }

    void Start()
    {
        // Fetch a pointer to Unity's spatial coordinate system if you need pixel mapping
#if WINDOWS_UWP

#if XR_PLUGIN_WINDOWSMR

        m_SpatialCoordinateSystemPtr = UnityEngine.XR.WindowsMR.WindowsMREnvironment.OriginSpatialCoordinateSystem;

#elif XR_PLUGIN_OPENXR

        m_SpatialCoordinateSystem = Microsoft.MixedReality.OpenXR.PerceptionInterop.GetSceneCoordinateSystem(UnityEngine.Pose.identity) as SpatialCoordinateSystem;

#elif BUILTIN_XR

#if UNITY_2017_2_OR_NEWER
        m_SpatialCoordinateSystemPtr = UnityEngine.XR.WSA.WorldManager.GetNativeISpatialCoordinateSystemPtr();
#else
        m_SpatialCoordinateSystemPtr = UnityEngine.VR.WSA.WorldManager.GetNativeISpatialCoordinateSystemPtr();
#endif

#endif

#endif

        m_Inference = GetComponent<Inference>();

        // Call this in Start() to ensure that the CameraStreamHelper is already "Awake".
        CameraStreamHelper.Instance.GetVideoCaptureAsync(OnVideoCaptureCreated);
    }

    void OnVideoCaptureCreated(VideoCapture videoCapture)
    {
        if (videoCapture == null)
        {
            Debug.LogError("Did not find a video capture object. You may not be using the HoloLens.");
            return;
        }

        this.m_VideoCapture = videoCapture;

        //Request the spatial coordinate ptr if you want fetch the camera and set it if you need to 
#if WINDOWS_UWP

#if XR_PLUGIN_OPENXR
        CameraStreamHelper.Instance.SetNativeISpatialCoordinateSystem(m_SpatialCoordinateSystem);
#elif XR_PLUGIN_WINDOWSMR || BUILTIN_XR
        CameraStreamHelper.Instance.SetNativeISpatialCoordinateSystemPtr(m_SpatialCoordinateSystemPtr);
#endif

#endif

        m_Resolution = CameraStreamHelper.Instance.GetLowestResolution();
        float frameRate = CameraStreamHelper.Instance.GetHighestFrameRate(m_Resolution);

        CameraParameters cameraParams = new CameraParameters();
        cameraParams.cameraResolutionHeight = m_Resolution.height;
        cameraParams.cameraResolutionWidth = m_Resolution.width;
        cameraParams.frameRate = Mathf.RoundToInt(frameRate);
        cameraParams.pixelFormat = CapturePixelFormat.BGRA32;
        cameraParams.rotateImage180Degrees = false;
        cameraParams.enableHolograms = false;

        UnityEngine.WSA.Application.InvokeOnAppThread(() => { m_VideoTexture = new Texture2D(m_Resolution.width, m_Resolution.height, TextureFormat.BGRA32, false); }, false);

        videoCapture.StartVideoModeAsync(cameraParams, OnVideoModeStarted);
    }

    void OnVideoModeStarted(VideoCaptureResult result)
    {
        if (result.success == false)
        {
            Debug.LogWarning("Could not start video mode.");
            return;
        }

        Debug.Log("Video capture started.");
    }

    // Callback for VideoCapture.RequestNextFrameSample()
    void OnFrameSampleAcquired(VideoCaptureSample sample)
    {
        // Create/resize the image data byte[] buffer if needed
        if (m_LatestImageBytes == null || m_LatestImageBytes.Length < sample.dataLength)
        {
            m_LatestImageBytes = new byte[sample.dataLength];
        }
        sample.CopyRawImageDataIntoBuffer(m_LatestImageBytes);

        // Retrieve matrices (as float[]) from sample
        float[] cameraToWorldMatrixAsFloat;
        if (sample.TryGetCameraToWorldMatrix(out cameraToWorldMatrixAsFloat) == false)
        {
            Debug.Log("Failed to get camera to world matrix.");
            return;
        }
        float[] projectionMatrixAsFloat;
        if (sample.TryGetProjectionMatrix(out projectionMatrixAsFloat) == false)
        {
            Debug.Log("Failed to get projection matrix.");
            return;
        }

        sample.Dispose();

        // Convert matricies in the form float[] to actual Matrix4x4
        Matrix4x4 cameraToWorldMatrix = LocatableCameraUtils.ConvertFloatArrayToMatrix4x4(cameraToWorldMatrixAsFloat);
        Matrix4x4 projectionMatrix = LocatableCameraUtils.ConvertFloatArrayToMatrix4x4(projectionMatrixAsFloat);

        UnityEngine.WSA.Application.InvokeOnAppThread(async () =>
        {
            // Turn the raw bytes into a Texture2D
            m_VideoTexture.LoadRawTextureData(m_LatestImageBytes);
            m_VideoTexture.wrapMode = TextureWrapMode.Clamp;
            m_VideoTexture.Apply();

            // Get pixel coordinates of GeoPoints
            Tuple<Vector2[], Texture2D[]> tuple = await m_Inference.CalcGeoPointPixelCoords(m_VideoTexture);
            Vector2[] geoPointPixelCoords = tuple.Item1;
            Texture2D[] geoPointCroppedImages = tuple.Item2;

            Vector3[] geoPointWorldCoords = new Vector3[geoPointPixelCoords.Length];
            // Convert pixel coordinates to world-space coordinates
            for (int i = 0; i < geoPointPixelCoords.Length; i++) {
                geoPointWorldCoords[i] = LocatableCameraUtils.PixelCoordToWorldCoord(
                    cameraToWorldMatrix,
                    projectionMatrix,
                    m_Resolution,
                    geoPointPixelCoords[i]);
            }

            // Calc camera location in world space
            Vector3 cameraLocation = cameraToWorldMatrix.MultiplyPoint(Vector3.zero);
            m_GeoPointWorldCoordsFoundCallback(cameraLocation, geoPointWorldCoords, geoPointCroppedImages);

        }, false);
    }

    private void OnDestroy()
    {
        if (m_VideoCapture != null)
        {
            m_VideoCapture.Dispose();
        }
    }
}
