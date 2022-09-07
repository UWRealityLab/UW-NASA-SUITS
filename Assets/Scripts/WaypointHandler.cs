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

    [SerializeField]
    private GameObject waypointGenerator;

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
        StartCoroutine(AcquireRaycastPoint());
    }

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
    /// Remove the instantiated prefab and update the tracer
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
