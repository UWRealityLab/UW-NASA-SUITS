using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// A MonoBeharviour class managing all the waypoints at runtime
/// </summary>
public class WaypointManager : MonoBehaviour
{
    // prefab for generating new waypoints in the scene
    [SerializeField]
    private GameObject waypointPrefab;

    // defines the maximum number of waypoints allowed
    [SerializeField]
    private int maximumWaypointsAllowed;


    // stores all the active waypoints in the scene
    public List<Waypoint> activeWaypoints;

    // stores all the inactive waypoints in the scene
    private List<Waypoint> inactiveWaypoints;
    
    // current number of waypoints
    private int waypointCount;

    public void GenerateWaypointAtPosition(Vector3 position)
    {
        if (waypointCount < maximumWaypointsAllowed)
        {
            GameObject waypointGameobject = Instantiate(waypointPrefab, position, Quaternion.identity);
            Waypoint waypoint = waypointGameobject.AddComponent<Waypoint>();
            waypoint.position = position;

            // TODO: add other data to the waypoint
            waypoint.waypointGameobject = waypointGameobject;

            activeWaypoints.Add(waypoint);
        }
        else  // handle the case when there are too many waypoints in the scene
        {

        }
    }

    public Waypoint getActiveWaypointFromLabel(string waypointLabel)
    {
        foreach (Waypoint waypoint in activeWaypoints)
        {
            if (waypoint.label.Equals(waypointLabel))
            {
                return waypoint;
            }
        }
        return null;
    }
}

