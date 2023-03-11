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

    [SerializeField]
    private GameObject user = null;


    // stores all the active waypoints in the scene
    public List<Waypoint> activeWaypoints;

    // stores all the inactive waypoints in the scene
    private List<Waypoint> inactiveWaypoints;


    
    // current number of waypoints
    private int waypointCount = 0;
    void Start()
    {
        activeWaypoints = new List<Waypoint>();
        inactiveWaypoints = new List<Waypoint>();
        InvokeRepeating("CheckActive", 0, .5f);
    }

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            SpawnWaypointAtUser();
        }


    }
    public void GenerateWaypointAtPosition(Vector3 position)
    {
        if (waypointCount < maximumWaypointsAllowed)
        {
            GameObject waypointGameobject = Instantiate(waypointPrefab, position, Quaternion.identity);
            waypointGameobject.transform.SetParent(gameObject.transform, false);
            waypointGameobject.SetActive(true);
            Waypoint waypoint = waypointGameobject.AddComponent<Waypoint>();
            waypoint.position = position;
            waypoint.label = "waypoint " + waypointCount.ToString();

            // TODO: add other data to the waypoint
            waypoint.waypointGameobject = waypointGameobject;

            activeWaypoints.Add(waypoint);
            waypointCount++;
        }
        else  // handle the case when there are too many waypoints in the scene
        {

        }
    }

    private void CheckActive()
    {
        for(var i = 0; i<activeWaypoints.Count; i++)
        {
            Waypoint waypoint = activeWaypoints[i];
            if (!waypoint.waypointGameobject.activeSelf)
            {
                inactiveWaypoints.Add(waypoint);
                activeWaypoints.RemoveAt(i);
            }
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

    public void SpawnWaypointAtUser()
    {
        //Debug.Log( +);
        GenerateWaypointAtPosition(user.transform.position + new Vector3(.5f, 0 ,.5f));
    }
    

}

