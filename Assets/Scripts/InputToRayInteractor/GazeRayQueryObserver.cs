using Microsoft.MixedReality.Toolkit.Input;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GazeRayQueryObserver : MonoBehaviour
{
    [SerializeField]
    private FuzzyGazeInteractor rayInteractor;

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
        rayInteractor.TryGetCurrent3DRaycastHit(out RaycastHit raycastHit);
        return raycastHit.point;
    }
}
