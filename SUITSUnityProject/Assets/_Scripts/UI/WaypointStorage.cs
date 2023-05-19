using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WaypointStorage : MonoBehaviour
{
    public Waypoint waypoint;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void SendWaypointToNav()
    {
        NavMeshPathManager.Instance.UpdateTargetPosition(waypoint.Position);
    }

    public void SendWaypointToROV()
    {
        RoverManager.Instance.SendRover(new Vector2(waypoint.GpsLocation.x,waypoint.GpsLocation.y));
    }
}
