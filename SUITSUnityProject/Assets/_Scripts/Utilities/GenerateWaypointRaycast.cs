using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GenerateWaypointRaycast : MonoBehaviour
{
    private const float Y_OFFSET = 0.05f;

    private void OnEnable() => RayInteractionSystem.Instance.OnRaycastHit.AddListener((raycastHit) => GenerateWaypoint(raycastHit));
    private void OnDisable() => RayInteractionSystem.Instance.OnRaycastHit.RemoveAllListeners();
    public void GenerateWaypoint(RaycastHit hit)
    {
        WaypointManager.Instance.GenerateWaypointAtPosition(hit.point + Y_OFFSET * Vector3.up);
        gameObject.GetComponent<GenerateWaypointRaycast>().enabled = false;
    }
}
