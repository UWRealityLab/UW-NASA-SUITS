using Microsoft.MixedReality.Toolkit.UX;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class CoordinateToWaypoint : MonoBehaviour
{
    [SerializeField] private MRTKTMPInputField _latitudeInput;
    [SerializeField] private MRTKTMPInputField _longitudeInput;
    [SerializeField] private MRTKTMPInputField _nameInput;

    [SerializeField] private TMP_Text _detailsText;
    [SerializeField] private TMP_Text _distanceText;

    public void SaveWaypoint()
    {
        /* TODO: Use actual GPS coordinate */
        string name = _nameInput.text;
        WaypointManager.Instance.GenerateWaypointAtCoordinate(Vector3.zero, name);
    }

    private void OnEnable()
    {
        ProcessCoordinate();
    }

    private void ProcessCoordinate()
    {
        /* TODO: 1. Update the detailsText;
         *       2. Update the distanceText
                 3. Update the minimap*/
        _detailsText.text = $"Details:\n" +
            $"N {_latitudeInput.text}'\n" +
            $"W {_longitudeInput.text}'\n";
    }
}
