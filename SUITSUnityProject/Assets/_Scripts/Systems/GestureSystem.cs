using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Subsystems;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.XR;

public class GestureSystem : Singleton<GestureSystem>
{
    public UnityEvent OnPinchDetected;

    [SerializeField]
    [Tooltip("Prefab of a hand joint; Used for visualization")]
    private GameObject handJointPrefab;

    private HandsAggregatorSubsystem aggregator;  // API to query hand tracking information

    // Used for visualizing how the finger pinch is detected and for indicating that
    // waypoint generator is activated
    private GameObject thumbTip;
    private Renderer thumbTipRenderer;
    private GameObject indexTip;
    private Renderer indexTipRenderer;

    private bool pinched;  // is player pinching fingers
    private bool initialPinching;  // is player pinching fingers when the class is activated

    public void Start()
    {
        // Get a reference to the aggregator.
        aggregator = XRSubsystemHelpers.GetFirstRunningSubsystem<HandsAggregatorSubsystem>();

        thumbTip = Instantiate(handJointPrefab);
        thumbTipRenderer = thumbTip.GetComponent<Renderer>();
        indexTip = Instantiate(handJointPrefab);
        indexTipRenderer = indexTip.GetComponent<Renderer>();
        thumbTipRenderer.enabled = false;
        indexTipRenderer.enabled = false;
    }

    public void Update()
    {
        VisualizePinchFingers();
        DetectFingersPinched();
    }

    public void OnEnable()
    {
        pinched = true;
        initialPinching = true;  // used to avoid conflicts with far interaction integrated in MRTK
    }

    public void OnDisable()
    {
        thumbTipRenderer.enabled = false;
        indexTipRenderer.enabled = false;
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
                // broadcasting
                OnPinchDetected?.Invoke();
            }
            pinched = false;
        }
    }
}
