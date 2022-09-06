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

    private GameObject marker;

    public void Awake()
    {
        marker = null;
    }

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
        if (tracer.gameObject.activeSelf)
        {
            controller.ActivateDisplay();
        }
    }

    /// <summary>
    /// Remove the instantiated prefab and update the tracer
    /// </summary>
    public void RemoveMarker()
    {
        if (tracer.gameObject.activeSelf)
        {
            tracer.UpdateTargetPosition(null);
        }
        if (controller.gameObject.activeSelf)
        {
            controller.UpdateTarget(null);
            controller.DeactivateDisplay();
        }
        Destroy(marker);
        marker = null;
    }
}
