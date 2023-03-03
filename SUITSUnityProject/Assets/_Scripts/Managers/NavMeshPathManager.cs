using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NavMeshPathManager : Singleton<NavMeshPathManager>
{
    [SerializeField]
    [Tooltip("A reference to the Unity built-in NavMeshAgent")]
    private UnityEngine.AI.NavMeshAgent agent = null;

    [SerializeField]
    [Tooltip("Add a predefined target instead of creating one at runtime")]
    private Transform target = null;

    [SerializeField]
    [Tooltip("Frequency for the agent to update path")]
    public float PathUpdateFrequency = 4.0f;


    private UnityEngine.AI.NavMeshPath path = new UnityEngine.AI.NavMeshPath(); // used to store the path found by NavMeshAgent

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
            if (!agent.CalculatePath(target.position, path))
            {
                // path not found
                path.ClearCorners();
                Debug.Log("Path unreachable");
            }
        }
        else
        {
            path.ClearCorners();
            Debug.Log("Target not set");
        }
    }
}
