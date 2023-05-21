using EvanZ.Tools;
using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using TSS;
using UnityEngine;
using UnityEngine.UI;
using TSS.Msgs;

public class TelemetryManager : Singleton<TelemetryManager>
{
    private const string URI_PREFIX = "ws://";
    private const string PORT = ":3001";

    /* 128.208.1.212 */
    private string _uri = "192.68.50.10";
    public string URI
    {
        get { return $"{URI_PREFIX}{_uri}{PORT}"; }
        private set { _uri = value; }
    }

    private TSSConnection _tss;
    private int _msgCount = 0;

    public static event Action<GPSMsg> OnGPSMsgUpdate;
    public static event Action<RoverMsg> OnRoverMsgUpdate;

    #region Graphing Background Images
    [Header("General")]
    [SerializeField] GameObject _greenRangePrefab;
    [SerializeField] GameObject _yellowRangePrefab;
    [SerializeField] GameObject _redRangePrefab;
    #endregion
    #region Additional Settings Definition
    [SerializeField] private TMP_Text _allDataText;
    [SerializeField] private Color _normalBackPlateColor;
    [SerializeField] private Color _cautionBackPlateColor;
    [SerializeField] private Color _warningBackPlateColor;
    [SerializeField] private int _graphUpdateFrequence;
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
    #endregion
    #region Spectroscopy Definition
    [Header("Spectroscopy")]
    [SerializeField] private SpectroscopyScanManager specScanManager;
    private int rockTagID = 1;
    #endregion

    public TSSErrorStateEnum TsErrorState { get; private set; } = TSSErrorStateEnum.Normal;
    public static event Action<string, TSSEVATypeEnum, TSSErrorStateEnum> OnEVAStatChange;

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
        string team_name = "Astrohuskies";
        string username = "VK07";
        string university = "University of Washington";
        string user_guid = "e8363b52-09fc-4dd2-8072-ed92f431cc65";
        var connecting = _tss.ConnectToURI(URI, team_name, username, university, user_guid);
        Debug.Log("Connecting to " + URI);

        // Create a function that takes asing TSSMsg parameter and returns void. For example:
        // public static void PrintInfo(TSS.Msgs.TSSMsg tssMsg) { ... }
        // Then just subscribe to the OnTSSTelemetryMsg
        _tss.OnTSSTelemetryMsg += (telemMsg) =>
        {
            Debug.Log("recieved message");
            _msgCount++;
            OnGPSMsgUpdate?.Invoke(telemMsg.gpsMsg);
            OnRoverMsgUpdate?.Invoke(telemMsg.roverMsg);


            /*            if (telemMsg.IMU.Count > 0)
                        {

                        }
                        else
                        {

                        }
            */
            UIATracker.Instance.emu1_pwr_switch = telemMsg.uiaMsg.emu1_pwr_switch;
            UIATracker.Instance.ev1_supply_switch = telemMsg.uiaMsg.ev1_supply_switch;
            UIATracker.Instance.ev1_water_waste_switch = telemMsg.uiaMsg.emu1_water_waste;
            UIATracker.Instance.emu1_o2_supply_switch = telemMsg.uiaMsg.emu1_o2_supply_switch;
            UIATracker.Instance.o2_vent_switch = telemMsg.uiaMsg.o2_vent_switch;
            UIATracker.Instance.depress_pump_switch = telemMsg.uiaMsg.depress_pump_switch;
            if (true)
            {
                TsErrorState = TSSErrorStateEnum.Normal;
                #region EVA Time
                _evaTimeMainPage.text = $"EVA Time: <color=\"green\">{telemMsg.simulationStates.timer}</color>";
                _evaTimeDetailPage.text = $"EVA Time: <color=\"green\">{telemMsg.simulationStates.timer}</color>";
                HUDManager.Instance.UpdateEVATime(telemMsg.simulationStates.timer);
                #endregion
                #region Suit Battery Time Left
                _batteryTimeLeftMainPage.text = $"Time Left: <color=\"green\">{telemMsg.simulationStates.battery_time_left}</color>";
                _batteryTimeLeftDetailPage.text = $"Time Left: <color=\"green\">{telemMsg.simulationStates.battery_time_left}</color>";
                HUDManager.Instance.UpdateSuitBatteryTime(telemMsg.simulationStates.battery_time_left.ToString());
                #endregion
                #region Suit Battery Percentage
                _batteryPercentTextMainPage.text = $"Percentage Left: <color=\"green\">{Math.Round(telemMsg.simulationStates.battery_percentage)}%</color>";
                _batteryPercentTextDetailPage.text = $"Percentage Left: <color=\"green\">{Math.Round(telemMsg.simulationStates.battery_percentage)}%</color>";
                if (_batteryPercentList.Count >= _batteryPercentCount)
                    _batteryPercentList.RemoveAt(0);
                if (_msgCount % _graphUpdateFrequence >= _graphUpdateFrequence - 1)
                    _batteryPercentList.Add((float)telemMsg.simulationStates.battery_percentage);
                if (_batteryPercentWindow_Graph.gameObject.activeInHierarchy)
                {
                    _batteryPercentWindow_Graph.UseIntY(" %");
                    _batteryPercentWindow_Graph.UseCustomYScale(true, _batteryPercentMin, _batteryPercentMax);
                    _batteryPercentWindow_Graph.UpdateValueList(_batteryPercentList);
                }
                float cautionRange = (_batteryPercentExpectedMax - _batteryPercentExpectedMin) * _batteryPercentCautionRangeScale;
                if (telemMsg.simulationStates.battery_percentage < _batteryPercentExpectedMin)
                {
                    TsErrorState = TSSErrorStateEnum.Warning;
                    _batteryPercentTextMainPage.text = $"Percentage Left: <color=\"red\">{Math.Round(telemMsg.simulationStates.battery_percentage)}%</color>";
                    _batteryPercentTextDetailPage.text = $"Percentage Left: <color=\"red\">{Math.Round(telemMsg.simulationStates.battery_percentage)}%</color>";
                    OnEVAStatChange?.Invoke("Battery Percentage critically low!", TSSEVATypeEnum.BatteryPercentage, TSSErrorStateEnum.Warning);
                }
                else if (telemMsg.simulationStates.battery_percentage < cautionRange + _batteryPercentExpectedMin)
                {
                    if (TsErrorState == TSSErrorStateEnum.Normal)
                        TsErrorState = TSSErrorStateEnum.Caution;
                    _batteryPercentTextMainPage.text = $"Percentage Left: <color=\"yellow\">{Math.Round(telemMsg.simulationStates.battery_percentage)}%</color>";
                    _batteryPercentTextDetailPage.text = $"Percentage Left: <color=\"yellow\">{Math.Round(telemMsg.simulationStates.battery_percentage)}%</color>";
                    OnEVAStatChange?.Invoke($"Battery Percentage approaching {(int)cautionRange + _batteryPercentExpectedMin}%.", TSSEVATypeEnum.BatteryPercentage, TSSErrorStateEnum.Caution);
                }
                else if (telemMsg.simulationStates.battery_percentage > _batteryPercentExpectedMax)
                {
                    TsErrorState = TSSErrorStateEnum.Warning;
                    _batteryPercentTextMainPage.text = $"Percentage Left: <color=\"red\">{Math.Round(telemMsg.simulationStates.battery_percentage)}%</color>";
                    _batteryPercentTextDetailPage.text = $"Percentage Left: <color=\"red\">{Math.Round(telemMsg.simulationStates.battery_percentage)}%</color>";
                    OnEVAStatChange?.Invoke("Battery Percentage invalid data received!", TSSEVATypeEnum.BatteryPercentage, TSSErrorStateEnum.Warning);
                }
                else
                {
                    OnEVAStatChange?.Invoke("", TSSEVATypeEnum.BatteryPercentage, TSSErrorStateEnum.Normal);
                }
                #endregion
                #region Suit Battery Capacity
                _batteryCapacityTextMainPage.text = $"Capacity: <color=\"green\">{telemMsg.simulationStates.battery_capacity} amp-hr</color>";
                _batteryCapacityTextDetailPage.text = $"Capacity: <color=\"green\">{telemMsg.simulationStates.battery_capacity} amp-hr</color>";
                if (_batteryCapacityList.Count >= _batteryCapacityCount)
                    _batteryCapacityList.RemoveAt(0);
                if (_msgCount % _graphUpdateFrequence >= _graphUpdateFrequence - 1)
                    _batteryCapacityList.Add((float)telemMsg.simulationStates.battery_capacity);
                if (_batteryCapacityWindow_Graph.gameObject.activeInHierarchy)
                {
                    _batteryCapacityWindow_Graph.UseIntY(" amp-hr");
                    _batteryCapacityWindow_Graph.UseCustomYScale(true, _batteryCapacityMin, _batteryCapacityMax);
                    _batteryCapacityWindow_Graph.UpdateValueList(_batteryCapacityList);
                }
                cautionRange = (_batteryCapacityExpectedMax - _batteryCapacityExpectedMin) * _batteryCapacityCautionRangeScale;
                RawImage image = _batteryCapacityTextMainPage.gameObject.transform.parent.parent.parent.Find("Backplate").GetComponent<RawImage>();
                image.color = _normalBackPlateColor;
                if (telemMsg.simulationStates.battery_capacity < _batteryCapacityExpectedMin)
                {
                    image.color = _warningBackPlateColor;
                    TsErrorState = TSSErrorStateEnum.Warning;
                    _batteryCapacityTextMainPage.text = $"Capacity: <color=\"red\">{telemMsg.simulationStates.battery_capacity} amp-hr</color>";
                    _batteryCapacityTextDetailPage.text = $"Capacity: <color=\"red\">{telemMsg.simulationStates.battery_capacity} amp-hr</color>";
                    OnEVAStatChange?.Invoke($"Battery Capacity critically low!\nCurrent reading: {telemMsg.simulationStates.battery_capacity} amp-hr\nNomral range: {_batteryCapacityExpectedMin} - {_batteryCapacityExpectedMax} amp-hr", TSSEVATypeEnum.BatteryCapacity, TSSErrorStateEnum.Warning);
                }
                else if (telemMsg.simulationStates.battery_capacity < cautionRange + _batteryCapacityExpectedMin)
                {
                    image.color = _cautionBackPlateColor;
                    if (TsErrorState == TSSErrorStateEnum.Normal)
                        TsErrorState = TSSErrorStateEnum.Caution;
                    _batteryCapacityTextMainPage.text = $"Capacity: <color=\"yellow\">{telemMsg.simulationStates.battery_capacity} amp-hr</color>";
                    _batteryCapacityTextDetailPage.text = $"Capacity: <color=\"yellow\">{telemMsg.simulationStates.battery_capacity} amp-hr</color>";
                    OnEVAStatChange?.Invoke($"Battery Capacity approaching {(int)cautionRange + _batteryCapacityExpectedMin} amp-hr.", TSSEVATypeEnum.BatteryCapacity, TSSErrorStateEnum.Caution);
                }
                else if (telemMsg.simulationStates.battery_capacity > _batteryCapacityExpectedMax)
                {
                    image.color = _warningBackPlateColor;
                    TsErrorState = TSSErrorStateEnum.Warning;
                    _batteryCapacityTextMainPage.text = $"Capacity: <color=\"red\">{telemMsg.simulationStates.battery_capacity} amp-hr</color>";
                    _batteryCapacityTextDetailPage.text = $"Capacity: <color=\"red\">{telemMsg.simulationStates.battery_capacity} amp-hr</color>";
                    OnEVAStatChange?.Invoke($"Battery Capacity critically high!\nCurrent reading: {telemMsg.simulationStates.battery_capacity} amp-hr\nNomral range: {_batteryCapacityExpectedMin} - {_batteryCapacityExpectedMax} amp-hr", TSSEVATypeEnum.BatteryCapacity, TSSErrorStateEnum.Warning);
                }
                else if (telemMsg.simulationStates.battery_capacity > -cautionRange + _batteryCapacityExpectedMax)
                {
                    image.color = _cautionBackPlateColor;
                    if (TsErrorState == TSSErrorStateEnum.Normal)
                        TsErrorState = TSSErrorStateEnum.Caution;
                    _batteryCapacityTextMainPage.text = $"Capacity: <color=\"yellow\">{telemMsg.simulationStates.battery_capacity} amp-hr</color>";
                    _batteryCapacityTextDetailPage.text = $"Capacity: <color=\"yellow\">{telemMsg.simulationStates.battery_capacity} amp-hr</color>";
                    OnEVAStatChange?.Invoke($"Battery Capacity approaching {-(int)cautionRange + _batteryCapacityExpectedMax} amp-hr.", TSSEVATypeEnum.BatteryCapacity, TSSErrorStateEnum.Caution);
                }
                else
                {
                    OnEVAStatChange?.Invoke("", TSSEVATypeEnum.BatteryCapacity, TSSErrorStateEnum.Normal);
                }
                #endregion
                #region Suit Pressure
                float suitsPressure = telemMsg.simulationStates.suit_pressure;
                suitsPressure = 4.2f;
                _suitPressureTextMainPage.text = $"Pressure: <color=\"green\">{suitsPressure} psia</color>";
                _suitPressureTextDetailPage.text = $"Pressure: <color=\"green\">{suitsPressure} psia</color>";
                if (_suitPressureList.Count >= _suitPressureCount)
                    _suitPressureList.RemoveAt(0);
                if (_msgCount % _graphUpdateFrequence >= _graphUpdateFrequence - 1)
                    _suitPressureList.Add((float)suitsPressure);
                if (_suitPressureWindow_Graph.gameObject.activeInHierarchy)
                {
                    _suitPressureWindow_Graph.UseFloatY(" psia");
                    _suitPressureWindow_Graph.UseCustomYScale(true, _suitPressureMin, _suitPressureMax);
                    _suitPressureWindow_Graph.UpdateValueList(_suitPressureList);
                }
                image = _suitPressureTextMainPage.gameObject.transform.parent.parent.parent.Find("Backplate").GetComponent<RawImage>();
                image.color = _normalBackPlateColor;
                cautionRange = (_suitPressureExpectedMax - _suitPressureExpectedMin) * _suitPressureCautionRangeScale;
                if (suitsPressure < _suitPressureExpectedMin)
                {
                    image.color = _warningBackPlateColor;
                    TsErrorState = TSSErrorStateEnum.Warning;
                    _suitPressureTextMainPage.text = $"Pressure: <color=\"red\">{suitsPressure} psia</color>";
                    _suitPressureTextDetailPage.text = $"Pressure: <color=\"red\">{suitsPressure} psia</color>";
                    OnEVAStatChange?.Invoke("Suit Pressure critically low!", TSSEVATypeEnum.SuitPressure, TSSErrorStateEnum.Warning);
                }
                else if (suitsPressure < cautionRange + _suitPressureExpectedMin)
                {
                    image.color = _cautionBackPlateColor;
                    if (TsErrorState == TSSErrorStateEnum.Normal)
                        TsErrorState = TSSErrorStateEnum.Caution;
                    _suitPressureTextMainPage.text = $"Pressure: <color=\"yellow\">{suitsPressure} psia</color>";
                    _suitPressureTextDetailPage.text = $"Pressure: <color=\"yellow\">{suitsPressure} psia</color>";
                    OnEVAStatChange?.Invoke($"Suit Pressure approaching {(cautionRange + _suitPressureExpectedMin):F2} psia.", TSSEVATypeEnum.SuitPressure, TSSErrorStateEnum.Caution);
                }
                else if (suitsPressure > _suitPressureExpectedMax)
                {
                    image.color = _warningBackPlateColor;
                    TsErrorState = TSSErrorStateEnum.Warning;
                    _suitPressureTextMainPage.text = $"Pressure: <color=\"red\">{suitsPressure} psia</color>";
                    _suitPressureTextDetailPage.text = $"Pressure: <color=\"red\">{suitsPressure} psia</color>";
                    OnEVAStatChange?.Invoke("Suit Pressure critically high!", TSSEVATypeEnum.SuitPressure, TSSErrorStateEnum.Warning);
                }
                else if (suitsPressure > -cautionRange + _suitPressureExpectedMax)
                {
                    image.color = _cautionBackPlateColor;
                    if (TsErrorState == TSSErrorStateEnum.Normal)
                        TsErrorState = TSSErrorStateEnum.Caution;
                    _suitPressureTextMainPage.text = $"Pressure: <color=\"yellow\">{suitsPressure} psia</color>";
                    _suitPressureTextDetailPage.text = $"Pressure: <color=\"yellow\">{suitsPressure} psia</color>";
                    OnEVAStatChange?.Invoke($"Suit Pressure approaching {(-cautionRange + _suitPressureExpectedMax):F2} psia.", TSSEVATypeEnum.SuitPressure ,TSSErrorStateEnum.Caution);
                }
                else
                {
                    OnEVAStatChange?.Invoke("", TSSEVATypeEnum.SuitPressure, TSSErrorStateEnum.Normal);
                }
                #endregion
                #region Suit Fan Speed
                _suitFanSpeedTextMainPage.text = $"Fan Speed: <color=\"green\">{telemMsg.simulationStates.fan_tachometer} rpm</color>";
                _suitFanSpeedTextDetailPage.text = $"Fan Speed: <color=\"green\">{telemMsg.simulationStates.fan_tachometer} rpm</color>";
                if (_suitFanSpeedList.Count >= _suitFanSpeedCount)
                    _suitFanSpeedList.RemoveAt(0);
                if (_msgCount % _graphUpdateFrequence >= _graphUpdateFrequence - 1)
                    _suitFanSpeedList.Add((float)telemMsg.simulationStates.fan_tachometer / 1000);
                if (_suitFanSpeedWindow_Graph.gameObject.activeInHierarchy)
                {
                    _suitFanSpeedWindow_Graph.UseIntY("k rpm");
                    _suitFanSpeedWindow_Graph.UseCustomYScale(true, _suitFanSpeedMin / 1000, _suitFanSpeedMax / 1000);
                    _suitFanSpeedWindow_Graph.UpdateValueList(_suitFanSpeedList);
                }
                image = _suitFanSpeedTextMainPage.gameObject.transform.parent.parent.parent.Find("Backplate").GetComponent<RawImage>();
                image.color = _normalBackPlateColor;
                cautionRange = (_suitFanSpeedExpectedMax - _suitFanSpeedExpectedMin) * _suitFanSpeedCautionRangeScale;
                if (telemMsg.simulationStates.fan_tachometer < _suitFanSpeedExpectedMin)
                {
                    image.color = _warningBackPlateColor;
                    TsErrorState = TSSErrorStateEnum.Warning;
                    _suitFanSpeedTextMainPage.text = $"Fan Speed: <color=\"red\">{telemMsg.simulationStates.fan_tachometer} rpm</color>";
                    _suitFanSpeedTextDetailPage.text = $"Fan Speed: <color=\"red\">{telemMsg.simulationStates.fan_tachometer} rpm</color>";
                    OnEVAStatChange?.Invoke("Suit Fan Speed critically low!", TSSEVATypeEnum.FanSpeed, TSSErrorStateEnum.Warning);
                }
                else if (telemMsg.simulationStates.fan_tachometer < cautionRange + _suitFanSpeedExpectedMin)
                {
                    image.color = _cautionBackPlateColor;
                    if (TsErrorState == TSSErrorStateEnum.Normal)
                        TsErrorState = TSSErrorStateEnum.Caution;
                    _suitFanSpeedTextMainPage.text = $"Fan Speed: <color=\"yellow\">{telemMsg.simulationStates.fan_tachometer} rpm</color>";
                    _suitFanSpeedTextDetailPage.text = $"Fan Speed: <color=\"yellow\">{telemMsg.simulationStates.fan_tachometer} rpm</color>";
                    OnEVAStatChange?.Invoke($"Suit Fan Speed approaching {(int)(cautionRange + _suitFanSpeedExpectedMin)} rpm.", TSSEVATypeEnum.FanSpeed, TSSErrorStateEnum.Caution);
                }
                else if (telemMsg.simulationStates.fan_tachometer > _suitFanSpeedExpectedMax)
                {
                    image.color = _warningBackPlateColor;
                    TsErrorState = TSSErrorStateEnum.Warning;
                    _suitFanSpeedTextMainPage.text = $"Fan Speed: <color=\"red\">{telemMsg.simulationStates.fan_tachometer} rpm</color>";
                    _suitFanSpeedTextDetailPage.text = $"Fan Speed: <color=\"red\">{telemMsg.simulationStates.fan_tachometer} rpm</color>";
                    OnEVAStatChange?.Invoke("Suit Fan Speed critically high!", TSSEVATypeEnum.FanSpeed, TSSErrorStateEnum.Warning);
                }
                else if (telemMsg.simulationStates.fan_tachometer > -cautionRange + _suitFanSpeedExpectedMax)
                {
                    image.color = _cautionBackPlateColor;
                    if (TsErrorState == TSSErrorStateEnum.Normal)
                        TsErrorState = TSSErrorStateEnum.Caution;
                    _suitFanSpeedTextMainPage.text = $"Fan Speed: <color=\"yellow\">{telemMsg.simulationStates.fan_tachometer} rpm</color>";
                    _suitFanSpeedTextDetailPage.text = $"Fan Speed: <color=\"yellow\">{telemMsg.simulationStates.fan_tachometer} rpm</color>";
                    OnEVAStatChange?.Invoke($"Suit Fan Speed approaching {(int)(-cautionRange + _suitFanSpeedExpectedMax)} rpm.", TSSEVATypeEnum.FanSpeed, TSSErrorStateEnum.Caution);
                }
                else
                {
                    OnEVAStatChange?.Invoke("", TSSEVATypeEnum.FanSpeed, TSSErrorStateEnum.Normal);
                }
                #endregion
                #region Bio Heart Rate
                _bioHeartRateTextMainPage.text = $"Heart Rates: <color=\"green\">{telemMsg.simulationStates.heart_rate} bpm</color>";
                _bioHeartRateTextDetailPage.text = $"Heart Rates: <color=\"green\">{telemMsg.simulationStates.heart_rate} bpm</color>";
                if (_bioHeartRateList.Count >= _bioHeartRateCount)
                    _bioHeartRateList.RemoveAt(0);
                if (_msgCount % _graphUpdateFrequence >= _graphUpdateFrequence - 1)
                    _bioHeartRateList.Add((float)telemMsg.simulationStates.heart_rate);
                if (_bioHeartRateWindow_Graph.gameObject.activeInHierarchy)
                {
                    _bioHeartRateWindow_Graph.UseIntY(" bpm");
                    _bioHeartRateWindow_Graph.UseCustomYScale(true, _bioHeartRateMin, _bioHeartRateMax);
                    _bioHeartRateWindow_Graph.UpdateValueList(_bioHeartRateList);
                }
                image = _bioHeartRateTextMainPage.gameObject.transform.parent.parent.parent.Find("Backplate").GetComponent<RawImage>();
                image.color = _normalBackPlateColor;
                cautionRange = (_bioHeartRateExpectedMax - _bioHeartRateExpectedMin) * _bioHeartRateCautionRangeScale;
                if (telemMsg.simulationStates.heart_rate < _bioHeartRateExpectedMin)
                {
                    image.color = _warningBackPlateColor;
                    TsErrorState = TSSErrorStateEnum.Warning;
                    _bioHeartRateTextMainPage.text = $"Heart Rates: <color=\"red\">{telemMsg.simulationStates.heart_rate} bpm</color>";
                    _bioHeartRateTextDetailPage.text = $"Heart Rates: <color=\"red\">{telemMsg.simulationStates.heart_rate} bpm</color>";
                    OnEVAStatChange?.Invoke("Heart Rate critically low!", TSSEVATypeEnum.HeartRate, TSSErrorStateEnum.Warning);
                }
                else if (telemMsg.simulationStates.heart_rate < cautionRange + _bioHeartRateExpectedMin)
                {
                    image.color = _cautionBackPlateColor;
                    if (TsErrorState == TSSErrorStateEnum.Normal)
                        TsErrorState = TSSErrorStateEnum.Caution;
                    _bioHeartRateTextMainPage.text = $"Heart Rates: <color=\"yellow\">{telemMsg.simulationStates.heart_rate} bpm</color>";
                    _bioHeartRateTextDetailPage.text = $"Heart Rates: <color=\"yellow\">{telemMsg.simulationStates.heart_rate} bpm</color>";
                    OnEVAStatChange?.Invoke($"Heart Rate approaching {(int)(cautionRange + _bioHeartRateExpectedMin)} bpm.", TSSEVATypeEnum.HeartRate, TSSErrorStateEnum.Caution);
                }
                else if (telemMsg.simulationStates.heart_rate > _bioHeartRateExpectedMax)
                {
                    image.color = _warningBackPlateColor;
                    TsErrorState = TSSErrorStateEnum.Warning;
                    _bioHeartRateTextMainPage.text = $"Heart Rates: <color=\"red\">{telemMsg.simulationStates.heart_rate} bpm</color>";
                    _bioHeartRateTextDetailPage.text = $"Heart Rates: <color=\"red\">{telemMsg.simulationStates.heart_rate} bpm</color>";
                    OnEVAStatChange?.Invoke("Heart Rate critically high!", TSSEVATypeEnum.HeartRate, TSSErrorStateEnum.Warning);
                }
                else if (telemMsg.simulationStates.heart_rate > -cautionRange + _bioHeartRateExpectedMax)
                {
                    image.color = _cautionBackPlateColor;
                    if (TsErrorState == TSSErrorStateEnum.Normal)
                        TsErrorState = TSSErrorStateEnum.Caution;
                    _bioHeartRateTextMainPage.text = $"Heart Rates: <color=\"yellow\">{telemMsg.simulationStates.heart_rate} bpm</color>";
                    _bioHeartRateTextDetailPage.text = $"Heart Rates: <color=\"yellow\">{telemMsg.simulationStates.heart_rate} bpm</color>";
                    OnEVAStatChange?.Invoke($"Heart Rate approaching {(int)(-cautionRange + _bioHeartRateExpectedMax)} bpm.", TSSEVATypeEnum.HeartRate, TSSErrorStateEnum.Caution);
                }
                else
                {
                    OnEVAStatChange?.Invoke("", TSSEVATypeEnum.HeartRate, TSSErrorStateEnum.Normal);
                }
                #endregion
                #region Water Time Left
                _waterTimeLeftMainPage.text = $"Time Left: <color=\"green\">{telemMsg.simulationStates.h2o_time_left}</color>";
                _waterTimeLeftDetailPage.text = $"Time Left: <color=\"green\">{telemMsg.simulationStates.h2o_time_left}</color>";
                #endregion
                #region Water Gas Pressure
                _waterGasPressureTextMainPage.text = $"Gas Pressure: <color=\"green\">{telemMsg.simulationStates.h2o_gas_pressure} psia</color>";
                _waterGasPressureTextDetailPage.text = $"Gas Pressure: <color=\"green\">{telemMsg.simulationStates.h2o_gas_pressure} psia</color>";
                if (_waterGasPressureList.Count >= _waterGasPressureCount)
                    _waterGasPressureList.RemoveAt(0);
                if (_msgCount % _graphUpdateFrequence >= _graphUpdateFrequence - 1)
                    _waterGasPressureList.Add((float)telemMsg.simulationStates.h2o_gas_pressure);
                if (_waterGasPressureWindow_Graph.gameObject.activeInHierarchy)
                {
                    _waterGasPressureWindow_Graph.UseIntY(" psia");
                    _waterGasPressureWindow_Graph.UseCustomYScale(true, _waterGasPressureMin, _waterGasPressureMax);
                    _waterGasPressureWindow_Graph.UpdateValueList(_waterGasPressureList);
                }
                image = _waterGasPressureTextMainPage.gameObject.transform.parent.parent.parent.Find("Backplate").GetComponent<RawImage>();
                image.color = _normalBackPlateColor;
                cautionRange = (_waterGasPressureExpectedMax - _waterGasPressureExpectedMin) * _waterGasPressureCautionRangeScale;
                if (telemMsg.simulationStates.h2o_gas_pressure < _waterGasPressureExpectedMin)
                {
                    image.color = _warningBackPlateColor;
                    TsErrorState = TSSErrorStateEnum.Warning;
                    _waterGasPressureTextMainPage.text = $"Gas Pressure: <color=\"red\">{telemMsg.simulationStates.h2o_gas_pressure} psia</color>";
                    _waterGasPressureTextDetailPage.text = $"Gas Pressure: <color=\"red\">{telemMsg.simulationStates.h2o_gas_pressure} psia</color>";
                    OnEVAStatChange?.Invoke("Water Gas Pressure critically low!", TSSEVATypeEnum.GasPressure, TSSErrorStateEnum.Warning);
                }
                else if (telemMsg.simulationStates.h2o_gas_pressure < cautionRange + _waterGasPressureExpectedMin)
                {
                    image.color = _cautionBackPlateColor;
                    if (TsErrorState == TSSErrorStateEnum.Normal)
                        TsErrorState = TSSErrorStateEnum.Caution;
                    _waterGasPressureTextMainPage.text = $"Gas Pressure: <color=\"yellow\">{telemMsg.simulationStates.h2o_gas_pressure} psia</color>";
                    _waterGasPressureTextDetailPage.text = $"Gas Pressure: <color=\"yellow\">{telemMsg.simulationStates.h2o_gas_pressure} psia</color>";
                    OnEVAStatChange?.Invoke($"Water Gas Pressure approaching {(int)(cautionRange + _waterGasPressureExpectedMin)} psia.", TSSEVATypeEnum.GasPressure, TSSErrorStateEnum.Caution);
                }
                else if (telemMsg.simulationStates.h2o_gas_pressure > _waterGasPressureExpectedMax)
                {
                    image.color = _warningBackPlateColor;
                    TsErrorState = TSSErrorStateEnum.Warning;
                    _waterGasPressureTextMainPage.text = $"Gas Pressure: <color=\"red\">{telemMsg.simulationStates.h2o_gas_pressure} psia</color>";
                    _waterGasPressureTextDetailPage.text = $"Gas Pressure: <color=\"red\">{telemMsg.simulationStates.h2o_gas_pressure} psia</color>";
                    OnEVAStatChange?.Invoke("Water Gas Pressure critically high!", TSSEVATypeEnum.GasPressure, TSSErrorStateEnum.Warning);
                }
                else if (telemMsg.simulationStates.h2o_gas_pressure > -cautionRange + _waterGasPressureExpectedMax)
                {
                    image.color = _cautionBackPlateColor;
                    if (TsErrorState == TSSErrorStateEnum.Normal)
                        TsErrorState = TSSErrorStateEnum.Caution;
                    _waterGasPressureTextMainPage.text = $"Gas Pressure: <color=\"yellow\">{telemMsg.simulationStates.h2o_gas_pressure} psia</color>";
                    _waterGasPressureTextDetailPage.text = $"Gas Pressure: <color=\"yellow\">{telemMsg.simulationStates.h2o_gas_pressure} psia</color>";
                    OnEVAStatChange?.Invoke($"Water Gas Pressure approaching {(int)(-cautionRange + _waterGasPressureExpectedMax)} psia.", TSSEVATypeEnum.GasPressure, TSSErrorStateEnum.Caution);
                }
                else 
                {
                    OnEVAStatChange?.Invoke("", TSSEVATypeEnum.GasPressure, TSSErrorStateEnum.Normal);
                }
                #endregion
                #region Water Liquid Pressure
                _waterLiquidPressureTextMainPage.text = $"Liquid Pressure: <color=\"green\">{telemMsg.simulationStates.h2o_liquid_pressure} psia</color>";
                _waterLiquidPressureTextDetailPage.text = $"Liquid Pressure: <color=\"green\">{telemMsg.simulationStates.h2o_liquid_pressure} psia</color>";
                if (_waterLiquidPressureList.Count >= _waterLiquidPressureCount)
                    _waterLiquidPressureList.RemoveAt(0);
                if (_msgCount % _graphUpdateFrequence >= _graphUpdateFrequence - 1)
                    _waterLiquidPressureList.Add((float)telemMsg.simulationStates.h2o_liquid_pressure);
                if (_waterLiquidPressureWindow_Graph.gameObject.activeInHierarchy)
                {
                    _waterLiquidPressureWindow_Graph.UseIntY(" psia");
                    _waterLiquidPressureWindow_Graph.UseCustomYScale(true, _waterLiquidPressureMin, _waterLiquidPressureMax);
                    _waterLiquidPressureWindow_Graph.UpdateValueList(_waterLiquidPressureList);
                }
                image = _waterLiquidPressureTextMainPage.gameObject.transform.parent.parent.parent.Find("Backplate").GetComponent<RawImage>();
                image.color = _normalBackPlateColor;
                cautionRange = (_waterLiquidPressureExpectedMax - _waterLiquidPressureExpectedMin) * _waterLiquidPressureCautionRangeScale;
                if (telemMsg.simulationStates.h2o_liquid_pressure < _waterLiquidPressureExpectedMin)
                {
                    image.color = _warningBackPlateColor;
                    TsErrorState = TSSErrorStateEnum.Warning;
                    _waterLiquidPressureTextMainPage.text = $"Liquid Pressure: <color=\"red\">{telemMsg.simulationStates.h2o_liquid_pressure} psia</color>";
                    _waterLiquidPressureTextDetailPage.text = $"Liquid Pressure: <color=\"red\">{telemMsg.simulationStates.h2o_liquid_pressure} psia</color>";
                    OnEVAStatChange?.Invoke("Water Liquid Pressure critically low!", TSSEVATypeEnum.LiquidPressure, TSSErrorStateEnum.Warning);
                }
                else if (telemMsg.simulationStates.h2o_liquid_pressure < cautionRange + _waterLiquidPressureExpectedMin)
                {
                    image.color = _cautionBackPlateColor;
                    if (TsErrorState == TSSErrorStateEnum.Normal)
                        TsErrorState = TSSErrorStateEnum.Caution;
                    _waterLiquidPressureTextMainPage.text = $"Liquid Pressure: <color=\"yellow\">{telemMsg.simulationStates.h2o_liquid_pressure} psia</color>";
                    _waterLiquidPressureTextDetailPage.text = $"Liquid Pressure: <color=\"yellow\">{telemMsg.simulationStates.h2o_liquid_pressure} psia</color>";
                    OnEVAStatChange?.Invoke($"Water Liquid Pressure approaching {(int)(cautionRange + _waterLiquidPressureExpectedMin)} psia.", TSSEVATypeEnum.LiquidPressure, TSSErrorStateEnum.Caution);
                }
                else if (telemMsg.simulationStates.h2o_liquid_pressure > _waterLiquidPressureExpectedMax)
                {
                    image.color = _warningBackPlateColor;
                    TsErrorState = TSSErrorStateEnum.Warning;
                    _waterLiquidPressureTextMainPage.text = $"Liquid Pressure: <color=\"red\">{telemMsg.simulationStates.h2o_liquid_pressure} psia</color>";
                    _waterLiquidPressureTextDetailPage.text = $"Liquid Pressure: <color=\"red\">{telemMsg.simulationStates.h2o_liquid_pressure} psia</color>";
                    OnEVAStatChange?.Invoke("Water Liquid Pressure critically high!", TSSEVATypeEnum.LiquidPressure, TSSErrorStateEnum.Warning);
                }
                else if (telemMsg.simulationStates.h2o_liquid_pressure > -cautionRange + _waterLiquidPressureExpectedMax)
                {
                    image.color = _cautionBackPlateColor;
                    if (TsErrorState == TSSErrorStateEnum.Normal)
                        TsErrorState = TSSErrorStateEnum.Caution;
                    _waterLiquidPressureTextMainPage.text = $"Liquid Pressure: <color=\"yellow\">{telemMsg.simulationStates.h2o_liquid_pressure} psia</color>";
                    _waterLiquidPressureTextDetailPage.text = $"Liquid Pressure: <color=\"yellow\">{telemMsg.simulationStates.h2o_liquid_pressure} psia</color>";
                    OnEVAStatChange?.Invoke($"Water Liquid Pressure approaching {(int)(-cautionRange + _waterLiquidPressureExpectedMax)} psia.", TSSEVATypeEnum.LiquidPressure, TSSErrorStateEnum.Caution);
                }
                else
                {
                    OnEVAStatChange?.Invoke("", TSSEVATypeEnum.LiquidPressure, TSSErrorStateEnum.Normal);
                }
                #endregion
                #region Env Sub Pressure
                _envSubPressureTextMainPage.text = $"SUB Pressure: <color=\"green\">{telemMsg.simulationStates.sub_pressure} psia</color>";
                _envSubPressureTextDetailPage.text = $"SUB Pressure: <color=\"green\">{telemMsg.simulationStates.sub_pressure} psia</color>";
                if (_envSubPressureList.Count >= _envSubPressureCount)
                    _envSubPressureList.RemoveAt(0);
                if (_msgCount % _graphUpdateFrequence >= _graphUpdateFrequence - 1)
                    _envSubPressureList.Add((float)telemMsg.simulationStates.sub_pressure);
                if (_envSubPressureWindow_Graph.gameObject.activeInHierarchy)
                {
                    _envSubPressureWindow_Graph.UseFloatY(" psia");
                    _envSubPressureWindow_Graph.UseCustomYScale(true, _envSubPressureMin, _envSubPressureMax);
                    _envSubPressureWindow_Graph.UpdateValueList(_envSubPressureList);
                }
                image = _envSubPressureTextMainPage.gameObject.transform.parent.parent.parent.Find("Backplate").GetComponent<RawImage>();
                image.color = _normalBackPlateColor;
                cautionRange = (_envSubPressureExpectedMax - _envSubPressureExpectedMin) * _envSubPressureCautionRangeScale;
                if (telemMsg.simulationStates.sub_pressure < _envSubPressureExpectedMin)
                {
                    image.color = _warningBackPlateColor;
                    TsErrorState = TSSErrorStateEnum.Warning;
                    _envSubPressureTextMainPage.text = $"SUB Pressure: <color=\"red\">{telemMsg.simulationStates.sub_pressure} psia</color>";
                    _envSubPressureTextDetailPage.text = $"SUB Pressure: <color=\"red\">{telemMsg.simulationStates.sub_pressure} psia</color>";
                    OnEVAStatChange?.Invoke("Sub Pressure critically low!", TSSEVATypeEnum.SubPressure, TSSErrorStateEnum.Warning);
                }
                else if (telemMsg.simulationStates.sub_pressure < cautionRange + _envSubPressureExpectedMin)
                {
                    image.color = _cautionBackPlateColor;
                    if (TsErrorState == TSSErrorStateEnum.Normal)
                        TsErrorState = TSSErrorStateEnum.Caution;
                    _envSubPressureTextMainPage.text = $"SUB Pressure: <color=\"yellow\">{telemMsg.simulationStates.sub_pressure} psia</color>";
                    _envSubPressureTextDetailPage.text = $"SUB Pressure: <color=\"yellow\">{telemMsg.simulationStates.sub_pressure} psia</color>";
                    OnEVAStatChange?.Invoke($"Sub Pressure approaching {(cautionRange + _envSubPressureExpectedMin):F2} psia.", TSSEVATypeEnum.SubPressure, TSSErrorStateEnum.Caution);
                }
                else if (telemMsg.simulationStates.sub_pressure > _envSubPressureExpectedMax)
                {
                    image.color = _warningBackPlateColor;
                    TsErrorState = TSSErrorStateEnum.Warning;
                    _envSubPressureTextMainPage.text = $"SUB Pressure: <color=\"red\">{telemMsg.simulationStates.sub_pressure} psia</color>";
                    _envSubPressureTextDetailPage.text = $"SUB Pressure: <color=\"red\">{telemMsg.simulationStates.sub_pressure} psia</color>";
                    OnEVAStatChange?.Invoke("Sub Pressure critically high!", TSSEVATypeEnum.SubPressure, TSSErrorStateEnum.Warning);
                }
                else if (telemMsg.simulationStates.sub_pressure > -cautionRange + _envSubPressureExpectedMax)
                {
                    image.color = _cautionBackPlateColor;
                    if (TsErrorState == TSSErrorStateEnum.Normal)
                        TsErrorState = TSSErrorStateEnum.Caution;
                    _envSubPressureTextMainPage.text = $"SUB Pressure: <color=\"yellow\">{telemMsg.simulationStates.sub_pressure} psia</color>";
                    _envSubPressureTextDetailPage.text = $"SUB Pressure: <color=\"yellow\">{telemMsg.simulationStates.sub_pressure} psia</color>";
                    OnEVAStatChange?.Invoke($"Sub Pressure approaching {(-cautionRange + _envSubPressureExpectedMax):F2} psia.", TSSEVATypeEnum.SubPressure, TSSErrorStateEnum.Caution);
                }
                else
                {
                    OnEVAStatChange?.Invoke("", TSSEVATypeEnum.SubPressure, TSSErrorStateEnum.Normal);
                }
                #endregion
                #region Env Temperature
                _envTemperatureTextMainPage.text = $"Temperature: <color=\"green\">{telemMsg.simulationStates.temperature} K</color>";
                _envTemperatureTextDetailPage.text = $"SUB Pressure: <color=\"green\">{telemMsg.simulationStates.temperature} K</color>";
                if (_envTemperatureList.Count >= _envTemperatureCount)
                    _envTemperatureList.RemoveAt(0);
                if (_msgCount % _graphUpdateFrequence >= _graphUpdateFrequence - 1)
                    _envTemperatureList.Add((float)telemMsg.simulationStates.temperature);
                if (_envTemperatureWindow_Graph.gameObject.activeInHierarchy)
                {
                    _envTemperatureWindow_Graph.UseIntY(" K");
                    _envTemperatureWindow_Graph.UseCustomYScale(true, _envTemperatureMin, _envTemperatureMax);
                    _envTemperatureWindow_Graph.UpdateValueList(_envTemperatureList);
                }
                image = _envTemperatureTextMainPage.gameObject.transform.parent.parent.parent.Find("Backplate").GetComponent<RawImage>();
                image.color = _normalBackPlateColor;
                cautionRange = (_envTemperatureExpectedMax - _envTemperatureExpectedMin) * _envTemperatureCautionRangeScale;
                if (telemMsg.simulationStates.temperature < _envTemperatureExpectedMin)
                {
                    image.color = _warningBackPlateColor;
                    TsErrorState = TSSErrorStateEnum.Warning;
                    _envTemperatureTextMainPage.text = $"Temperature: <color=\"red\">{telemMsg.simulationStates.temperature} K</color>";
                    _envTemperatureTextDetailPage.text = $"SUB Pressure: <color=\"red\">{telemMsg.simulationStates.temperature} K</color>";
                    OnEVAStatChange?.Invoke("Environment Temperature critically low!", TSSEVATypeEnum.Temperature, TSSErrorStateEnum.Warning);
                }
                else if (telemMsg.simulationStates.temperature < cautionRange + _envTemperatureExpectedMin)
                {
                    image.color = _cautionBackPlateColor;
                    if (TsErrorState == TSSErrorStateEnum.Normal)
                        TsErrorState = TSSErrorStateEnum.Caution;
                    _envTemperatureTextMainPage.text = $"Temperature: <color=\"yellow\">{telemMsg.simulationStates.temperature} K</color>";
                    _envTemperatureTextDetailPage.text = $"SUB Pressure: <color=\"yellow\">{telemMsg.simulationStates.temperature} K</color>";
                    OnEVAStatChange?.Invoke($"Environment Temperature approaching {(int)(cautionRange + _envTemperatureExpectedMin)} K.", TSSEVATypeEnum.Temperature, TSSErrorStateEnum.Caution);
                }
                else if (telemMsg.simulationStates.temperature > _envTemperatureExpectedMax)
                {
                    image.color = _warningBackPlateColor;
                    TsErrorState = TSSErrorStateEnum.Warning;
                    _envTemperatureTextMainPage.text = $"Temperature: <color=\"red\">{telemMsg.simulationStates.temperature} K</color>";
                    _envTemperatureTextDetailPage.text = $"SUB Pressure: <color=\"red\">{telemMsg.simulationStates.temperature} K</color>";
                    OnEVAStatChange?.Invoke("Environment Temperature critically high!", TSSEVATypeEnum.Temperature, TSSErrorStateEnum.Warning);
                }
                else if (telemMsg.simulationStates.temperature > -cautionRange + _envTemperatureExpectedMax)
                {
                    image.color = _cautionBackPlateColor;
                    if (TsErrorState == TSSErrorStateEnum.Normal)
                        TsErrorState = TSSErrorStateEnum.Caution;
                    _envTemperatureTextMainPage.text = $"Temperature: <color=\"yellow\">{telemMsg.simulationStates.temperature} K</color>";
                    _envTemperatureTextDetailPage.text = $"SUB Pressure: <color=\"yellow\">{telemMsg.simulationStates.temperature} K</color>";
                    OnEVAStatChange?.Invoke($"Environment Temperature approaching {(int)(-cautionRange + _envTemperatureExpectedMax)} K.", TSSEVATypeEnum.Temperature, TSSErrorStateEnum.Caution);
                }
                else
                {
                    OnEVAStatChange?.Invoke("", TSSEVATypeEnum.Temperature, TSSErrorStateEnum.Normal);
                }
                #endregion
                #region Oxygen Time Left
                _oxygenTimeLeftMainPage.text = $"Time Left: <color=\"green\">{telemMsg.simulationStates.o2_time_left}</color>";
                _oxygenTimeLeftDetailPage.text = $"Time Left: <color=\"green\">{telemMsg.simulationStates.o2_time_left}</color>";
                HUDManager.Instance.UpdateOxygenTime(telemMsg.simulationStates.o2_time_left.ToString());
                #endregion
                #region Oxygen Primary Percentage
                _oxygenPrimaryPercentageTextMainPage.text = $"Percentage Left: <color=\"green\">{telemMsg.simulationStates.primary_oxygen} %</color>";
                _oxygenPrimaryPercentageTextDetailPage.text = $"Percentage Left: <color=\"green\">{telemMsg.simulationStates.primary_oxygen} %</color>";
                if (_oxygenPrimaryPercentageList.Count >= _oxygenPrimaryPercentageCount)
                    _oxygenPrimaryPercentageList.RemoveAt(0);
                if (_msgCount % _graphUpdateFrequence >= _graphUpdateFrequence - 1)
                    _oxygenPrimaryPercentageList.Add((float)telemMsg.simulationStates.primary_oxygen);
                if (_oxygenPrimaryPercentageWindow_Graph.gameObject.activeInHierarchy)
                {
                    _oxygenPrimaryPercentageWindow_Graph.UseIntY(" %");
                    _oxygenPrimaryPercentageWindow_Graph.UseCustomYScale(true, _oxygenPrimaryPercentageMin, _oxygenPrimaryPercentageMax);
                    _oxygenPrimaryPercentageWindow_Graph.UpdateValueList(_oxygenPrimaryPercentageList);
                }
                image = _oxygenPrimaryPercentageTextMainPage.gameObject.transform.parent.parent.parent.Find("Backplate").GetComponent<RawImage>();
                image.color = _normalBackPlateColor;
                cautionRange = (_oxygenPrimaryPercentageExpectedMax - _oxygenPrimaryPercentageExpectedMin) * _oxygenPrimaryPercentageCautionRangeScale;
                if (telemMsg.simulationStates.primary_oxygen < _oxygenPrimaryPercentageExpectedMin)
                {
                    image.color = _warningBackPlateColor;
                    TsErrorState = TSSErrorStateEnum.Warning;
                    _oxygenPrimaryPercentageTextMainPage.text = $"Percentage Left: <color=\"red\">{telemMsg.simulationStates.primary_oxygen} %</color>";
                    _oxygenPrimaryPercentageTextDetailPage.text = $"Percentage Left: <color=\"red\">{telemMsg.simulationStates.primary_oxygen} %</color>";
                    OnEVAStatChange?.Invoke("Primary Oxygen Percentage critically low!", TSSEVATypeEnum.PrimaryOxygenPercentage, TSSErrorStateEnum.Warning);
                }
                else if (telemMsg.simulationStates.primary_oxygen < cautionRange + _oxygenPrimaryPercentageExpectedMin && _oxygenPrimaryPercentageExpectedMin > (_oxygenPrimaryPercentageMin + 1e-4))
                {
                    image.color = _cautionBackPlateColor;
                    if (TsErrorState == TSSErrorStateEnum.Normal)
                        TsErrorState = TSSErrorStateEnum.Caution;
                    _oxygenPrimaryPercentageTextMainPage.text = $"Percentage Left: <color=\"yellow\">{telemMsg.simulationStates.primary_oxygen} %</color>";
                    _oxygenPrimaryPercentageTextDetailPage.text = $"Percentage Left: <color=\"yellow\">{telemMsg.simulationStates.primary_oxygen} %</color>";
                    OnEVAStatChange?.Invoke($"Primary Oxygen Percentage approaching {(int)(cautionRange + _oxygenPrimaryPercentageExpectedMin)} %.", TSSEVATypeEnum.PrimaryOxygenPercentage, TSSErrorStateEnum.Caution);
                }
                else if (telemMsg.simulationStates.primary_oxygen > _oxygenPrimaryPercentageExpectedMax)
                {
                    image.color = _warningBackPlateColor;
                    TsErrorState = TSSErrorStateEnum.Warning;
                    _oxygenPrimaryPercentageTextMainPage.text = $"Percentage Left: <color=\"red\">{telemMsg.simulationStates.primary_oxygen} %</color>";
                    _oxygenPrimaryPercentageTextDetailPage.text = $"Percentage Left: <color=\"red\">{telemMsg.simulationStates.primary_oxygen} %</color>";
                    OnEVAStatChange?.Invoke("Primary Oxygen Percentage critically high!", TSSEVATypeEnum.PrimaryOxygenPercentage, TSSErrorStateEnum.Warning);
                }
                else if (telemMsg.simulationStates.primary_oxygen > -cautionRange + _oxygenPrimaryPercentageExpectedMax && _oxygenPrimaryPercentageExpectedMax < (_oxygenPrimaryPercentageMax - 1e-4))
                {
                    image.color = _cautionBackPlateColor;
                    if (TsErrorState == TSSErrorStateEnum.Normal)
                        TsErrorState = TSSErrorStateEnum.Caution;
                    _oxygenPrimaryPercentageTextMainPage.text = $"Percentage Left: <color=\"yellow\">{telemMsg.simulationStates.primary_oxygen} %</color>";
                    _oxygenPrimaryPercentageTextDetailPage.text = $"Percentage Left: <color=\"yellow\">{telemMsg.simulationStates.primary_oxygen} %</color>";
                    OnEVAStatChange?.Invoke($"Primary Oxygen Percentage approaching {(int)(-cautionRange + _oxygenPrimaryPercentageExpectedMax)} %.", TSSEVATypeEnum.PrimaryOxygenPercentage, TSSErrorStateEnum.Caution);
                }
                else
                {
                    OnEVAStatChange?.Invoke("", TSSEVATypeEnum.PrimaryOxygenPercentage, TSSErrorStateEnum.Normal);
                }
                #endregion
                #region Oxygen Primary Pressure
                _oxygenPrimaryPressureTextMainPage.text = $"Pressure: <color=\"green\">{telemMsg.simulationStates.o2_pressure} psia</color>";
                _oxygenPrimaryPressureTextDetailPage.text = $"Pressure: <color=\"green\">{telemMsg.simulationStates.o2_pressure} psia</color>";
                if (_oxygenPrimaryPressureList.Count >= _oxygenPrimaryPressureCount)
                    _oxygenPrimaryPressureList.RemoveAt(0);
                if (_msgCount % _graphUpdateFrequence >= _graphUpdateFrequence - 1)
                    _oxygenPrimaryPressureList.Add((float)telemMsg.simulationStates.o2_pressure);
                if (_oxygenPrimaryPressureWindow_Graph.gameObject.activeInHierarchy)
                {
                    _oxygenPrimaryPressureWindow_Graph.UseIntY(" psia");
                    _oxygenPrimaryPressureWindow_Graph.UseCustomYScale(true, _oxygenPrimaryPressureMin, _oxygenPrimaryPressureMax);
                    _oxygenPrimaryPressureWindow_Graph.UpdateValueList(_oxygenPrimaryPressureList);
                }
                image = _oxygenPrimaryPressureTextMainPage.gameObject.transform.parent.parent.parent.Find("Backplate").GetComponent<RawImage>();
                image.color = _normalBackPlateColor;
                cautionRange = (_oxygenPrimaryPressureExpectedMax - _oxygenPrimaryPressureExpectedMin) * _oxygenPrimaryPressureCautionRangeScale;
                if (telemMsg.simulationStates.o2_pressure < _oxygenPrimaryPressureExpectedMin)
                {
                    image.color = _warningBackPlateColor;
                    TsErrorState = TSSErrorStateEnum.Warning;
                    _oxygenPrimaryPressureTextMainPage.text = $"Pressure: <color=\"red\">{telemMsg.simulationStates.o2_pressure} psia</color>";
                    _oxygenPrimaryPressureTextDetailPage.text = $"Pressure: <color=\"red\">{telemMsg.simulationStates.o2_pressure} psia</color>";
                    OnEVAStatChange?.Invoke("Primary Oxygen Pressure critically low!", TSSEVATypeEnum.PrimaryOxygenPressure, TSSErrorStateEnum.Warning);
                }
                else if (telemMsg.simulationStates.o2_pressure < cautionRange + _oxygenPrimaryPressureExpectedMin)
                {
                    image.color = _cautionBackPlateColor;
                    if (TsErrorState == TSSErrorStateEnum.Normal)
                        TsErrorState = TSSErrorStateEnum.Caution;
                    _oxygenPrimaryPressureTextMainPage.text = $"Pressure: <color=\"yellow\">{telemMsg.simulationStates.o2_pressure} psia</color>";
                    _oxygenPrimaryPressureTextDetailPage.text = $"Pressure: <color=\"yellow\">{telemMsg.simulationStates.o2_pressure} psia</color>";
                    OnEVAStatChange?.Invoke($"Primary Oxygen Pressure approaching {(int)(cautionRange + _oxygenPrimaryPressureExpectedMin)} psia.", TSSEVATypeEnum.PrimaryOxygenPressure, TSSErrorStateEnum.Caution);
                }
                else if (telemMsg.simulationStates.o2_pressure > _oxygenPrimaryPressureExpectedMax)
                {
                    image.color = _warningBackPlateColor;
                    TsErrorState = TSSErrorStateEnum.Warning;
                    _oxygenPrimaryPressureTextMainPage.text = $"Pressure: <color=\"red\">{telemMsg.simulationStates.o2_pressure} psia</color>";
                    _oxygenPrimaryPressureTextDetailPage.text = $"Pressure: <color=\"red\">{telemMsg.simulationStates.o2_pressure} psia</color>";
                    OnEVAStatChange?.Invoke("Primary Oxygen Pressure critically high!", TSSEVATypeEnum.PrimaryOxygenPressure, TSSErrorStateEnum.Warning);
                }
                else if (telemMsg.simulationStates.o2_pressure > -cautionRange + _oxygenPrimaryPressureExpectedMax)
                {
                    image.color = _cautionBackPlateColor;
                    if (TsErrorState == TSSErrorStateEnum.Normal)
                        TsErrorState = TSSErrorStateEnum.Caution;
                    _oxygenPrimaryPressureTextMainPage.text = $"Pressure: <color=\"yellow\">{telemMsg.simulationStates.o2_pressure} psia</color>";
                    _oxygenPrimaryPressureTextDetailPage.text = $"Pressure: <color=\"yellow\">{telemMsg.simulationStates.o2_pressure} psia</color>";
                    OnEVAStatChange?.Invoke($"Primary Oxygen Pressure approaching {(int)(-cautionRange + _oxygenPrimaryPressureExpectedMax)} psia.", TSSEVATypeEnum.PrimaryOxygenPressure, TSSErrorStateEnum.Caution);
                }
                else
                {
                    OnEVAStatChange?.Invoke("", TSSEVATypeEnum.PrimaryOxygenPressure, TSSErrorStateEnum.Normal);
                }
                #endregion
                #region Oxygen Primary Flowrate
                _oxygenPrimaryFlowrateTextMainPage.text = $"Flowrate: <color=\"green\">{telemMsg.simulationStates.o2_rate} psi/min</color>";
                _oxygenPrimaryFlowrateTextDetailPage.text = $"Flowrate: <color=\"green\">{telemMsg.simulationStates.o2_rate} psi/min</color>";
                if (_oxygenPrimaryFlowrateList.Count >= _oxygenPrimaryFlowrateCount)
                    _oxygenPrimaryFlowrateList.RemoveAt(0);
                if (_msgCount % _graphUpdateFrequence >= _graphUpdateFrequence - 1)
                    _oxygenPrimaryFlowrateList.Add((float)telemMsg.simulationStates.o2_rate);
                if (_oxygenPrimaryFlowrateWindow_Graph.gameObject.activeInHierarchy)
                {
                    _oxygenPrimaryFlowrateWindow_Graph.UseFloatY(" psi/min");
                    _oxygenPrimaryFlowrateWindow_Graph.UseCustomYScale(true, _oxygenPrimaryFlowrateMin, _oxygenPrimaryFlowrateMax);
                    _oxygenPrimaryFlowrateWindow_Graph.UpdateValueList(_oxygenPrimaryFlowrateList);
                }
                image = _oxygenPrimaryFlowrateTextMainPage.gameObject.transform.parent.parent.parent.Find("Backplate").GetComponent<RawImage>();
                image.color = _normalBackPlateColor;
                cautionRange = (_oxygenPrimaryFlowrateExpectedMax - _oxygenPrimaryFlowrateExpectedMin) * _oxygenPrimaryFlowrateCautionRangeScale;
                if (telemMsg.simulationStates.o2_rate < _oxygenPrimaryFlowrateExpectedMin)
                {
                    image.color = _warningBackPlateColor;
                    TsErrorState = TSSErrorStateEnum.Warning;
                    _oxygenPrimaryFlowrateTextMainPage.text = $"Flowrate: <color=\"red\">{telemMsg.simulationStates.o2_rate} psi/min</color>";
                    _oxygenPrimaryFlowrateTextDetailPage.text = $"Flowrate: <color=\"red\">{telemMsg.simulationStates.o2_rate} psi/min</color>";
                    OnEVAStatChange?.Invoke("Primary Oxygen Flowrate critically low!", TSSEVATypeEnum.PrimaryOxygenFlowrate, TSSErrorStateEnum.Normal);
                }
                else if (telemMsg.simulationStates.o2_rate < cautionRange + _oxygenPrimaryFlowrateExpectedMin)
                {
                    image.color = _cautionBackPlateColor;
                    if (TsErrorState == TSSErrorStateEnum.Normal)
                        TsErrorState = TSSErrorStateEnum.Caution;
                    _oxygenPrimaryFlowrateTextMainPage.text = $"Flowrate: <color=\"yellow\">{telemMsg.simulationStates.o2_rate} psi/min</color>";
                    _oxygenPrimaryFlowrateTextDetailPage.text = $"Flowrate: <color=\"yellow\">{telemMsg.simulationStates.o2_rate} psi/min</color>";
                    OnEVAStatChange?.Invoke($"Primary Oxygen Flowrate approaching {(cautionRange + _oxygenPrimaryFlowrateExpectedMin):F2} psi/min.", TSSEVATypeEnum.PrimaryOxygenFlowrate, TSSErrorStateEnum.Caution);
                }
                else if (telemMsg.simulationStates.o2_rate > _oxygenPrimaryFlowrateExpectedMax)
                {
                    image.color = _warningBackPlateColor;
                    TsErrorState = TSSErrorStateEnum.Warning;
                    _oxygenPrimaryFlowrateTextMainPage.text = $"Flowrate: <color=\"red\">{telemMsg.simulationStates.o2_rate} psi/min</color>";
                    _oxygenPrimaryFlowrateTextDetailPage.text = $"Flowrate: <color=\"red\">{telemMsg.simulationStates.o2_rate} psi/min</color>";
                    OnEVAStatChange?.Invoke("Primary Oxygen Flowrate critically high!", TSSEVATypeEnum.PrimaryOxygenFlowrate, TSSErrorStateEnum.Warning);
                }
                else if (telemMsg.simulationStates.o2_rate > -cautionRange + _oxygenPrimaryFlowrateExpectedMax)
                {
                    image.color = _cautionBackPlateColor;
                    if (TsErrorState == TSSErrorStateEnum.Normal)
                        TsErrorState = TSSErrorStateEnum.Caution;
                    _oxygenPrimaryFlowrateTextMainPage.text = $"Flowrate: <color=\"yellow\">{telemMsg.simulationStates.o2_rate} psi/min</color>";
                    _oxygenPrimaryFlowrateTextDetailPage.text = $"Flowrate: <color=\"yellow\">{telemMsg.simulationStates.o2_rate} psi/min</color>";
                    OnEVAStatChange?.Invoke($"Primary Oxygen Flowrate approaching {(-cautionRange + _oxygenPrimaryFlowrateExpectedMax):F2} psi/min.", TSSEVATypeEnum.PrimaryOxygenFlowrate, TSSErrorStateEnum.Caution);
                }
                else
                {
                    OnEVAStatChange?.Invoke("", TSSEVATypeEnum.PrimaryOxygenFlowrate, TSSErrorStateEnum.Normal);
                }
                #endregion
                #region Oxygen Secondary Percentage
                _oxygenSecondaryPercentageTextMainPage.text = $"Percentage Left: <color=\"green\">{telemMsg.simulationStates.secondary_oxygen} %</color>";
                _oxygenSecondaryPercentageTextDetailPage.text = $"Percentage Left: <color=\"green\">{telemMsg.simulationStates.secondary_oxygen} %</color>";
                if (_oxygenSecondaryPercentageList.Count >= _oxygenSecondaryPercentageCount)
                    _oxygenSecondaryPercentageList.RemoveAt(0);
                if (_msgCount % _graphUpdateFrequence >= _graphUpdateFrequence - 1)
                    _oxygenSecondaryPercentageList.Add((float)telemMsg.simulationStates.secondary_oxygen);
                if (_oxygenSecondaryPercentageWindow_Graph.gameObject.activeInHierarchy)
                {
                    _oxygenSecondaryPercentageWindow_Graph.UseIntY(" %");
                    _oxygenSecondaryPercentageWindow_Graph.UseCustomYScale(true, _oxygenSecondaryPercentageMin, _oxygenSecondaryPercentageMax);
                    _oxygenSecondaryPercentageWindow_Graph.UpdateValueList(_oxygenSecondaryPercentageList);
                }
                image = _oxygenSecondaryPercentageTextMainPage.gameObject.transform.parent.parent.parent.Find("Backplate").GetComponent<RawImage>();
                image.color = _normalBackPlateColor;
                cautionRange = (_oxygenSecondaryPercentageExpectedMax - _oxygenSecondaryPercentageExpectedMin) * _oxygenSecondaryPercentageCautionRangeScale;
                if (telemMsg.simulationStates.secondary_oxygen < _oxygenSecondaryPercentageExpectedMin)
                {
                    image.color = _warningBackPlateColor;
                    TsErrorState = TSSErrorStateEnum.Warning;
                    _oxygenSecondaryPercentageTextMainPage.text = $"Percentage Left: <color=\"red\">{telemMsg.simulationStates.secondary_oxygen} %</color>";
                    _oxygenSecondaryPercentageTextDetailPage.text = $"Percentage Left: <color=\"red\">{telemMsg.simulationStates.secondary_oxygen} %</color>";
                    OnEVAStatChange?.Invoke("Secondary Oxygen Percentage critically low!", TSSEVATypeEnum.SecondaryOxygenPercentage, TSSErrorStateEnum.Warning);
                }
                else if (telemMsg.simulationStates.secondary_oxygen < cautionRange + _oxygenSecondaryPercentageExpectedMin && _oxygenSecondaryPercentageExpectedMin > (_oxygenSecondaryPercentageMin + 1e-4))
                {
                    image.color = _cautionBackPlateColor;
                    if (TsErrorState == TSSErrorStateEnum.Normal)
                        TsErrorState = TSSErrorStateEnum.Caution;
                    _oxygenSecondaryPercentageTextMainPage.text = $"Percentage Left: <color=\"yellow\">{telemMsg.simulationStates.secondary_oxygen} %</color>";
                    _oxygenSecondaryPercentageTextDetailPage.text = $"Percentage Left: <color=\"yellow\">{telemMsg.simulationStates.secondary_oxygen} %</color>";
                    OnEVAStatChange?.Invoke($"Secondary Oxygen Percentage approaching {(int)(cautionRange + _oxygenSecondaryPercentageExpectedMin)} %.", TSSEVATypeEnum.SecondaryOxygenPercentage, TSSErrorStateEnum.Caution);
                }
                else if (telemMsg.simulationStates.secondary_oxygen > _oxygenSecondaryPercentageExpectedMax)
                {
                    image.color = _warningBackPlateColor;
                    TsErrorState = TSSErrorStateEnum.Warning;
                    _oxygenSecondaryPercentageTextMainPage.text = $"Percentage Left: <color=\"red\">{telemMsg.simulationStates.secondary_oxygen} %</color>";
                    _oxygenSecondaryPercentageTextDetailPage.text = $"Percentage Left: <color=\"red\">{telemMsg.simulationStates.secondary_oxygen} %</color>";
                    OnEVAStatChange?.Invoke("Secondary Oxygen Percentage critically high!", TSSEVATypeEnum.SecondaryOxygenPercentage, TSSErrorStateEnum.Warning);
                }
                else if (telemMsg.simulationStates.secondary_oxygen > -cautionRange + _oxygenSecondaryPercentageExpectedMax && _oxygenSecondaryPercentageExpectedMax < (_oxygenSecondaryPercentageMax - 1e-4))
                {
                    image.color = _cautionBackPlateColor;
                    if (TsErrorState == TSSErrorStateEnum.Normal)
                        TsErrorState = TSSErrorStateEnum.Caution;
                    _oxygenSecondaryPercentageTextMainPage.text = $"Percentage Left: <color=\"yellow\">{telemMsg.simulationStates.secondary_oxygen} %</color>";
                    _oxygenSecondaryPercentageTextDetailPage.text = $"Percentage Left: <color=\"yellow\">{telemMsg.simulationStates.secondary_oxygen} %</color>";
                    OnEVAStatChange?.Invoke($"Secondary Oxygen Percentage approaching {(int)(-cautionRange + _oxygenSecondaryPercentageExpectedMax)} %.", TSSEVATypeEnum.SecondaryOxygenPercentage, TSSErrorStateEnum.Caution);
                }
                else
                {
                    OnEVAStatChange?.Invoke("", TSSEVATypeEnum.SecondaryOxygenPercentage, TSSErrorStateEnum.Normal);
                }
                #endregion
                #region Oxygen Secondary Pressure
                _oxygenSecondaryPressureTextMainPage.text = $"Pressure: <color=\"green\">{telemMsg.simulationStates.sop_pressure} psia</color>";
                _oxygenSecondaryPressureTextDetailPage.text = $"Pressure: <color=\"green\">{telemMsg.simulationStates.sop_pressure} psia</color>";
                if (_oxygenSecondaryPressureList.Count >= _oxygenSecondaryPressureCount)
                    _oxygenSecondaryPressureList.RemoveAt(0);
                if (_msgCount % _graphUpdateFrequence >= _graphUpdateFrequence - 1)
                    _oxygenSecondaryPressureList.Add((float)telemMsg.simulationStates.sop_pressure);
                if (_oxygenSecondaryPressureWindow_Graph.gameObject.activeInHierarchy)
                {
                    _oxygenSecondaryPressureWindow_Graph.UseIntY(" psia");
                    _oxygenSecondaryPressureWindow_Graph.UseCustomYScale(true, _oxygenSecondaryPressureMin, _oxygenSecondaryPressureMax);
                    _oxygenSecondaryPressureWindow_Graph.UpdateValueList(_oxygenSecondaryPressureList);
                }
                image = _oxygenSecondaryPressureTextMainPage.gameObject.transform.parent.parent.parent.Find("Backplate").GetComponent<RawImage>();
                image.color = _normalBackPlateColor;
                cautionRange = (_oxygenSecondaryPressureExpectedMax - _oxygenSecondaryPressureExpectedMin) * _oxygenSecondaryPressureCautionRangeScale;
                if (telemMsg.simulationStates.sop_pressure < _oxygenSecondaryPressureExpectedMin)
                {
                    image.color = _warningBackPlateColor;
                    TsErrorState = TSSErrorStateEnum.Warning;
                    _oxygenSecondaryPressureTextMainPage.text = $"Pressure: <color=\"red\">{telemMsg.simulationStates.sop_pressure} psia</color>";
                    _oxygenSecondaryPressureTextDetailPage.text = $"Pressure: <color=\"red\">{telemMsg.simulationStates.sop_pressure} psia</color>";
                    OnEVAStatChange?.Invoke("Secondary Oxygen Pressure critically low!", TSSEVATypeEnum.SecondaryOxygenPressure, TSSErrorStateEnum.Warning);
                }
                else if (telemMsg.simulationStates.sop_pressure < cautionRange + _oxygenSecondaryPressureExpectedMin)
                {
                    image.color = _cautionBackPlateColor;
                    if (TsErrorState == TSSErrorStateEnum.Normal)
                        TsErrorState = TSSErrorStateEnum.Caution;
                    _oxygenSecondaryPressureTextMainPage.text = $"Pressure: <color=\"yellow\">{telemMsg.simulationStates.sop_pressure} psia</color>";
                    _oxygenSecondaryPressureTextDetailPage.text = $"Pressure: <color=\"yellow\">{telemMsg.simulationStates.sop_pressure} psia</color>";
                    OnEVAStatChange?.Invoke($"Secondary Oxygen Pressure approaching {(int)(cautionRange + _oxygenSecondaryPressureExpectedMin)} psia.", TSSEVATypeEnum.SecondaryOxygenPressure, TSSErrorStateEnum.Caution);
                }
                else if (telemMsg.simulationStates.sop_pressure > _oxygenSecondaryPressureExpectedMax)
                {
                    image.color = _warningBackPlateColor;
                    TsErrorState = TSSErrorStateEnum.Warning;
                    _oxygenSecondaryPressureTextMainPage.text = $"Pressure: <color=\"red\">{telemMsg.simulationStates.sop_pressure} psia</color>";
                    _oxygenSecondaryPressureTextDetailPage.text = $"Pressure: <color=\"red\">{telemMsg.simulationStates.sop_pressure} psia</color>";
                    OnEVAStatChange?.Invoke("Secondary Oxygen Pressure critically high!", TSSEVATypeEnum.SecondaryOxygenPressure, TSSErrorStateEnum.Warning);
                }
                else if (telemMsg.simulationStates.sop_pressure > -cautionRange + _oxygenSecondaryPressureExpectedMax)
                {
                    image.color = _cautionBackPlateColor;
                    if (TsErrorState == TSSErrorStateEnum.Normal)
                        TsErrorState = TSSErrorStateEnum.Caution;
                    _oxygenSecondaryPressureTextMainPage.text = $"Pressure: <color=\"yellow\">{telemMsg.simulationStates.sop_pressure} psia</color>";
                    _oxygenSecondaryPressureTextDetailPage.text = $"Pressure: <color=\"yellow\">{telemMsg.simulationStates.sop_pressure} psia</color>";
                    OnEVAStatChange?.Invoke($"Secondary Oxygen Pressure approaching {(int)(-cautionRange + _oxygenSecondaryPressureExpectedMax)} psia.", TSSEVATypeEnum.SecondaryOxygenPressure, TSSErrorStateEnum.Caution);
                }
                else
                {
                    OnEVAStatChange?.Invoke("", TSSEVATypeEnum.SecondaryOxygenPressure, TSSErrorStateEnum.Normal);
                }
                #endregion
                #region Oxygen Secondary Flowrate
                _oxygenSecondaryFlowrateTextMainPage.text = $"Flowrate: <color=\"green\">{telemMsg.simulationStates.sop_rate} psi/min</color>";
                _oxygenSecondaryFlowrateTextDetailPage.text = $"Flowrate: <color=\"green\">{telemMsg.simulationStates.sop_rate} psi/min</color>";
                if (_oxygenSecondaryFlowrateList.Count >= _oxygenSecondaryFlowrateCount)
                    _oxygenSecondaryFlowrateList.RemoveAt(0);
                if (_msgCount % _graphUpdateFrequence >= _graphUpdateFrequence - 1)
                    _oxygenSecondaryFlowrateList.Add((float)telemMsg.simulationStates.sop_rate);
                if (_oxygenSecondaryFlowrateWindow_Graph.gameObject.activeInHierarchy)
                {
                    _oxygenSecondaryFlowrateWindow_Graph.UseFloatY(" psi/min");
                    _oxygenSecondaryFlowrateWindow_Graph.UseCustomYScale(true, _oxygenSecondaryFlowrateMin, _oxygenSecondaryFlowrateMax);
                    _oxygenSecondaryFlowrateWindow_Graph.UpdateValueList(_oxygenSecondaryFlowrateList);
                }
                image = _oxygenSecondaryFlowrateTextMainPage.gameObject.transform.parent.parent.parent.Find("Backplate").GetComponent<RawImage>();
                image.color = _normalBackPlateColor;
                cautionRange = (_oxygenSecondaryFlowrateExpectedMax - _oxygenSecondaryFlowrateExpectedMin) * _oxygenSecondaryFlowrateCautionRangeScale;
                if (telemMsg.simulationStates.sop_rate < _oxygenSecondaryFlowrateExpectedMin)
                {
                    image.color = _warningBackPlateColor;
                    TsErrorState = TSSErrorStateEnum.Warning;
                    _oxygenSecondaryFlowrateTextMainPage.text = $"Flowrate: <color=\"red\">{telemMsg.simulationStates.sop_rate} psi/min</color>";
                    _oxygenSecondaryFlowrateTextDetailPage.text = $"Flowrate: <color=\"red\">{telemMsg.simulationStates.sop_rate} psi/min</color>";
                    OnEVAStatChange?.Invoke("Secondary Oxygen Flowrate critically low!", TSSEVATypeEnum.SecondaryOxygenFlowrate, TSSErrorStateEnum.Warning);
                }
                else if (telemMsg.simulationStates.sop_rate < cautionRange + _oxygenSecondaryFlowrateExpectedMin)
                {
                    image.color = _cautionBackPlateColor;
                    if (TsErrorState == TSSErrorStateEnum.Normal)
                        TsErrorState = TSSErrorStateEnum.Caution;
                    _oxygenSecondaryFlowrateTextMainPage.text = $"Flowrate: <color=\"yellow\">{telemMsg.simulationStates.sop_rate} psi/min</color>";
                    _oxygenSecondaryFlowrateTextDetailPage.text = $"Flowrate: <color=\"yellow\">{telemMsg.simulationStates.sop_rate} psi/min</color>";
                    OnEVAStatChange?.Invoke($"Secondary Oxygen Flowrate approaching {(cautionRange + _oxygenSecondaryFlowrateExpectedMin):F2} psi/min.", TSSEVATypeEnum.SecondaryOxygenFlowrate, TSSErrorStateEnum.Caution);
                }
                else if (telemMsg.simulationStates.sop_rate > _oxygenSecondaryFlowrateExpectedMax)
                {
                    image.color = _warningBackPlateColor;
                    TsErrorState = TSSErrorStateEnum.Warning;
                    _oxygenSecondaryFlowrateTextMainPage.text = $"Flowrate: <color=\"red\">{telemMsg.simulationStates.sop_rate} psi/min</color>";
                    _oxygenSecondaryFlowrateTextDetailPage.text = $"Flowrate: <color=\"red\">{telemMsg.simulationStates.sop_rate} psi/min</color>";
                    OnEVAStatChange?.Invoke("Secondary Oxygen Flowrate critically high!", TSSEVATypeEnum.SecondaryOxygenFlowrate, TSSErrorStateEnum.Warning);
                }
                else if (telemMsg.simulationStates.sop_rate > -cautionRange + _oxygenSecondaryFlowrateExpectedMax)
                {
                    image.color = _cautionBackPlateColor;
                    if (TsErrorState == TSSErrorStateEnum.Normal)
                        TsErrorState = TSSErrorStateEnum.Caution;
                    _oxygenSecondaryFlowrateTextMainPage.text = $"Flowrate: <color=\"yellow\">{telemMsg.simulationStates.sop_rate} psi/min</color>";
                    _oxygenSecondaryFlowrateTextDetailPage.text = $"Flowrate: <color=\"yellow\">{telemMsg.simulationStates.sop_rate} psi/min</color>";
                    OnEVAStatChange?.Invoke($"Secondary Oxygen Flowrate approaching {(-cautionRange + _oxygenSecondaryFlowrateExpectedMax):F2} psi/min.", TSSEVATypeEnum.SecondaryOxygenFlowrate, TSSErrorStateEnum.Caution);
                }
                else
                {
                    OnEVAStatChange?.Invoke("", TSSEVATypeEnum.SecondaryOxygenFlowrate, TSSErrorStateEnum.Normal);
                }
                #endregion
                #region Spectroscopy
                if (telemMsg.specMsg != null)
                {
                    if (telemMsg.specMsg.SiO2 > 0 && !specScanManager.CheckScanExists(telemMsg.specMsg.SiO2)) {
                        Dictionary<SpectroscopyScanManager.Mineral, float> rockComposition = new Dictionary<SpectroscopyScanManager.Mineral, float>();
                        rockComposition.Add(SpectroscopyScanManager.Mineral.SiO2, telemMsg.specMsg.SiO2);
                        rockComposition.Add(SpectroscopyScanManager.Mineral.TiO2, telemMsg.specMsg.TiO2);
                        rockComposition.Add(SpectroscopyScanManager.Mineral.Al2O3, telemMsg.specMsg.Al2O3);
                        rockComposition.Add(SpectroscopyScanManager.Mineral.FeO, telemMsg.specMsg.FeO);
                        rockComposition.Add(SpectroscopyScanManager.Mineral.MnO, telemMsg.specMsg.MnO);
                        rockComposition.Add(SpectroscopyScanManager.Mineral.MgO, telemMsg.specMsg.MgO);
                        rockComposition.Add(SpectroscopyScanManager.Mineral.CaO, telemMsg.specMsg.CaO);
                        rockComposition.Add(SpectroscopyScanManager.Mineral.K2O, telemMsg.specMsg.K2O);
                        rockComposition.Add(SpectroscopyScanManager.Mineral.P2O3, telemMsg.specMsg.P2O3);
                        specScanManager.rockTypeReference.TryGetValue(telemMsg.specMsg.SiO2, out string rockType);
                        specScanManager.rockPetrologyReference.TryGetValue(telemMsg.specMsg.SiO2, out string rockPetrology);
                        SpectroscopyScanManager.SpecData specData = new SpectroscopyScanManager.SpecData(rockComposition, rockTagID: rockTagID, rockType: rockType, petrology: rockPetrology);
                        specScanManager.AddScan(specData);
                        //specScanManager.SwitchToSpectroscopyResultPage(specData);  // Automatically pull up the spectroscopy result page with the new data
                        rockTagID++;
                    }
                }
                #endregion

                if (TsErrorState == TSSErrorStateEnum.Normal)
                {
                    _allDataText.text = "Status: <color=\"green\">Normal</color>";
                } 
                else if (TsErrorState == TSSErrorStateEnum.Caution)
                {
                    _allDataText.text = "Status: <color=\"yellow\">Caution</color>";
                }
                else if (TsErrorState == TSSErrorStateEnum.Warning)
                {
                    _allDataText.text = "Status: <color=\"red\">Warning</color>";
                }
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
    public void SendRoverCoords(float lat, float lon)
    {
        // However you get the lat and lon from the user, pass them to the following method
        _tss.SendRoverNavigateCommand(lat, lon);
    }
    public void SendRoverRecall()
    {
        // Call the following method
        _tss.SendRoverRecallCommand();
    }
}

[SerializeField]
public enum TSSErrorStateEnum
{
    Normal = 0,
    Caution = 1,
    Warning = 2
}

[SerializeField]
public enum TSSEVATypeEnum
{
    BatteryPercentage,
    BatteryCapacity,
    SuitPressure,
    FanSpeed,
    GasPressure,
    LiquidPressure,
    SubPressure,
    Temperature,
    HeartRate,
    PrimaryOxygenPercentage,
    PrimaryOxygenPressure,
    PrimaryOxygenFlowrate,
    SecondaryOxygenPercentage,
    SecondaryOxygenPressure,
    SecondaryOxygenFlowrate,
}