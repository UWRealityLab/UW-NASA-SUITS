using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MinimapVisualizer : MonoBehaviour
{
    [SerializeField] private RawImage _userMarker;
    [SerializeField] private RawImage _homeMarker;
    [SerializeField] private RawImage _roverMarker = null;
    [SerializeField] private GameObject _waypointMarkerPrefab;
    [SerializeField] private float _visualUpdateFrequency;

    private RectTransform _userMarkerRect;
    private RectTransform _homeMarkerRect;
    private RectTransform _roverMarkerRect = null;
    private Dictionary<int, RectTransform> _waypointMap = new();

    private void Start()
    {
        _userMarkerRect = _userMarker.gameObject.GetComponent<RectTransform>();
        _homeMarkerRect = _homeMarker.gameObject.GetComponent<RectTransform>();
        if (_roverMarker != null)
        {

            _roverMarkerRect = _roverMarker.gameObject.GetComponent<RectTransform>();
        }
    }

    private void Update()
    {
        _userMarkerRect.localEulerAngles = new Vector3(0, 0, -MinimapManager.Instance.UserInMap.y);
        _homeMarkerRect.anchoredPosition = new Vector2(MinimapManager.Instance.HomeInMap.x, MinimapManager.Instance.HomeInMap.z);
        if(_roverMarker != null && MinimapManager.Instance.RoverInMap.x < 1e8f )
        {
            _roverMarkerRect.anchoredPosition = new Vector2(MinimapManager.Instance.HomeInMap.x, MinimapManager.Instance.HomeInMap.z);
        } 
        for (int i = 0; i < MinimapManager.Instance.WaypointsInMap.Count; i++)
        {
            var waypoint = MinimapManager.Instance.WaypointsInMap[i];
            if (!_waypointMap.TryGetValue(i, out RectTransform value))
            {
                RectTransform rectTransform = Instantiate(_waypointMarkerPrefab, gameObject.transform).GetComponent<RectTransform>();
                _waypointMap.Add(i, rectTransform);
            }
            _waypointMap[i].anchoredPosition = new Vector2(waypoint.position.x, waypoint.position.z);
        }
    }
}


