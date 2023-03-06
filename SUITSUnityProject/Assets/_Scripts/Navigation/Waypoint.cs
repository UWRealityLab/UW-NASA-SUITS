using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// A class storing essential information for a single waypoint
/// </summary>
public class Waypoint : MonoBehaviour
{
    // position in world space in Unity
    public Vector3 Position { get; private set; }
    // gps location acquired from Vision Kit
    public Vector3 GpsLocation { get; private set; }
    // label of this waypoint
    public string Label { get; private set; }
    // integer version of the label for this waypoint
    public int Type { get; private set; }
    // the time at which this waypoint was initilized
    public float InitTime { get; private set; }

    public void Init(Vector3 position)
    {
        Position = position;
        // Convert it to gps
        Label = "Default";
        Type = -1;
        InitTime = Time.time;
    }

    public void Init(Vector3 position, Vector3 gpsLocation, string label, int type, float initTime)
    {
        Position = position;
        GpsLocation = gpsLocation;
        Label = label;
        Type = type;
        InitTime = initTime;
    }
}
