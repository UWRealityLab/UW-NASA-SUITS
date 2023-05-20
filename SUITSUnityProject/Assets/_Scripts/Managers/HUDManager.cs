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


    private ToolboxState _state;
    private float _specialToolTimer = 0;
    [SerializeField] private GameObject _navMode;
    #endregion
    #region Alerts Definitions
    [Header("Alerts")]
    [SerializeField] private TMP_Text _alertText;
    [SerializeField] private RawImage _alertBackplate;
    [SerializeField] private Color _normalBackplateColor;
    [SerializeField] private Color _cautionBackplateColor;
    [SerializeField] private Color _warningBackplateColor;
    #endregion
    #region Marker On Compass Definitions
    [Header("Marker")]
    [SerializeField] private float _northRotation = 0;
    [SerializeField] private float _startPosX;
    [SerializeField] private float _endPosX;
    [SerializeField] private float _boundLeft;
    [SerializeField] private float _boundRight;
    private Transform _mainCameraTransform;
    private RectTransform _rectTransform;
    [SerializeField] private RectTransform _marker;
    [SerializeField] private Transform _user;
    private Vector3 _markerPosition;
    #endregion

    private void Start()
    {
        _state = ToolboxState.TSSCycle;
    }

    private void Update()
    {
        #region ToolBox


        switch (_state)
        {
            case ToolboxState.TSSCycle:
                _navMode.SetActive(false); _HUDToolBoxText.gameObject.SetActive(true);
                _specialToolTimer = 0;

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
                break;

            case ToolboxState.NavMode:
                _navMode.SetActive(true); _HUDToolBoxText.gameObject.SetActive(false);
                if (_specialToolTimer > 20f)
                {
                    _state = ToolboxState.TSSCycle;
                }
                else
                    _specialToolTimer += Time.deltaTime;
                break;
        }
        #endregion

        #region Alerts
        if (TelemetryManager.Instance.TsErrorState == TSSErrorStateEnum.Normal)
        {
            _alertText.text = "Alerts";
            _alertText.faceColor = Color.white;
            _alertBackplate.color = _normalBackplateColor;
        }
        else if (TelemetryManager.Instance.TsErrorState == TSSErrorStateEnum.Caution)
        {
            _alertText.text = "CAUTION";
            _alertText.faceColor = Color.black;
            _alertBackplate.color = _cautionBackplateColor;
        }
        else if (TelemetryManager.Instance.TsErrorState == TSSErrorStateEnum.Warning)
        {
            _alertText.text = "WARNING";
            _alertText.faceColor = Color.white;
            _alertBackplate.color = _warningBackplateColor;
        }

        /* Alerts icons are managed in the AlertManager.cs */
        #endregion

        #region Marker
        float angle = -Vector3.SignedAngle(new Vector3(_user.forward.x, 0, _user.forward.z), new Vector3((_markerPosition - _user.position).x, 0, (_markerPosition - _user.position).z), Vector3.up);
        float t = angle / 180;
        float posX = 0 + t * (_startPosX - _endPosX);
        if (posX < _boundLeft)
            posX = _boundLeft;
        if (posX > _boundRight)
            posX = _boundRight;
        float posY = _marker.anchoredPosition.y;
       _marker.anchoredPosition = new Vector2(posX, posY);

        #endregion
    }

    public void ChangeToolboxState(int state)
    {
        _state = (ToolboxState)state;
    }

    public void UpdateMarkerPosition(Vector3 position)
    {
        _markerPosition = position;
        Debug.Log(position);
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

    private enum ToolboxState
    {
        TSSCycle = 0,
        NavMode = 1,
        HandrayMode = 2
    }
}
