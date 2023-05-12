using System.Collections;
using System.Collections.Generic;
using TSS;
using TSS.Msgs;
using UnityEngine;

public class GPSManager : Singleton<GPSManager>
{
    [SerializeField] private Transform _user;
    private List<Vector3> GPSCoordHistory = new();
    private List<Vector3> WorldCoordHistory = new();

    private Matrix4x4 GPSToWorldArray = Matrix4x4.identity;
    private Matrix4x4 WorldtoGPSArray = Matrix4x4.identity;

    private int localGPSmsgCount = 0;
    private int maxMessages = 50;

    [SerializeField] TMPro.TMP_Text gpsMsgBox;

    [SerializeField] TMPro.TMP_InputField inputField; //for test

    private float metersPerLat;
    private float metersPerLon;

    private Vector3 GPSOrigin;
    private Matrix4x4 WorldtoGps;
    private Quaternion RotationQuaternion;
    private float altdiff; //altitude of y=0 in world coords

    bool calibrated = false;
    // Start is called before the first frame update
    private void Start()
    {
        TelemetryManager.OnGPSMsgUpdate += GPSMsgUpdate;

        //CalibrateGPS();
        if (_user == null)
            _user = GameObject.FindGameObjectWithTag("MainCamera").GetComponent<Transform>();


        //THIS IS HERE FOR TEST, DELETE!
        /*GPSCoordHistory.Add(new Vector3(67, 68, 2));
        GPSCoordHistory.Add(new Vector3(67 + 2 / 111132.92f, 68, 2.2f));
        GPSCoordHistory.Add(new Vector3(67, 68 + 2 / 111132.92f, 2));

        WorldCoordHistory.Add(new Vector3(0, 0, 1));
        WorldCoordHistory.Add(new Vector3(1.41f, 0.4f, 2.41f));
        WorldCoordHistory.Add(new Vector3(2.41f, 0, .59f));*/

        GPSCoordHistory.Add(new Vector3(47.661302f, -122.311906f, 2));
        GPSCoordHistory.Add(new Vector3(47.661297f, -122.309721f, 2));
        GPSCoordHistory.Add(new Vector3(47.661266f, -122.307339f, 2));

        WorldCoordHistory.Add(new Vector3(0, 0, 0));
        WorldCoordHistory.Add(new Vector3(60.96f, 0, 0));
        WorldCoordHistory.Add(new Vector3(60.96f * 2, 0));

        localGPSmsgCount = 3;
    }   

    private void GPSMsgUpdate(GPSMsg message)
    {
        if (localGPSmsgCount  <maxMessages) //(telemMsg.GPS.Count > localGPSmsgCount)
        {
            if (message.lat != 0 && message.lon != 0) //wont work at the equator, but looks like the first message is always (0,0)
            {
                if (WorldCoordHistory.Count == 0 || (WorldCoordHistory[^1] - _user.position).magnitude > 5)
                {
                    localGPSmsgCount++;
                    //gpsMsgBox.text = "GPS Msg: " + JsonUtility.ToJson(message, prettyPrint: true);

                    WorldCoordHistory.Add(_user.position);
                    GPSCoordHistory.Add(new Vector3((float)message.lat, (float)message.lon, (float)message.alt));
                }
            }
                
        }   
        else
        {
            gpsMsgBox.text = "Max amount of messages received. Storing " + localGPSmsgCount;
        }
    }

    public void CalibrateGPS()
    {
        Debug.Log("Calibrating GPS with " + localGPSmsgCount + " MSGs recieved");
        /*Here, we will attempt to find the angle to north by averaging the angle from the world coords to gps coords.*/
        if (localGPSmsgCount >= 2) { //Need at least two messages to calibrate
            float anglesum = 0;
            float worlddiffsum = 0;
            float altdiffsum = 0;
            for( int i = 0; i < localGPSmsgCount-1;i++)
            {
                for (int j = i + 1; j < localGPSmsgCount; j++) //hopefully the max of 50 is enough to keep this from being egregiously long
                {
                    Vector3 gpsDiff = GPSCoordHistory[i] - GPSCoordHistory[j];
                    Vector3 worldDiff = WorldCoordHistory[i] - WorldCoordHistory[j];
                    Debug.Log("gpsdiff " + gpsDiff.x + "   " + gpsDiff.ToString() + "    world diff" + worldDiff.ToString());
                    //Note im using the z coordinates as the y coordiante here, since world coords has y as up and down. this may cause isseus alter!
                    anglesum += worldDiff.magnitude * Vector3.SignedAngle(new Vector3(worldDiff.x, worldDiff.z, 0), new Vector3(gpsDiff.x, gpsDiff.y, 0), new Vector3(0, 0, 1));
                    worlddiffsum += worldDiff.magnitude;

                }
                altdiffsum += GPSCoordHistory[i].z-WorldCoordHistory[i].y;

            }

            altdiff = altdiffsum / (localGPSmsgCount - 1); //average difference in altitude from worldcoord.y = 0 to gps altitude, or the alt offset of the origin

            FindMetersPerLat(GPSCoordHistory[0][0]);
            RotationQuaternion = Quaternion.Euler(0, 0, anglesum / worlddiffsum);
            Matrix4x4 RotationMatrix = Matrix4x4.Rotate(RotationQuaternion);
            Vector3 scale = new Vector3(1/metersPerLat, 1/metersPerLon, 0);
            Matrix4x4 scaleMatrix = Matrix4x4.Scale(scale); 
            WorldtoGps = scaleMatrix * RotationMatrix;
            //Find origin
            Vector3 worldorigin = new Vector3(0, 0, 0);
            float worlddiff = (WorldCoordHistory[0] - worldorigin).magnitude;
            int indexer = 0;
            for (int i = 1; i < localGPSmsgCount - 1; i++)
            {

                if (worlddiff > (WorldCoordHistory[i] - worldorigin).magnitude)
                {
                    indexer = i;
                    worlddiff = (WorldCoordHistory[i] - worldorigin).magnitude;
                }

            }
            GPSOrigin = GPSCoordHistory[indexer] - WorldtoGps.MultiplyPoint3x4( WorldCoordHistory[indexer]);
            calibrated = true;
            HUDCompassControl.Instance.UpdateNorthRotation(Vector3.SignedAngle(Vector3.forward, GPStoWorld(new Vector3(89.999999f, 0, 0)), Vector3.up));
            Debug.Log(GPStoWorld(new Vector3(89.999999f, 0, 0)));  // north pole
            gpsMsgBox.text = $" <color=\"green\">{"Calibration Succesful \n Angle =" +anglesum/worlddiffsum +"\n origin =" + GPSOrigin.ToString()}</color>";
        }
        else
        {
            Debug.Log("Need at least 2 calibration points");
            gpsMsgBox.text = $" <color=\"red\">{"Need at least 2 calibration points"}</color>";
        }
    }

    public Quaternion GetRotateMatrix()
    {
        if (calibrated)
        {
            return RotationQuaternion;
        }
        else
        {
            Debug.Log("Need to calibrate first. Currently storing " + localGPSmsgCount + "messages");
            return Quaternion.identity;
        }
    }

    public Vector3 WorldtoGPS(Vector3 worldcoords)
    {
        if(calibrated)
        {
            //THIS IS BETTER, BUT NEEDS TO BE TESTED
            float worlddiff = (WorldCoordHistory[0] - worldcoords).magnitude;
            int indexer = 0;
            for (int i = 1; i < localGPSmsgCount ; i++)
            {

                if (worlddiff > (WorldCoordHistory[i] - worldcoords).magnitude)
                {
                    indexer = i;
                    worlddiff = (WorldCoordHistory[i] - worldcoords).magnitude;
                }

            }
            gpsMsgBox.text = $" <color=\"green\">{"Used message " + indexer + " with world diff" + worlddiff}</color>";
            Vector3 gpscoords =  GPSCoordHistory[indexer] + WorldtoGps.MultiplyPoint3x4(new Vector3(worldcoords.x - WorldCoordHistory[indexer].x, worldcoords.z - WorldCoordHistory[indexer].z, 0));
            gpscoords.z = worldcoords.y + altdiff;
            return gpscoords;
            //return GPSOrigin + WorldtoGps.MultiplyPoint3x4(new Vector3(worldcoords.x,worldcoords.z,0));
        }
        else
        {
            Debug.Log("Need to calibrate first. Currently storing " + localGPSmsgCount + "messages");
            gpsMsgBox.text = $" <color=\"red\">{"Need to calibrate first. Currently storing " + localGPSmsgCount + "messages"}</color>";
            return new Vector3(-10000, -10000, -10000);
        }
    }

    public Vector3 GPStoWorld(Vector3 gpscoords)
    {
        if (calibrated)
        {
            //THIS IS BETTER, BUT NEEDS TO BE TESTED
            float gpsdiff = (GPSCoordHistory[0] - gpscoords).magnitude;
            int indexer = 0;
            for (int i = 1; i < localGPSmsgCount; i++)
            {

                if (gpsdiff > (GPSCoordHistory[i] - gpscoords).magnitude)
                {
                    indexer = i;
                    gpsdiff = (GPSCoordHistory[i] - gpscoords).magnitude;
                }

            }
            Vector3 worldcoords = WorldCoordHistory[indexer] + WorldtoGps.inverse.MultiplyPoint3x4(gpscoords - GPSCoordHistory[indexer]);
            //Vector3 worldcoords = WorldtoGps.inverse.MultiplyPoint3x4(gpscoords- GPSOrigin);
            return new Vector3(worldcoords.x, gpscoords.z - altdiff, worldcoords.y);
        }
        else
        {
            gpsMsgBox.text = $" <color=\"red\">{"Need to calibrate first. Currently storing " + localGPSmsgCount + "messages"}</color>";
            return new Vector3(-10000, -10000, -10000); //figure out how to handle errors better!
        }
    }


    private void FindMetersPerLat(float lat) // Compute lengths of degrees
    {
        //From MichaelTaylor3D
        //www.michaeltaylor3d.com
        float m1 = 111132.92f;    // latitude calculation term 1
        float m2 = -559.82f;        // latitude calculation term 2
        float m3 = 1.175f;      // latitude calculation term 3
        float m4 = -0.0023f;        // latitude calculation term 4
        float p1 = 111412.84f;    // longitude calculation term 1
        float p2 = -93.5f;      // longitude calculation term 2
        float p3 = 0.118f;      // longitude calculation term 3

        lat = lat * Mathf.Deg2Rad;

        // Calculate the length of a degree of latitude and longitude in meters
        metersPerLat = m1 + (m2 * Mathf.Cos(2 * (float)lat)) + (m3 * Mathf.Cos(4 * (float)lat)) + (m4 * Mathf.Cos(6 * (float)lat));
        metersPerLon = (p1 * Mathf.Cos((float)lat)) + (p2 * Mathf.Cos(3 * (float)lat)) + (p3 * Mathf.Cos(5 * (float)lat));
        Debug.Log("meters per lat" + metersPerLat + "    meters per long " + metersPerLon);
    }

    public void testPrintMessages()
    {
        var gpscoords = "";
        for(int i = 0; i<GPSCoordHistory.Count; i++)
        {
            gpscoords += ", " + GPSCoordHistory[i].ToString("G10");
        }
        var worldcoords = "";
        for (int i = 0; i < WorldCoordHistory.Count; i++)
        {
            worldcoords += ", " + WorldCoordHistory[i].ToString("G10");
        }
        //var gpscoords = string.Join(", ", GPSCoordHistory);
        //var worldcoords = string.Join(", ", WorldCoordHistory);
        gpsMsgBox.text = $"GPS Coords = " + gpscoords + "\n World Coords =  " + worldcoords + "\n GPS message count = " + localGPSmsgCount;
        Debug.Log("GPS Coords = " + gpscoords + "\n World Coords =  " + worldcoords + "\n GPS message count = " + localGPSmsgCount);
    }
}
