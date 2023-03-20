using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

/// <summary>
/// A manager class that handles NavMeshPath updating and storing
/// </summary>
public class NavMeshPathManager : Singleton<NavMeshPathManager>
{
    [SerializeField]
    [Tooltip("A reference to the Unity built-in NavMeshAgent")]
    private NavMeshAgent _agent = null;

    [SerializeField]
    [Tooltip("Add a predefined target instead of creating one at runtime")]
    private Transform _target = null;

    [SerializeField]
    [Tooltip("Frequency for the agent to update path")]
    private float _pathUpdateFrequency = 4.0f;


    private NavMeshPath _path = new NavMeshPath(); // used to store the path found by NavMeshAgent

    private void OnEnable()
    {
        InvokeRepeating("UpdatePath", 0.0f, _pathUpdateFrequency);
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
        _target = newTargetTransform;
    }

    /// <summary>
    /// Get the path found by NavMeshAgent to the given target
    /// </summary>
    /// <returns>Vector3[] that stores the position of points that form the path</returns>
    public Vector3[] GetPath()
    {
        return _path.corners;
    }

    /// <summary>
    /// Calculate the path from the agent to the target
    /// </summary>
    private void UpdatePath()
    {
        if (_target != null)
        {
            if (!_agent.CalculatePath(_target.position, _path))
            {
                // path not found
                _path.ClearCorners();
                Debug.Log("Path unreachable");
            }
        }
        else
        {
            _path.ClearCorners();
            Debug.Log("Target not set");
        }
    }
}
