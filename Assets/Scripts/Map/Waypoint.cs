using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// A class storing essential information for a single waypoint
/// </summary>
public class Waypoint
{
    // position in world space in Unity
    private Vector3 position;

    // gps location acquired from Vision Kit
    private Vector3 gpsLocation;

    // label of this waypoint
    private string label;

    // integer version of the label for this waypoint
    private int type;

    // the time at which this waypoint was initilized
    private Time initTime;
}
