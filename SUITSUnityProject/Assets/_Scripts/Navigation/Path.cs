using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/// <summary>
/// A class representing a single path that consists of two ends and points in between
/// </summary>
public class Path : MonoBehaviour
{
    // stores the path as a list of points
    private List<Vector3> _corners;
    public IReadOnlyList<Vector3> Corners 
    { 
        get { return _corners; }
    }

    // the Waypoint at the beginning of this path
    public Waypoint Start { get; private set; }

    // the Waypoint at the end of this path
    public Waypoint End { get; private set; }
}
