using Microsoft.MixedReality.Toolkit.Input;
using System.Collections;
using System.Collections.Generic;
using Microsoft.MixedReality.Toolkit.Subsystems;
using UnityEngine;
using static Microsoft.MixedReality.Toolkit.Input.FuzzyGazeInteractor;
using Microsoft.MixedReality.Toolkit;
using UnityEngine.XR;

public class EyeTracker : MonoBehaviour
{
    [SerializeField]
    [Tooltip("Prefab of a hand joint; Used for visualization")]
    private GameObject handJointPrefab;

    [SerializeField]
    private FuzzyGazeInteractorCustom fuzzyGazeInteractor;
    [SerializeField]
    private bool FuzzySelect = false;

    private HandsAggregatorSubsystem aggregator;  // API to query hand tracking information
    // Used for visualizing how the finger pinch is detected and for indicating that
    // waypoint generator is activated
    private GameObject thumbTip;
    private Renderer thumbTipRenderer;
    private GameObject indexTip;
    private Renderer indexTipRenderer;

    private bool pinched;  // is player pinching fingers
    private bool initialPinching;  // is player pinching fingers when the class is activated
    private bool pathTracerState;  // is pathTracer initially turned on or off

    // The point that next waypoint should be generated on; Should be null by default and will be updated when ray hit detected
    public Vector3? validPoint = null;

    public void Awake()
    {
        // Get a reference to the aggregator.
        aggregator = XRSubsystemHelpers.GetFirstRunningSubsystem<HandsAggregatorSubsystem>();
    }

    public void Start()
    {
        thumbTip = Instantiate(handJointPrefab);
        thumbTipRenderer = thumbTip.GetComponent<Renderer>();
        indexTip = Instantiate(handJointPrefab);
        indexTipRenderer = indexTip.GetComponent<Renderer>();

        validPoint = null;

        ////////STILL IN TESTING//////////////
        pinched = true;
        initialPinching = true;  // used to avoid conflicts with far interaction integrated in MRTK
        //////////////////////////////////////

    }

    // Update is called once per frame
    void Update()
    {
        if (FuzzySelect)
        {
            List<GazeRaycastHitResult> result = fuzzyGazeInteractor.GetGazeRaycastHitResults();
            if (result.Count > 0)
                transform.position = result[0].raycastHit.transform.position;
        }
        else
        {
            Debug.Log(fuzzyGazeInteractor.TryGetCurrent3DRaycastHit(out RaycastHit hit));
            Debug.Log(hit.point);
            transform.position = hit.point;
        }

        VisualizePinchFingers();
        DetectFingersPinched();
    }

    /// <summary>
    /// Find if the right hand's thumb tip and index tip are visiable
    /// If so turn on the visualizer
    /// </summary>
    private void VisualizePinchFingers()
    {
        thumbTipRenderer.enabled = false;
        indexTipRenderer.enabled = false;

        // Get a single joint (thumb tip, right hand)
        bool jointIsValid = aggregator.TryGetJoint(TrackedHandJoint.ThumbTip, XRNode.RightHand, out HandJointPose jointPose);
        if (jointIsValid)
        {
            thumbTip.transform.position = jointPose.Position;
            thumbTipRenderer.enabled = true;
        }
        // Get a single joint (index tip, right hand)
        jointIsValid = aggregator.TryGetJoint(TrackedHandJoint.IndexTip, XRNode.RightHand, out jointPose);
        if (jointIsValid)
        {
            indexTip.transform.position = jointPose.Position;
            indexTipRenderer.enabled = true;
        }
    }

    /// <summary>
    /// Find if the player is pinching fingers
    /// If so, call RayCast when their fingers are released
    /// </summary>
    private void DetectFingersPinched()
    {
        // Query pinch characteristics from the left hand.
        // pinchAmount is [0,1], normalized to the open/closed thresholds specified in the Aggregator configuration.
        // "isReadyToPinch" is adjusted with the HandRaiseCameraFOV and HandFacingAwayTolerance settings in the configuration.
        bool handIsValid = aggregator.TryGetPinchProgress(XRNode.RightHand, out bool isReadyToPinch, out bool isPinching, out float pinchAmount);
        if (isReadyToPinch && handIsValid && isPinching)
        {
            if (!initialPinching)
                pinched = true;
            GetComponent<Renderer>().material.color = Color.green;
        }
        else if (pinched)
        {
            if (initialPinching)
            {
                initialPinching = false;
            }
            else
            {
                
            }
            pinched = false;
            if (FuzzySelect)
                GetComponent<Renderer>().material.color = Color.red;
            else
                GetComponent<Renderer>().material.color = Color.white;
        }
    }
}
