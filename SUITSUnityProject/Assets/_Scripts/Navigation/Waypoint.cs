using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// A class storing essential information for a single waypoint
/// </summary>
public class Waypoint
{
    // position in world space in Unity
    public Vector3 Position { get; private set; }
    // gps location acquired from Vision Kit
    public Vector3 GpsLocation { get; private set; }
    // label of this waypoint
    public WaypointLabel Label { get; private set; }
    // integer version of the label for this waypoint
    public float InitTime { get; private set; }
    // the visual for this waypoint if there is one
    public GameObject VisualGameObject { get; private set; }

    public Waypoint(Vector3 position)
    {
        Position = position;
        GpsLocation = GpsConversionHelper(position);
        Label = WaypointLabel.Default;
        InitTime = Time.time;
    }

    public Waypoint(Vector3 position, WaypointLabel label)
    {
        Position = position;
        GpsLocation = GpsConversionHelper(position);
        Label = label;
        InitTime = Time.time;
    }

    public Waypoint(Vector3 position, Vector3 gpsLocation, WaypointLabel label, float initTime)
    {
        Position = position;
        GpsLocation = gpsLocation;
        Label = label;
        InitTime = initTime;
    }

    public void AttachVisual(GameObject gameObject)
    {
        VisualGameObject = gameObject;
    }

    private static Vector3 GpsConversionHelper(Vector3 position)
    {
        // TODO
        return Vector3.zero;
    }
}
