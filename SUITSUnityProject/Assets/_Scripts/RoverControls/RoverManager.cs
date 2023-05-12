using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TSS;

public class stopRover : MonoBehaviour
{
    TSSConnection tss;
    string tssUri;

    int msgCount = 0;

    TMPro.TMP_Text roverMsgBox;
    string roverRclMsg;
    string roverStopMsg;
    string roverNavMsg;

    TMPro.TMP_InputField inputField;
    float roverLong;
    float roverLat;
    [SerializeField] private GameObject roverMarkerPrefab;


    // Start is called before the first frame update
    async void Start()
    {
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
            }
            else
            {
                roverMsgBox.text = "No ROVER Msg received";
            }
               */
        };

         void GenerateRoverMarkertAtPosition(Vector3 position, string name = "Rover Navigation Point")
        {
            
            GameObject roverMarkerGameObject = Instantiate(roverMarkerPrefab, position, Quaternion.identity);
            Waypoint marker = new(name, position, Vector3.zero);
            marker.AttachVisual(roverMarkerGameObject);
        }

        void StopRover()
        {
            roverStopMsg = "{ rover: { cmd: navigate, goal_lat: " + roverLat + ", goal_long: " + roverLong;
            roverStopMsg = JsonUtility.ToJson(roverStopMsg, prettyPrint: true);
            // add nasa server sending code
        }

        void RecallRover()
        {
            roverRclMsg = "{ rover: { cmd: recall, } }";
            roverRclMsg= JsonUtility.ToJson(roverRclMsg, prettyPrint: true);
            // add nasa server sending code
        }

        void SendRover()
        {
            roverNavMsg = "{ rover: { cmd: navigate, goal_lat: " + roverLat + ", goal_long: " + roverLong;
            roverNavMsg = JsonUtility.ToJson(roverNavMsg, prettyPrint: true);
            // add nasa server sending code
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


}