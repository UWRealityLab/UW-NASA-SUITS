using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MinimapVisualizer : MonoBehaviour
{
    [SerializeField] private RawImage _userMarker;
    [SerializeField] private RawImage _homeMarker;
    [SerializeField] private GameObject _waypointMarkerPrefab;
    [SerializeField] private float _visualUpdateFrequency;

    private RectTransform _userMarkerRect;
    private RectTransform _homeMarkerRect;

    private void Start()
    {
        _userMarkerRect = _userMarker.gameObject.GetComponent<RectTransform>();
        _homeMarkerRect = _homeMarker.gameObject.GetComponent<RectTransform>();

       /* InvokeRepeating(nameof(UpdateMinimapImages), 0, _visualUpdateFrequency);*/
    }

    private void Update()
    {
        _userMarkerRect.localEulerAngles = new Vector3(0, 0, -MinimapManager.Instance.UserInMap.y);
        // roverMarker.GetComponent<RectTransform>().anchoredPosition = new Vector2(minimap.minimapDict["rover"].x, minimap.minimapDict["rover"].z);
        _homeMarkerRect.anchoredPosition = new Vector2(MinimapManager.Instance.HomeInMap.x, MinimapManager.Instance.HomeInMap.z);
    }

   /* private void UpdateMinimapImages()
    {
        for (int i = 0; i < MinimapManager.Instance.WaypointsInMap.Count; i++)
        {
            ref var waypoint = MinimapManager.Instance.WaypointsInMap[i];
            if (waypoint.visualRect == null)
            {
                RectTransform rectTransform = Instantiate(_waypointMarkerPrefab, gameObject.transform).GetComponent<RectTransform>();
                MinimapManager.Instance.WaypointsInMap[i].visualRect = rectTransform;
            }
            waypoint.visualRect.anchoredPosition = new Vector2(waypoint.position.x, waypoint.position.z);
        }
    }*/
}

