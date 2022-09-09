using UnityEngine;
using UnityEngine.AI;

/// <summary>
/// Main class for controlling the path calculation and line rendering
/// </summary>
public class PathTracer : MonoBehaviour
{
    private const float PATH_UPDATING_FREQUENCE = 4.0f;  // path will update every 4.0 seconds
    private const float LINE_HEIGHT = 0.5f;  // Y axis offset for the lines rendered by LineRenderer

    [SerializeField]
    [Tooltip("A reference to the Unity built-in NavMeshAgent")]
    private NavMeshAgent agent;

    [SerializeField]
    [Tooltip("Transform of the destination of the path finding")]
    private Transform targetedWayPoint;

    [SerializeField]
    [Tooltip("WayPointDistanceDisplayController class that is used to calculate the distance whenever the path is updated")]
    private WayPointDistanceDisplayController controller;

    private NavMeshPath path;  // used to store the path found by NavMeshAgent
    private LineRenderer lineRenderer;  // used to draw the path

    private void Awake()
    {
        path = new NavMeshPath();
        lineRenderer = GetComponent<LineRenderer>();
    }

    private void OnEnable()
    {
        InvokeRepeating("UpdatePath", 0.0f, PATH_UPDATING_FREQUENCE);
    }

    private void OnDisable()
    {
        CancelInvoke();
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

    /// <summary>
    /// Calculate the path from the agent to the targetedWayPoint
    /// Acquire the actual path information and draw it for player
    /// </summary>
    private void UpdatePath()
    {
        if (agent.CalculatePath(targetedWayPoint.position, path))
        {
            Vector3[] positions = path.corners;
            for (int i = 0; i < positions.Length; i++) positions[i].y += LINE_HEIGHT;
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
