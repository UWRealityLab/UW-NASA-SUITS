using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// A MonoBeharviour class managing all the waypoints at runtime
/// </summary>
public class WaypointManager : Singleton<WaypointManager>
{
    [SerializeField] private GameObject _waypointPrefab;

    // Stores all the active waypoints(Readonly)
    private List<Waypoint> _activeWaypoints;
    public IReadOnlyList<Waypoint> ActiveWaypoints
    {
        get { return _activeWaypoints; } 
    }

    // Stores all the inactive waypoints(Readonly)
    private List<Waypoint> _inactiveWaypoints;
    public IReadOnlyList<Waypoint> InactiveWaypoints
    {
        get { return _inactiveWaypoints; }
    }

    /// <summary>
    /// Create a new waypoint using the given waypoint prefab at the given 3D location in Unity
    /// </summary>
    /// <param name="position">Vector3 of where to generate the waypoint</param>
    public void GenerateWaypointAtPosition(Vector3 position)
    {
        Waypoint waypoint = Instantiate(_waypointPrefab, position, Quaternion.identity).AddComponent<Waypoint>();
        waypoint.Init(position);
        _activeWaypoints.Add(waypoint);
    }
}
