using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class PathTracer : MonoBehaviour
{
    [SerializeField]
    private NavMeshAgent agent;
    [SerializeField]
    private Transform targetedWayPoint;  // the destination of the path finding
    [SerializeField]
    private WayPointDistanceDisplayController controller;

    private NavMeshPath path;  // used to store the path found by NavMeshAgent
    private LineRenderer lineRenderer;  // used to draw the path

    private void Awake()
    {
        path = new NavMeshPath();
        lineRenderer = GetComponent<LineRenderer>();
    }

    /// <summary>
    /// Update the target position
    /// </summary>
    /// <param name="newTargetTransform"> a Transform indicating the new target position</param>
    public void UpdateTargetPosition(Transform newTargetTransform)
    {
        targetedWayPoint = newTargetTransform;
        if (newTargetTransform == null)
        {
            lineRenderer.positionCount = 0;
        }
    }

    private void Start()
    {
        InvokeRepeating("UpdatePath", 0.0f, 4.0f);
    }

    void Update()
    {
        
    }

    void UpdatePath()
    {
        if (agent.CalculatePath(targetedWayPoint.position, path))
        {
            Vector3[] positions = path.corners;
            for (int i = 0; i < positions.Length; i++) positions[i].y += 0.5f;
            lineRenderer.positionCount = positions.Length;
            lineRenderer.SetPositions(positions);

            controller.CalculateDistance(positions);
        }

        else  // path not found
        {
            Debug.Log("Path unreachable");
        }
    }
}
