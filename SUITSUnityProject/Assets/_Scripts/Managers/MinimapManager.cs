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
    public List<WaypointMarker> WaypointsInMap { get;  set; } = new();

    private readonly float SCALECORRECTION = 1000;

    private void Start()
    {
        if (_center == null)
            _center = GameObject.FindGameObjectWithTag("MainCamera").GetComponent<Transform>();

        InvokeRepeating(nameof(UpdateWaypointsList), 0, _minimapUpdateFrequency);
        WaypointManager.OnWaypointAdd += AddNewWaypointToList;
    }

    private void OnDestroy()
    {
        WaypointManager.OnWaypointAdd -= AddNewWaypointToList;
    }

    private void Update()
    {
        UserInMap = _center.rotation.eulerAngles;
        HomeInMap = WorldToMinimapPosition(WaypointManager.Instance.Home.Position);
    }

    private void UpdateWaypointsList()
    {
        for (int i = 0; i < WaypointsInMap.Count; i++)
        {
            WaypointMarker waypointMarker = WaypointsInMap[i];
            waypointMarker.position = WorldToMinimapPosition(waypointMarker.RealWorldWaypoint.Position);
            WaypointsInMap[i] = waypointMarker;
        }
    }

    private void AddNewWaypointToList(Waypoint waypoint)
    {
        Debug.Log("MinimapManager.cs(UpdateWaypointsList): " + waypoint.Name);
        WaypointMarker waypointMarker = new();
        waypointMarker.position = WorldToMinimapPosition(waypoint.Position);
        waypointMarker.visualRect = null;
        waypointMarker.RealWorldWaypoint = waypoint;
        WaypointsInMap.Add(waypointMarker);
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
        public Waypoint RealWorldWaypoint;
        public Vector3 position;
        public RectTransform visualRect;
    }
}