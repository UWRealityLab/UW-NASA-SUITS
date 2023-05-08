using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class HUDManager : Singleton<HUDManager>
{
    #region ToolBox Definitions
    [Header("ToolBox")]
    [SerializeField] private TMP_Text _HUDToolBoxText;
    private string _evaTimeText = " EVA Time:\n ..:..:..";
    private string _oxygenTimeText = " Oxygen Left:\n ..:..:..";
    private string _suitBatteryTimeText = " Suit Battery Left:\n ..:..:..";
    private float _timePassed = 0;
    private int _currDisplayedText = 0;
    #endregion
    #region Alerts Definitions
    [Header("Alerts")]
    [SerializeField] private TMP_Text _alertText;
    [SerializeField] private RawImage _alertBackplate;
    [SerializeField] private Color _normalBackplateColor;
    [SerializeField] private Color _cautionBackplateColor;
    [SerializeField] private Color _warningBackplateColor;
    #endregion

    private void Update()
    {
        #region ToolBox
        if (_currDisplayedText == 0)
            _HUDToolBoxText.text = _evaTimeText;
        if (_currDisplayedText == 1)
            _HUDToolBoxText.text = _oxygenTimeText;
        if (_currDisplayedText == 2)
            _HUDToolBoxText.text = _suitBatteryTimeText;

        _timePassed += Time.deltaTime;
        if (_timePassed > 5f)
        {
            _currDisplayedText += 1;
            _currDisplayedText %= 3;
            _timePassed = 0;
        }
        #endregion

        #region Alerts
        if (TelemetryManager.Instance.TsErrorState == TSSErrorStateEnum.Normal)
        {
            _alertText.text = "Alerts";
            _alertBackplate.color = _normalBackplateColor;
        }
        else if (TelemetryManager.Instance.TsErrorState == TSSErrorStateEnum.Caution)
        {
            _alertText.text = "CAUTION";
            _alertBackplate.color = _cautionBackplateColor;
        }
        else if (TelemetryManager.Instance.TsErrorState == TSSErrorStateEnum.Warning)
        {
            _alertText.text = "WARNING";
            _alertBackplate.color = _warningBackplateColor;
        }
        #endregion
    }

    public void UpdateEVATime(string evaTime)
    {
        _evaTimeText = " EVA Time:\n " + evaTime;
    }
    public void UpdateOxygenTime(string oxygenTime)
    {
        _oxygenTimeText = " Oxygen Left:\n " + oxygenTime;
    }
    public void UpdateSuitBatteryTime(string batteryTime)
    {
        _suitBatteryTimeText = " Suit Battery Left:\n " + batteryTime;
    }
}
