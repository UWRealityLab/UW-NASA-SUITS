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

    [SerializeField] TMPro.TMP_Text gpsMsgBox;

    [SerializeField] TMPro.TMP_InputField inputField; //for test

    // Start is called before the first frame update
    async void Start()
    {
        tss = new TSSConnection();
        CalibrateGPS();
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
        if (inputField.text != "")
        {
            URI = $"ws://{inputField.text}:3001";
        }
        var connecting = tss.ConnectToURI(URI);
        Debug.Log("Connecting to " + URI);
        // Create a function that takes asing TSSMsg parameter and returns void. For example:
        // public static void PrintInfo(TSS.Msgs.TSSMsg tssMsg) { ... }
        // Then just subscribe to the OnTSSTelemetryMsg
        tss.OnTSSTelemetryMsg += (telemMsg) =>
        {
            if (telemMsg.GPS.Count > localGPSmsgCount)
            {
                localGPSmsgCount++;
                TSS.Msgs.GPSMsg message = telemMsg.GPS[0];
                gpsMsgBox.text = "GPS Msg: " + JsonUtility.ToJson(message, prettyPrint: true);

                WorldCoordHistory.Add(_user.position);
                GPSCoordHistory.Add(new Vector3((float)message.lat, (float)message.lon, (float)message.alt));
            }
            else
            {
                gpsMsgBox.text = "No GPS Msg received";
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

    public static void CalibrateGPS()
    {
        //Debug.Log("Calibrating GPS with " + localGPSmsgCount + " MSGs recieved");
        /*Here, we will perform OLS on each of the three coordinates, giving us the three rows of our matrix. We will use this initially as our calibration.*/
    }
}
