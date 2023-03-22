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
    [Tooltip("Frequency for the agent to update path")]
    private float _pathUpdateFrequency = 4.0f;

    [SerializeField] private PathVisualizer _pathVisualizer;

    private Vector3? _target = null;

    private void Start()
    {
        StateManager.OnAfterStateChanged += StateChanged;
        WaypointManager.OnUserTargetUpdate += UpdateTargetPosition;
    }
    private void OnDestroy()
    {
        StateManager.OnAfterStateChanged -= StateChanged;
        WaypointManager.OnUserTargetUpdate -= UpdateTargetPosition;
    }

    private void StateChanged(State newState)
    {
        switch (newState)
        {
            case State.Indoor:
                _pathVisualizer.enabled = false;
                CancelInvoke();
                break;
            default:
                _pathVisualizer.enabled = true;
                InvokeRepeating(nameof(UpdatePath), 0.0f, _pathUpdateFrequency);
                break;
        }
    }

    public void UpdateTargetPosition(Vector3 target)
    {
        _target = target;
        UpdatePath();
    }

    /// <summary>
    /// Calculate the path from the agent to the target
    /// </summary>
    private void UpdatePath()
    {
        if (_target != null)
        {
            NavMeshPath navMeshPath = new();
            if (_agent.CalculatePath(_target.Value, navMeshPath))
            {
                Path path = new Path(navMeshPath.corners);
                _pathVisualizer.UpdatePath(path);
            }
            else
                Debug.Log("Path unreachable");
        }
        else
        {
            Debug.Log("Target not set");
        }
        
    }
}
