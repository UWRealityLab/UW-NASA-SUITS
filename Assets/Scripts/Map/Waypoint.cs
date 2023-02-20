using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// A class storing essential information for a single waypoint
/// </summary>
public class Waypoint : MonoBehaviour
{
    // position in world space in Unity
    public Vector3 position { get; set; }

    // gps location acquired from Vision Kit
    public Vector3 gpsLocation { get; set; }

    // label of this waypoint
    public string label { get; set; }

    // integer version of the label for this waypoint
    public int type { get; set; }

    // the time at which this waypoint was initilized
    public Time initTime { get; set; }

    // the game object that this component is attached to
    public GameObject waypointGameobject { get; set; }
}
