using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// A class representing a single path that consists of two ends and points in between
/// </summary>
public class Path
{
    // stores the path as a list of points
    private List<Vector3> corners;

    // the Waypoint at the beginning of this path
    private Waypoint start;

    // the Waypoint at the end of this path
    private Waypoint end;
}
