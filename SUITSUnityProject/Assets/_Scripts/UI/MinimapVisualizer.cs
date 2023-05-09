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
    [SerializeField] private LineRenderer MinimapPathLineRenderer;

    private RectTransform _userMarkerRect;
    private RectTransform _homeMarkerRect;

    private void Start()
    {
        _userMarkerRect = _userMarker.gameObject.GetComponent<RectTransform>();
        _homeMarkerRect = _homeMarker.gameObject.GetComponent<RectTransform>();
        MinimapPathLineRenderer.SetWidth(.005f, .005f);
        //InvokeRepeating(nameof(UpdateMinimapImages), 0, _visualUpdateFrequency);
    }

    private void Update()
    {
        _userMarkerRect.localEulerAngles = new Vector3(0, 0, -MinimapManager.Instance.UserInMap.y);
        // roverMarker.GetComponent<RectTransform>().anchoredPosition = new Vector2(minimap.minimapDict["rover"].x, minimap.minimapDict["rover"].z);
        _homeMarkerRect.anchoredPosition = new Vector2(MinimapManager.Instance.HomeInMap.x, MinimapManager.Instance.HomeInMap.z);
        for (int i = 0; i < MinimapManager.Instance.WaypointsInMap.Count; i++)
        {
            var waypoint = MinimapManager.Instance.WaypointsInMap[i];
            if (waypoint.visualRect == null)
            {
                RectTransform rectTransform = Instantiate(_waypointMarkerPrefab, gameObject.transform).GetComponent<RectTransform>();
                waypoint.visualRect = rectTransform;
                MinimapManager.Instance.WaypointsInMap[i] = waypoint;
            }
            waypoint.visualRect.anchoredPosition = new Vector2(waypoint.position.x, waypoint.position.z);
        }
        if (MinimapManager.Instance.TrailInMap != null && MinimapManager.Instance.TrailInMap.Length > 0)
        {
            //Debug.Log(MinimapManager.Instance.TrailInMap.ToString());
            /*List<Vector3> validpositions = new List<Vector3>();
            for(int i = 0; i< MinimapManager.Instance.TrailInMap.Length;i++)
            {
                if (Math.Abs(MinimapManager.Instance.TrailInMap[i].x)>95 && Math.Abs(MinimapManager.Instance.TrailInMap[i].y) > 95)
                {
                    validpositions.Add(new Vector3(Math.Sign(MinimapManager.Instance.TrailInMap[i].x) * 96, 96 * Math.Sign(MinimapManager.Instance.TrailInMap[i].y), 1));
                    
                }else if(Math.Abs(MinimapManager.Instance.TrailInMap[i].x) > 95)
                {
                    validpositions.Add(new Vector3(Math.Sign(MinimapManager.Instance.TrailInMap[i].x) * 96, MinimapManager.Instance.TrailInMap[i].y, 1));
                }
                else if (Math.Abs(MinimapManager.Instance.TrailInMap[i].y) > 95)
                {
                    validpositions.Add(new Vector3(MinimapManager.Instance.TrailInMap[i].x, 96 * Math.Sign(MinimapManager.Instance.TrailInMap[i].y), 1));
                }
                else
                {
                    validpositions.Add(MinimapManager.Instance.TrailInMap[i]);
                }
            }
            Vector3[] newcorners = validpositions.ToArray();
            MinimapPathLineRenderer.positionCount = newcorners.Length;
            MinimapPathLineRenderer.SetPositions(newcorners);*/
            MinimapPathLineRenderer.positionCount = MinimapManager.Instance.TrailInMap.Length;
            MinimapPathLineRenderer.SetPositions(MinimapManager.Instance.TrailInMap);
        }

    }

    private void UpdateMinimapImages()
    {
        
    }

}


