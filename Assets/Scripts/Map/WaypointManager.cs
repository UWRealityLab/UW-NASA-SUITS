using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// A MonoBeharviour class managing all the waypoints at runtime
/// </summary>
public class WaypointManager : MonoBehaviour
{
    // stores all the active waypoints in the scene
    private List<Waypoint> activeWaypoints;

    // stores all the inactive waypoints in the scene
    private List<Waypoint> inactiveWaypoints;

    // defines the maximum number of waypoints allowed
    private int maximum;
}
