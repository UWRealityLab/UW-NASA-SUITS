using Microsoft.MixedReality.Toolkit.UX;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using TSS.Msgs;
using UnityEngine;

public class GPSHandler : Singleton<GPSHandler>
{
    [SerializeField] private Transform _user;
    [SerializeField] private MRTKTMPInputField _latText;
    [SerializeField] private MRTKTMPInputField _lonText;
    [SerializeField] private TMP_Text _outputText = null;
    private float _lat = 29.5648150f;
    private float _lon = -95.0817410f;
    private int _numOfGPSMsgs = 0;
    private Vector2 _currGPS = new Vector2(0f, 0f);
    public bool isCalibrated { get; private set; }

    private void Start()
    {
        isCalibrated = false;
        TelemetryManager.OnGPSMsgUpdate += GPSMsgUpdate;

        if (_user == null)
            _user = GameObject.FindGameObjectWithTag("MainCamera").GetComponent<Transform>();
    }

    private void Update()
    {
        if(_outputText != null)
        {
            Vector2 gpsCoords = WorldtoGPS(_user.position);
            _outputText.text =  $"Lat : " + gpsCoords.x + "\n Lon : " + gpsCoords.y;
        }
    }

    public void CustomizeGPS()
    {
        _lat = float.Parse(_latText.text);
        _lon = float.Parse(_lonText.text);
    }

    private void GPSMsgUpdate(GPSMsg message)
    {
        if (message.lat != 0 && message.lon != 0) //wont work at the equator, but looks like the first message is always (0,0)
        {
            if ((Vector3.zero - _user.position).magnitude < 1)
            {
                _numOfGPSMsgs++;
                _currGPS = (_currGPS * (_numOfGPSMsgs - 1) + new Vector2((float)message.lat, (float)message.lon)) / _numOfGPSMsgs;
            }
            else
            {
                Debug.Log("Please stay at the world origin");
            }
        }
    }

    public void CalibrateGPS()
    {
        if ((Vector3.zero - _user.position).magnitude < 1)
        {
            Debug.Log(_user.rotation);
            Debug.Log(_user.rotation * Vector3.forward);
            Debug.Log(Vector3.forward);
            float angle = _user.eulerAngles.y;// Vector3.SignedAngle(Vector3.forward, _user.rotation * Vector3.forward, Vector3.up);
            if (_currGPS.x == 0 && _currGPS.y == 0)
            {
                _currGPS = new Vector2(_lat, _lon);
            }
            Debug.Log(_currGPS);
            GPSEncoder.SetLocalOrigin(_currGPS);
            GPSEncoder.UpdateRotationCorrection(angle);

            HUDCompassControl.Instance.UpdateNorthRotation(angle + 180);
            isCalibrated = true;
        }
        else
        {
            Debug.Log("Please stay at the world origin");
        }
    }

    public Vector2 WorldtoGPS(Vector3 position)
    {
        return GPSEncoder.USCToGPS(position);
    }

    public Vector3 GPStoWorld(Vector2 GPS)
    {
        return GPSEncoder.GPSToUCS(GPS);
    }
}
