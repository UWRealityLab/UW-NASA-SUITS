using EvanZ.Tools;
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
    #region Suit Pressure Definition
    private int _suitPressureCount = 7;
    private List<float> _suitPressureList = new();
    [Header("Suit Pressure")]
    [SerializeField] private Window_Graph _suitPressureWindow_Graph;
    [SerializeField] private TMP_Text _suitPressureTextMainPage;
    [SerializeField] private TMP_Text _suitPressureTextDetailPage;
    #endregion
    #region Suit Fan Speed Definition
    private int _suitFanSpeedCount = 7;
    private List<float> _suitFanSpeedList = new();
    [Header("Suit Fan Speed")]
    [SerializeField] private Window_Graph _suitFanSpeedWindow_Graph;
    [SerializeField] private TMP_Text _suitFanSpeedTextMainPage;
    [SerializeField] private TMP_Text _suitFanSpeedTextDetailPage;
    #endregion
    #region Bio Heart Rate Definition
    private int _bioHeartRateCount = 7;
    private List<float> _bioHeartRateList = new();
    [Header("Bio Heart Rate")]
    [SerializeField] private Window_Graph _bioHeartRateWindow_Graph;
    [SerializeField] private TMP_Text _bioHeartRateTextMainPage;
    [SerializeField] private TMP_Text _bioHeartRateTextDetailPage;
    #endregion
    #region Water Time Left Definition
    [Header("Water Time Left")]
    [SerializeField] private TMP_Text _waterTimeLeftMainPage;
    [SerializeField] private TMP_Text _waterTimeLeftDetailPage;
    #endregion
    #region Water Gas Pressure Definition
    private int _waterGasPressureCount = 7;
    private List<float> _waterGasPressureList = new();
    [Header("Water Gas Pressure")]
    [SerializeField] private Window_Graph _waterGasPressureWindow_Graph;
    [SerializeField] private TMP_Text _waterGasPressureTextMainPage;
    [SerializeField] private TMP_Text _waterGasPressureTextDetailPage;
    #endregion
    #region Water Liquid Pressure Definition
    private int _waterLiquidPressureCount = 7;
    private List<float> _waterLiquidPressureList = new();
    [Header("Water Liquid Pressure")]
    [SerializeField] private Window_Graph _waterLiquidPressureWindow_Graph;
    [SerializeField] private TMP_Text _waterLiquidPressureTextMainPage;
    [SerializeField] private TMP_Text _waterLiquidPressureTextDetailPage;
    #endregion
    #region Env Sub Pressure Definition
    private int _envSubPressureCount = 7;
    private List<float> _envSubPressureList = new();
    [Header("Environment Sub Pressure")]
    [SerializeField] private Window_Graph _envSubPressureWindow_Graph;
    [SerializeField] private TMP_Text _envSubPressureTextMainPage;
    [SerializeField] private TMP_Text _envSubPressureTextDetailPage;
    #endregion 
    #region Env Temperature Definition
    private int _envTemperatureCount = 7;
    private List<float> _envTemperatureList = new();
    [Header("Environment Temperature")]
    [SerializeField] private Window_Graph _envTemperatureWindow_Graph;
    [SerializeField] private TMP_Text _envTemperatureTextMainPage;
    [SerializeField] private TMP_Text _envTemperatureTextDetailPage;
    #endregion
    #region Oxygen Time Left Definition
    [Header("Oxygen Time Left")]
    [SerializeField] private TMP_Text _oxygenTimeLeftMainPage;
    [SerializeField] private TMP_Text _oxygenTimeLeftDetailPage;
    #endregion
    #region Oxygen Primary Percentage Definition
    private int _oxygenPrimaryPercentageCount = 7;
    private List<float> _oxygenPrimaryPercentageList = new();
    [Header("Oxygen Primary Percentage Left")]
    [SerializeField] private Window_Graph _oxygenPrimaryPercentageWindow_Graph;
    [SerializeField] private TMP_Text _oxygenPrimaryPercentageTextMainPage;
    [SerializeField] private TMP_Text _oxygenPrimaryPercentageTextDetailPage;
    #endregion
    #region Oxygen Primary Pressure Definition
    private int _oxygenPrimaryPressureCount = 7;
    private List<float> _oxygenPrimaryPressureList = new();
    [Header("Oxygen Primary Pressure")]
    [SerializeField] private Window_Graph _oxygenPrimaryPressureWindow_Graph;
    [SerializeField] private TMP_Text _oxygenPrimaryPressureTextMainPage;
    [SerializeField] private TMP_Text _oxygenPrimaryPressureTextDetailPage;
    #endregion
    #region Oxygen Primary Flowrate Definition
    private int _oxygenPrimaryFlowrateCount = 7;
    private List<float> _oxygenPrimaryFlowrateList = new();
    [Header("Oxygen Primary Flowrate")]
    [SerializeField] private Window_Graph _oxygenPrimaryFlowrateWindow_Graph;
    [SerializeField] private TMP_Text _oxygenPrimaryFlowrateTextMainPage;
    [SerializeField] private TMP_Text _oxygenPrimaryFlowrateTextDetailPage;
    #endregion
    #region Oxygen Secondary Percentage Definition
    private int _oxygenSecondaryPercentageCount = 7;
    private List<float> _oxygenSecondaryPercentageList = new();
    [Header("Oxygen Secondary Percentage Left")]
    [SerializeField] private Window_Graph _oxygenSecondaryPercentageWindow_Graph;
    [SerializeField] private TMP_Text _oxygenSecondaryPercentageTextMainPage;
    [SerializeField] private TMP_Text _oxygenSecondaryPercentageTextDetailPage;
    #endregion
    #region Oxygen Secondary Pressure Definition
    private int _oxygenSecondaryPressureCount = 7;
    private List<float> _oxygenSecondaryPressureList = new();
    [Header("Oxygen Secondary Pressure")]
    [SerializeField] private Window_Graph _oxygenSecondaryPressureWindow_Graph;
    [SerializeField] private TMP_Text _oxygenSecondaryPressureTextMainPage;
    [SerializeField] private TMP_Text _oxygenSecondaryPressureTextDetailPage;
    #endregion
    #region Oxygen Secondary Flowrate Definition
    private int _oxygenSecondaryFlowrateCount = 7;
    private List<float> _oxygenSecondaryFlowrateList = new();
    [Header("Oxygen Secondary Flowrate")]
    [SerializeField] private Window_Graph _oxygenSecondaryFlowrateWindow_Graph;
    [SerializeField] private TMP_Text _oxygenSecondaryFlowrateTextMainPage;
    [SerializeField] private TMP_Text _oxygenSecondaryFlowrateTextDetailPage;
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
                if (_batteryPercentWindow_Graph.gameObject.activeInHierarchy)
                {
                    _batteryPercentWindow_Graph.UpdateValueList(_batteryPercentList);
                    _batteryPercentWindow_Graph.ChangeAxisYUnits("%");
                    _batteryPercentWindow_Graph.UseCustomYScale(true, 0f, 100f);
                }
                #endregion
                #region Suit Battery Capacity
                _batteryCapacityTextMainPage.text = $"Capacity: <color=\"green\">{telemMsg.EVA[0].cap_battery} amp-hr</color>";
                _batteryCapacityTextDetailPage.text = $"Capacity: <color=\"green\">{telemMsg.EVA[0].cap_battery} amp-hr</color>";
                if (_batteryCapacityList.Count >= _batteryCapacityCount)
                    _batteryCapacityList.RemoveAt(0);
                _batteryCapacityList.Add((float)telemMsg.EVA[0].cap_battery);
                if (_batteryCapacityWindow_Graph.gameObject.activeInHierarchy)
                {
                    _batteryCapacityWindow_Graph.UpdateValueList(_batteryCapacityList);
                    _batteryCapacityWindow_Graph.ChangeAxisYUnits("amp-hr");
                    _batteryCapacityWindow_Graph.UseCustomYScale(true, 0f, 100f);
                }
                #endregion
                #region Suit Pressure
                _suitPressureTextMainPage.text = $"Pressure: <color=\"green\">{telemMsg.EVA[0].p_suit} psia</color>";
                _suitPressureTextDetailPage.text = $"Pressure: <color=\"green\">{telemMsg.EVA[0].p_suit} psia</color>";
                if (_suitPressureList.Count >= _suitPressureCount)
                    _suitPressureList.RemoveAt(0);
                _suitPressureList.Add((float)telemMsg.EVA[0].p_suit);
                if (_suitPressureWindow_Graph.gameObject.activeInHierarchy)
                {
                    _suitPressureWindow_Graph.UpdateValueList(_suitPressureList);
                    _suitPressureWindow_Graph.ChangeAxisYUnits("psia");
                    _suitPressureWindow_Graph.UseCustomYScale(true, 0f, 100f);
                }
                #endregion
                #region Suit Fan Speed
                _suitFanSpeedTextMainPage.text = $"Fan Speed: <color=\"green\">{telemMsg.EVA[0].v_fan} rpm</color>";
                _suitFanSpeedTextDetailPage.text = $"Fan Speed: <color=\"green\">{telemMsg.EVA[0].v_fan} rpm</color>";
                if (_suitFanSpeedList.Count >= _suitFanSpeedCount)
                    _suitFanSpeedList.RemoveAt(0);
                _suitFanSpeedList.Add((float)telemMsg.EVA[0].v_fan);
                if (_suitFanSpeedWindow_Graph.gameObject.activeInHierarchy)
                {
                    _suitFanSpeedWindow_Graph.UpdateValueList(_suitFanSpeedList);
                    _suitFanSpeedWindow_Graph.ChangeAxisYUnits("rpm");
                }
                #endregion
                #region Bio Heart Rate
                _bioHeartRateTextMainPage.text = $"Heart Rates: <color=\"green\">{telemMsg.EVA[0].heart_bpm} bpm</color>";
                _bioHeartRateTextDetailPage.text = $"Heart Rates: <color=\"green\">{telemMsg.EVA[0].heart_bpm} bpm</color>";
                if (_bioHeartRateList.Count >= _bioHeartRateCount)
                    _bioHeartRateList.RemoveAt(0);
                _bioHeartRateList.Add((float)telemMsg.EVA[0].heart_bpm);
                if (_bioHeartRateWindow_Graph.gameObject.activeInHierarchy)
                {
                    _bioHeartRateWindow_Graph.UpdateValueList(_bioHeartRateList);
                    _bioHeartRateWindow_Graph.ChangeAxisYUnits("bpm");
                    _suitPressureWindow_Graph.UseCustomYScale(true, 60f, 120f);
                }
                #endregion
                #region Water Time Left
                _waterTimeLeftMainPage.text = $"Time Left: <color=\"green\">{telemMsg.EVA[0].t_water}</color>";
                _waterTimeLeftDetailPage.text = $"Time Left: <color=\"green\">{telemMsg.EVA[0].t_water}</color>";
                #endregion
                #region Water Gas Pressure
                _waterGasPressureTextMainPage.text = $"Gas Pressure: <color=\"green\">{telemMsg.EVA[0].p_h2o_g} psia</color>";
                _waterGasPressureTextDetailPage.text = $"Gas Pressure: <color=\"green\">{telemMsg.EVA[0].p_h2o_g} psia</color>";
                if (_waterGasPressureList.Count >= _waterGasPressureCount)
                    _waterGasPressureList.RemoveAt(0);
                _waterGasPressureList.Add((float)telemMsg.EVA[0].p_h2o_g);
                if (_waterGasPressureWindow_Graph.gameObject.activeInHierarchy)
                {
                    _waterGasPressureWindow_Graph.UpdateValueList(_waterGasPressureList);
                    _waterGasPressureWindow_Graph.ChangeAxisYUnits("psia");
                    _waterGasPressureWindow_Graph.UseCustomYScale(true, 0, 18);
                }
                #endregion
                #region Water Liquid Pressure
                _waterLiquidPressureTextMainPage.text = $"Liquid Pressure: <color=\"green\">{telemMsg.EVA[0].p_h2o_l} psia</color>";
                _waterLiquidPressureTextDetailPage.text = $"Liquid Pressure: <color=\"green\">{telemMsg.EVA[0].p_h2o_l} psia</color>";
                if (_waterLiquidPressureList.Count >= _waterLiquidPressureCount)
                    _waterLiquidPressureList.RemoveAt(0);
                _waterLiquidPressureList.Add((float)telemMsg.EVA[0].p_h2o_l);
                if (_waterLiquidPressureWindow_Graph.gameObject.activeInHierarchy)
                {
                    _waterLiquidPressureWindow_Graph.UpdateValueList(_waterLiquidPressureList);
                    _waterLiquidPressureWindow_Graph.ChangeAxisYUnits("psia");
                    _waterLiquidPressureWindow_Graph.UseCustomYScale(true, 0, 18);
                }
                #endregion
                #region Env Sub Pressure
                _envSubPressureTextMainPage.text = $"SUB Pressure: <color=\"green\">{telemMsg.EVA[0].p_sub} psia</color>";
                _envSubPressureTextDetailPage.text = $"SUB Pressure: <color=\"green\">{telemMsg.EVA[0].p_sub} psia</color>";
                if (_envSubPressureList.Count >= _envSubPressureCount)
                    _envSubPressureList.RemoveAt(0);
                _envSubPressureList.Add((float)telemMsg.EVA[0].p_sub);
                if (_envSubPressureWindow_Graph.gameObject.activeInHierarchy)
                {
                    _envSubPressureWindow_Graph.UpdateValueList(_envSubPressureList);
                    _envSubPressureWindow_Graph.ChangeAxisYUnits("psia");
                    _envSubPressureWindow_Graph.UseCustomYScale(true, 0, 18);
                }
                #endregion
                #region Env Temperature
                _envTemperatureTextMainPage.text = $"Temperature: <color=\"green\">{telemMsg.EVA[0].t_sub} K</color>";
                _envTemperatureTextDetailPage.text = $"SUB Pressure: <color=\"green\">{telemMsg.EVA[0].t_sub} K</color>";
                if (_envTemperatureList.Count >= _envTemperatureCount)
                    _envTemperatureList.RemoveAt(0);
                _envTemperatureList.Add((float)telemMsg.EVA[0].t_sub);
                if (_envTemperatureWindow_Graph.gameObject.activeInHierarchy)
                {
                    _envTemperatureWindow_Graph.UpdateValueList(_envTemperatureList);
                    _envTemperatureWindow_Graph.ChangeAxisYUnits("K");
                    _envTemperatureWindow_Graph.UseCustomYScale(false, 0, 18);
                }
                #endregion
                #region Oxygen Time Left
                _oxygenTimeLeftMainPage.text = $"Time Left: <color=\"green\">{telemMsg.EVA[0].t_oxygen}</color>";
                _oxygenTimeLeftDetailPage.text = $"Time Left: <color=\"green\">{telemMsg.EVA[0].t_oxygen}</color>";
                #endregion
                #region Oxygen Primary Percentage
                _oxygenPrimaryPercentageTextMainPage.text = $"Percentage Left: <color=\"green\">{telemMsg.EVA[0].ox_primary} %</color>";
                _oxygenPrimaryPercentageTextDetailPage.text = $"Percentage Left: <color=\"green\">{telemMsg.EVA[0].ox_primary} %</color>";
                if (_oxygenPrimaryPercentageList.Count >= _oxygenPrimaryPercentageCount)
                    _oxygenPrimaryPercentageList.RemoveAt(0);
                _oxygenPrimaryPercentageList.Add((float)telemMsg.EVA[0].ox_primary);
                if (_oxygenPrimaryPercentageWindow_Graph.gameObject.activeInHierarchy)
                {
                    _oxygenPrimaryPercentageWindow_Graph.UpdateValueList(_oxygenPrimaryPercentageList);
                    _oxygenPrimaryPercentageWindow_Graph.ChangeAxisYUnits("%");
                    _oxygenPrimaryPercentageWindow_Graph.UseCustomYScale(true, 0, 100);
                }
                #endregion
                #region Oxygen Primary Pressure
                _oxygenPrimaryPressureTextMainPage.text = $"Pressure: <color=\"green\">{telemMsg.EVA[0].p_o2} psia</color>";
                _oxygenPrimaryPressureTextDetailPage.text = $"Pressure: <color=\"green\">{telemMsg.EVA[0].p_o2} psia</color>";
                if (_oxygenPrimaryPressureList.Count >= _oxygenPrimaryPressureCount)
                    _oxygenPrimaryPressureList.RemoveAt(0);
                _oxygenPrimaryPressureList.Add((float)telemMsg.EVA[0].p_o2);
                if (_oxygenPrimaryPressureWindow_Graph.gameObject.activeInHierarchy)
                {
                    _oxygenPrimaryPressureWindow_Graph.UpdateValueList(_oxygenPrimaryPressureList);
                    _oxygenPrimaryPressureWindow_Graph.ChangeAxisYUnits("psia");
                    _oxygenPrimaryPressureWindow_Graph.UseCustomYScale(false, 0, 18);
                }
                #endregion
                #region Oxygen Primary Flowrate
                _oxygenPrimaryFlowrateTextMainPage.text = $"Flowrate: <color=\"green\">{telemMsg.EVA[0].rate_o2} psi/min</color>";
                _oxygenPrimaryFlowrateTextDetailPage.text = $"Flowrate: <color=\"green\">{telemMsg.EVA[0].rate_o2} psi/min</color>";
                if (_oxygenPrimaryFlowrateList.Count >= _oxygenPrimaryFlowrateCount)
                    _oxygenPrimaryFlowrateList.RemoveAt(0);
                _oxygenPrimaryFlowrateList.Add((float)telemMsg.EVA[0].rate_o2);
                if (_oxygenPrimaryFlowrateWindow_Graph.gameObject.activeInHierarchy)
                {
                    _oxygenPrimaryFlowrateWindow_Graph.UpdateValueList(_oxygenPrimaryFlowrateList);
                    _oxygenPrimaryFlowrateWindow_Graph.ChangeAxisYUnits("psi/min");
                    _oxygenPrimaryFlowrateWindow_Graph.UseCustomYScale(true, 0, 18);
                }
                #endregion
                #region Oxygen Secondary Percentage
                _oxygenSecondaryPercentageTextMainPage.text = $"Percentage Left: <color=\"green\">{telemMsg.EVA[0].ox_secondary} %</color>";
                _oxygenSecondaryPercentageTextDetailPage.text = $"Percentage Left: <color=\"green\">{telemMsg.EVA[0].ox_secondary} %</color>";
                if (_oxygenSecondaryPercentageList.Count >= _oxygenSecondaryPercentageCount)
                    _oxygenSecondaryPercentageList.RemoveAt(0);
                _oxygenSecondaryPercentageList.Add((float)telemMsg.EVA[0].ox_secondary);
                if (_oxygenSecondaryPercentageWindow_Graph.gameObject.activeInHierarchy)
                {
                    _oxygenSecondaryPercentageWindow_Graph.UpdateValueList(_oxygenSecondaryPercentageList);
                    _oxygenSecondaryPercentageWindow_Graph.ChangeAxisYUnits("%");
                    _oxygenSecondaryPercentageWindow_Graph.UseCustomYScale(true, 0, 100);
                }
                #endregion
                #region Oxygen Secondary Pressure
                _oxygenSecondaryPressureTextMainPage.text = $"Pressure: <color=\"green\">{telemMsg.EVA[0].p_sop} psia</color>";
                _oxygenSecondaryPressureTextDetailPage.text = $"Pressure: <color=\"green\">{telemMsg.EVA[0].p_sop} psia</color>";
                if (_oxygenSecondaryPressureList.Count >= _oxygenSecondaryPressureCount)
                    _oxygenSecondaryPressureList.RemoveAt(0);
                _oxygenSecondaryPressureList.Add((float)telemMsg.EVA[0].p_sop);
                if (_oxygenSecondaryPressureWindow_Graph.gameObject.activeInHierarchy)
                {
                    _oxygenSecondaryPressureWindow_Graph.UpdateValueList(_oxygenSecondaryPressureList);
                    _oxygenSecondaryPressureWindow_Graph.ChangeAxisYUnits("psia");
                    _oxygenSecondaryPressureWindow_Graph.UseCustomYScale(false, 0, 18);
                }
                #endregion
                #region Oxygen Secondary Flowrate
                _oxygenSecondaryFlowrateTextMainPage.text = $"Flowrate: <color=\"green\">{telemMsg.EVA[0].rate_sop} psi/min</color>";
                _oxygenSecondaryFlowrateTextDetailPage.text = $"Flowrate: <color=\"green\">{telemMsg.EVA[0].rate_sop} psi/min</color>";
                if (_oxygenSecondaryFlowrateList.Count >= _oxygenSecondaryFlowrateCount)
                    _oxygenSecondaryFlowrateList.RemoveAt(0);
                _oxygenSecondaryFlowrateList.Add((float)telemMsg.EVA[0].rate_sop);
                if (_oxygenSecondaryFlowrateWindow_Graph.gameObject.activeInHierarchy)
                {
                    _oxygenSecondaryFlowrateWindow_Graph.UpdateValueList(_oxygenSecondaryFlowrateList);
                    _oxygenSecondaryFlowrateWindow_Graph.ChangeAxisYUnits("psi/min");
                    _oxygenSecondaryFlowrateWindow_Graph.UseCustomYScale(true, 0, 18);
                }
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
