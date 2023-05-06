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

    /* 128.208.1.212 */
    private string _uri = "localhost";
    public string URI
    {
        get { return $"{URI_PREFIX}{_uri}{PORT}"; }
        private set { _uri = value; }
    }

    private TSSConnection _tss;
    private int _msgCount = 0;

    #region Graphing Background Images
    [SerializeField] GameObject _greenRangePrefab;
    [SerializeField] GameObject _yellowRangePrefab;
    [SerializeField] GameObject _redRangePrefab;
    #endregion
    #region EVA Time Definition
    [Header("EVA Time")]
    [SerializeField] private TMP_Text _evaTimeMainPage;
    [SerializeField] private TMP_Text _evaTimeDetailPage;
    #endregion
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
    [SerializeField] private float _batteryPercentMax = 100;
    [SerializeField] private float _batteryPercentMin = 0;
    [SerializeField] private float _batteryPercentExpectedMax = 100;
    [SerializeField] private float _batteryPercentExpectedMin = 20;
    private float _batteryPercentCautionRangeScale = 0.05f;
    public static event Action<string> OnBatteryPercentWarning;
    public static event Action<string> OnBatteryPercentCaution;
    #endregion
    #region Suit Battery Capacity Definition
    private int _batteryCapacityCount = 7;
    private List<float> _batteryCapacityList = new();
    [Header("Suit Battery Capacity")]
    [SerializeField] private Window_Graph _batteryCapacityWindow_Graph;
    [SerializeField] private TMP_Text _batteryCapacityTextMainPage;
    [SerializeField] private TMP_Text _batteryCapacityTextDetailPage;
    [SerializeField] private float _batteryCapacityMax = 80;
    [SerializeField] private float _batteryCapacityMin = 20;
    [SerializeField] private float _batteryCapacityExpectedMax = 65;
    [SerializeField] private float _batteryCapacityExpectedMin = 40;
    private float _batteryCapacityCautionRangeScale = 0.05f;
    public static event Action<string> OnBatteryCapacityWarning;
    public static event Action<string> OnBatteryCapacityCaution;
    #endregion
    #region Suit Pressure Definition
    private int _suitPressureCount = 7;
    private List<float> _suitPressureList = new();
    [Header("Suit Pressure")]
    [SerializeField] private Window_Graph _suitPressureWindow_Graph;
    [SerializeField] private TMP_Text _suitPressureTextMainPage;
    [SerializeField] private TMP_Text _suitPressureTextDetailPage;
    [SerializeField] private float _suitPressureMax = 6;
    [SerializeField] private float _suitPressureMin = 0;
    [SerializeField] private float _suitPressureExpectedMax = 4.8f;
    [SerializeField] private float _suitPressureExpectedMin = 2.4f;
    private float _suitPressureCautionRangeScale = 0.05f;
    public static event Action<string> OnSuitPressureWarning;
    public static event Action<string> OnSuitPressureCaution;
    #endregion
    #region Suit Fan Speed Definition
    private int _suitFanSpeedCount = 7;
    private List<float> _suitFanSpeedList = new();
    [Header("Suit Fan Speed")]
    [SerializeField] private Window_Graph _suitFanSpeedWindow_Graph;
    [SerializeField] private TMP_Text _suitFanSpeedTextMainPage;
    [SerializeField] private TMP_Text _suitFanSpeedTextDetailPage;
    [SerializeField] private float _suitFanSpeedMax = 65000;
    [SerializeField] private float _suitFanSpeedMin = 25000;
    [SerializeField] private float _suitFanSpeedExpectedMax = 45000;
    [SerializeField] private float _suitFanSpeedExpectedMin = 35000;
    private float _suitFanSpeedCautionRangeScale = 0.05f;
    public static event Action<string> OnSuitFanSpeedWarning;
    public static event Action<string> OnSuitFanSpeedCaution;
    #endregion
    #region Bio Heart Rate Definition
    private int _bioHeartRateCount = 7;
    private List<float> _bioHeartRateList = new();
    [Header("Bio Heart Rate")]
    [SerializeField] private Window_Graph _bioHeartRateWindow_Graph;
    [SerializeField] private TMP_Text _bioHeartRateTextMainPage;
    [SerializeField] private TMP_Text _bioHeartRateTextDetailPage;
    [SerializeField] private float _bioHeartRateMax = 120;
    [SerializeField] private float _bioHeartRateMin = 60;
    [SerializeField] private float _bioHeartRateExpectedMax = 100;
    [SerializeField] private float _bioHeartRateExpectedMin = 80;
    private float _bioHeartRateCautionRangeScale = 0.05f;
    public static event Action<string> OnBioHeartRateWarning;
    public static event Action<string> OnBioHeartRateCaution;
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
    [SerializeField] private float _waterGasPressureMax = 18;
    [SerializeField] private float _waterGasPressureMin = 0;
    [SerializeField] private float _waterGasPressureExpectedMax = 16;
    [SerializeField] private float _waterGasPressureExpectedMin = 14;
    private float _waterGasPressureCautionRangeScale = 0.05f;
    public static event Action<string> OnWaterGasPressureWarning;
    public static event Action<string> OnWaterGasPressureCaution;
    #endregion
    #region Water Liquid Pressure Definition
    private int _waterLiquidPressureCount = 7;
    private List<float> _waterLiquidPressureList = new();
    [Header("Water Liquid Pressure")]
    [SerializeField] private Window_Graph _waterLiquidPressureWindow_Graph;
    [SerializeField] private TMP_Text _waterLiquidPressureTextMainPage;
    [SerializeField] private TMP_Text _waterLiquidPressureTextDetailPage;
    [SerializeField] private float _waterLiquidPressureMax = 18;
    [SerializeField] private float _waterLiquidPressureMin = 0;
    [SerializeField] private float _waterLiquidPressureExpectedMax = 16;
    [SerializeField] private float _waterLiquidPressureExpectedMin = 14;
    private float _waterLiquidPressureCautionRangeScale = 0.05f;
    public static event Action<string> OnWaterLiquidPressureWarning;
    public static event Action<string> OnWaterLiquidPressureCaution;
    #endregion
    #region Env Sub Pressure Definition
    private int _envSubPressureCount = 7;
    private List<float> _envSubPressureList = new();
    [Header("Environment Sub Pressure")]
    [SerializeField] private Window_Graph _envSubPressureWindow_Graph;
    [SerializeField] private TMP_Text _envSubPressureTextMainPage;
    [SerializeField] private TMP_Text _envSubPressureTextDetailPage;
    [SerializeField] private float _envSubPressureMax = 6;
    [SerializeField] private float _envSubPressureMin = 0;
    [SerializeField] private float _envSubPressureExpectedMax = 4.8f;
    [SerializeField] private float _envSubPressureExpectedMin = 2.4f;
    private float _envSubPressureCautionRangeScale = 0.05f;
    public static event Action<string> OnEnvSubPressureWarning;
    public static event Action<string> OnEnvSubPressureCaution;
    #endregion 
    #region Env Temperature Definition
    private int _envTemperatureCount = 7;
    private List<float> _envTemperatureList = new();
    [Header("Environment Temperature")]
    [SerializeField] private Window_Graph _envTemperatureWindow_Graph;
    [SerializeField] private TMP_Text _envTemperatureTextMainPage;
    [SerializeField] private TMP_Text _envTemperatureTextDetailPage;
    [SerializeField] private float _envTemperatureMax = 500;
    [SerializeField] private float _envTemperatureMin = 0;
    [SerializeField] private float _envTemperatureExpectedMax = 500;
    [SerializeField] private float _envTemperatureExpectedMin = 0;
    private float _envTemperatureCautionRangeScale = 0.05f;
    public static event Action<string> OnEnvTemperatureWarning;
    public static event Action<string> OnEnvTemperatureCaution;
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
    [SerializeField] private float _oxygenPrimaryPercentageMax = 100;
    [SerializeField] private float _oxygenPrimaryPercentageMin = 0;
    [SerializeField] private float _oxygenPrimaryPercentageExpectedMax = 100;
    [SerializeField] private float _oxygenPrimaryPercentageExpectedMin = 20;
    private float _oxygenPrimaryPercentageCautionRangeScale = 0.05f;
    public static event Action<string> OnOxygenPrimaryPercentageWarning;
    public static event Action<string> OnOxygenPrimaryPercentageCaution;
    #endregion
    #region Oxygen Primary Pressure Definition
    private int _oxygenPrimaryPressureCount = 7;
    private List<float> _oxygenPrimaryPressureList = new();
    [Header("Oxygen Primary Pressure")]
    [SerializeField] private Window_Graph _oxygenPrimaryPressureWindow_Graph;
    [SerializeField] private TMP_Text _oxygenPrimaryPressureTextMainPage;
    [SerializeField] private TMP_Text _oxygenPrimaryPressureTextDetailPage;
    [SerializeField] private float _oxygenPrimaryPressureMax = 1000;
    [SerializeField] private float _oxygenPrimaryPressureMin = 700;
    [SerializeField] private float _oxygenPrimaryPressureExpectedMax = 950;
    [SerializeField] private float _oxygenPrimaryPressureExpectedMin = 750;
    private float _oxygenPrimaryPressureCautionRangeScale = 0.05f;
    public static event Action<string> OnOxygenPrimaryPressureWarning;
    public static event Action<string> OnOxygenPrimaryPressureCaution;
    #endregion
    #region Oxygen Primary Flowrate Definition
    private int _oxygenPrimaryFlowrateCount = 7;
    private List<float> _oxygenPrimaryFlowrateList = new();
    [Header("Oxygen Primary Flowrate")]
    [SerializeField] private Window_Graph _oxygenPrimaryFlowrateWindow_Graph;
    [SerializeField] private TMP_Text _oxygenPrimaryFlowrateTextMainPage;
    [SerializeField] private TMP_Text _oxygenPrimaryFlowrateTextDetailPage;
    [SerializeField] private float _oxygenPrimaryFlowrateMax = 1.5f;
    [SerializeField] private float _oxygenPrimaryFlowrateMin = 0;
    [SerializeField] private float _oxygenPrimaryFlowrateExpectedMax = 1;
    [SerializeField] private float _oxygenPrimaryFlowrateExpectedMin = 0.5f;
    private float _oxygenPrimaryFlowrateCautionRangeScale = 0.05f;
    public static event Action<string> OnOxygenPrimaryFlowrateWarning;
    public static event Action<string> OnOxygenPrimaryFlowrateCaution;
    #endregion
    #region Oxygen Secondary Percentage Definition
    private int _oxygenSecondaryPercentageCount = 7;
    private List<float> _oxygenSecondaryPercentageList = new();
    [Header("Oxygen Secondary Percentage Left")]
    [SerializeField] private Window_Graph _oxygenSecondaryPercentageWindow_Graph;
    [SerializeField] private TMP_Text _oxygenSecondaryPercentageTextMainPage;
    [SerializeField] private TMP_Text _oxygenSecondaryPercentageTextDetailPage;
    [SerializeField] private float _oxygenSecondaryPercentageMax = 100;
    [SerializeField] private float _oxygenSecondaryPercentageMin = 0;
    [SerializeField] private float _oxygenSecondaryPercentageExpectedMax = 100;
    [SerializeField] private float _oxygenSecondaryPercentageExpectedMin = 20;
    private float _oxygenSecondaryPercentageCautionRangeScale = 0.05f;
    public static event Action<string> OnOxygenSecondaryPercentageWarning;
    public static event Action<string> OnOxygenSecondaryPercentageCaution;
    #endregion
    #region Oxygen Secondary Pressure Definition
    private int _oxygenSecondaryPressureCount = 7;
    private List<float> _oxygenSecondaryPressureList = new();
    [Header("Oxygen Secondary Pressure")]
    [SerializeField] private Window_Graph _oxygenSecondaryPressureWindow_Graph;
    [SerializeField] private TMP_Text _oxygenSecondaryPressureTextMainPage;
    [SerializeField] private TMP_Text _oxygenSecondaryPressureTextDetailPage;
    [SerializeField] private float _oxygenSecondaryPressureMax = 1000;
    [SerializeField] private float _oxygenSecondaryPressureMin = 700;
    [SerializeField] private float _oxygenSecondaryPressureExpectedMax = 950;
    [SerializeField] private float _oxygenSecondaryPressureExpectedMin = 750;
    private float _oxygenSecondaryPressureCautionRangeScale = 0.05f;
    public static event Action<string> OnOxygenSecondaryPressureWarning;
    public static event Action<string> OnOxygenSecondaryPressureCaution;
    #endregion
    #region Oxygen Secondary Flowrate Definition
    private int _oxygenSecondaryFlowrateCount = 7;
    private List<float> _oxygenSecondaryFlowrateList = new();
    [Header("Oxygen Secondary Flowrate")]
    [SerializeField] private Window_Graph _oxygenSecondaryFlowrateWindow_Graph;
    [SerializeField] private TMP_Text _oxygenSecondaryFlowrateTextMainPage;
    [SerializeField] private TMP_Text _oxygenSecondaryFlowrateTextDetailPage;
    [SerializeField] private float _oxygenSecondaryFlowrateMax = 1.5f;
    [SerializeField] private float _oxygenSecondaryFlowrateMin = 0;
    [SerializeField] private float _oxygenSecondaryFlowrateExpectedMax = 1;
    [SerializeField] private float _oxygenSecondaryFlowrateExpectedMin = 0.5f;
    private float _oxygenSecondaryFlowrateCautionRangeScale = 0.05f;
    public static event Action<string> OnOxygenSecondaryFlowrateWarning;
    public static event Action<string> OnOxygenSecondaryFlowrateCaution;
    #endregion

    public TsErrorStateEnum TsErrorState { get; private set; } = TsErrorStateEnum.Normal;

    private void Start()
    {
        _tss = new TSSConnection();

        CreateColorRangeBackgrounds(_batteryPercentWindow_Graph, _batteryPercentMax, _batteryPercentMin,
            _batteryPercentExpectedMax, _batteryPercentExpectedMin, _batteryPercentCautionRangeScale);
        CreateColorRangeBackgrounds(_batteryCapacityWindow_Graph, _batteryCapacityMax, _batteryCapacityMin,
            _batteryCapacityExpectedMax, _batteryCapacityExpectedMin, _batteryCapacityCautionRangeScale);
        CreateColorRangeBackgrounds(_suitPressureWindow_Graph, _suitPressureMax, _suitPressureMin,
            _suitPressureExpectedMax, _suitPressureExpectedMin, _suitPressureCautionRangeScale);
        CreateColorRangeBackgrounds(_suitFanSpeedWindow_Graph, _suitFanSpeedMax, _suitFanSpeedMin,
            _suitFanSpeedExpectedMax, _suitFanSpeedExpectedMin, _suitFanSpeedCautionRangeScale);

        CreateColorRangeBackgrounds(_bioHeartRateWindow_Graph, _bioHeartRateMax, _bioHeartRateMin,
            _bioHeartRateExpectedMax, _bioHeartRateExpectedMin, _bioHeartRateCautionRangeScale);

        CreateColorRangeBackgrounds(_waterGasPressureWindow_Graph, _waterGasPressureMax, _waterGasPressureMin,
            _waterGasPressureExpectedMax, _waterGasPressureExpectedMin, _waterGasPressureCautionRangeScale);
        CreateColorRangeBackgrounds(_waterLiquidPressureWindow_Graph, _waterLiquidPressureMax, _waterLiquidPressureMin,
             _waterLiquidPressureExpectedMax, _waterLiquidPressureExpectedMin, _waterLiquidPressureCautionRangeScale);

        CreateColorRangeBackgrounds(_envSubPressureWindow_Graph, _envSubPressureMax, _envSubPressureMin,
             _envSubPressureExpectedMax, _envSubPressureExpectedMin, _envSubPressureCautionRangeScale);
        CreateColorRangeBackgrounds(_envTemperatureWindow_Graph, _envTemperatureMax, _envTemperatureMin,
             _envTemperatureExpectedMax, _envTemperatureExpectedMin, _envTemperatureCautionRangeScale);

        CreateColorRangeBackgrounds(_oxygenPrimaryPercentageWindow_Graph, _oxygenPrimaryPercentageMax, _oxygenPrimaryPercentageMin,
             _oxygenPrimaryPercentageExpectedMax, _oxygenPrimaryPercentageExpectedMin, _oxygenPrimaryPercentageCautionRangeScale);
        CreateColorRangeBackgrounds(_oxygenPrimaryPressureWindow_Graph, _oxygenPrimaryPressureMax, _oxygenPrimaryPressureMin,
             _oxygenPrimaryPressureExpectedMax, _oxygenPrimaryPressureExpectedMin, _oxygenPrimaryPressureCautionRangeScale);
        CreateColorRangeBackgrounds(_oxygenPrimaryFlowrateWindow_Graph,_oxygenPrimaryFlowrateMax, _oxygenPrimaryFlowrateMin,
             _oxygenPrimaryFlowrateExpectedMax, _oxygenPrimaryFlowrateExpectedMin, _oxygenPrimaryFlowrateCautionRangeScale);
        CreateColorRangeBackgrounds(_oxygenSecondaryPercentageWindow_Graph, _oxygenSecondaryPercentageMax, _oxygenSecondaryPercentageMin,
             _oxygenSecondaryPercentageExpectedMax, _oxygenSecondaryPercentageExpectedMin, _oxygenSecondaryPercentageCautionRangeScale);
        CreateColorRangeBackgrounds(_oxygenSecondaryPressureWindow_Graph, _oxygenSecondaryPressureMax, _oxygenSecondaryPressureMin,
            _oxygenSecondaryPressureExpectedMax, _oxygenSecondaryPressureExpectedMin, _oxygenSecondaryPressureCautionRangeScale);
        CreateColorRangeBackgrounds(_oxygenSecondaryFlowrateWindow_Graph, _oxygenSecondaryFlowrateMax, _oxygenSecondaryFlowrateMin,
            _oxygenSecondaryFlowrateExpectedMax, _oxygenSecondaryFlowrateExpectedMin, _oxygenSecondaryFlowrateCautionRangeScale);
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
            Debug.Log(_msgCount);
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
                TsErrorState = TsErrorStateEnum.Normal;
                #region EVA Time
                _evaTimeMainPage.text = $"EVA Time: <color=\"green\">{telemMsg.EVA[0].timer}</color>";
                _evaTimeDetailPage.text = $"EVA Time: <color=\"green\">{telemMsg.EVA[0].timer}</color>";
                #endregion
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
                    _batteryPercentWindow_Graph.UseIntY(" %");
                    _batteryPercentWindow_Graph.UseCustomYScale(true, _batteryPercentMin, _batteryPercentMax);
                    _batteryPercentWindow_Graph.UpdateValueList(_batteryPercentList);
                }
                float cautionRange = (_batteryPercentExpectedMax - _batteryPercentExpectedMin) * _batteryPercentCautionRangeScale;
                if (telemMsg.EVA[0].batteryPercent < _batteryPercentExpectedMin)
                {
                    TsErrorState = TsErrorStateEnum.Warning;
                    _batteryPercentTextMainPage.text = $"Percentage Left: <color=\"red\">{Math.Round(telemMsg.EVA[0].batteryPercent)}%</color>";
                    _batteryPercentTextDetailPage.text = $"Percentage Left: <color=\"red\">{Math.Round(telemMsg.EVA[0].batteryPercent)}%</color>";
                    OnBatteryPercentWarning?.Invoke("Battery Percentage critically low!");
                }
                else if (telemMsg.EVA[0].batteryPercent < cautionRange + _batteryPercentExpectedMin)
                {
                    if (TsErrorState == TsErrorStateEnum.Normal)
                        TsErrorState = TsErrorStateEnum.Caution;
                    _batteryPercentTextMainPage.text = $"Percentage Left: <color=\"yellow\">{Math.Round(telemMsg.EVA[0].batteryPercent)}%</color>";
                    _batteryPercentTextDetailPage.text = $"Percentage Left: <color=\"yellow\">{Math.Round(telemMsg.EVA[0].batteryPercent)}%</color>";
                    OnBatteryPercentCaution?.Invoke($"Battery Percentage approaching {(int)cautionRange + _batteryPercentExpectedMin}%.");
                }
                if (telemMsg.EVA[0].batteryPercent > _batteryPercentExpectedMax)
                {
                    TsErrorState = TsErrorStateEnum.Warning;
                    _batteryPercentTextMainPage.text = $"Percentage Left: <color=\"red\">{Math.Round(telemMsg.EVA[0].batteryPercent)}%</color>";
                    _batteryPercentTextDetailPage.text = $"Percentage Left: <color=\"red\">{Math.Round(telemMsg.EVA[0].batteryPercent)}%</color>";
                    OnBatteryPercentWarning?.Invoke("Battery Percentage invalid data received!");
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
                    _batteryCapacityWindow_Graph.UseIntY(" amp-hr");
                    _batteryCapacityWindow_Graph.UseCustomYScale(true, _batteryCapacityMin, _batteryCapacityMax);
                    _batteryCapacityWindow_Graph.UpdateValueList(_batteryCapacityList);
                }
                cautionRange = (_batteryCapacityExpectedMax - _batteryCapacityExpectedMin) * _batteryCapacityCautionRangeScale;
                if (telemMsg.EVA[0].cap_battery < _batteryCapacityExpectedMin)
                {
                    TsErrorState = TsErrorStateEnum.Warning;
                    _batteryCapacityTextMainPage.text = $"Capacity: <color=\"red\">{telemMsg.EVA[0].cap_battery} amp-hr</color>";
                    _batteryCapacityTextDetailPage.text = $"Capacity: <color=\"red\">{telemMsg.EVA[0].cap_battery} amp-hr</color>";
                    OnBatteryCapacityWarning?.Invoke("Battery Capacity critically low!");
                }
                else if (telemMsg.EVA[0].cap_battery < cautionRange + _batteryCapacityExpectedMin)
                {
                    if (TsErrorState == TsErrorStateEnum.Normal)
                        TsErrorState = TsErrorStateEnum.Caution;
                    _batteryCapacityTextMainPage.text = $"Capacity: <color=\"yellow\">{telemMsg.EVA[0].cap_battery} amp-hr</color>";
                    _batteryCapacityTextDetailPage.text = $"Capacity: <color=\"yellow\">{telemMsg.EVA[0].cap_battery} amp-hr</color>";
                    OnBatteryCapacityCaution?.Invoke($"Battery Capacity approaching {(int)cautionRange + _batteryCapacityExpectedMin} amp-hr.");
                }
                if (telemMsg.EVA[0].cap_battery > _batteryCapacityExpectedMax)
                {
                    TsErrorState = TsErrorStateEnum.Warning;
                    _batteryCapacityTextMainPage.text = $"Capacity: <color=\"red\">{telemMsg.EVA[0].cap_battery} amp-hr</color>";
                    _batteryCapacityTextDetailPage.text = $"Capacity: <color=\"red\">{telemMsg.EVA[0].cap_battery} amp-hr</color>";
                    OnBatteryCapacityWarning?.Invoke("Battery Capacity critically high!");
                }
                else if (telemMsg.EVA[0].cap_battery > -cautionRange + _batteryCapacityExpectedMax)
                {
                    if (TsErrorState == TsErrorStateEnum.Normal)
                        TsErrorState = TsErrorStateEnum.Caution;
                    _batteryCapacityTextMainPage.text = $"Capacity: <color=\"yellow\">{telemMsg.EVA[0].cap_battery} amp-hr</color>";
                    _batteryCapacityTextDetailPage.text = $"Capacity: <color=\"yellow\">{telemMsg.EVA[0].cap_battery} amp-hr</color>";
                    OnBatteryCapacityCaution?.Invoke($"Battery Capacity approaching {-(int)cautionRange + _batteryCapacityExpectedMax} amp-hr.");
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
                    _suitPressureWindow_Graph.UseFloatY(" psia");
                    _suitPressureWindow_Graph.UseCustomYScale(true, _suitPressureMin, _suitPressureMax);
                    _suitPressureWindow_Graph.UpdateValueList(_suitPressureList);
                }
                cautionRange = (_suitPressureExpectedMax - _suitPressureExpectedMin) * _suitPressureCautionRangeScale;
                if (telemMsg.EVA[0].p_suit < _suitPressureExpectedMin)
                {
                    _suitPressureTextMainPage.text = $"Pressure: <color=\"red\">{telemMsg.EVA[0].p_suit} psia</color>";
                    _suitPressureTextDetailPage.text = $"Pressure: <color=\"red\">{telemMsg.EVA[0].p_suit} psia</color>";
                    OnSuitPressureWarning?.Invoke("Suit Pressure critically low!");
                }
                else if (telemMsg.EVA[0].p_suit < cautionRange + _suitPressureExpectedMin)
                {
                    _suitPressureTextMainPage.text = $"Pressure: <color=\"yellow\">{telemMsg.EVA[0].p_suit} psia</color>";
                    _suitPressureTextDetailPage.text = $"Pressure: <color=\"yellow\">{telemMsg.EVA[0].p_suit} psia</color>";
                    OnSuitPressureCaution?.Invoke($"Suit Pressure approaching {(cautionRange + _suitPressureExpectedMin):F2} psia.");
                }
                if (telemMsg.EVA[0].p_suit > _suitPressureExpectedMax)
                {
                    _suitPressureTextMainPage.text = $"Pressure: <color=\"red\">{telemMsg.EVA[0].p_suit} psia</color>";
                    _suitPressureTextDetailPage.text = $"Pressure: <color=\"red\">{telemMsg.EVA[0].p_suit} psia</color>";
                    OnSuitPressureWarning?.Invoke("Suit Pressure critically high!");
                }
                else if (telemMsg.EVA[0].p_suit > -cautionRange + _suitPressureExpectedMax)
                {
                    _suitPressureTextMainPage.text = $"Pressure: <color=\"yellow\">{telemMsg.EVA[0].p_suit} psia</color>";
                    _suitPressureTextDetailPage.text = $"Pressure: <color=\"yellow\">{telemMsg.EVA[0].p_suit} psia</color>";
                    OnSuitPressureCaution?.Invoke($"Suit Pressure approaching {(-cautionRange + _suitPressureExpectedMax):F2} psia.");
                }
                #endregion
                #region Suit Fan Speed
                _suitFanSpeedTextMainPage.text = $"Fan Speed: <color=\"green\">{telemMsg.EVA[0].v_fan} rpm</color>";
                _suitFanSpeedTextDetailPage.text = $"Fan Speed: <color=\"green\">{telemMsg.EVA[0].v_fan} rpm</color>";
                if (_suitFanSpeedList.Count >= _suitFanSpeedCount)
                    _suitFanSpeedList.RemoveAt(0);
                _suitFanSpeedList.Add((float)telemMsg.EVA[0].v_fan / 1000);
                if (_suitFanSpeedWindow_Graph.gameObject.activeInHierarchy)
                {
                    _suitFanSpeedWindow_Graph.UseIntY("k rpm");
                    _suitFanSpeedWindow_Graph.UseCustomYScale(true, _suitFanSpeedMin / 1000, _suitFanSpeedMax / 1000);
                    _suitFanSpeedWindow_Graph.UpdateValueList(_suitFanSpeedList);
                }
                cautionRange = (_suitFanSpeedExpectedMax - _suitFanSpeedExpectedMin) * _suitFanSpeedCautionRangeScale;
                if (telemMsg.EVA[0].v_fan < _suitFanSpeedExpectedMin)
                {
                    _suitFanSpeedTextMainPage.text = $"Fan Speed: <color=\"red\">{telemMsg.EVA[0].v_fan} rpm</color>";
                    _suitFanSpeedTextDetailPage.text = $"Fan Speed: <color=\"red\">{telemMsg.EVA[0].v_fan} rpm</color>";
                    OnSuitFanSpeedWarning?.Invoke("Suit Fan Speed critically low!");
                }
                else if (telemMsg.EVA[0].v_fan < cautionRange + _suitFanSpeedExpectedMin)
                {
                    _suitFanSpeedTextMainPage.text = $"Fan Speed: <color=\"yellow\">{telemMsg.EVA[0].v_fan} rpm</color>";
                    _suitFanSpeedTextDetailPage.text = $"Fan Speed: <color=\"yellow\">{telemMsg.EVA[0].v_fan} rpm</color>";
                    OnSuitFanSpeedCaution?.Invoke($"Suit Fan Speed approaching {(int)(cautionRange + _suitFanSpeedExpectedMin)} rpm.");
                }
                if (telemMsg.EVA[0].v_fan > _suitFanSpeedExpectedMax)
                {
                    _suitFanSpeedTextMainPage.text = $"Fan Speed: <color=\"red\">{telemMsg.EVA[0].v_fan} rpm</color>";
                    _suitFanSpeedTextDetailPage.text = $"Fan Speed: <color=\"red\">{telemMsg.EVA[0].v_fan} rpm</color>";
                    OnSuitFanSpeedWarning?.Invoke("Suit Fan Speed critically high!");
                }
                else if (telemMsg.EVA[0].v_fan > -cautionRange + _suitFanSpeedExpectedMax)
                {
                    _suitFanSpeedTextMainPage.text = $"Fan Speed: <color=\"yellow\">{telemMsg.EVA[0].v_fan} rpm</color>";
                    _suitFanSpeedTextDetailPage.text = $"Fan Speed: <color=\"yellow\">{telemMsg.EVA[0].v_fan} rpm</color>";
                    OnSuitFanSpeedCaution?.Invoke($"Suit Fan Speed approaching {(int)(-cautionRange + _suitFanSpeedExpectedMax)} rpm.");
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
                    _bioHeartRateWindow_Graph.UseIntY(" bpm");
                    _bioHeartRateWindow_Graph.UseCustomYScale(true, _bioHeartRateMin, _bioHeartRateMax);
                    _bioHeartRateWindow_Graph.UpdateValueList(_bioHeartRateList);
                }
                cautionRange = (_bioHeartRateExpectedMax - _bioHeartRateExpectedMin) * _bioHeartRateCautionRangeScale;
                if (telemMsg.EVA[0].heart_bpm < _bioHeartRateExpectedMin)
                {
                    _bioHeartRateTextMainPage.text = $"Heart Rates: <color=\"red\">{telemMsg.EVA[0].heart_bpm} bpm</color>";
                    _bioHeartRateTextDetailPage.text = $"Heart Rates: <color=\"red\">{telemMsg.EVA[0].heart_bpm} bpm</color>";
                    OnBioHeartRateWarning?.Invoke("Heart Rate critically low!");
                }
                else if (telemMsg.EVA[0].heart_bpm < cautionRange + _bioHeartRateExpectedMin)
                {
                    _bioHeartRateTextMainPage.text = $"Heart Rates: <color=\"yellow\">{telemMsg.EVA[0].heart_bpm} bpm</color>";
                    _bioHeartRateTextDetailPage.text = $"Heart Rates: <color=\"yellow\">{telemMsg.EVA[0].heart_bpm} bpm</color>";
                    OnBioHeartRateCaution?.Invoke($"Heart Rate approaching {(int)(cautionRange + _bioHeartRateExpectedMin)} bpm.");
                }
                if (telemMsg.EVA[0].heart_bpm > _bioHeartRateExpectedMax)
                {
                    _bioHeartRateTextMainPage.text = $"Heart Rates: <color=\"red\">{telemMsg.EVA[0].heart_bpm} bpm</color>";
                    _bioHeartRateTextDetailPage.text = $"Heart Rates: <color=\"red\">{telemMsg.EVA[0].heart_bpm} bpm</color>";
                    OnBioHeartRateWarning?.Invoke("Heart Rate critically high!");
                }
                else if (telemMsg.EVA[0].heart_bpm > -cautionRange + _bioHeartRateExpectedMax)
                {
                    _bioHeartRateTextMainPage.text = $"Heart Rates: <color=\"yellow\">{telemMsg.EVA[0].heart_bpm} bpm</color>";
                    _bioHeartRateTextDetailPage.text = $"Heart Rates: <color=\"yellow\">{telemMsg.EVA[0].heart_bpm} bpm</color>";
                    OnBioHeartRateCaution?.Invoke($"Heart Rate approaching {(int)(-cautionRange + _bioHeartRateExpectedMax)} bpm.");
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
                    _waterGasPressureWindow_Graph.UseIntY(" psia");
                    _waterGasPressureWindow_Graph.UseCustomYScale(true, _waterGasPressureMin, _waterGasPressureMax);
                    _waterGasPressureWindow_Graph.UpdateValueList(_waterGasPressureList);
                }
                cautionRange = (_waterGasPressureExpectedMax - _waterGasPressureExpectedMin) * _waterGasPressureCautionRangeScale;
                if (telemMsg.EVA[0].p_h2o_g < _waterGasPressureExpectedMin)
                {
                    _waterGasPressureTextMainPage.text = $"Gas Pressure: <color=\"red\">{telemMsg.EVA[0].p_h2o_g} psia</color>";
                    _waterGasPressureTextDetailPage.text = $"Gas Pressure: <color=\"red\">{telemMsg.EVA[0].p_h2o_g} psia</color>";
                    OnWaterGasPressureWarning?.Invoke("Water Gas Pressure critically low!");
                }
                else if (telemMsg.EVA[0].p_h2o_g < cautionRange + _waterGasPressureExpectedMin)
                {
                    _waterGasPressureTextMainPage.text = $"Gas Pressure: <color=\"yellow\">{telemMsg.EVA[0].p_h2o_g} psia</color>";
                    _waterGasPressureTextDetailPage.text = $"Gas Pressure: <color=\"yellow\">{telemMsg.EVA[0].p_h2o_g} psia</color>";
                    OnWaterGasPressureCaution?.Invoke($"Water Gas Pressure approaching {(int)(cautionRange + _waterGasPressureExpectedMin)} psia.");
                }
                if (telemMsg.EVA[0].p_h2o_g > _waterGasPressureExpectedMax)
                {
                    _waterGasPressureTextMainPage.text = $"Gas Pressure: <color=\"red\">{telemMsg.EVA[0].p_h2o_g} psia</color>";
                    _waterGasPressureTextDetailPage.text = $"Gas Pressure: <color=\"red\">{telemMsg.EVA[0].p_h2o_g} psia</color>";
                    OnWaterGasPressureWarning?.Invoke("Water Gas Pressure critically high!");
                }
                else if (telemMsg.EVA[0].p_h2o_g > -cautionRange + _waterGasPressureExpectedMax)
                {
                    _waterGasPressureTextMainPage.text = $"Gas Pressure: <color=\"yellow\">{telemMsg.EVA[0].p_h2o_g} psia</color>";
                    _waterGasPressureTextDetailPage.text = $"Gas Pressure: <color=\"yellow\">{telemMsg.EVA[0].p_h2o_g} psia</color>";
                    OnWaterGasPressureCaution?.Invoke($"Water Gas Pressure approaching {(int)(-cautionRange + _waterGasPressureExpectedMax)} psia.");
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
                    _waterLiquidPressureWindow_Graph.UseIntY(" psia");
                    _waterLiquidPressureWindow_Graph.UseCustomYScale(true, _waterLiquidPressureMin, _waterLiquidPressureMax);
                    _waterLiquidPressureWindow_Graph.UpdateValueList(_waterLiquidPressureList);
                }
                cautionRange = (_waterLiquidPressureExpectedMax - _waterLiquidPressureExpectedMin) * _waterLiquidPressureCautionRangeScale;
                if (telemMsg.EVA[0].p_h2o_l < _waterLiquidPressureExpectedMin)
                {
                    _waterLiquidPressureTextMainPage.text = $"Liquid Pressure: <color=\"red\">{telemMsg.EVA[0].p_h2o_l} psia</color>";
                    _waterLiquidPressureTextDetailPage.text = $"Liquid Pressure: <color=\"red\">{telemMsg.EVA[0].p_h2o_l} psia</color>";
                    OnWaterLiquidPressureWarning?.Invoke("Water Liquid Pressure critically low!");
                }
                else if (telemMsg.EVA[0].p_h2o_l < cautionRange + _waterLiquidPressureExpectedMin)
                {
                    _waterLiquidPressureTextMainPage.text = $"Liquid Pressure: <color=\"yellow\">{telemMsg.EVA[0].p_h2o_l} psia</color>";
                    _waterLiquidPressureTextDetailPage.text = $"Liquid Pressure: <color=\"yellow\">{telemMsg.EVA[0].p_h2o_l} psia</color>";
                    OnWaterLiquidPressureCaution?.Invoke($"Water Liquid Pressure approaching {(int)(cautionRange + _waterLiquidPressureExpectedMin)} psia.");
                }
                if (telemMsg.EVA[0].p_h2o_l > _waterLiquidPressureExpectedMax)
                {
                    _waterLiquidPressureTextMainPage.text = $"Liquid Pressure: <color=\"red\">{telemMsg.EVA[0].p_h2o_l} psia</color>";
                    _waterLiquidPressureTextDetailPage.text = $"Liquid Pressure: <color=\"red\">{telemMsg.EVA[0].p_h2o_l} psia</color>";
                    OnWaterLiquidPressureWarning?.Invoke("Water Liquid Pressure critically high!");
                }
                else if (telemMsg.EVA[0].p_h2o_l > -cautionRange + _waterLiquidPressureExpectedMax)
                {
                    _waterLiquidPressureTextMainPage.text = $"Liquid Pressure: <color=\"yellow\">{telemMsg.EVA[0].p_h2o_l} psia</color>";
                    _waterLiquidPressureTextDetailPage.text = $"Liquid Pressure: <color=\"yellow\">{telemMsg.EVA[0].p_h2o_l} psia</color>";
                    OnWaterLiquidPressureCaution?.Invoke($"Water Liquid Pressure approaching {(int)(-cautionRange + _waterLiquidPressureExpectedMax)} psia.");
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
                    _envSubPressureWindow_Graph.UseFloatY(" psia");
                    _envSubPressureWindow_Graph.UseCustomYScale(true, _envSubPressureMin, _envSubPressureMax);
                    _envSubPressureWindow_Graph.UpdateValueList(_envSubPressureList);
                }
                cautionRange = (_envSubPressureExpectedMax - _envSubPressureExpectedMin) * _envSubPressureCautionRangeScale;
                if (telemMsg.EVA[0].p_sub < _envSubPressureExpectedMin)
                {
                    _envSubPressureTextMainPage.text = $"SUB Pressure: <color=\"red\">{telemMsg.EVA[0].p_sub} psia</color>";
                    _envSubPressureTextDetailPage.text = $"SUB Pressure: <color=\"red\">{telemMsg.EVA[0].p_sub} psia</color>";
                    OnEnvSubPressureWarning?.Invoke("Sub Pressure critically low!");
                }
                else if (telemMsg.EVA[0].p_sub < cautionRange + _envSubPressureExpectedMin)
                {
                    _envSubPressureTextMainPage.text = $"SUB Pressure: <color=\"yellow\">{telemMsg.EVA[0].p_sub} psia</color>";
                    _envSubPressureTextDetailPage.text = $"SUB Pressure: <color=\"yellow\">{telemMsg.EVA[0].p_sub} psia</color>";
                    OnEnvSubPressureCaution?.Invoke($"Sub Pressure approaching {(cautionRange + _envSubPressureExpectedMin):F2} psia.");
                }
                if (telemMsg.EVA[0].p_sub > _envSubPressureExpectedMax)
                {
                    _envSubPressureTextMainPage.text = $"SUB Pressure: <color=\"red\">{telemMsg.EVA[0].p_sub} psia</color>";
                    _envSubPressureTextDetailPage.text = $"SUB Pressure: <color=\"red\">{telemMsg.EVA[0].p_sub} psia</color>";
                    OnEnvSubPressureWarning?.Invoke("Sub Pressure critically high!");
                }
                else if (telemMsg.EVA[0].p_sub > -cautionRange + _envSubPressureExpectedMax)
                {
                    _envSubPressureTextMainPage.text = $"SUB Pressure: <color=\"yellow\">{telemMsg.EVA[0].p_sub} psia</color>";
                    _envSubPressureTextDetailPage.text = $"SUB Pressure: <color=\"yellow\">{telemMsg.EVA[0].p_sub} psia</color>";
                    OnEnvSubPressureCaution?.Invoke($"Sub Pressure approaching {(-cautionRange + _envSubPressureExpectedMax):F2} psia.");
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
                    _envTemperatureWindow_Graph.UseIntY(" K");
                    _envTemperatureWindow_Graph.UseCustomYScale(true, _envTemperatureMin, _envTemperatureMax);
                    _envTemperatureWindow_Graph.UpdateValueList(_envTemperatureList);
                }
                cautionRange = (_envTemperatureExpectedMax - _envTemperatureExpectedMin) * _envTemperatureCautionRangeScale;
                if (telemMsg.EVA[0].t_sub < _envTemperatureExpectedMin)
                {
                    _envTemperatureTextMainPage.text = $"Temperature: <color=\"red\">{telemMsg.EVA[0].t_sub} K</color>";
                    _envTemperatureTextDetailPage.text = $"SUB Pressure: <color=\"red\">{telemMsg.EVA[0].t_sub} K</color>";
                    OnEnvTemperatureWarning?.Invoke("Environment Temperature critically low!");
                }
                else if (telemMsg.EVA[0].t_sub < cautionRange + _envTemperatureExpectedMin)
                {
                    _envTemperatureTextMainPage.text = $"Temperature: <color=\"yellow\">{telemMsg.EVA[0].t_sub} K</color>";
                    _envTemperatureTextDetailPage.text = $"SUB Pressure: <color=\"yellow\">{telemMsg.EVA[0].t_sub} K</color>";
                    OnEnvTemperatureCaution?.Invoke($"Environment Temperature approaching {(int)(cautionRange + _envTemperatureExpectedMin)} K.");
                }
                if (telemMsg.EVA[0].t_sub > _envTemperatureExpectedMax)
                {
                    _envTemperatureTextMainPage.text = $"Temperature: <color=\"red\">{telemMsg.EVA[0].t_sub} K</color>";
                    _envTemperatureTextDetailPage.text = $"SUB Pressure: <color=\"red\">{telemMsg.EVA[0].t_sub} K</color>";
                    OnEnvTemperatureWarning?.Invoke("Environment Temperature critically high!");
                }
                else if (telemMsg.EVA[0].t_sub > -cautionRange + _envTemperatureExpectedMax)
                {
                    _envTemperatureTextMainPage.text = $"Temperature: <color=\"yellow\">{telemMsg.EVA[0].t_sub} K</color>";
                    _envTemperatureTextDetailPage.text = $"SUB Pressure: <color=\"yellow\">{telemMsg.EVA[0].t_sub} K</color>";
                    OnEnvTemperatureCaution?.Invoke($"Environment Temperature approaching {(int)(-cautionRange + _envTemperatureExpectedMax)} K.");
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
                    _oxygenPrimaryPercentageWindow_Graph.UseIntY(" %");
                    _oxygenPrimaryPercentageWindow_Graph.UseCustomYScale(true, _oxygenPrimaryPercentageMin, _oxygenPrimaryPercentageMax);
                    _oxygenPrimaryPercentageWindow_Graph.UpdateValueList(_oxygenPrimaryPercentageList);
                }
                cautionRange = (_oxygenPrimaryPercentageExpectedMax - _oxygenPrimaryPercentageExpectedMin) * _oxygenPrimaryPercentageCautionRangeScale;
                if (telemMsg.EVA[0].ox_primary < _oxygenPrimaryPercentageExpectedMin)
                {
                    _oxygenPrimaryPercentageTextMainPage.text = $"Percentage Left: <color=\"red\">{telemMsg.EVA[0].ox_primary} %</color>";
                    _oxygenPrimaryPercentageTextDetailPage.text = $"Percentage Left: <color=\"red\">{telemMsg.EVA[0].ox_primary} %</color>";
                    OnOxygenPrimaryPercentageWarning?.Invoke("Primary Oxygen Percentage critically low!");
                }
                else if (telemMsg.EVA[0].ox_primary < cautionRange + _oxygenPrimaryPercentageExpectedMin && _oxygenPrimaryPercentageExpectedMin > (_oxygenPrimaryPercentageMin + 1e-4))
                {
                    _oxygenPrimaryPercentageTextMainPage.text = $"Percentage Left: <color=\"yellow\">{telemMsg.EVA[0].ox_primary} %</color>";
                    _oxygenPrimaryPercentageTextDetailPage.text = $"Percentage Left: <color=\"yellow\">{telemMsg.EVA[0].ox_primary} %</color>";
                    OnOxygenPrimaryPercentageCaution?.Invoke($"Primary Oxygen Percentage approaching {(int)(cautionRange + _oxygenPrimaryPercentageExpectedMin)} %.");
                }
                if (telemMsg.EVA[0].ox_primary > _oxygenPrimaryPercentageExpectedMax)
                {
                    _oxygenPrimaryPercentageTextMainPage.text = $"Percentage Left: <color=\"red\">{telemMsg.EVA[0].ox_primary} %</color>";
                    _oxygenPrimaryPercentageTextDetailPage.text = $"Percentage Left: <color=\"red\">{telemMsg.EVA[0].ox_primary} %</color>";
                    OnOxygenPrimaryPercentageWarning?.Invoke("Primary Oxygen Percentage critically high!");
                }
                else if (telemMsg.EVA[0].ox_primary > -cautionRange + _oxygenPrimaryPercentageExpectedMax && _oxygenPrimaryPercentageExpectedMax < (_oxygenPrimaryPercentageMax - 1e-4))
                {
                    _oxygenPrimaryPercentageTextMainPage.text = $"Percentage Left: <color=\"yellow\">{telemMsg.EVA[0].ox_primary} %</color>";
                    _oxygenPrimaryPercentageTextDetailPage.text = $"Percentage Left: <color=\"yellow\">{telemMsg.EVA[0].ox_primary} %</color>";
                    OnOxygenPrimaryPercentageCaution?.Invoke($"Primary Oxygen Percentage approaching {(int)(-cautionRange + _oxygenPrimaryPercentageExpectedMax)} %.");
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
                    _oxygenPrimaryPressureWindow_Graph.UseIntY(" psia");
                    _oxygenPrimaryPressureWindow_Graph.UseCustomYScale(true, _oxygenPrimaryPressureMin, _oxygenPrimaryPressureMax);
                    _oxygenPrimaryPressureWindow_Graph.UpdateValueList(_oxygenPrimaryPressureList);
                }
                cautionRange = (_oxygenPrimaryPressureExpectedMax - _oxygenPrimaryPressureExpectedMin) * _oxygenPrimaryPressureCautionRangeScale;
                if (telemMsg.EVA[0].p_o2 < _oxygenPrimaryPressureExpectedMin)
                {
                    _oxygenPrimaryPressureTextMainPage.text = $"Pressure: <color=\"red\">{telemMsg.EVA[0].p_o2} psia</color>";
                    _oxygenPrimaryPressureTextDetailPage.text = $"Pressure: <color=\"red\">{telemMsg.EVA[0].p_o2} psia</color>";
                    OnOxygenPrimaryPressureWarning?.Invoke("Primary Oxygen Pressure critically low!");
                }
                else if (telemMsg.EVA[0].p_o2 < cautionRange + _oxygenPrimaryPressureExpectedMin)
                {
                    _oxygenPrimaryPressureTextMainPage.text = $"Pressure: <color=\"yellow\">{telemMsg.EVA[0].p_o2} psia</color>";
                    _oxygenPrimaryPressureTextDetailPage.text = $"Pressure: <color=\"yellow\">{telemMsg.EVA[0].p_o2} psia</color>";
                    OnOxygenPrimaryPressureCaution?.Invoke($"Primary Oxygen Pressure approaching {(int)(cautionRange + _oxygenPrimaryPressureExpectedMin)} psia.");
                }
                if (telemMsg.EVA[0].p_o2 > _oxygenPrimaryPressureExpectedMax)
                {
                    _oxygenPrimaryPressureTextMainPage.text = $"Pressure: <color=\"red\">{telemMsg.EVA[0].p_o2} psia</color>";
                    _oxygenPrimaryPressureTextDetailPage.text = $"Pressure: <color=\"red\">{telemMsg.EVA[0].p_o2} psia</color>";
                    OnOxygenPrimaryPressureWarning?.Invoke("Primary Oxygen Pressure critically high!");
                }
                else if (telemMsg.EVA[0].p_o2 > -cautionRange + _oxygenPrimaryPressureExpectedMax)
                {
                    _oxygenPrimaryPressureTextMainPage.text = $"Pressure: <color=\"yellow\">{telemMsg.EVA[0].p_o2} psia</color>";
                    _oxygenPrimaryPressureTextDetailPage.text = $"Pressure: <color=\"yellow\">{telemMsg.EVA[0].p_o2} psia</color>";
                    OnOxygenPrimaryPressureCaution?.Invoke($"Primary Oxygen Pressure approaching {(int)(-cautionRange + _oxygenPrimaryPressureExpectedMax)} psia.");
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
                    _oxygenPrimaryFlowrateWindow_Graph.UseFloatY(" psi/min");
                    _oxygenPrimaryFlowrateWindow_Graph.UseCustomYScale(true, _oxygenPrimaryFlowrateMin, _oxygenPrimaryFlowrateMax);
                    _oxygenPrimaryFlowrateWindow_Graph.UpdateValueList(_oxygenPrimaryFlowrateList);
                }
                cautionRange = (_oxygenPrimaryFlowrateExpectedMax - _oxygenPrimaryFlowrateExpectedMin) * _oxygenPrimaryFlowrateCautionRangeScale;
                if (telemMsg.EVA[0].rate_o2 < _oxygenPrimaryFlowrateExpectedMin)
                {
                    _oxygenPrimaryFlowrateTextMainPage.text = $"Flowrate: <color=\"red\">{telemMsg.EVA[0].rate_o2} psi/min</color>";
                    _oxygenPrimaryFlowrateTextDetailPage.text = $"Flowrate: <color=\"red\">{telemMsg.EVA[0].rate_o2} psi/min</color>";
                    OnOxygenPrimaryFlowrateWarning?.Invoke("Primary Oxygen Flowrate critically low!");
                }
                else if (telemMsg.EVA[0].rate_o2 < cautionRange + _oxygenPrimaryFlowrateExpectedMin)
                {
                    _oxygenPrimaryFlowrateTextMainPage.text = $"Flowrate: <color=\"yellow\">{telemMsg.EVA[0].rate_o2} psi/min</color>";
                    _oxygenPrimaryFlowrateTextDetailPage.text = $"Flowrate: <color=\"yellow\">{telemMsg.EVA[0].rate_o2} psi/min</color>";
                    OnOxygenPrimaryFlowrateCaution?.Invoke($"Primary Oxygen Flowrate approaching {(cautionRange + _oxygenPrimaryFlowrateExpectedMin):F2} psi/min.");
                }
                if (telemMsg.EVA[0].rate_o2 > _oxygenPrimaryFlowrateExpectedMax)
                {
                    _oxygenPrimaryFlowrateTextMainPage.text = $"Flowrate: <color=\"red\">{telemMsg.EVA[0].rate_o2} psi/min</color>";
                    _oxygenPrimaryFlowrateTextDetailPage.text = $"Flowrate: <color=\"red\">{telemMsg.EVA[0].rate_o2} psi/min</color>";
                    OnOxygenPrimaryFlowrateWarning?.Invoke("Primary Oxygen Flowrate critically high!");
                }
                else if (telemMsg.EVA[0].rate_o2 > -cautionRange + _oxygenPrimaryFlowrateExpectedMax)
                {
                    _oxygenPrimaryFlowrateTextMainPage.text = $"Flowrate: <color=\"yellow\">{telemMsg.EVA[0].rate_o2} psi/min</color>";
                    _oxygenPrimaryFlowrateTextDetailPage.text = $"Flowrate: <color=\"yellow\">{telemMsg.EVA[0].rate_o2} psi/min</color>";
                    OnOxygenPrimaryFlowrateCaution?.Invoke($"Primary Oxygen Flowrate approaching {(-cautionRange + _oxygenPrimaryFlowrateExpectedMax):F2} psi/min.");
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
                    _oxygenSecondaryPercentageWindow_Graph.UseIntY(" %");
                    _oxygenSecondaryPercentageWindow_Graph.UseCustomYScale(true, _oxygenSecondaryPercentageMin, _oxygenSecondaryPercentageMax);
                    _oxygenSecondaryPercentageWindow_Graph.UpdateValueList(_oxygenSecondaryPercentageList);
                }
                cautionRange = (_oxygenSecondaryPercentageExpectedMax - _oxygenSecondaryPercentageExpectedMin) * _oxygenSecondaryPercentageCautionRangeScale;
                if (telemMsg.EVA[0].ox_secondary < _oxygenSecondaryPercentageExpectedMin)
                {
                    _oxygenSecondaryPercentageTextMainPage.text = $"Percentage Left: <color=\"red\">{telemMsg.EVA[0].ox_secondary} %</color>";
                    _oxygenSecondaryPercentageTextDetailPage.text = $"Percentage Left: <color=\"red\">{telemMsg.EVA[0].ox_secondary} %</color>";
                    OnOxygenSecondaryPercentageWarning?.Invoke("Secondary Oxygen Percentage critically low!");
                }
                else if (telemMsg.EVA[0].ox_secondary < cautionRange + _oxygenSecondaryPercentageExpectedMin && _oxygenSecondaryPercentageExpectedMin > (_oxygenSecondaryPercentageMin + 1e-4))
                {
                    _oxygenSecondaryPercentageTextMainPage.text = $"Percentage Left: <color=\"yellow\">{telemMsg.EVA[0].ox_secondary} %</color>";
                    _oxygenSecondaryPercentageTextDetailPage.text = $"Percentage Left: <color=\"yellow\">{telemMsg.EVA[0].ox_secondary} %</color>";
                    OnOxygenSecondaryPercentageCaution?.Invoke($"Secondary Oxygen Percentage approaching {(int)(cautionRange + _oxygenSecondaryPercentageExpectedMin)} %.");
                }
                if (telemMsg.EVA[0].ox_secondary > _oxygenSecondaryPercentageExpectedMax)
                {
                    _oxygenSecondaryPercentageTextMainPage.text = $"Percentage Left: <color=\"red\">{telemMsg.EVA[0].ox_secondary} %</color>";
                    _oxygenSecondaryPercentageTextDetailPage.text = $"Percentage Left: <color=\"red\">{telemMsg.EVA[0].ox_secondary} %</color>";
                    OnOxygenSecondaryPercentageWarning?.Invoke("Secondary Oxygen Percentage critically high!");
                }
                else if (telemMsg.EVA[0].ox_secondary > -cautionRange + _oxygenSecondaryPercentageExpectedMax && _oxygenSecondaryPercentageExpectedMax < (_oxygenSecondaryPercentageMax - 1e-4))
                {
                    _oxygenSecondaryPercentageTextMainPage.text = $"Percentage Left: <color=\"yellow\">{telemMsg.EVA[0].ox_secondary} %</color>";
                    _oxygenSecondaryPercentageTextDetailPage.text = $"Percentage Left: <color=\"yellow\">{telemMsg.EVA[0].ox_secondary} %</color>";
                    OnOxygenSecondaryPercentageCaution?.Invoke($"Secondary Oxygen Percentage approaching {(int)(-cautionRange + _oxygenSecondaryPercentageExpectedMax)} %.");
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
                    _oxygenSecondaryPressureWindow_Graph.UseIntY(" psia");
                    _oxygenSecondaryPressureWindow_Graph.UseCustomYScale(true, _oxygenSecondaryPressureMin, _oxygenSecondaryPressureMax);
                    _oxygenSecondaryPressureWindow_Graph.UpdateValueList(_oxygenSecondaryPressureList);
                }
                cautionRange = (_oxygenSecondaryPressureExpectedMax - _oxygenSecondaryPressureExpectedMin) * _oxygenSecondaryPressureCautionRangeScale;
                if (telemMsg.EVA[0].p_sop < _oxygenSecondaryPressureExpectedMin)
                {
                    _oxygenSecondaryPressureTextMainPage.text = $"Pressure: <color=\"red\">{telemMsg.EVA[0].p_sop} psia</color>";
                    _oxygenSecondaryPressureTextDetailPage.text = $"Pressure: <color=\"red\">{telemMsg.EVA[0].p_sop} psia</color>";
                    OnOxygenSecondaryPressureWarning?.Invoke("Secondary Oxygen Pressure critically low!");
                }
                else if (telemMsg.EVA[0].p_sop < cautionRange + _oxygenSecondaryPressureExpectedMin)
                {
                    _oxygenSecondaryPressureTextMainPage.text = $"Pressure: <color=\"yellow\">{telemMsg.EVA[0].p_sop} psia</color>";
                    _oxygenSecondaryPressureTextDetailPage.text = $"Pressure: <color=\"yellow\">{telemMsg.EVA[0].p_sop} psia</color>";
                    OnOxygenSecondaryPressureCaution?.Invoke($"Secondary Oxygen Pressure approaching {(int)(cautionRange + _oxygenSecondaryPressureExpectedMin)} psia.");
                }
                if (telemMsg.EVA[0].p_sop > _oxygenSecondaryPressureExpectedMax)
                {
                    _oxygenSecondaryPressureTextMainPage.text = $"Pressure: <color=\"red\">{telemMsg.EVA[0].p_sop} psia</color>";
                    _oxygenSecondaryPressureTextDetailPage.text = $"Pressure: <color=\"red\">{telemMsg.EVA[0].p_sop} psia</color>";
                    OnOxygenSecondaryPressureWarning?.Invoke("Secondary Oxygen Pressure critically high!");
                }
                else if (telemMsg.EVA[0].p_sop > -cautionRange + _oxygenSecondaryPressureExpectedMax)
                {
                    _oxygenSecondaryPressureTextMainPage.text = $"Pressure: <color=\"yellow\">{telemMsg.EVA[0].p_sop} psia</color>";
                    _oxygenSecondaryPressureTextDetailPage.text = $"Pressure: <color=\"yellow\">{telemMsg.EVA[0].p_sop} psia</color>";
                    OnOxygenSecondaryPressureCaution?.Invoke($"Secondary Oxygen Pressure approaching {(int)(-cautionRange + _oxygenSecondaryPressureExpectedMax)} psia.");
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
                    _oxygenSecondaryFlowrateWindow_Graph.UseFloatY(" psi/min");
                    _oxygenSecondaryFlowrateWindow_Graph.UseCustomYScale(true, _oxygenSecondaryFlowrateMin, _oxygenSecondaryFlowrateMax);
                    _oxygenSecondaryFlowrateWindow_Graph.UpdateValueList(_oxygenSecondaryFlowrateList);
                }
                cautionRange = (_oxygenSecondaryFlowrateExpectedMax - _oxygenSecondaryFlowrateExpectedMin) * _oxygenSecondaryFlowrateCautionRangeScale;
                if (telemMsg.EVA[0].rate_sop < _oxygenSecondaryFlowrateExpectedMin)
                {
                    _oxygenSecondaryFlowrateTextMainPage.text = $"Flowrate: <color=\"red\">{telemMsg.EVA[0].rate_sop} psi/min</color>";
                    _oxygenSecondaryFlowrateTextDetailPage.text = $"Flowrate: <color=\"red\">{telemMsg.EVA[0].rate_sop} psi/min</color>";
                    OnOxygenSecondaryFlowrateWarning?.Invoke("Secondary Oxygen Flowrate critically low!");
                }
                else if (telemMsg.EVA[0].rate_sop < cautionRange + _oxygenSecondaryFlowrateExpectedMin)
                {
                    _oxygenSecondaryFlowrateTextMainPage.text = $"Flowrate: <color=\"yellow\">{telemMsg.EVA[0].rate_sop} psi/min</color>";
                    _oxygenSecondaryFlowrateTextDetailPage.text = $"Flowrate: <color=\"yellow\">{telemMsg.EVA[0].rate_sop} psi/min</color>";
                    OnOxygenSecondaryFlowrateCaution?.Invoke($"Secondary Oxygen Flowrate approaching {(cautionRange + _oxygenSecondaryFlowrateExpectedMin):F2} psi/min.");
                }
                if (telemMsg.EVA[0].rate_sop > _oxygenSecondaryFlowrateExpectedMax)
                {
                    _oxygenSecondaryFlowrateTextMainPage.text = $"Flowrate: <color=\"red\">{telemMsg.EVA[0].rate_sop} psi/min</color>";
                    _oxygenSecondaryFlowrateTextDetailPage.text = $"Flowrate: <color=\"red\">{telemMsg.EVA[0].rate_sop} psi/min</color>";
                    OnOxygenSecondaryFlowrateWarning?.Invoke("Secondary Oxygen Flowrate critically high!");
                }
                else if (telemMsg.EVA[0].rate_sop > -cautionRange + _oxygenSecondaryFlowrateExpectedMax)
                {
                    _oxygenSecondaryFlowrateTextMainPage.text = $"Flowrate: <color=\"yellow\">{telemMsg.EVA[0].rate_sop} psi/min</color>";
                    _oxygenSecondaryFlowrateTextDetailPage.text = $"Flowrate: <color=\"yellow\">{telemMsg.EVA[0].rate_sop} psi/min</color>";
                    OnOxygenSecondaryFlowrateCaution?.Invoke($"Secondary Oxygen Flowrate approaching {(-cautionRange + _oxygenSecondaryFlowrateExpectedMax):F2} psi/min.");
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

    private void CreateColorRangeBackgrounds(Window_Graph window_Graph, float rangeMax, float rangeMin,
        float expectedRangeMax, float expectedRangeMin, float yellowRangeScale)
    {
        RectTransform parentGraph = window_Graph.gameObject.GetComponent<RectTransform>();
        // red:
        float redBottom = expectedRangeMin - rangeMin;
        if (redBottom > 1e-4)
        {
            float height = redBottom / (rangeMax - rangeMin) * parentGraph.sizeDelta.y;
            RectTransform rectTransform = Instantiate(_redRangePrefab, parentGraph).GetComponent<RectTransform>();
            rectTransform.anchoredPosition = new Vector2(4.3f, 0);
            rectTransform.sizeDelta = new Vector2(parentGraph.sizeDelta.x - 4.3f, height);
        }
        float redTop = rangeMax - expectedRangeMax;
        if (redTop > 1e-4)
        {
            float height = redTop / (rangeMax - rangeMin) * parentGraph.sizeDelta.y;
            RectTransform rectTransform = Instantiate(_redRangePrefab, parentGraph).GetComponent<RectTransform>();
            rectTransform.anchoredPosition = new Vector2(4.3f, (expectedRangeMax - rangeMin) / (rangeMax - rangeMin) * parentGraph.sizeDelta.y);
            rectTransform.sizeDelta = new Vector2(parentGraph.sizeDelta.x - 4.3f, height);
        }
        // yellow:
        float yellowHeight = (expectedRangeMax - expectedRangeMin) * yellowRangeScale / (rangeMax - rangeMin) * parentGraph.sizeDelta.y;
        if (expectedRangeMin > (rangeMin + 1e-4))
        {
            RectTransform rectTransform = Instantiate(_yellowRangePrefab, parentGraph).GetComponent<RectTransform>();
            rectTransform.anchoredPosition = new Vector2(4.3f, (expectedRangeMin - rangeMin) / (rangeMax - rangeMin) * parentGraph.sizeDelta.y);
            rectTransform.sizeDelta = new Vector2(parentGraph.sizeDelta.x - 4.3f, yellowHeight);
        }
        if (expectedRangeMax < (rangeMax - 1e-4))
        {
            RectTransform rectTransform = Instantiate(_yellowRangePrefab, parentGraph).GetComponent<RectTransform>();
            rectTransform.anchoredPosition = new Vector2(4.3f, (expectedRangeMax - rangeMin) / (rangeMax - rangeMin) * parentGraph.sizeDelta.y - yellowHeight);
            rectTransform.sizeDelta = new Vector2(parentGraph.sizeDelta.x - 4.3f, yellowHeight);
        }
        // green:
        float greenBottomPos = (expectedRangeMin - rangeMin) / (rangeMax - rangeMin) * parentGraph.sizeDelta.y;
        float greenHeight = (expectedRangeMax - expectedRangeMin) / (rangeMax - rangeMin) * parentGraph.sizeDelta.y;
        if (expectedRangeMin > (rangeMin + 1e-4))
        {
            greenBottomPos += yellowHeight;
            greenHeight -= yellowHeight;
        }
        if (expectedRangeMax < (rangeMax - 1e-4))
        {
            greenHeight -= yellowHeight;
        }
        RectTransform greenRectTransform = Instantiate(_greenRangePrefab, parentGraph).GetComponent<RectTransform>();
        greenRectTransform.anchoredPosition = new Vector2(4.3f, greenBottomPos);
        greenRectTransform.sizeDelta = new Vector2(parentGraph.sizeDelta.x - 4.3f, greenHeight);
    }
}

[SerializeField]
public enum TsErrorStateEnum
{
    Normal = 0,
    Caution = 1,
    Warning = 2
}