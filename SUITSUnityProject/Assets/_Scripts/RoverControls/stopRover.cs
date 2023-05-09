using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TSS;

public class stopRover : MonoBehaviour
{
    //GameObject StopRoverButton;
    TSSConnection tss;
    string tssUri;

    int msgCount = 0;

    TMPro.TMP_Text roverMsgBox;
    TMPro.TMP_Text roverRclMsg;
    TMPro.TMP_Text roverStopMsg;
    TMPro.TMP_Text roverNavMsg;

    TMPro.TMP_InputField inputField;
    float roverLong;
    float roverLat;
    [SerializeField] private GameObject _waypointPrefab;


    // Start is called before the first frame update
    async void Start()
    {

        //StopRoverButton.onClick.AddListener(Connect);
        tss = new TSSConnection();
        inputField = GameObject.Find("Socket URI Input Field").GetComponent<TMPro.TMP_InputField>();

        roverMsgBox = GameObject.Find("ROVER Msg Box").GetComponent<TMPro.TMP_Text>();

    }

    // Update is called once per frame
    void Update()
    {
        // Updates the websocket once per frame
        tss.Update();

    }

    public async void Connect()
    {
        tssUri = inputField.text;
        var connecting = tss.ConnectToURI(tssUri);
        Debug.Log("Connecting to " + tssUri);
        // Create a function that takes asing TSSMsg parameter and returns void. For example:
        // public static void PrintInfo(TSS.Msgs.TSSMsg tssMsg) { ... }
        // Then just subscribe to the OnTSSTelemetryMsg
        tss.OnTSSTelemetryMsg += (telemMsg) =>
        {
            msgCount++;
            Debug.Log("Message #" + msgCount + "\nMessage:\n " + JsonUtility.ToJson(telemMsg, prettyPrint: true));

            /*if (telemMsg.rover.Count > 0)
            {
                roverLat = telemMsg.rover[0].lat;
                roverLong = telemMsg.rover[0].lon;
                rovStopMsg = "{ rover: { cmd: navigate, goal_lat: " + roverLat + ", goal_long: " + roverLong;
                rovStopMsg = JsonUtility.ToJson(rovStopMsg, prettyPrint: true);
                // add nasa server sending code
            }
            else
            {
                roverMsgBox.text = "No ROVER Msg received";
            }

            // wip for other features
            rovRclMsg = "{ rover: { cmd: recall, } }";
            rovRclMsg = JsonUtility.ToJson(rovRclMsg, prettyPrint: true);

            rovNavMsg = "{ rover: { cmd: navigate, goal_lat: " + roverLat + ", goal_long: " + roverLong;
            rovNavMsg = JsonUtility.ToJson(rovNavMsg, prettyPrint: true);
               */
        };

         void GenerateRoverWaypointAtPosition(Vector3 position, string name = "Rover Navigation Point")
        {
            
            GameObject roverWaypointGameObject = Instantiate(_waypointPrefab, position, Quaternion.identity);
            Waypoint waypoint = new(name, position, Vector3.zero);
            waypoint.AttachVisual(roverWaypointGameObject);
        }

        // tss.OnOpen, OnError, and OnClose events just re-raise events from websockets.
        // Similar to OnTSSTelemetryMsg, create functions with the appropriate return type and parameters, and subscribe to them
        tss.OnOpen += () =>
        {
            Debug.Log("Websocket connection opened");
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

    // An example handler for the OnTSSMsgReceived event which just serializes to JSON and prints it all out
    // Can be any function that returns void and has a single parameter of type TSS.Msgs.TSSMsg
    public static void PrintInfo(TSS.Msgs.TSSMsg tssMsg)
    {
        Debug.Log("Received the following telemetry data from the TSS:\n" + JsonUtility.ToJson(tssMsg, prettyPrint: true));
    }

    [SerializeField]
    public enum WaypointLabel
    {
        Home = 0,
        User = 1,
        Rover = 2,
        Default = 3
    }

}