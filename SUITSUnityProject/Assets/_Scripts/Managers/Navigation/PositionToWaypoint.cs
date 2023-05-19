using Microsoft.MixedReality.Toolkit.UX;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class PositionToWaypoint : MonoBehaviour
{
    [SerializeField] private MRTKTMPInputField _nameInput;
    [SerializeField] private TMP_Text _detailsText;
    [SerializeField] private TMP_Text _distanceText;
    [SerializeField] private Transform _user;
    public void SaveWaypoint()
    {
        string name = _nameInput.text;
        if (name == "")
            name = "Untitled Waypoint " + (WaypointManager.Instance.ActiveWaypoints.Count + 1);
        WaypointManager.Instance.GenerateWaypointAtPosition(_user.position, name);
    }

    private void OnEnable()
    {
        ProcessCoordinate();
        if (_user == null)
            _user = GameObject.FindGameObjectWithTag("MainCamera").GetComponent<Transform>();
        InvokeRepeating("UpdateDistance", 0, .25f);
    }

    private void OnDisable()
    {
        CancelInvoke();
    }

    private void ProcessCoordinate()
    {
        /* TODO: 1. Update the detailsText;
         *       2. Update the distanceText
                 3. Update the minimap*/
        Vector2 latlong = GPSHandler.Instance.WorldtoGPS(_user.position);
        _detailsText.text = $"Details:\n" +
            $"N {latlong.x}'\n" +
            $"W {latlong.y}'\n";
    }

    private void UpdateDistance()
    {
        _distanceText.text = $"0 m away";
    }
}
