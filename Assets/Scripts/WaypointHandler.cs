using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WaypointHandler : MonoBehaviour
{
    [SerializeField]
    private PathTracer tracer;
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

        tracer.updateTargetPosition(marker.transform);
    }

    /// <summary>
    /// Remove the instantiated prefab and update the tracer
    /// </summary>
    public void RemoveMarker()
    {
        tracer.updateTargetPosition(null);
        Destroy(marker);
        marker = null;
    }
}
