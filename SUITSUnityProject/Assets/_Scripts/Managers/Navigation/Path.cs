using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// A class representing a single path that consists of two ends and points in between
/// </summary>
public class Path
{
    // stores the path as a list of points
    public List<Vector3> Corners = new();

    // the Waypoint at the beginning of this path
    public Waypoint Start;

    // the Waypoint at the end of this path
    public Waypoint End;

    public Path(Vector3[] positions)
    {
        Corners = new List<Vector3>(positions);
    }
}
