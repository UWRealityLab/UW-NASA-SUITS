using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;

// This class takes all of the postiions of things in world coords,
// and returns a list of tuples of everything to be rendered on a minimap
// given a zoom, size, and numpixels (if you want 3d terrain)
// You will need to pass this list to a renderer to actually show a minimap
public class Minimap : MonoBehaviour 
{
    [SerializeField]
    private Path activePath;
    [SerializeField]
    private WaypointManager waypoints;
    [SerializeField]
    private GameObject user;
    [SerializeField]
    private GameObject rover;

    /*[SerializeField]
    private GameObject pathMarkerPrefab;
    [SerializeField]
    private GameObject waypointMarkerPrefab;
    [SerializeField]
    private GameObject userMarkerPrefab;
    [SerializeField]
    private GameObject roverMarkerPrefab;*/


    [SerializeField]
    private float size; //size of the minimap in meter
    [SerializeField]
    private float zoom;
    [SerializeField]
    private float numPixels;

    [SerializeField]
    private Mesh terrain;

    public List<Tuple<string, Vector3>> minimapList { get; }
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
