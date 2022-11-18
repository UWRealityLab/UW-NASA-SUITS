using System.Collections;
using UnityEngine;

/// <summary>
/// Higher level calss that controls the interaction between UI buttons and functionality related to waypoints
/// </summary>
public class WaypointHandler : MonoBehaviour
{
    [SerializeField]
    [Tooltip("PathTracer class that is used to update the targetedWayPoint")]
    private PathTracer tracer;

    [SerializeField]
    [Tooltip("WayPointDistanceDisplayController that is used to update the new target position")]
    private WayPointDistanceDisplayController controller;

    [SerializeField]
    [Tooltip("A GameObject with WayPointGenerateController attached to it")]
    private GameObject waypointGenerator;

    [SerializeField]
    [Tooltip("A Prefab for the waypoint")]
    private GameObject prefab;

    private GameObject marker;  // stores the waypoint that is lastly generated

    public void Awake()
    {
        marker = null;
    }

    /// <summary>
    /// Instantiate a given prefab at the current location and update the tracer
    /// </summary>
    public void ButtonClicked()
    {
        StartCoroutine(AcquireRaycastPoint());
    }

    /// <summary>
    /// A coroutine that will wait for player to use hand ray and pinch their fingers to do a ray cast
    /// Whenever a valid point is detected, instantiate a waypoint at that location and
    /// update tracer, controller, and waypointGenerator with this information
    /// </summary>
    private IEnumerator AcquireRaycastPoint()
    {
        Debug.Log("marker: " + (marker == null));
        if (marker == null)
        {
            waypointGenerator.SetActive(true);
            WayPointGenerateController generateController = waypointGenerator.GetComponent<WayPointGenerateController>();
            bool debugValidPoint = generateController.validPoint == null;
            Debug.Log("validpoint: " + debugValidPoint);
            yield return new WaitUntil(() => generateController.validPoint != null);
            marker = Instantiate(prefab, (Vector3)generateController.validPoint + 1.0f * Vector3.up, Quaternion.identity);
            waypointGenerator.SetActive(false);
        }

        tracer.UpdateTargetPosition(marker.transform);
        controller.UpdateTarget(marker.transform);
        if (tracer.gameObject.activeSelf)
        {
            controller.ActivateDisplay();
        }

        yield return null;
    }

    /// <summary>
    /// Remove the instantiated prefab and update the tracer, controller, and waypointGenerator
    /// </summary>
    public void RemoveMarker()
    {
        StopAllCoroutines();
        waypointGenerator.SetActive(false);
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
