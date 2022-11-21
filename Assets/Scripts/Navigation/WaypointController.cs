using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WaypointController : MonoBehaviour
{
    [SerializeField]
    [Tooltip("PathFinder class that will be updated with the waypoint")]
    private PathFinder pathFinder;
}
