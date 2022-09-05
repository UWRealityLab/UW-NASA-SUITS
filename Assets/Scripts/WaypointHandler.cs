using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WaypointHandler : MonoBehaviour
{
    [SerializeField]
    private PathTracer tracer;
    [SerializeField]
    private WayPointDistanceDisplayController controller;
    [SerializeField]
    private GameObject prefab;

    private GameObject marker = null;

    /// <summary>
    /// Instantiate a given prefab at the current location and update the tracer
    /// </summary>
    public void ButtonClicked()
    {
        if (marker == null)
        {
            marker = Instantiate(prefab, transform.position, Quaternion.identity);
        }

        tracer.UpdateTargetPosition(marker.transform);
        controller.UpdateTarget(marker.transform);
    }

    /// <summary>
    /// Remove the instantiated prefab and update the tracer
    /// </summary>
    public void RemoveMarker()
    {
        tracer.UpdateTargetPosition(null);
        controller.UpdateTarget(null);
        controller.DeactivateDisplay();
        Destroy(marker);
        marker = null;
    }
}
