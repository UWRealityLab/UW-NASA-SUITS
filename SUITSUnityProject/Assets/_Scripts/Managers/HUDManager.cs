using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class HUDManager : Singleton<HUDManager>
{
    [SerializeField] private TMP_Text _HUDToolBoxText;

    private string _evaTimeText = " EVA Time:\n ..:..:..";
    private string _oxygenTimeText = " Oxygen Left:\n ..:..:..";
    private string _suitBatteryTimeText = " Suit Battery Left:\n ..:..:..";
    private float _timePassed = 0;
    private int _currDisplayedText = 0;

    private void Update()
    {
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
