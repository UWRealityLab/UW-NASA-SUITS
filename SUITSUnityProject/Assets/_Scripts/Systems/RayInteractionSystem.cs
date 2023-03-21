using Microsoft.MixedReality.Toolkit.Input;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class RayInteractionSystem : Singleton<RayInteractionSystem>
{
    public InteractorState Interactor;
    public UnityEvent<RaycastHit> OnRaycastHit;

    [SerializeField]
    private MRTKRayInteractor _leftHandRayInteractor;
    [SerializeField]
    private MRTKRayInteractor _rightHandRayInteractor;
    [SerializeField]
    private FuzzyGazeInteractor _gazeRayInteractor;

    public void RaycastTriggered()
    {
        switch(Interactor)
        { 
            case InteractorState.GazeRay:
                _gazeRayInteractor.TryGetCurrent3DRaycastHit(out RaycastHit raycastHit);
                OnRaycastHit?.Invoke(raycastHit);
                break;
            case InteractorState.HandRay:
                _leftHandRayInteractor.TryGetCurrent3DRaycastHit(out RaycastHit leftHandRaycastHit);
                _rightHandRayInteractor.TryGetCurrent3DRaycastHit(out RaycastHit rightHandRaycastHit);
                OnRaycastHit?.Invoke(rightHandRaycastHit);
                break;
            default:
                throw new ArgumentOutOfRangeException(nameof(Interactor), Interactor, null);
        }         
    }

    public enum InteractorState
    {
        GazeRay,
        HandRay
    }

}
