using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// A class storing essential information for a single waypoint
/// </summary>
public class Waypoint
{
    // name of the waypoint
    public string Name { get; private set; }
    // position in world space in Unity
    public Vector3 Position { get; private set; }
    // gps location acquired from Vision Kit
    public Vector3 GpsLocation { get; private set; }
    // label of this waypoint
    public WaypointLabel Label { get; private set; }
    // the visual for this waypoint if there is one
    public GameObject VisualGameObject { get; private set; }

    public Waypoint(Vector3 position)
    {
        Name = "Untitled Waypoint";
        Position = position;
        GpsLocation = GpsConversionHelper(position);
        Label = WaypointLabel.Default;
    }

    public Waypoint(string name, Vector3 position, Vector3 gpsLocation)
    {
        Name = name;
        Position = position;
        GpsLocation = gpsLocation;
        Label = WaypointLabel.Default;
    }

    public Waypoint(Vector3 position, WaypointLabel label)
    {
        Name = "Untitled Waypoint";
        Position = position;
        GpsLocation = GpsConversionHelper(position);
        Label = label;
    }

    public Waypoint(Vector3 position, Vector3 gpsLocation, WaypointLabel label)
    {
        Name = "Untitled Waypoint";
        Position = position;
        GpsLocation = gpsLocation;
        Label = label;
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
