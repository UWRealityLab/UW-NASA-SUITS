using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TSS.Msgs;

public class RoverManager : Singleton<RoverManager>
{



    public float roverLong = 29.5648250f;
    public float roverLat = -95.0817310f;


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

    

    public void StopRover()
    {
        TelemetryManager.Instance.SendRoverCoords(roverLat, roverLong);
    }

    public void RecallRover()
    {
        TelemetryManager.Instance.SendRoverRecall();
    }

    public void SendRover(Vector2 gpscoords)
    {
        TelemetryManager.Instance.SendRoverCoords(gpscoords.x, gpscoords.y);
    }
   


}