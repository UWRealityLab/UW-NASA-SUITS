using System.Collections;
using System.Collections.Generic;
using TSS;
using UnityEngine;

public class GPSManager : Singleton<GPSManager>
{
    public string URI { get; private set; } = "ws://128.208.1.212:3001";
    [SerializeField] private Transform _user;
    private List<Vector3> GPSCoordHistory = new();
    private List<Vector3> WorldCoordHistory = new();

    private Matrix4x4 GPSToWorldArray = Matrix4x4.identity;
    private Matrix4x4 WorldtoGPSArray = Matrix4x4.identity;

    TSSConnection tss;

    private int localGPSmsgCount = 0;
    private int maxMessages = 50;

    [SerializeField] TMPro.TMP_Text gpsMsgBox;

    [SerializeField] TMPro.TMP_InputField inputField; //for test

    private float metersPerLat;
    private float metersPerLon;

    private Vector3 GPSOrigin;
    private Matrix4x4 WorldtoGps;

    bool calibrated = false;
    // Start is called before the first frame update
    async void Start()
    {
        tss = new TSSConnection();
        //CalibrateGPS();
        if (_user == null)
            _user = GameObject.FindGameObjectWithTag("MainCamera").GetComponent<Transform>();


        /*//THIS IS HERE FOR TEST, DELETE!
        GPSCoordHistory.Add(new Vector3(67, 68, 0));
        GPSCoordHistory.Add(new Vector3(67+2/ 111132.92f, 68, 0.2f));
        //GPSCoordHistory.Add(new Vector3(67, 68+2/ 111132.92f, 0));

        WorldCoordHistory.Add(new Vector3(1000000, 1000000, 0));
        WorldCoordHistory.Add(new Vector3(1000001.41f, 1000001.41f, 0.2f));
        //WorldCoordHistory.Add(new Vector3(2.41f, -.41f, 0));

        localGPSmsgCount = 2;*/
    }

    // Update is called once per frame
    void Update()
    {
        // Updates the websocket once per frame
        tss.Update();

    }

    public async void Connect()
    {
        //      tssUri = "ws://localhost:3001"​;
        /*if (inputField.text != "")
        {
            URI = $"ws://{inputField.text}:3001";
        }*/
        var connecting = tss.ConnectToURI(URI);
        Debug.Log("Connecting to " + URI);
        // Create a function that takes asing TSSMsg parameter and returns void. For example:
        // public static void PrintInfo(TSS.Msgs.TSSMsg tssMsg) { ... }
        // Then just subscribe to the OnTSSTelemetryMsg
        tss.OnTSSTelemetryMsg += (telemMsg) =>
        {
            if (telemMsg.GPS.Count > 0 && localGPSmsgCount <maxMessages) //(telemMsg.GPS.Count > localGPSmsgCount)
            {
                
                TSS.Msgs.GPSMsg message = telemMsg.GPS[0];
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
                gpsMsgBox.text = "No GPS Msg received. Storing " + localGPSmsgCount;
            }

        };

        // tss.OnOpen, OnError, and OnClose events just re-raise events from websockets.
        // Similar to OnTSSTelemetryMsg, create functions with the appropriate return type and parameters, and subscribe to them
        tss.OnOpen += () =>
        {
            Debug.Log("Websocket connectio opened");
        };

        tss.OnError += (string e) =>
        {
            Debug.Log("Websocket error occured: " + e);
        };

        tss.OnClose += (e) =>
        {
            Debug.Log("Websocket closed with code: " + e);
        };

        await connecting;

    }

    public void CalibrateGPS()
    {
        Debug.Log("Calibrating GPS with " + localGPSmsgCount + " MSGs recieved");
        /*Here, we will attempt to find the angle to north by averaging the angle from the world coords to gps coords.*/
        if (localGPSmsgCount >= 2) { //Need at least two messages to calibrate
            float[] anglemat = new float[localGPSmsgCount - 1];
            float anglesum = 0;
            float worlddiffsum = 0;
            for( int i = 0; i < localGPSmsgCount-1;i++)
            {
                for (int j = i + 1; j < localGPSmsgCount; j++) //hopefully the max of 50 is enough to keep this from being egregiously long
                {
                    Vector3 gpsDiff = GPSCoordHistory[i] - GPSCoordHistory[j];
                    Vector3 worldDiff = WorldCoordHistory[i] - WorldCoordHistory[j];
                    Debug.Log("gpsdiff " + gpsDiff.x + "   " + gpsDiff.ToString() + "    world diff" + worldDiff.ToString());
                    //Note im using the z coordinates as the y coordiante here, since world coords has y as up and down. this may cause isseus alter!
                    anglemat[i - 1] = Vector3.SignedAngle(new Vector3(worldDiff.x, worldDiff.z, 0), new Vector3(gpsDiff.x, gpsDiff.y, 0), new Vector3(0, 0, 1));
                    anglesum += worldDiff.magnitude * Vector3.SignedAngle(new Vector3(worldDiff.x, worldDiff.z, 0), new Vector3(gpsDiff.x, gpsDiff.y, 0), new Vector3(0, 0, 1));
                    worlddiffsum += worldDiff.magnitude;
                }
            }
            FindMetersPerLat(GPSCoordHistory[0][0]);
            Quaternion rotation = Quaternion.Euler(0, 0, anglesum / worlddiffsum);
            Matrix4x4 rotateMatrix = Matrix4x4.Rotate(rotation);
           /* Debug.Log("rotated (1,1,1) = " + rotateMatrix.MultiplyPoint3x4(new Vector3(1,1,1)).ToString());*/
            Vector3 scale = new Vector3(1/metersPerLat, 1/metersPerLon, 0);
            Matrix4x4 scaleMatrix = Matrix4x4.Scale(scale); 
            WorldtoGps = scaleMatrix * rotateMatrix;
            //Find origin
            /*Debug.Log("rotated origin owrld cord = " + rotateMatrix.MultiplyPoint3x4(WorldCoordHistory[0]).ToString());
            Debug.Log("meters per lat" + metersPerLat + "meters per long " + metersPerLon);
            Debug.Log("rotated  and scaled origin owrld cord = " + scaleMatrix.MultiplyPoint3x4( rotateMatrix.MultiplyPoint3x4(WorldCoordHistory[0])).ToString());
            Debug.Log("matrix woerldtogps = " + WorldtoGps.MultiplyPoint3x4(WorldCoordHistory[0]).ToString());*/
            GPSOrigin = GPSCoordHistory[0] - WorldtoGps.MultiplyPoint3x4( WorldCoordHistory[0]);
            calibrated = true;
            gpsMsgBox.text = $" <color=\"green\">{"Calibration Succesful \n Angle =" +anglesum/worlddiffsum +"\n origin =" + GPSOrigin.ToString()}</color>";
        }
        else
        {
            Debug.Log("Need at least 2 calibration points");
            gpsMsgBox.text = $" <color=\"red\">{"Need at least 2 calibration points"}</color>";
        }
    }

    public Vector3 WorldtoGPS(Vector3 worldcoords)
    {
        if(calibrated)
        {   

            return GPSOrigin + WorldtoGps.MultiplyPoint3x4(new Vector3(worldcoords.x,worldcoords.z,0));
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
            Vector3 worldcoords = WorldtoGps.inverse.MultiplyPoint3x4(gpscoords- GPSOrigin);
            return new Vector3(worldcoords.x, 0, worldcoords.y);
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

        var gpscoords = string.Join(", ", GPSCoordHistory);
        var worldcoords = string.Join(", ", WorldCoordHistory);
        gpsMsgBox.text = $"GPS Coords = " + gpscoords + "\n World Coords =  " + worldcoords + "\n GPS message count = " + localGPSmsgCount;
    }
}
