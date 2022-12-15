using Microsoft.MixedReality.Toolkit.Input;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ListenerHandRayInteractor : MonoBehaviour
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
        InputToRayInteractorHandler.OnQueryRaycastHit = TryRaycast;
    }

    private void OnDisable()
    {
        InputToRayInteractorHandler.OnQueryRaycastHit -= TryRaycast;
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
