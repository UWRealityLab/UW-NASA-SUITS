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
    public Vector3 RoverInMap { get; private set; }
    public List<WaypointMarker> WaypointsInMap { get;  set; } = new();

    private readonly float SCALECORRECTION = 1000;

    private void Start()
    {
        if (_center == null)
            _center = GameObject.FindGameObjectWithTag("MainCamera").GetComponent<Transform>();

        InvokeRepeating(nameof(UpdateWaypointsList), 0, _minimapUpdateFrequency);
        InvokeRepeating(nameof(UpdateRoverPosition), 0, _minimapUpdateFrequency);
        WaypointManager.OnWaypointAdd += AddNewWaypointToList;
    }

    private void OnDestroy()
    {
        WaypointManager.OnWaypointAdd -= AddNewWaypointToList;
    }

    private void Update()
    {
        UserInMap = _center.rotation.eulerAngles - GPSEncoder.GetRotationCorrection().eulerAngles;
        HomeInMap = Quaternion.Inverse(GPSEncoder.GetRotationCorrection()) * WorldToMinimapPosition( WaypointManager.Instance.Home.Position);
    }

    private void UpdateWaypointsList()
    {
        for (int i = 0; i < WaypointsInMap.Count; i++)
        {
            WaypointMarker waypointMarker = WaypointsInMap[i];
            waypointMarker.position = Quaternion.Inverse(GPSEncoder.GetRotationCorrection())*WorldToMinimapPosition(waypointMarker.RealWorldWaypoint.Position);
            WaypointsInMap[i] = waypointMarker;
        }
    }
    private void UpdateRoverPosition()
    {
        if (RoverManager.Instance.roverLat != 0 && 
            RoverManager.Instance.roverLong != 0 &&
            GPSHandler.Instance.isCalibrated)
        {
            RoverInMap = WorldToMinimapPosition(
                GPSHandler.Instance.GPStoWorld(
                    new Vector2(RoverManager.Instance.roverLat, RoverManager.Instance.roverLong)));
        }
        else
        {
            RoverInMap = new Vector3(1e9f, 1e9f, 1e9f);
        }
    }
    private void AddNewWaypointToList(Waypoint waypoint)
    {
        Debug.Log("MinimapManager.cs(UpdateWaypointsList): " + waypoint.Name);
        WaypointMarker waypointMarker = new();
        waypointMarker.position = WorldToMinimapPosition(waypoint.Position);
        waypointMarker.RealWorldWaypoint = waypoint;
        WaypointsInMap.Add(waypointMarker);
    }

    public Vector3 WorldToMinimapPosition(Vector3 worldCoords)
    {
        return new Vector3((worldCoords.x - _center.position.x) / _zoom,
                           (worldCoords.y - _center.position.y) / _zoom,
                           (worldCoords.z - _center.position.z) / _zoom)
            * SCALECORRECTION;
        /*return new Vector3((worldCoords.x - _center.position.x) / _zoom,
                           (0) / _zoom,
                           (worldCoords.z - _center.position.z) / _zoom)
            * SCALECORRECTION;*/
    }

    public struct WaypointMarker
    {
        public Waypoint RealWorldWaypoint;
        public Vector3 position;
    }
}
