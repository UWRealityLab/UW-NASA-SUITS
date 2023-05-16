using Microsoft.MixedReality.Toolkit.UX;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class CoordinateToWaypoint : MonoBehaviour
{
    [SerializeField] private MRTKTMPInputField _latitudeInput;
    [SerializeField] private MRTKTMPInputField _longitudeInput;
    [SerializeField] private MRTKTMPInputField _altInput;
    [SerializeField] private MRTKTMPInputField _nameInput;

    [SerializeField] private TMP_Text _detailsText;
    [SerializeField] private TMP_Text _distanceText;

    private Transform _user;
    public void SaveWaypoint()
    {
        string name = _nameInput.text;
        if (name == "")
            name = "Untitled Waypoint " + (WaypointManager.Instance.ActiveWaypoints.Count + 1);
        WaypointManager.Instance.GenerateWaypointAtCoordinate(new Vector3(float.Parse(_latitudeInput.text), float.Parse(_longitudeInput.text), float.Parse(_altInput.text)), name);
    }

    private void OnEnable()
    {
        ProcessCoordinate();
        if (_user == null)
            _user = GameObject.FindGameObjectWithTag("MainCamera").GetComponent<Transform>();
        InvokeRepeating("UpdateDistance", 0,.25f);
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
        _detailsText.text = $"Details:\n" +
            $"N {_latitudeInput.text}'\n" +
            $"W {_longitudeInput.text}'\n" +
             $"Alt : {_altInput.text}'\n";
    }

    private void UpdateDistance()
    {
        _distanceText.text = $"{ ((_user.position - GPSHandler.Instance.GPStoWorld(new Vector2(float.Parse(_latitudeInput.text), float.Parse(_longitudeInput.text)))).magnitude).ToString("G3")} m away";
    }
}
