using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TSS.Msgs;

public class RoverManager : MonoBehaviour
{
  

    
    float roverLong;
    float roverLat;


    // Start is called before the first frame update
    void Start()
    {
        TelemetryManager.OnRoverMsgUpdate += RoverMsgUpdate;
    }

    private void RoverMsgUpdate(RoverMsg message)
    {
        if (message.lat != 0 && message.lon != 0) //wont work at the equator, but looks like the first message is always (0,0)
        {
            roverLat = message.lat;
            roverLong = message.lon;
        }
    }

    

    void StopRover()
    {
        TelemetryManager.Instance.SendRoverCoords(roverLat, roverLong);
    }

    void RecallRover()
    {
        TelemetryManager.Instance.SendRoverRecall();
    }

    void SendRover(Vector2 gpscoords)
    {
        TelemetryManager.Instance.SendRoverCoords(gpscoords.x, gpscoords.y);
    }
   


}