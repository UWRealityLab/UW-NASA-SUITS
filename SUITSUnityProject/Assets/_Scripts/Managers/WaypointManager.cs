using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// A MonoBeharviour class managing all the waypoints at runtime
/// </summary>
public class WaypointManager : Singleton<WaypointManager>
{
    public static event Action<Waypoint> OnWaypointAdd;
    public static event Action<Vector3> OnUserTargetUpdate;

    [SerializeField] private GameObject _waypointPrefab;

    // Stores all the active waypoints(Readonly)
    private List<Waypoint> _activeWaypoints = new();
    public IReadOnlyList<Waypoint> ActiveWaypoints
    {
        get { return _activeWaypoints; } 
    }

    // Stores all the inactive waypoints(Readonly)
    private List<Waypoint> _inactiveWaypoints = new();
    public IReadOnlyList<Waypoint> InactiveWaypoints
    {
        get { return _inactiveWaypoints; }
    }

    public Waypoint Home { get; private set; } = new(Vector3.zero);
    public Waypoint User { get; private set; } = new(Vector3.zero);
    public Waypoint UserTarget { get; private set; }

    /// <summary>
    /// Create a new waypoint using the given waypoint prefab at the given 3D location in Unity
    /// </summary>
    /// <param name="position">Vector3 of where to generate the waypoint</param>
    public void GenerateWaypointAtPosition(Vector3 position)
    {
        GameObject waypointGameObject = Instantiate(_waypointPrefab, position, Quaternion.identity);
        Waypoint waypoint = new(position);
        waypoint.AttachVisual(waypointGameObject);
        _activeWaypoints.Add(waypoint);
        OnWaypointAdd?.Invoke(waypoint);
    }

    public void UpdateHomeLocation(Vector3 home)
    {
        Home = new Waypoint(home, WaypointLabel.Home);
    }

    public void UpdateUserLocation(Vector3 user)
    {
        User = new Waypoint(user, WaypointLabel.User);
    }

    public void UpdateUserTargetLocation(Vector3 userTarget)
    {
        UserTarget = new Waypoint(userTarget, WaypointLabel.Default);
        OnUserTargetUpdate?.Invoke(userTarget);
    }
}

[SerializeField]
public enum WaypointLabel
{
    Home = 0,
    User = 1,
    Rover = 2,
    Default = 3
}
