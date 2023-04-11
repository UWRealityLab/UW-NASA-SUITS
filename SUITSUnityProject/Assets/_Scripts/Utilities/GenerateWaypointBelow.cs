using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GenerateWaypointBelow : MonoBehaviour
{
    private Transform _userTransform;

    private const float Y_OFFSET = 0.05f;

    private void Awake() => _userTransform = GameObject.FindGameObjectWithTag("MainCamera").transform;

    public void GenerateWaypoint()
    {
        Vector3? location = null;
        if (Physics.Raycast(_userTransform.position, -Vector3.up, out RaycastHit hit))
            location = hit.point + Y_OFFSET * Vector3.up;
        if (location != null)
        {
            WaypointManager.Instance.GenerateWaypointAtPosition(location.Value);
        }
    }
}
