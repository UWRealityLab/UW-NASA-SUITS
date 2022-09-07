using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.Input;
using Microsoft.MixedReality.Toolkit.SpatialManipulation;
using Microsoft.MixedReality.Toolkit.Subsystems;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;
using UnityEngine.XR.Interaction.Toolkit;

public class WayPointGenerateController : MonoBehaviour
{
    [SerializeField] private GameObject handJointPrefab;
    [SerializeField] XRRayInteractor interactor;

    [SerializeField] private RadialView[] panels;
    [SerializeField] private GameObject pathTracer;
    private bool pathTracerState;

    public Vector3? validPoint = null;

    private GameObject thumbTip;
    private Renderer thumbTipRenderer;
    private GameObject indexTip;
    private Renderer indexTipRenderer;
    private bool pinched;
    private bool initialPinching;
    private HandsAggregatorSubsystem aggregator;

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

    public void OnEnable()
    {
        validPoint = null;
        pinched = true;
        initialPinching = true;
        pathTracerState = pathTracer.activeSelf;
        pathTracer.SetActive(false);
        foreach (RadialView panel in panels)
        {
            panel.enabled = false;
        }
    }
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
