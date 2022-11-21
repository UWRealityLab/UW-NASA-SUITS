using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.SpatialManipulation;
using Microsoft.MixedReality.Toolkit.Subsystems;
using UnityEngine;
using UnityEngine.XR;
using UnityEngine.XR.Interaction.Toolkit;

/// <summary>
/// A class that controls how the waypoint will be generated when player is requesting one
/// </summary>
public class WayPointGenerateController : MonoBehaviour
{
    [SerializeField]
    [Tooltip("Prefab of a hand joint; Used for visualization")]
    private GameObject handJointPrefab;

    [SerializeField]
    [Tooltip("XRRayInteractor class that is used to extract the RaycastHit from it")]
    XRRayInteractor interactor;

    [SerializeField]
    [Tooltip("An array of RadialViews that will get temperarily turned off when generating a waypoint; Used to avoid misplacing")]
    private RadialView[] panels;

    [SerializeField]
    [Tooltip("PathTracer class that will get temperarily turned off when generating a waypoint; Used to improve performance")]
    private GameObject pathTracer;

    // The point that next waypoint should be generated on; Should be null by default and will be updated when ray hit detected
    public Vector3? validPoint = null;

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
    }

    /// <summary>
    /// Disable the irrelevant features like path finding and radial view following
    /// </summary>
    public void OnEnable()
    {
        validPoint = null;

        ////////STILL IN TESTING//////////////
        pinched = true;
        initialPinching = true;  // used to avoid conflicts with far interaction integrated in MRTK
        //////////////////////////////////////

        pathTracerState = pathTracer.activeSelf;
        pathTracer.SetActive(false);
        foreach (RadialView panel in panels)
        {
            panel.enabled = false;
        }
    }

    /// <summary>
    /// Resume the initial states of the features that got turned off
    /// </summary>
    public void OnDisable()
    {
        pathTracer.SetActive(pathTracerState);
        foreach (RadialView panel in panels)
        {
            panel.enabled = true;
        }
        thumbTipRenderer.enabled = false;
        indexTipRenderer.enabled = false;
    }

    public void Update()
    {
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
        } 
        else if (pinched)
        {
            if (initialPinching)
            {
                initialPinching = false;
            }
            else
            {
                validPoint = RayCast();
            }
            pinched = false;
        }
    }

    /// <summary>
    /// Try to get a ray cast hit from the XRRayInteractor
    /// XRRayInteractor only works with different types of interactables instead of a normal collider
    /// </summary>
    /// <returns>A RaycastHit if the ray hits an interactable; otherise null is returned</returns>
    private Vector3? RayCast()
    {
       /* if (interactor.TryGetCurrentRaycast(out RaycastHit? hit, out int raycastHitIndex, 
            out UnityEngine.EventSystems.RaycastResult? uiRaycastHit, out int uiRaycastHitIndex, out bool isUIHitClosest))
        {
            if (hit != null)
            {
                Debug.Log(hit?.point);
            }
        }*/
        if (interactor.TryGetCurrent3DRaycastHit(out RaycastHit hit))
        {
            return hit.point;
        }
        return null;
    }
}
