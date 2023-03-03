using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// A MonoBeharviour class managing all the waypoints at runtime
/// </summary>
public class WaypointManager : Singleton<WaypointManager>
{
    [SerializeField] private GameObject _waypointPrefab;

    private List<Waypoint> _activeWaypoints;
    public IReadOnlyList<Waypoint> ActiveWaypoints
    {
        get { return _activeWaypoints; } 
    }

    private List<Waypoint> _inactiveWaypoints;
    public IReadOnlyList<Waypoint> InactiveWaypoints
    {
        get { return _inactiveWaypoints; }
    }

    public void GenerateWaypointAtPosition(Vector3 position)
    {
        Waypoint waypoint = Instantiate(_waypointPrefab, position, Quaternion.identity).AddComponent<Waypoint>();
        waypoint.Init(position);
        _activeWaypoints.Add(waypoint);
    }

    public Waypoint GetActiveWaypointFromLabel(string waypointLabel)
    {
        foreach (Waypoint waypoint in _activeWaypoints)
        {
            if (waypoint.Label.Equals(waypointLabel))
            {
                return waypoint;
            }
        }
        return null;
    }
}
