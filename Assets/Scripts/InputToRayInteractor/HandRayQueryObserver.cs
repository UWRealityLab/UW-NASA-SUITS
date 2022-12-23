using Microsoft.MixedReality.Toolkit.Input;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HandRayQueryObserver : MonoBehaviour
{
    [SerializeField]
    private MRTKRayInteractor leftHandRayInteractor;
    [SerializeField]
    private MRTKRayInteractor rightHandRayInteractor;

    public enum HandNodeEnum
    {
        PrioritizeLeftHand,
        PrioritizeRightHand
    };
    [SerializeField]
    private HandNodeEnum handSelection;

    private void OnEnable()
    {
        InputToRayInteractorHandler.OnRaycastQuerying += TryRaycast;
    }

    private void OnDisable()
    {
        InputToRayInteractorHandler.OnRaycastQuerying -= TryRaycast;
    }

    private Vector3 TryRaycast()
    {
        leftHandRayInteractor.TryGetCurrent3DRaycastHit(out RaycastHit leftHandRaycastHit);
        rightHandRayInteractor.TryGetCurrent3DRaycastHit(out RaycastHit rightHandRaycastHit);
        if (handSelection == HandNodeEnum.PrioritizeLeftHand)
        {
            return leftHandRaycastHit.point;
        }
        else
        {
            return rightHandRaycastHit.point;
        }
    }
}
