using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MinimapManager : Singleton<MinimapManager>
{
    [SerializeField] private Transform _center;
    [SerializeField] private float _zoom;
    [SerializeField] private float _minimapUpdateFrequency;

    public Vector3 UserInMap { get; private set; }
    public Vector3 HomeInMap { get; private set; }
    public List<WaypointMarker> WaypointsInMap { get; private set; } = new();

    private readonly float SCALECORRECTION = 1000;

    private void Start()
    {
        if (_center == null)
            _center = GameObject.FindGameObjectWithTag("MainCamera").GetComponent<Transform>();

        InvokeRepeating(nameof(UpdateWaypointsList), 0, _minimapUpdateFrequency);
    }

    private void Update()
    {
        UserInMap = _center.rotation.eulerAngles;
        HomeInMap = WorldToMinimapPosition(WaypointManager.Instance.Home.Position);
    }

    private void UpdateWaypointsList()
    {
        WaypointsInMap.Clear();
        foreach (Waypoint waypoint in WaypointManager.Instance.ActiveWaypoints)
        {
            Debug.Log("MinimapManager.cs(UpdateWaypointsList): " + waypoint.Name);
            WaypointMarker waypointMarker = new();
            waypointMarker.position = WorldToMinimapPosition(waypoint.Position);
            waypointMarker.visualRect = null;
            WaypointsInMap.Add(waypointMarker);
        }
    }

    private Vector3 WorldToMinimapPosition(Vector3 worldCoords)
    {
        return new Vector3((worldCoords.x - _center.position.x) / _zoom, 
                           (worldCoords.y - _center.position.y) / _zoom, 
                           (worldCoords.z - _center.position.z) / _zoom)
            * SCALECORRECTION;
    }

    public struct WaypointMarker
    {
        public Vector3 position;
        public RectTransform visualRect;
    }
}
