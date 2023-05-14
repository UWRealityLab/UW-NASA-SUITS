using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class AlertManager : Singleton<AlertManager>
{
    [SerializeField] private GameObject _alertIconPrefab;
    [SerializeField] private Transform _prefabParent;

    [SerializeField] private Texture _cautionBackgroundImage;
    [SerializeField] private Texture _warningBackgroundImage;

    [SerializeField] private Texture _batteryIconImage;
    [SerializeField] private Texture _pressureIconImage;
    [SerializeField] private Texture _fanIconImage;
    [SerializeField] private Texture _waterIconImage;
    [SerializeField] private Texture _biomedicalIconImage;
    [SerializeField] private Texture _oxygenIconImage;

    [SerializeField] private GameObject _scrollListItemPrefab;
    [SerializeField] private Transform _scrollListParent;
    [SerializeField] private Texture _cautionIconImage;
    [SerializeField] private Texture _warningIconImage;

    [SerializeField] private GameObject _popupAlertPrefab;
    [SerializeField] private Transform _popupAlertParent;


    private Dictionary<TSSEVATypeEnum, TSSErrorStateEnum> _map = new();
    private Dictionary<TSSEVATypeEnum, TSSErrorStateEnum> _mapOld = new();
    private Dictionary<TSSEVATypeEnum, GameObject> _visualMap = new();

    private void Start()
    {
        TelemetryManager.OnEVAStatChange += OnEVAErrorStateChange;
        _map.Add(TSSEVATypeEnum.BatteryPercentage, TSSErrorStateEnum.Normal);
        _map.Add(TSSEVATypeEnum.BatteryCapacity, TSSErrorStateEnum.Normal);
        _map.Add(TSSEVATypeEnum.SuitPressure, TSSErrorStateEnum.Normal);
        _map.Add(TSSEVATypeEnum.FanSpeed, TSSErrorStateEnum.Normal);
        _map.Add(TSSEVATypeEnum.GasPressure, TSSErrorStateEnum.Normal);
        _map.Add(TSSEVATypeEnum.LiquidPressure, TSSErrorStateEnum.Normal);
        _map.Add(TSSEVATypeEnum.SubPressure, TSSErrorStateEnum.Normal);
        _map.Add(TSSEVATypeEnum.Temperature, TSSErrorStateEnum.Normal);
        _map.Add(TSSEVATypeEnum.HeartRate, TSSErrorStateEnum.Normal);
        _map.Add(TSSEVATypeEnum.PrimaryOxygenPercentage, TSSErrorStateEnum.Normal);
        _map.Add(TSSEVATypeEnum.PrimaryOxygenPressure, TSSErrorStateEnum.Normal);
        _map.Add(TSSEVATypeEnum.PrimaryOxygenFlowrate, TSSErrorStateEnum.Normal);
        _map.Add(TSSEVATypeEnum.SecondaryOxygenPercentage, TSSErrorStateEnum.Normal);
        _map.Add(TSSEVATypeEnum.SecondaryOxygenPressure, TSSErrorStateEnum.Normal);
        _map.Add(TSSEVATypeEnum.SecondaryOxygenFlowrate, TSSErrorStateEnum.Normal);

        _mapOld.Add(TSSEVATypeEnum.BatteryPercentage, TSSErrorStateEnum.Normal);
        _mapOld.Add(TSSEVATypeEnum.BatteryCapacity, TSSErrorStateEnum.Normal);
        _mapOld.Add(TSSEVATypeEnum.SuitPressure, TSSErrorStateEnum.Normal);
        _mapOld.Add(TSSEVATypeEnum.FanSpeed, TSSErrorStateEnum.Normal);
        _mapOld.Add(TSSEVATypeEnum.GasPressure, TSSErrorStateEnum.Normal);
        _mapOld.Add(TSSEVATypeEnum.LiquidPressure, TSSErrorStateEnum.Normal);
        _mapOld.Add(TSSEVATypeEnum.SubPressure, TSSErrorStateEnum.Normal);
        _mapOld.Add(TSSEVATypeEnum.Temperature, TSSErrorStateEnum.Normal);
        _mapOld.Add(TSSEVATypeEnum.HeartRate, TSSErrorStateEnum.Normal);
        _mapOld.Add(TSSEVATypeEnum.PrimaryOxygenPercentage, TSSErrorStateEnum.Normal);
        _mapOld.Add(TSSEVATypeEnum.PrimaryOxygenPressure, TSSErrorStateEnum.Normal);
        _mapOld.Add(TSSEVATypeEnum.PrimaryOxygenFlowrate, TSSErrorStateEnum.Normal);
        _mapOld.Add(TSSEVATypeEnum.SecondaryOxygenPercentage, TSSErrorStateEnum.Normal);
        _mapOld.Add(TSSEVATypeEnum.SecondaryOxygenPressure, TSSErrorStateEnum.Normal);
        _mapOld.Add(TSSEVATypeEnum.SecondaryOxygenFlowrate, TSSErrorStateEnum.Normal);
    }

    public void OnEVAErrorStateChange(string msg, TSSEVATypeEnum type, TSSErrorStateEnum error)
    {
        _map[type] = error;

        if (_map[type] != _mapOld[type] && _mapOld[type] == TSSErrorStateEnum.Normal)
        {
            if (_map[type] == TSSErrorStateEnum.Caution)
            {
                SoundManager.Instance.PlayCautionSound();
            }
            if (_map[type] == TSSErrorStateEnum.Warning)
            {
                SoundManager.Instance.PlayWarningSound();
            }

            GameObject listItem = Instantiate(_scrollListItemPrefab, _scrollListParent);
            TMP_Text text = listItem.GetComponentInChildren<TMP_Text>();
            RawImage image = text.gameObject.transform.parent.Find("RawImage").GetComponentInChildren<RawImage>();
            text.text = $"<size=7>{type}</size>\n<size=5>{msg}</size>";
            if (_map[type] == TSSErrorStateEnum.Caution)
                image.texture = _cautionIconImage;
            else
                image.texture = _warningIconImage;
            if (_map[type] == TSSErrorStateEnum.Caution)
                listItem.transform.SetAsLastSibling();
            else
                listItem.transform.SetAsFirstSibling();

            GameObject popupAlert = Instantiate(_popupAlertPrefab, _popupAlertParent);
            image = popupAlert.GetComponentInChildren<RawImage>();
            text = image.gameObject.transform.parent.Find("Text").GetComponent<TMP_Text>();
            text.text = $"<size=12>{type}</size>\n<br><size=8>{msg}</size>";
            if (_map[type] == TSSErrorStateEnum.Caution)
                image.texture = _cautionIconImage;
            else
                image.texture = _warningIconImage;
        }

        if (_map[type] == TSSErrorStateEnum.Warning && _mapOld[type] == TSSErrorStateEnum.Caution)
        {
            SoundManager.Instance.PlayWarningSound();

            // fire up alerts
        }
        _mapOld[type] = _map[type];

        if (_map[type] == TSSErrorStateEnum.Caution || _map[type] == TSSErrorStateEnum.Warning)
        {
            if (!_visualMap.TryGetValue(type, out GameObject value))
            {
                _visualMap.Add(type, Instantiate(_alertIconPrefab, _prefabParent));
            }
            RawImage backgroundImage = _visualMap[type].GetComponent<RawImage>();
            if (_map[type] == TSSErrorStateEnum.Caution)
                backgroundImage.texture = _cautionBackgroundImage;
            else
                backgroundImage.texture = _warningBackgroundImage;
            RawImage iconImage = _visualMap[type].transform.Find("Icon").GetComponent<RawImage>();
            if (type == TSSEVATypeEnum.BatteryCapacity || type == TSSEVATypeEnum.BatteryPercentage)
            {
                iconImage.texture = _batteryIconImage;
            }
            else if (type == TSSEVATypeEnum.SuitPressure)
            {
                iconImage.texture = _pressureIconImage;
            }
            else if (type == TSSEVATypeEnum.FanSpeed)
            {
                iconImage.texture = _fanIconImage;
            }
            else if (type == TSSEVATypeEnum.LiquidPressure || type == TSSEVATypeEnum.GasPressure)
            {
                iconImage.texture = _waterIconImage;
            }
            else if (type == TSSEVATypeEnum.HeartRate)
            {
                iconImage.texture = _biomedicalIconImage;
            }
            else if (type == TSSEVATypeEnum.PrimaryOxygenPercentage || type == TSSEVATypeEnum.PrimaryOxygenPressure || type == TSSEVATypeEnum.PrimaryOxygenFlowrate
                || type == TSSEVATypeEnum.SecondaryOxygenPercentage || type == TSSEVATypeEnum.SecondaryOxygenPressure || type == TSSEVATypeEnum.SecondaryOxygenFlowrate)
            {
                iconImage.texture = _oxygenIconImage;
            }
            else
            {
                iconImage.texture = _pressureIconImage;
            }
            if (_map[type] == TSSErrorStateEnum.Caution)
                _visualMap[type].transform.SetAsFirstSibling();
            else
                _visualMap[type].transform.SetAsLastSibling();
        }
        else
        {
            if (_visualMap.TryGetValue(type, out GameObject value))
            {
                Destroy(value);
                _visualMap.Remove(type);
            }
        }
    }
}
