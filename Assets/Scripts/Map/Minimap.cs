using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;

// This class takes all of the postiions of things in world coords,
// and returns a list of tuples of everything to be rendered on a minimap
// given a zoom, size, and numpixels (if you want 3d terrain)
// You will need to pass this list to a renderer to actually show a minimap
public class Minimap : MonoBehaviour 
{
    [SerializeField]
    private PathFinderBreadcrumb pathManager = null;
    [SerializeField]
    private WaypointManager waypoints = null;
    [SerializeField]
    private GameObject user = null;
    [SerializeField]
    private GameObject rover = null;
    [SerializeField]
    private Vector3 home = new Vector3(0,0,0);// home base position


    private Path activePath = null;
    /*[SerializeField]
    private GameObject pathMarkerPrefab;
    [SerializeField]
    private GameObject waypointMarkerPrefab;
    [SerializeField]
    private GameObject userMarkerPrefab;
    [SerializeField]
    private GameObject roverMarkerPrefab;*/



    [SerializeField]
    private float zoom;
    [SerializeField]
    private float updateFrequency;

    [SerializeField]
    private Mesh terrain;

    public Dictionary<string, Vector3> minimapDict; //List of objects to load
    public List<Vector3> minimapPath;
    void Start()
    {
        minimapDict = new Dictionary<string, Vector3>();
        if (user != null)
        {
            minimapDict.Add("user", new Vector3(0,0,0));
        }
        if (rover != null)
        {
            minimapDict.Add("rover", new Vector3(0, 0, 0));
        }
        if (home != null)
        {
            minimapDict.Add("home", new Vector3(0, 0, 0));
        }
        if (waypoints != null)
        {   
            foreach (Waypoint waypoint in waypoints.activeWaypoints)
            {
                minimapDict.Add("waypoint " + waypoint.label, new Vector3(0, 0, 0));
            }
            
        }
        if (pathManager != null)
        {
            activePath = pathManager.breadcrumbs;
        }
        if (activePath != null)
        {
            minimapPath = new List<Vector3>();
        }
        InvokeRepeating("UpdateMinimapList", 0,updateFrequency);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void UpdateMinimapList()
    {
        foreach (var key in minimapDict.Keys){
            if (key.Equals("user")){
                minimapDict[key] =WorldToMinimapPosition(user.transform.position);
            }else if (key.Equals("rover"))
            {
                minimapDict[key] = WorldToMinimapPosition(rover.transform.position);
            }
            else if (key.StartsWith("waypoint"))
            {
                // waypoints should be labeled in the minimapDict as "waypoint label"
                Vector3 wpPosition = waypoints.getActiveWaypointFromLabel(key.Substring(9)).position;
                minimapDict[key] = WorldToMinimapPosition(wpPosition);
            }
            else if (key.Equals("home"))
            {
                minimapDict[key] = WorldToMinimapPosition(home);
            }
        }
        minimapPath.Clear();
        foreach(Vector3 corner in activePath.corners)
        {
            minimapPath.Add(WorldToMinimapPosition(corner));
        }
    }

    Vector3 WorldToMinimapPosition(Vector3 WorldCoords)
    {
        Vector3 center = user.transform.position;
        return new Vector3(WorldCoords.x / zoom - center.x, WorldCoords.y / zoom - center.y, WorldCoords.z / zoom - center.z);
    }
}
