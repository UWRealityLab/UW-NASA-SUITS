using UnityEngine;
using UnityEngine.AI;  // NavMeshAgent

public class PathFinder : MonoBehaviour
{
    [SerializeField]
    [Tooltip("A reference to the Unity built-in NavMeshAgent")]
    private NavMeshAgent agent = null;

    [SerializeField]
    [Tooltip("Transform of the target of the path finding")]
    private Transform target = null;

    [SerializeField]
    [Tooltip("Frequency for the agent to update path")]
    private float PathUpdateFrequency = 4.0f;


    private NavMeshPath path; // used to store the path found by NavMeshAgent


    private void Awake()
    {
        path = new NavMeshPath();
    }

    private void OnEnable()
    {
        InvokeRepeating("UpdatePath", 0.0f, PathUpdateFrequency);
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
        target = newTargetTransform;
    }

    /// <summary>
    /// Get the path found by NavMeshAgent to the given target
    /// </summary>
    /// <returns>Vector3[] that stores the position of points that form the path</returns>
    public Vector3[] GetPath()
    {
        return path.corners;
    }

    /// <summary>a
    /// Calculate the path from the agent to the target
    /// </summary>
    private void UpdatePath()
    {
        if (target != null)
        {
            if(!agent.CalculatePath(target.position, path))
            {
                // path not found
                RuntimeDebugger.Logger.Log("Path unreachable");
            }
        }
        else
        {
            RuntimeDebugger.Logger.Log("Target not set");
        }
    }
}
