using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BreadcrumbPathManager : MonoBehaviour
{
    public Path breadcrumbPath;

    
    [SerializeField]
    private float pathUpdateFrequency = 1;
    


    private GameObject user; //To track users position and update paths



    private void OnEnable()
    {
        InvokeRepeating("UpdateBreadcrumbPath", 0.0f, pathUpdateFrequency);
    }

    private void OnDisable()
    {
        CancelInvoke();
    }


    private void UpdateBreadcrumb()
    {

    }
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
}