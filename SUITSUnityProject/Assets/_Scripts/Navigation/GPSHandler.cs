using System.Collections;
using System.Collections.Generic;
using TSS.Msgs;
using UnityEngine;

public class GPSHandler : MonoBehaviour
{
    [SerializeField] private Transform _user;
    private int _numOfGPSMsgs = 0;
    private Vector2 _currGPS = new Vector2(47.661273f, -122.309654f);

    private void Start()
    {
        TelemetryManager.OnGPSMsgUpdate += GPSMsgUpdate;

        if (_user == null)
            _user = GameObject.FindGameObjectWithTag("MainCamera").GetComponent<Transform>();
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
            float angle = Vector3.SignedAngle(Vector3.forward, _user.rotation * Vector3.forward, Vector3.up);
            GPSEncoder.SetLocalOrigin(_currGPS);
            GPSEncoder.UpdateRotationCorrection(angle);

            HUDCompassControl.Instance.UpdateNorthRotation(angle + 180);
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
