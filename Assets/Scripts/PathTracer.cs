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

    public int iterations;

    private NavMeshPath path;  // used to store the path found by NavMeshAgent
    private LineRenderer lineRenderer;  // used to draw the path

    private void Awake()
    {
        path = new NavMeshPath();
        lineRenderer = GetComponent<LineRenderer>();
        iterations = 3;
    }

    /// <summary>
    /// Update the target position
    /// </summary>
    /// <param name="newTargetTransform"> a Transform indicating the new target position</param>
    public void updateTargetPosition(Transform newTargetTransform)
    {
        targetedWayPoint = newTargetTransform;
        if (newTargetTransform == null)
        {
            lineRenderer.positionCount = 0;
        }
    }

    private void Start()
    {
        InvokeRepeating("UpdatePath", 0.0f, 2.0f);
    }

    void Update()
    {
        
    }

    void UpdatePath()
    {
        if (agent.CalculatePath(targetedWayPoint.position, path))
        {
            List<Vector3> positions = new List<Vector3>();
            Vector3 firstPosition = path.corners[1];
            for (int i = 0; i < iterations; i++)
            {
                NavMeshPath subPath = new NavMeshPath();
                agent.CalculatePath(firstPosition, subPath);
                foreach (var position in subPath.corners)
                {
                    Vector3 nextPosition = position;
                    nextPosition.y += 0.5f;
                    positions.Add(nextPosition);
                }
                firstPosition = subPath.corners[1];
            }
            for (int i = 0; i < path.corners.Length; i++)
            {
                Vector3 nextPosition = path.corners[i];
                nextPosition.y += 0.5f;
                positions.Add(nextPosition);
            }
            lineRenderer.positionCount = positions.Count;
            lineRenderer.SetPositions(positions.ToArray());
        }

        else  // path not found
        {
            Debug.Log("Path unreachable");
        }
    }
}
