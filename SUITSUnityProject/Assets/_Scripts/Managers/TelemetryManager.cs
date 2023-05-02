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
    [SerializeField] private float _batteryCapacityExpectedMax = 40;
    [SerializeField] private float _batteryCapacityExpectedMin = 60;
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
    [SerializeField] private float _suitPressureExpectedMax = 4;
    [SerializeField] private float _suitPressureExpectedMin = 2;
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
    [SerializeField] private float _suitFanSpeedMax = 50000;
    [SerializeField] private float _suitFanSpeedMin = 0;
    [SerializeField] private float _suitFanSpeedExpectedMax = 40000;
    [SerializeField] private float _suitFanSpeedExpectedMin = 10000;
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
    [SerializeField] private float _envSubPressureExpectedMax = 4;
    [SerializeField] private float _envSubPressureExpectedMin = 2;
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
    public static event Action<string> OnOxygenSecondaryFlowrateWarning;
    public static event Action<string> OnOxygenSecondaryFlowrateCaution;
    #endregion

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
            _bioHeartRateExpectedMax, _bioHeartRateExpectedMin, 0.05f);

        CreateColorRangeBackgrounds(_waterGasPressureWindow_Graph, _waterGasPressureMax, _waterGasPressureMin,
            _waterGasPressureExpectedMax, _waterGasPressureExpectedMin, 0.05f);
        CreateColorRangeBackgrounds(_waterLiquidPressureWindow_Graph, _waterLiquidPressureMax, _waterLiquidPressureMin,
             _waterLiquidPressureExpectedMax, _waterLiquidPressureExpectedMin, 0.05f);

        CreateColorRangeBackgrounds(_envSubPressureWindow_Graph, _envSubPressureMax, _envSubPressureMin,
             _envSubPressureExpectedMax, _envSubPressureExpectedMin, 0.05f);
        CreateColorRangeBackgrounds(_envTemperatureWindow_Graph, _envTemperatureMax, _envTemperatureMin,
             _envTemperatureExpectedMax, _envTemperatureExpectedMin, 0.05f);

        CreateColorRangeBackgrounds(_oxygenPrimaryPercentageWindow_Graph, _oxygenPrimaryPercentageMax, _oxygenPrimaryPercentageMin,
             _oxygenPrimaryPercentageExpectedMax, _oxygenPrimaryPercentageExpectedMin, 0.05f);
        CreateColorRangeBackgrounds(_oxygenPrimaryPressureWindow_Graph, _oxygenPrimaryPressureMax, _oxygenPrimaryPressureMin,
             _oxygenPrimaryPressureExpectedMax, _oxygenPrimaryPressureExpectedMin, 0.05f);
        CreateColorRangeBackgrounds(_oxygenPrimaryFlowrateWindow_Graph,_oxygenPrimaryFlowrateMax, _oxygenPrimaryFlowrateMin,
             _oxygenPrimaryFlowrateExpectedMax, _oxygenPrimaryFlowrateExpectedMin, 0.05f);
        CreateColorRangeBackgrounds(_oxygenSecondaryPercentageWindow_Graph, _oxygenSecondaryPercentageMax, _oxygenSecondaryPercentageMin,
             _oxygenSecondaryPercentageExpectedMax, _oxygenSecondaryPercentageExpectedMin, 0.05f);
        CreateColorRangeBackgrounds(_oxygenSecondaryPressureWindow_Graph, _oxygenSecondaryPressureMax, _oxygenSecondaryPressureMin,
            _oxygenSecondaryPressureExpectedMax, _oxygenSecondaryPressureExpectedMin, 0.05f);
        CreateColorRangeBackgrounds(_oxygenSecondaryFlowrateWindow_Graph, _oxygenSecondaryFlowrateMax, _oxygenSecondaryFlowrateMin,
            _oxygenSecondaryFlowrateExpectedMax, _oxygenSecondaryFlowrateExpectedMin, 0.05f);
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
                    OnBatteryPercentWarning?.Invoke("Battery Percentage critically low!");
                else if (telemMsg.EVA[0].batteryPercent < cautionRange + _batteryPercentExpectedMin)
                    OnBatteryPercentCaution?.Invoke($"Battery Percentage approaching {(int)cautionRange + _batteryPercentExpectedMin}%.");
                if (telemMsg.EVA[0].batteryPercent > _batteryPercentExpectedMax)
                    OnBatteryPercentWarning?.Invoke("Battery Percentage invalid data received!");
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
                    OnBatteryCapacityWarning?.Invoke("Battery Capacity critically low!");
                else if (telemMsg.EVA[0].cap_battery < cautionRange + _batteryCapacityExpectedMin)
                    OnBatteryCapacityCaution?.Invoke($"Battery Capacity approaching {(int)cautionRange + _batteryCapacityExpectedMin} amp-hr.");
                if (telemMsg.EVA[0].cap_battery > _batteryCapacityExpectedMax)
                    OnBatteryCapacityWarning?.Invoke("Battery Capacity critically high!");
                else if (telemMsg.EVA[0].cap_battery > -cautionRange + _batteryCapacityExpectedMax)
                    OnBatteryCapacityCaution?.Invoke($"Battery Capacity approaching {-(int)cautionRange + _batteryCapacityExpectedMax} amp-hr.");
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
                    OnSuitPressureWarning?.Invoke("Suit Pressure critically low!");
                else if (telemMsg.EVA[0].p_suit < cautionRange + _suitPressureExpectedMin)
                    OnSuitPressureCaution?.Invoke($"Suit Pressure approaching {(cautionRange + _suitPressureExpectedMin):F2} psia.");
                if (telemMsg.EVA[0].p_suit > _suitPressureExpectedMax)
                    OnSuitPressureWarning?.Invoke("Suit Pressure critically high!");
                else if (telemMsg.EVA[0].p_suit > -cautionRange + _suitPressureExpectedMax)
                    OnSuitPressureCaution?.Invoke($"Suit Pressure approaching {(-cautionRange + _suitPressureExpectedMax):F2} psia.");
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
                    OnSuitFanSpeedWarning?.Invoke("Suit Fan Speed critically low!");
                else if (telemMsg.EVA[0].v_fan < cautionRange + _suitFanSpeedExpectedMin)
                    OnSuitFanSpeedCaution?.Invoke($"Suit Fan Speed approaching {(int)(cautionRange + _suitFanSpeedExpectedMin)} rpm.");
                if (telemMsg.EVA[0].v_fan > _suitFanSpeedExpectedMax)
                    OnSuitFanSpeedWarning?.Invoke("Suit Fan Speed critically high!");
                else if (telemMsg.EVA[0].v_fan > -cautionRange + _suitFanSpeedExpectedMax)
                    OnSuitFanSpeedCaution?.Invoke($"Suit Fan Speed approaching {(int)(-cautionRange + _suitFanSpeedExpectedMax)} psia.");
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
