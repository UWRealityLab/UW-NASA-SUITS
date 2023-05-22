using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TSS.Msgs;
using TMPro;

public class RoverManager : Singleton<RoverManager>
{



    public float roverLong = 0;
    public float roverLat = 0;
    public float roverGoalLat = 0;
    public float roverGoalLong = 0;
    public string isNavigating = "No Data Recieved";

    [SerializeField] private TMP_Text _outputText = null;


    // Start is called before the first frame update
    void Start()
    {
        TelemetryManager.OnRoverMsgUpdate += RoverMsgUpdate;
    }
    private void Update()
    {
        if (_outputText != null)
        {
            _outputText.text = $"RVR Lat : " + roverLat + "\n RVR Lon : " +roverLong +
                    "\n Goal Lat : " + roverGoalLat + "\n Goal Long : " + roverGoalLong
                    + "\n RVR Nav Status : \n" + isNavigating;
        }
    }
    private void RoverMsgUpdate(RoverMsg message)
    {
        if (message.lat != 0 && message.lon != 0) //wont work at the equator, but looks like the first message is always (0,0)
        {
            roverLat = message.lat;
            roverLong = message.lon;
            roverGoalLat = message.goal_lat;
            roverGoalLong = message.goal_lon;
            isNavigating = message.navigation_status;
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