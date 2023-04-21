﻿using EvanZ.Tools;
using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using TSS;
using UnityEngine;

public class TelemetryManager : Singleton<TelemetryManager>
{
    private const string URI_PREFIX = "ws://";
    private const string PORT = ":3001";

    private string _uri = "localhost";
    public string URI
    {
        get { return $"{URI_PREFIX}{_uri}{PORT}"; }
        private set { _uri = value; }
    }

    private TSSConnection _tss;
    private int _msgCount = 0;

    #region Suit Battery Time Left Definition
    [Header("Suit Battery Time Left")]
    [SerializeField] private TMP_Text _batteryTimeLeftMainPage;
    [SerializeField] private TMP_Text _batteryTimeLeftDetailPage;
    #endregion
    #region Suit Battery Percentage Definition
    private int _batteryPercentCount = 7;
    private List<float> _batteryPercentList = new();
    [Header("Suit Battery Percent")]
    [SerializeField] private Window_Graph _batteryPercentWindow_Graph;
    [SerializeField] private TMP_Text _batteryPercentTextMainPage;
    [SerializeField] private TMP_Text _batteryPercentTextDetailPage;
    #endregion
    #region Suit Battery Capacity Definition
    private int _batteryCapacityCount = 7;
    private List<float> _batteryCapacityList = new();
    [Header("Suit Battery Capacity")]
    [SerializeField] private Window_Graph _batteryCapacityWindow_Graph;
    [SerializeField] private TMP_Text _batteryCapacityTextMainPage;
    [SerializeField] private TMP_Text _batteryCapacityTextDetailPage;
    #endregion

    private void Start()
    {
        _tss = new TSSConnection();
    }

    private void Update() => _tss.Update();

    public async void Connect()
    {
        var connecting = _tss.ConnectToURI(URI);
        Debug.Log("Connecting to " + URI);

        // Create a function that takes asing TSSMsg parameter and returns void. For example:
        // public static void PrintInfo(TSS.Msgs.TSSMsg tssMsg) { ... }
        // Then just subscribe to the OnTSSTelemetryMsg
        _tss.OnTSSTelemetryMsg += (telemMsg) =>
        {
            _msgCount++;
            if (telemMsg.GPS.Count > 0)
            {
               
            }
            else
            {
                
            }

            if (telemMsg.IMU.Count > 0)
            {
                
            }
            else
            {

            }

            if (telemMsg.EVA.Count > 0)
            {
                #region Suit Battery Time Left
                _batteryTimeLeftMainPage.text = $"Time Left: <color=\"green\">{telemMsg.EVA[0].t_battery}</color>";
                _batteryTimeLeftDetailPage.text = $"Time Left: <color=\"green\">{telemMsg.EVA[0].t_battery}</color>";
                #endregion
                #region Suit Battery Percentage
                _batteryPercentTextMainPage.text = $"Percentage Left: <color=\"green\">{Math.Round(telemMsg.EVA[0].batteryPercent)}%</color>";
                _batteryPercentTextDetailPage.text = $"Percentage Left: <color=\"green\">{Math.Round(telemMsg.EVA[0].batteryPercent)}%</color>";
                if (_batteryPercentList.Count >= _batteryPercentCount)
                    _batteryPercentList.RemoveAt(0);
                _batteryPercentList.Add((float)telemMsg.EVA[0].batteryPercent);
                _batteryPercentWindow_Graph.UpdateValueList(_batteryPercentList);
                _batteryPercentWindow_Graph.ChangeAxisYUnits("%");
                _batteryPercentWindow_Graph.UseCustomYScale(true, 0f, 100f);
                #endregion
                #region Suit Battery Capacity
                _batteryCapacityTextMainPage.text = $"Capacity: <color=\"green\">{telemMsg.EVA[0].cap_battery} amp-hr</color>";
                _batteryCapacityTextDetailPage.text = $"Capacity: <color=\"green\">{telemMsg.EVA[0].cap_battery} amp-hr</color>";
                if (_batteryCapacityList.Count >= _batteryCapacityCount)
                    _batteryCapacityList.RemoveAt(0);
                _batteryCapacityList.Add((float)telemMsg.EVA[0].cap_battery);
                _batteryCapacityWindow_Graph.UpdateValueList(_batteryCapacityList);
                _batteryCapacityWindow_Graph.ChangeAxisYUnits("amp-hr");
                _batteryCapacityWindow_Graph.UseCustomYScale(true, 0f, 100f);
                #endregion
            }
            else
            {
                
            }
        };

        // tss.OnOpen, OnError, and OnClose events just re-raise events from websockets.
        // Similar to OnTSSTelemetryMsg, create functions with the appropriate return type and parameters, and subscribe to them
        _tss.OnOpen += () =>
        {
            Debug.Log("Websocket connectio opened");
        };

        _tss.OnError += (string e) =>
        {
            Debug.Log("Websocket error occured: " + e);
        };

        _tss.OnClose += (e) =>
        {
            Debug.Log("Websocket closed with code: " + e);
        };

        await connecting;

    }

    public void UpdateURI(string uri)
    {
        URI = uri;
    }

    // An example handler for the OnTSSMsgReceived event which just serializes to JSON and prints it all out
    // Can be any function that returns void and has a single parameter of type TSS.Msgs.TSSMsg
    public static void PrintInfo(TSS.Msgs.TSSMsg tssMsg)
    {
        Debug.Log("Received the following telemetry data from the TSS:\n" + JsonUtility.ToJson(tssMsg, prettyPrint: true));
    }


    
}
