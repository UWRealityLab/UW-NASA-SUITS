using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RayInteractionVisualizer : MonoBehaviour
{
    [SerializeField] private GameObject visual;

    private void Start() => RayInteractionSystem.Instance.OnRaycastHit.AddListener((raycastHit) => OnRaycastHit(raycastHit));
    private void OnDestroy() => RayInteractionSystem.Instance.OnRaycastHit.RemoveListener((raycastHit) => OnRaycastHit(raycastHit));

    public void VisualizeGazeRay() => 
        RayInteractionSystem.Instance.Interactor = RayInteractionSystem.InteractorState.GazeRay;
    public void VisualizeHandRay() => 
        RayInteractionSystem.Instance.Interactor = RayInteractionSystem.InteractorState.HandRay;

    private void OnRaycastHit(RaycastHit hit)
    {
        visual.transform.position = hit.point;
    }

    private void Update()
    {
        RayInteractionSystem.Instance.RaycastTriggered();
    }
}
