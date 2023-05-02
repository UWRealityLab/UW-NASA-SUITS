#define WEBCAM

using System.Collections;
using UnityEngine;
using Unity.Barracuda;
using System.IO;
using System.Collections.Generic;
using System.Drawing;
using System;
using Color = UnityEngine.Color;
using System.Threading.Tasks;

#if WEBCAM
using System.Linq;
#endif

public class Inference : MonoBehaviour
{
    private Model m_RuntimeModel;
    private IWorker m_Worker;
    private VideoProcessing m_VideoProcessing;

    private bool m_IsCurrentlyScanning = false;
    private List<Color> palette = new List<Color>() { Color.red, Color.green, Color.blue, Color.yellow };
    private TCPClient m_tcpClient;
#if (WEBCAM)
    private WebCamTexture m_WebcamTexture;
#else
    private Tensor m_Input;
    public Texture2D inputImage;
    public Texture2D inputImage2;
#endif

    public NNModel inputModel;
    public Material templateCroppedImageMaterial;  // Used to create a cropped image material for each GeoPoint info panel
    public Material preprocessMaterial;
    public Material postSegmentationMaterial;
    public Material postReductionMaterial;
    public Material centersIdentifiedMaterial;

    public GeoPointCollection geoPointCollection;
    public LayerMask spatialMeshMask;
    public float scanTimeInterval = 5;
    public bool autoGeoScan = false;
    public int timerLength = 3;
    public timerDisplay timer;

    public int inputResolutionY = 500;
    public int inputResolutionX = 500;
    public string modelOutputName = "batch_normalization_10";
    public TextureFormat modelColorFormat = TextureFormat.ARGB32;

    public int inputScalar = 1;
    public TextAsset fileInputTensor;
    public int blobCenterWidth = 10;
    public int maxGeoPointsCreatedPerScan = 5;

    public RenderTextureFormat renderTextureFormat;
    public GameObject reticle;


    public void OnDestroy()
    {
        m_Worker?.Dispose();
    }
    void OnDisable()
    {
        m_Worker?.Dispose();
    }

    void Start()
    {
        if (scanTimeInterval < timerLength)
        {
            D.LogWarning("Please increase the scan time interval to be greater than the timer length.");
        }

        Application.targetFrameRate = 60;

        m_RuntimeModel = ModelLoader.Load(inputModel, false);
        m_Worker = WorkerFactory.CreateWorker(WorkerFactory.Type.ComputePrecompiled, m_RuntimeModel, false);

        m_VideoProcessing = GetComponent<VideoProcessing>();
        m_tcpClient = GetComponent<TCPClient>();

        StartCoroutine(StartAutoGeoScan());

        // For testing purposes (so i dont have to build to test on an image)
        //await CalcGeoPointPixelCoords(inputImage);
        //await CalcGeoPointPixelCoords(inputImage2);
    }

    public void ToggleAutoGeoScan()
    {
        autoGeoScan = !autoGeoScan;
        if (autoGeoScan)
        {
            StartCoroutine(StartAutoGeoScan());
        }
    }

    // Start a GeoScan on a regular time interval
    IEnumerator StartAutoGeoScan()
    {
        while (autoGeoScan)
        {
            // Perform the scan
            StartGeoScan();

            // Repeat this geological image analysis at a time interval
            yield return new WaitForSeconds(scanTimeInterval);
        }
    }

    // Check if already currently scanning before starting a GeoScan
    public void StartGeoScan()
    {
        // Prevent multiple scans occurring at the same time
        if (!m_IsCurrentlyScanning)
        {   
            // StartCamera();
            // Debug.Log("Starting camera");

            // Set reticle to be enabled
            this.reticle.SetActive(true);

            StartCoroutine(GeoScan());
        }
    }

    // Feed an image from the HoloLens camera to the neural net and create a GeoPoint to represent the 
    // geological area depicted in the image
    IEnumerator GeoScan()
    {
        // Wait some seconds before actually scanning
        timer.StartTimer(timerLength);
        m_IsCurrentlyScanning = true;
        yield return new WaitForSeconds(timerLength);
        m_IsCurrentlyScanning = false;

        m_VideoProcessing.GetGeoPointLocations(OnGeoPointWorldCoordsFound);
    }

    // Creates a GeoPoint at the given world-space coordinate
    public void CreateGeoPoint(Vector3 location, Texture2D croppedImage)
    {
        GameObject geoPoint = geoPointCollection.GetPooledGeoPoint();

        // After getting the pooled GeoPoint, set its properties
        geoPoint.transform.position = location;
        Material croppedImageMaterial = new Material(templateCroppedImageMaterial);
        croppedImageMaterial.mainTexture = croppedImage;
        geoPoint.GetComponentInChildren<UnityEngine.UI.Image>().material = croppedImageMaterial;
    }

    // Analyzes an image for GeoPoints and returns pixel bounding boxes for each one.
    // Called by VideoProcessing.OnFrameSampleAcquired().
    public async Task<Tuple<Vector2[], Texture2D[]>> CalcGeoPointPixelCoords(Texture2D src)
    {
        // Rescale the src to fit the onnx model's input resolution if necessary
        Texture2D srcCopy;
        if (src.width != inputResolutionX || src.height != inputResolutionY)
        {
            D.Log($"Resolution of image to be segmented does not match input resolution of model." +
                $" Texture rescaled from width, height of: {src.width}, {src.height} to {inputResolutionX}, {inputResolutionY}");
            srcCopy = TextureUtil.ScaleTextureAsNew(src, inputResolutionX, inputResolutionY);
        }
        else
        {
            // In any case, copy the texture so that we don't edit the original
            srcCopy = TextureUtil.CopyTexture(src);
        }

        // Flip the given image since it comes already upside-down for some reason
        //TextureUtil.FlipTextureVertically(srcCopy);

        preprocessMaterial.mainTexture = srcCopy;

        // Segment the given source image
        Texture2D segmentedTex = await SegmentImage(src);
        //TextureUtil.FlipTextureVertically(segmentedTex);
        D.Log("Image segmentation complete, now reducing colors");
        postSegmentationMaterial.mainTexture = segmentedTex;

        // Now reduce the colors of the segmented image
        Texture2D colorReducedTex = ReduceColors(segmentedTex, palette);
        D.Log("Color reduction complete");
        postReductionMaterial.mainTexture = colorReducedTex;

        // Find the centers of the blobs in the image (the blobs should represent rocks/other things)
        List<RectInt> rockBoundingBoxes = FindBlobBoundingBoxes(colorReducedTex, Color.green);

        // Shorten list of bounding boxes as to not bloat the screen with GeoPoints
        D.Log($"Blob bounding boxes found: {rockBoundingBoxes.Count}");
        while (rockBoundingBoxes.Count > maxGeoPointsCreatedPerScan)
        {
            rockBoundingBoxes.RemoveAt(rockBoundingBoxes.Count - 1);
        }
        D.Log($"Blob bounding boxes after culling: {rockBoundingBoxes.Count}");

        // Calculate the centers in pixel coordinates of each rock using the rocks' bounding boxes
        // Also, generate cropped images of the rocks from the source texture using the bounding boxes
        Vector2[] rockCenters = new Vector2[rockBoundingBoxes.Count];
        Texture2D[] geoPointCroppedImages = new Texture2D[rockBoundingBoxes.Count];
        D.Log(rockCenters.Length);
        for (int i = 0; i < rockBoundingBoxes.Count; i++)
        {
            RectInt boundingBox = rockBoundingBoxes[i];
            int centerX = boundingBox.xMin + boundingBox.width / 2;
            int centerY = boundingBox.yMin + boundingBox.height / 2;
            rockCenters[i] = new Vector2(centerX, centerY);

            geoPointCroppedImages[i] = TextureUtil.Crop(srcCopy, boundingBox);
        }

        Texture2D centersIdentifiedTex = TextureUtil.CopyTexture(colorReducedTex);

        // Set every non-blob (aka non-green) pixel to white for easier visual comparison
        for (int i = 0; i < inputResolutionX; i++) {
            for (int j = 0; j < inputResolutionY; j++) {
                if (centersIdentifiedTex.GetPixel(i, j) != Color.green) {
                    centersIdentifiedTex.SetPixel(i, j, Color.white);
                }
            }
        }

        // Paint a black area around the pixel-coordinate centers of each blob
        for (int i = 0; i < rockCenters.Length; i++) {
            D.Log($"Rock center pixel coords: {rockCenters[i]}");
            int x = Mathf.FloorToInt(rockCenters[i].x);
            int y = Mathf.FloorToInt(rockCenters[i].y);
            int halfWidth = blobCenterWidth / 2;
            for (int a = x - halfWidth; a < x + halfWidth; a++)
            {
                for (int b = y - halfWidth; b < y + halfWidth; b++)
                {
                    centersIdentifiedTex.SetPixel(a, b, Color.black);
                }
            }
        }

        centersIdentifiedTex.Apply();
        centersIdentifiedMaterial.mainTexture = centersIdentifiedTex;

        this.reticle.SetActive(false);

        return new Tuple<Vector2[], Texture2D[]>(rockCenters, geoPointCroppedImages);
    }

    // Callback given to VideoProcessing.GetGeoPointLocations(OnGeoPointLocationsFoundCallback callback)
    // which is called in GeoScan
    public void OnGeoPointWorldCoordsFound(Vector3 cameraLocation, Vector3[] geoPointWorldCoords, Texture2D[] geoPointCroppedImages)
    {
        for (int i = 0; i < geoPointWorldCoords.Length; i++)
        {
            RaycastHit hit;
            if (Physics.Raycast(cameraLocation, geoPointWorldCoords[i] - cameraLocation, out hit, Mathf.Infinity, spatialMeshMask))
            {
                Debug.Log($"Creating geopoint at world coordinates {hit.point}");
                CreateGeoPoint(hit.point, geoPointCroppedImages[i]);
            }
            else
            {
                CreateGeoPoint(geoPointWorldCoords[i], geoPointCroppedImages[i]);
            }
        }
    }

    // Using Barracuda, apply a segmentation model to the given image and return the result
    private async Task<Texture2D> SegmentImage(Texture2D src)
    {
        return await m_tcpClient.GetSegmentedImageFromServerAsync(src);
    }

    private Texture2D RenderTextureToTexture2D(RenderTexture rTex)
    {
        Texture2D tex = new Texture2D(inputResolutionX, inputResolutionY, modelColorFormat, false);
        // ReadPixels looks at the active RenderTexture.
        RenderTexture.active = rTex;
        tex.ReadPixels(new Rect(0, 0, rTex.width, rTex.height), 0, 0);
        tex.Apply();
        return tex;
    }

    private Texture2D ReduceColors(Texture2D inputTexture, List<Color> palette)
    {
        // Create a new texture with the same size as the input texture
        Texture2D outputTexture = new Texture2D(inputTexture.width, inputTexture.height, inputTexture.format, true);

        // Get the color data from the input texture
        Color[] inputColors = inputTexture.GetPixels();

        // Create a dictionary to map input colors to palette indices
        Dictionary<Color, int> colorToIndex = new Dictionary<Color, int>();
        for (int i = 0; i < palette.Count; i++)
        {
            colorToIndex[palette[i]] = i;
        }

        // Create an array to hold the output color indices
        byte[] outputIndices = new byte[inputColors.Length];

        // Loop through each pixel in the input texture and find the closest color in the palette
        for (int i = 0; i < inputColors.Length; i++)
        {
            Color inputColor = inputColors[i];
            int closestIndex = 0;
            float closestDistance = float.MaxValue;
            for (int j = 0; j < palette.Count; j++)
            {
                Color paletteColor = palette[j];
                float distance = Vector3.Distance(ColorToVector3(inputColor), ColorToVector3(paletteColor));
                if (distance < closestDistance)
                {
                    closestIndex = j;
                    closestDistance = distance;
                }
            }
            outputIndices[i] = (byte)closestIndex;
        }

        // Create an array to hold the output colors
        Color[] outputColors = new Color[inputColors.Length];

        // Loop through each pixel in the output texture and set its color based on the palette index
        for (int i = 0; i < inputColors.Length; i++)
        {
            int index = outputIndices[i];
            Color color = palette[index];
            outputColors[i] = color;
        }

        // Set and apply the color data for the output texture and return it
        outputTexture.SetPixels(outputColors);
        outputTexture.Apply();
        return outputTexture;
    }

    // Returns a list of blob bounding boxes ordered by largest to smallest
    private List<RectInt> FindBlobBoundingBoxes(Texture2D texture, Color blobColor)
    {
        // Store the pixels of the largest blob
        List<Point> largestBlob = new List<Point>();

        // Keys are the area of the rock's bounding boxes in pixels, the values are the actual bounding boxes
        List<RectInt> rockBoundingBoxes = new List<RectInt>();

        // Get the color data from the texture
        Color[] colors = new Color[texture.width * texture.height];
        colors = texture.GetPixels();

        // Create an array to keep track of the pixels we have seen
        bool[,] seen = new bool[texture.width, texture.height];
        int[] dr = new int[] { 1, -1, 0, 0 };
        int[] dc = new int[] { 0, 0, 1, -1 };

        int ans = 0;

        // Loop through each pixel and find the largest blob and store their pixels
        for (int x = 0; x < texture.width; x++)
        {
            for (int y = 0; y < texture.height; y++)
            {
                Color pixelColor = colors[x + y * texture.width];

                if (pixelColor == blobColor && !seen[x, y])
                {
                    int shape = 0;
                    Stack<int[]> stack = new Stack<int[]>();
                    List<Point> currentBlob = new List<Point>();
                    stack.Push(new int[] { x, y });
                    seen[x, y] = true;
                    while (stack.Count != 0) {
                        int[] node = stack.Pop();
                        int row = node[0], col = node[1];

                        currentBlob.Add(new Point(row, col));

                        shape++;

                        for (int k = 0; k < 4; k++) {
                            int new_row = row + dr[k];
                            int new_col = col + dc[k];
                            if (0 <= new_row && new_row < texture.width &&
                                    0 <= new_col && new_col < texture.height &&
                                    colors[new_row + new_col * texture.width] == blobColor && !seen[new_row, new_col]) {
                                stack.Push(new int[] { new_row, new_col });
                                seen[new_row, new_col] = true;
                            }
                        }
                    }

                    if (shape > 100) {
                        // Think of the blob as having a bounding box, then find the edges and calculate the center
                        int minA = int.MaxValue;
                        int maxA = int.MinValue;
                        int minB = int.MaxValue;
                        int maxB = int.MinValue;

                        // Find the minimum and maximum x-coordinates and y-coordinates of the pixels
                        foreach (Point p in currentBlob) {
                            int a = p.X;
                            int b = p.Y;

                            if (a < minA) minA = a;
                            if (a > maxA) maxA = a;
                            if (b < minB) minB = b;
                            if (b > maxB) maxB = b;
                        }

                        int width = maxA - minA;
                        int height = maxB - minB;
                        rockBoundingBoxes.Add(new RectInt(minA, minB, width, height));
                    }

                    if (shape > ans) {
                        ans = shape;
                        largestBlob = new List<Point>(currentBlob);
                    }
                }
            }
        }

        // Sort by RectInt areas in descending order
        rockBoundingBoxes.Sort(Comparer<RectInt>.Create(
            // Swap the parameters to Compare() in order to reverse the result and thus sort in descending order
            (a, b) => Comparer<int>.Default.Compare(b.width * b.height, a.width * a.height))
        );

        return rockBoundingBoxes;
    }

    private Vector3 ColorToVector3(Color color)
    {
        return new Vector3(color.r, color.g, color.b);
    }

    private void PrintTensorInfo(Tensor tensor)
    {
        for (int c = 0; c < 3; c++)
        {
            float max = float.NegativeInfinity;
            float min = float.PositiveInfinity;
            for (int j = 0; j < inputResolutionX; j++)
            {
                for (int k = 0; k < inputResolutionY; k++)
                {
                    //D.Log(result[0, j, k, c]);

                    if (tensor[0, j, k, c] > max)
                    {
                        max = tensor[0, j, k, c];
                    }

                    if (tensor[0, j, k, c] < min)
                    {
                        min = tensor[0, j, k, c];
                    }
                }
            }
            D.Log($"max {c}: {max}");
            D.Log($"min {c}: {min}");
        }
    }

    public static float[] ReadTensorFile(string filepath)
    {
        D.Log($"Reading tensor from filepath {filepath}");
        StreamReader reader = new StreamReader(filepath);
        string[] stringArray = File.ReadAllLines(filepath);
        float[] array = new float[stringArray.Length];
        for (int i = 0; i < stringArray.Length; i++)
        {
            array[i] = float.Parse(stringArray[i]);
        }
        return array;
    }

    public static float[] ReadTensorFromTextAsset(TextAsset file)
    {
        string[] stringArray = file.text.Split('\n');
        float[] array = new float[stringArray.Length];
        for (int i = 0; i < stringArray.Length; i++)
        {
            array[i] = float.Parse(stringArray[i]);
        }
        D.Log($"Read tensor from text asset as float array; array length {stringArray.Length}");
        return array;
    }
}
