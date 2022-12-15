using Microsoft.MixedReality.Toolkit.Input;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ListenerGazeRayInteractor : MonoBehaviour
{
    [SerializeField]
    private FuzzyGazeInteractor rayInteractor;

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
        rayInteractor.TryGetCurrent3DRaycastHit(out RaycastHit raycastHit);
        return raycastHit.point;
    }
}
