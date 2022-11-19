using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PathVisualizer : MonoBehaviour
{
    [SerializeField]
    private PathFinder pathFinder;

    [SerializeField]
    private LineRenderer lineRenderer;

    [SerializeField]
    public float PathVisualUpdateFrequency = 4.0f;

    [SerializeField]
    public float PathVisualYOffset = 0.5f;

    private void Awake()
    {
        if (lineRenderer == null)
        {
            lineRenderer = GetComponent<LineRenderer>();
        }

        if (pathFinder == null)
        {
            pathFinder = GetComponent<PathFinder>();
        }
    }

    private void OnEnable()
    {
        InvokeRepeating("UpdatePathVisual", 0.0f, PathVisualUpdateFrequency);
    }

    private void OnDisable()
    {
        CancelInvoke();
    }

    private void UpdatePathVisual ()
    {
        Vector3[] positions = pathFinder.GetPath();
        for (int i = 0; i < positions.Length; i++) positions[i].y += PathVisualYOffset;
        lineRenderer.positionCount = positions.Length;
        lineRenderer.SetPositions(positions);
    }
}
