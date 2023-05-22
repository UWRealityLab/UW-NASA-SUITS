using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class UIATracker : Singleton<UIATracker>
{
    public bool emu1_pwr_switch;
    public bool ev1_supply_switch;
    public bool ev1_water_waste_switch;
    public bool emu1_o2_supply_switch;
    public bool emu2_pwr_switch;
    public bool ev2_supply_switch;
    public bool ev2_water_waste_switch;
    public bool emu2_o2_supply_switch;
    public bool o2_vent_switch;
    public bool depress_pump_switch;
    public bool depress_pump_fault;
    public UIAState State { get; private set; }

    [SerializeField] private GameObject _closeButton;
    [SerializeField] private Texture _redRing;
    [SerializeField] private Texture _greenRing;
    [SerializeField] private Texture _greenCheck;
    [SerializeField] private Texture _redCheck;
    [SerializeField] private float _transitionTime = 2f;

    [SerializeField] private TMP_Text _mainTextbox;
    [SerializeField] private TMP_Text _statusTextbox;
    [SerializeField] private RawImage _statusImage;

    [SerializeField] private RawImage _EVA_1_Power;
    private bool _EVA_1_Power_reversed = false;
    [SerializeField] private RawImage _EVA_1_Supply;
    private bool _EVA_1_Supply_reversed = false;
    [SerializeField] private RawImage _EVA_1_Waste;
    private bool _EVA_1_Waste_reversed = false;
    [SerializeField] private RawImage _EVA_2_Supply;
    private bool _EVA_2_Supply_reversed = false;
    [SerializeField] private RawImage _EVA_2_Waste;
    private bool _EVA_2_Waste_reversed = false;
    [SerializeField] private RawImage _EVA_2_Power;
    private bool _EVA_2_Power_reversed = false;
    [SerializeField] private RawImage _EMU_1_O2;
    private bool _EMU_1_O2_reversed = false;
    [SerializeField] private RawImage _EMU_2_O2;
    private bool _EMU_2_O2_reversed = false;
    [SerializeField] private RawImage _O2_Pump;
    private bool _O2_Pump_reversed = false;
    [SerializeField] private RawImage _O2_Depress_Pump;
    private bool _O2_Depress_Pump_reversed = false;

    private float _timer = 0;

    public void forceProceed()
    {
        State += 1;
    }

    private void Start()
    {
        _closeButton.SetActive(false);
        State = UIAState.Idle;
    }

    private void Update()
    {
        switch (State)
        {
            case UIAState.Idle:
                _EVA_1_Power_reversed = true; _EVA_1_Supply_reversed = true; _EVA_1_Waste_reversed = true;
                _EVA_2_Supply_reversed = true; _EVA_2_Waste_reversed = true; _EVA_2_Power_reversed = true;
                _EMU_1_O2_reversed = true; _EMU_2_O2_reversed = true; _O2_Pump_reversed = true; _O2_Depress_Pump_reversed = true;
                _mainTextbox.text = "<size=8>Set all switches to OFF/CLOSE</size>\n" +
                    "\n<size=6>To start the U.I.A procedures, first ensure that all switches are set to OFF/CLOSE";

                if (!emu1_pwr_switch && !ev1_supply_switch && !ev1_water_waste_switch &&
                        !emu1_o2_supply_switch && !emu2_pwr_switch && !ev2_supply_switch &&
                        !ev2_water_waste_switch && !emu2_o2_supply_switch && !o2_vent_switch &&
                        !depress_pump_switch)
                {
                    _statusImage.texture = _greenCheck;
                    _statusTextbox.text = "Completed";
                    if (_timer < _transitionTime)
                    {
                        _timer += Time.deltaTime;
                    }
                    else
                    {
                        _timer = 0;
                        State = UIAState.Power_on_EMU1;
                    }
                }
                else
                {
                    _statusImage.texture = _redCheck;
                    _statusTextbox.text = "Not completed";
                    _timer = 0;
                }
                break;

            case UIAState.Power_on_EMU1:
                _EVA_1_Power_reversed = false; _EVA_1_Supply_reversed = true; _EVA_1_Waste_reversed = true;
                _EVA_2_Supply_reversed = true; _EVA_2_Waste_reversed = true; _EVA_2_Power_reversed = true;
                _EMU_1_O2_reversed = true; _EMU_2_O2_reversed = true; _O2_Pump_reversed = true; _O2_Depress_Pump_reversed = true;
                _mainTextbox.text = "<size=8>1. Power on EMU-1</size>\n" +
                    "\n<size=6>1.1. Switch EMU-1 PWR to ON." +
                    "\n1.2. Wait for SUIT to boot.";

                if (emu1_pwr_switch && !ev1_supply_switch && !ev1_water_waste_switch &&
                        !emu1_o2_supply_switch && !emu2_pwr_switch && !ev2_supply_switch &&
                        !ev2_water_waste_switch && !emu2_o2_supply_switch && !o2_vent_switch &&
                        !depress_pump_switch)
                {
                    _statusImage.texture = _greenCheck;
                    _statusTextbox.text = "Completed";
                    if (_timer < _transitionTime)
                    {
                        _timer += Time.deltaTime;
                    }
                    else
                    {
                        _timer = 0;
                        State = UIAState.Prepare_UIA_OpenVent;
                    }
                }
                else
                {
                    _statusImage.texture = _redCheck;
                    _statusTextbox.text = "Not completed";
                    _timer = 0;
                }
                break;

            case UIAState.Prepare_UIA_OpenVent:
                _EVA_1_Power_reversed = false; _EVA_1_Supply_reversed = true; _EVA_1_Waste_reversed = true;
                _EVA_2_Supply_reversed = true; _EVA_2_Waste_reversed = true; _EVA_2_Power_reversed = true;
                _EMU_1_O2_reversed = true; _EMU_2_O2_reversed = true; _O2_Pump_reversed = false; _O2_Depress_Pump_reversed = true;
                _mainTextbox.text = "<size=8>2. Prepare for UIA</size>\n" +
                    "\n<size=6>2.1. Switch O2 VENT to OPEN.";

                if (emu1_pwr_switch && !ev1_supply_switch && !ev1_water_waste_switch &&
                        !emu1_o2_supply_switch && !emu2_pwr_switch && !ev2_supply_switch &&
                        !ev2_water_waste_switch && !emu2_o2_supply_switch && o2_vent_switch &&
                        !depress_pump_switch)
                {
                    _statusImage.texture = _greenCheck;
                    _statusTextbox.text = "Completed";
                    if (_timer < _transitionTime)
                    {
                        _timer += Time.deltaTime;
                    }
                    else
                    {
                        _timer = 0;
                        State = UIAState.Prepare_UIA_CloseVent;
                    }
                }
                else
                {
                    _statusImage.texture = _redCheck;
                    _statusTextbox.text = "Not completed";
                    _timer = 0;
                }
                break;

            case UIAState.Prepare_UIA_CloseVent:
                _EVA_1_Power_reversed = false; _EVA_1_Supply_reversed = true; _EVA_1_Waste_reversed = true;
                _EVA_2_Supply_reversed = true; _EVA_2_Waste_reversed = true; _EVA_2_Power_reversed = true;
                _EMU_1_O2_reversed = true; _EMU_2_O2_reversed = true; _O2_Pump_reversed = true; _O2_Depress_Pump_reversed = true;
                _mainTextbox.text = "<size=8>2. Prepare for UIA</size>\n" +
                    "\n<size=6>2.2. Wait for UIA SUPPLY PRESSURE to reach below 23 psi." +
                    "\n2.3. Switch O2 VENT to CLOSE";

                if (emu1_pwr_switch && !ev1_supply_switch && !ev1_water_waste_switch &&
                        !emu1_o2_supply_switch && !emu2_pwr_switch && !ev2_supply_switch &&
                        !ev2_water_waste_switch && !emu2_o2_supply_switch && !o2_vent_switch &&
                        !depress_pump_switch)
                {
                    _statusImage.texture = _greenCheck;
                    _statusTextbox.text = "Completed";
                    if (_timer < _transitionTime)
                    {
                        _timer += Time.deltaTime;
                    }
                    else
                    {
                        _timer = 0;
                        State = UIAState.Purge_N2_OpenSupply;
                    }
                }
                else
                {
                    _statusImage.texture = _redCheck;
                    _statusTextbox.text = "Not completed";
                    _timer = 0;
                }
                break;

            case UIAState.Purge_N2_OpenSupply:
                _EVA_1_Power_reversed = false; _EVA_1_Supply_reversed = true; _EVA_1_Waste_reversed = true;
                _EVA_2_Supply_reversed = true; _EVA_2_Waste_reversed = true; _EVA_2_Power_reversed = true;
                _EMU_1_O2_reversed = false; _EMU_2_O2_reversed = true; _O2_Pump_reversed = true; _O2_Depress_Pump_reversed = true;
                _mainTextbox.text = "<size=8>3. Purge N2</size>\n" +
                    "\n<size=6>3.1. Switch O2 SUPPLY to OPEN.";

                if (emu1_pwr_switch && !ev1_supply_switch && !ev1_water_waste_switch &&
                        emu1_o2_supply_switch && !emu2_pwr_switch && !ev2_supply_switch &&
                        !ev2_water_waste_switch && !emu2_o2_supply_switch && !o2_vent_switch &&
                        !depress_pump_switch)
                {
                    _statusImage.texture = _greenCheck;
                    _statusTextbox.text = "Completed";
                    if (_timer < _transitionTime)
                    {
                        _timer += Time.deltaTime;
                    }
                    else
                    {
                        _timer = 0;
                        State = UIAState.Purge_N2_CloseSupply;
                    }
                }
                else
                {
                    _statusImage.texture = _redCheck;
                    _statusTextbox.text = "Not completed";
                    _timer = 0;
                }
                break;

            case UIAState.Purge_N2_CloseSupply:
                _EVA_1_Power_reversed = false; _EVA_1_Supply_reversed = true; _EVA_1_Waste_reversed = true;
                _EVA_2_Supply_reversed = true; _EVA_2_Waste_reversed = true; _EVA_2_Power_reversed = true;
                _EMU_1_O2_reversed = true; _EMU_2_O2_reversed = true; _O2_Pump_reversed = true; _O2_Depress_Pump_reversed = true;
                _mainTextbox.text = "<size=8>3. Purge N2</size>\n" +
                    "\n<size=6>3.2. Wait for UIA SUPPLY PRESSURE to reach above 3000 psi." +
                    "\n3.3. Switch O2 SUPPLY to CLOSE";

                if (emu1_pwr_switch && !ev1_supply_switch && !ev1_water_waste_switch &&
                        !emu1_o2_supply_switch && !emu2_pwr_switch && !ev2_supply_switch &&
                        !ev2_water_waste_switch && !emu2_o2_supply_switch && !o2_vent_switch &&
                        !depress_pump_switch)
                {
                    _statusImage.texture = _greenCheck;
                    _statusTextbox.text = "Completed";
                    if (_timer < _transitionTime)
                    {
                        _timer += Time.deltaTime;
                    }
                    else
                    {
                        _timer = 0;
                        State = UIAState.Purge_N2_OpenVent;
                    }
                }
                else
                {
                    _statusImage.texture = _redCheck;
                    _statusTextbox.text = "Not completed";
                    _timer = 0;
                }
                break;

            case UIAState.Purge_N2_OpenVent:
                _EVA_1_Power_reversed = false; _EVA_1_Supply_reversed = true; _EVA_1_Waste_reversed = true;
                _EVA_2_Supply_reversed = true; _EVA_2_Waste_reversed = true; _EVA_2_Power_reversed = true;
                _EMU_1_O2_reversed = true; _EMU_2_O2_reversed = true; _O2_Pump_reversed = false; _O2_Depress_Pump_reversed = true;
                _mainTextbox.text = "<size=8>3. Purge N2</size>\n" +
                    "\n<size=6>3.4. Switch O2 VENT to OPEN.";

                if (emu1_pwr_switch && !ev1_supply_switch && !ev1_water_waste_switch &&
                        !emu1_o2_supply_switch && !emu2_pwr_switch && !ev2_supply_switch &&
                        !ev2_water_waste_switch && !emu2_o2_supply_switch && o2_vent_switch &&
                        !depress_pump_switch)
                {
                    _statusImage.texture = _greenCheck;
                    _statusTextbox.text = "Completed";
                    if (_timer < _transitionTime)
                    {
                        _timer += Time.deltaTime;
                    }
                    else
                    {
                        _timer = 0;
                        State = UIAState.Purge_N2_CloseVent;
                    }
                }
                else
                {
                    _statusImage.texture = _redCheck;
                    _statusTextbox.text = "Not completed";
                    _timer = 0;
                }
                break;

            case UIAState.Purge_N2_CloseVent:
                _EVA_1_Power_reversed = false; _EVA_1_Supply_reversed = true; _EVA_1_Waste_reversed = true;
                _EVA_2_Supply_reversed = true; _EVA_2_Waste_reversed = true; _EVA_2_Power_reversed = true;
                _EMU_1_O2_reversed = true; _EMU_2_O2_reversed = true; _O2_Pump_reversed = true; _O2_Depress_Pump_reversed = true;
                _mainTextbox.text = "<size=8>3. Purge N2</size>\n" +
                    "\n<size=6>3.5. Wait for UIA SUPPLY PRESSURE to reach below 23 psi." +
                    "\n3.6. Switch O2 VENT to CLOSE.";

                if (emu1_pwr_switch && !ev1_supply_switch && !ev1_water_waste_switch &&
                        !emu1_o2_supply_switch && !emu2_pwr_switch && !ev2_supply_switch &&
                        !ev2_water_waste_switch && !emu2_o2_supply_switch && !o2_vent_switch &&
                        !depress_pump_switch)
                {
                    _statusImage.texture = _greenCheck;
                    _statusTextbox.text = "Completed";
                    if (_timer < _transitionTime)
                    {
                        _timer += Time.deltaTime;
                    }
                    else
                    {
                        _timer = 0;
                        State = UIAState.Initial_O2_Pressurization_OpenSupply;
                    }
                }
                else
                {
                    _statusImage.texture = _redCheck;
                    _statusTextbox.text = "Not completed";
                    _timer = 0;
                }
                break;

            case UIAState.Initial_O2_Pressurization_OpenSupply:
                _EVA_1_Power_reversed = false; _EVA_1_Supply_reversed = true; _EVA_1_Waste_reversed = true;
                _EVA_2_Supply_reversed = true; _EVA_2_Waste_reversed = true; _EVA_2_Power_reversed = true;
                _EMU_1_O2_reversed = false; _EMU_2_O2_reversed = true; _O2_Pump_reversed = true; _O2_Depress_Pump_reversed = true;
                _mainTextbox.text = "<size=8>4. Initial O2 Pressurization</size>\n" +
                    "\n<size=6>4.1. Switch O2 SUPPLY to OPEN";

                if (emu1_pwr_switch && !ev1_supply_switch && !ev1_water_waste_switch &&
                        emu1_o2_supply_switch && !emu2_pwr_switch && !ev2_supply_switch &&
                        !ev2_water_waste_switch && !emu2_o2_supply_switch && !o2_vent_switch &&
                        !depress_pump_switch)
                {
                    _statusImage.texture = _greenCheck;
                    _statusTextbox.text = "Completed";
                    if (_timer < _transitionTime)
                    {
                        _timer += Time.deltaTime;
                    }
                    else
                    {
                        _timer = 0;
                        State = UIAState.Initial_O2_Pressurization_CloseSupply; 
                    }
                }
                else
                {
                    _statusImage.texture = _redCheck;
                    _statusTextbox.text = "Not completed";
                    _timer = 0;
                }
                break;

            case UIAState.Initial_O2_Pressurization_CloseSupply:
                _EVA_1_Power_reversed = false; _EVA_1_Supply_reversed = true; _EVA_1_Waste_reversed = true;
                _EVA_2_Supply_reversed = true; _EVA_2_Waste_reversed = true; _EVA_2_Power_reversed = true;
                _EMU_1_O2_reversed = true; _EMU_2_O2_reversed = true; _O2_Pump_reversed = true; _O2_Depress_Pump_reversed = true;
                _mainTextbox.text = "<size=8>4. Initial O2 Pressurization</size>\n" +
                    "\n<size=6>4.2. Wait for UIA SUPPLY PRESSURE to reach above 1500 psi" +
                    "\n4.3. Switch O2 SUPPLY to CLOSE";

                if (emu1_pwr_switch && !ev1_supply_switch && !ev1_water_waste_switch &&
                        !emu1_o2_supply_switch && !emu2_pwr_switch && !ev2_supply_switch &&
                        !ev2_water_waste_switch && !emu2_o2_supply_switch && !o2_vent_switch &&
                        !depress_pump_switch)
                {
                    _statusImage.texture = _greenCheck;
                    _statusTextbox.text = "Completed";
                    if (_timer < _transitionTime)
                    {
                        _timer += Time.deltaTime;
                    }
                    else
                    {
                        _timer = 0;
                        State = UIAState.Fill_EMU_Water_OpenWaste;
                    }
                }
                else
                {
                    _statusImage.texture = _redCheck;
                    _statusTextbox.text = "Not completed";
                    _timer = 0;
                }
                break;

            case UIAState.Fill_EMU_Water_OpenWaste:
                _EVA_1_Power_reversed = false; _EVA_1_Supply_reversed = true; _EVA_1_Waste_reversed = false;
                _EVA_2_Supply_reversed = true; _EVA_2_Waste_reversed = true; _EVA_2_Power_reversed = true;
                _EMU_1_O2_reversed = true; _EMU_2_O2_reversed = true; _O2_Pump_reversed = true; _O2_Depress_Pump_reversed = true;
                _mainTextbox.text = "<size=8>5. Fill EMU Water</size>\n" +
                    "\n<size=6>5.1. Dump waste water" +
                    "\n5.1.1. Switch EV-1 WASTE to OPEN";

                if (emu1_pwr_switch && !ev1_supply_switch && ev1_water_waste_switch &&
                        !emu1_o2_supply_switch && !emu2_pwr_switch && !ev2_supply_switch &&
                        !ev2_water_waste_switch && !emu2_o2_supply_switch && !o2_vent_switch &&
                        !depress_pump_switch)
                {
                    _statusImage.texture = _greenCheck;
                    _statusTextbox.text = "Completed";
                    if (_timer < _transitionTime)
                    {
                        _timer += Time.deltaTime;
                    }
                    else
                    {
                        _timer = 0;
                        State = UIAState.Fill_EMU_Water_CloseWaste;
                    }
                }
                else
                {
                    _statusImage.texture = _redCheck;
                    _statusTextbox.text = "Not completed";
                    _timer = 0;
                }
                break;

            case UIAState.Fill_EMU_Water_CloseWaste:
                _EVA_1_Power_reversed = false; _EVA_1_Supply_reversed = true; _EVA_1_Waste_reversed = true;
                _EVA_2_Supply_reversed = true; _EVA_2_Waste_reversed = true; _EVA_2_Power_reversed = true;
                _EMU_1_O2_reversed = true; _EMU_2_O2_reversed = true; _O2_Pump_reversed = true; _O2_Depress_Pump_reversed = true;
                _mainTextbox.text = "<size=8>5. Fill EMU Water</size>\n" +
                    "\n<size=6>5.1. Dump waste water" +
                    "\n5.1.2. Wait for WATER LEVEL to reach below 5%" +
                    "\n5.1.3. Switch EV-1 WASTE to CLOSE";

                if (emu1_pwr_switch && !ev1_supply_switch && !ev1_water_waste_switch &&
                        !emu1_o2_supply_switch && !emu2_pwr_switch && !ev2_supply_switch &&
                        !ev2_water_waste_switch && !emu2_o2_supply_switch && !o2_vent_switch &&
                        !depress_pump_switch)
                {
                    _statusImage.texture = _greenCheck;
                    _statusTextbox.text = "Completed";
                    if (_timer < _transitionTime)
                    {
                        _timer += Time.deltaTime;
                    }
                    else
                    {
                        _timer = 0;
                        State = UIAState.Fill_EMU_Water_OpenSupply;
                    }
                }
                else
                {
                    _statusImage.texture = _redCheck;
                    _statusTextbox.text = "Not completed";
                    _timer = 0;
                }
                break;

            case UIAState.Fill_EMU_Water_OpenSupply:
                _EVA_1_Power_reversed = false; _EVA_1_Supply_reversed = false; _EVA_1_Waste_reversed = true;
                _EVA_2_Supply_reversed = true; _EVA_2_Waste_reversed = true; _EVA_2_Power_reversed = true;
                _EMU_1_O2_reversed = true; _EMU_2_O2_reversed = true; _O2_Pump_reversed = true; _O2_Depress_Pump_reversed = true;
                _mainTextbox.text = "<size=8>5. Fill EMU Water</size>\n" +
                    "\n<size=6>5.2. Refill EMU Water" +
                    "\n5.2.1. Switch EV-1 SUPPLY to OPEN";

                if (emu1_pwr_switch && ev1_supply_switch && !ev1_water_waste_switch &&
                        !emu1_o2_supply_switch && !emu2_pwr_switch && !ev2_supply_switch &&
                        !ev2_water_waste_switch && !emu2_o2_supply_switch && !o2_vent_switch &&
                        !depress_pump_switch)
                {
                    _statusImage.texture = _greenCheck;
                    _statusTextbox.text = "Completed";
                    if (_timer < _transitionTime)
                    {
                        _timer += Time.deltaTime;
                    }
                    else
                    {
                        _timer = 0;
                        State = UIAState.Fill_EMU_Water_CloseSupply;
                    }
                }
                else
                {
                    _statusImage.texture = _redCheck;
                    _statusTextbox.text = "Not completed";
                    _timer = 0;
                }
                break;

            case UIAState.Fill_EMU_Water_CloseSupply:
                _EVA_1_Power_reversed = false; _EVA_1_Supply_reversed = true; _EVA_1_Waste_reversed = true;
                _EVA_2_Supply_reversed = true; _EVA_2_Waste_reversed = true; _EVA_2_Power_reversed = true;
                _EMU_1_O2_reversed = true; _EMU_2_O2_reversed = true; _O2_Pump_reversed = true; _O2_Depress_Pump_reversed = true;
                _mainTextbox.text = "<size=8>5. Fill EMU Water</size>\n" +
                    "\n<size=6>5.2. Refill EMU Water" +
                    "\n5.2.2. Wait for WATER LEVEL to reach above 95%" +
                    "\n5.2.3. Switch EV-1 SUPPLY to CLOSE";

                if (emu1_pwr_switch && !ev1_supply_switch && !ev1_water_waste_switch &&
                        !emu1_o2_supply_switch && !emu2_pwr_switch && !ev2_supply_switch &&
                        !ev2_water_waste_switch && !emu2_o2_supply_switch && !o2_vent_switch &&
                        !depress_pump_switch)
                {
                    _statusImage.texture = _greenCheck;
                    _statusTextbox.text = "Completed";
                    if (_timer < _transitionTime)
                    {
                        _timer += Time.deltaTime;
                    }
                    else
                    {
                        _timer = 0;
                        State = UIAState.Depressurize_Airlock_OpenDepress;
                    }
                }
                else
                {
                    _statusImage.texture = _redCheck;
                    _statusTextbox.text = "Not completed";
                    _timer = 0;
                }
                break;

            case UIAState.Depressurize_Airlock_OpenDepress:
                _EVA_1_Power_reversed = false; _EVA_1_Supply_reversed = true; _EVA_1_Waste_reversed = true;
                _EVA_2_Supply_reversed = true; _EVA_2_Waste_reversed = true; _EVA_2_Power_reversed = true;
                _EMU_1_O2_reversed = true; _EMU_2_O2_reversed = true; _O2_Pump_reversed = true; _O2_Depress_Pump_reversed = false;
                _mainTextbox.text = "<size=8>6. Airlock Depressurization</size>\n" +
                    "\n<size=6>6.1. Switch DEPRESS PUMP to ON";

                if (emu1_pwr_switch && !ev1_supply_switch && !ev1_water_waste_switch &&
                        !emu1_o2_supply_switch && !emu2_pwr_switch && !ev2_supply_switch &&
                        !ev2_water_waste_switch && !emu2_o2_supply_switch && !o2_vent_switch &&
                        depress_pump_switch)
                {
                    _statusImage.texture = _greenCheck;
                    _statusTextbox.text = "Completed";
                    if (_timer < _transitionTime)
                    {
                        _timer += Time.deltaTime;
                    }
                    else
                    {
                        _timer = 0;
                        State = UIAState.Depressurize_Airlock_CloseDepress;
                    }
                }
                else
                {
                    _statusImage.texture = _redCheck;
                    _statusTextbox.text = "Not completed";
                    _timer = 0;
                }
                break;

            case UIAState.Depressurize_Airlock_CloseDepress:
                _EVA_1_Power_reversed = false; _EVA_1_Supply_reversed = true; _EVA_1_Waste_reversed = true;
                _EVA_2_Supply_reversed = true; _EVA_2_Waste_reversed = true; _EVA_2_Power_reversed = true;
                _EMU_1_O2_reversed = true; _EMU_2_O2_reversed = true; _O2_Pump_reversed = true; _O2_Depress_Pump_reversed = true;
                _mainTextbox.text = "<size=8>6. Airlock Depressurization</size>\n" +
                    "\n<size=5>6.2.1 Wait for AIRLOCK PRESSURE to reach below 10.2 psi" +
                    "\n6.2.2 Switch DEPRESS PUMP to OFF" +
                    "\n(If DEPRESS PUMP faults: close the pump, wait for the error to go away, and open it again)";

                if (emu1_pwr_switch && !ev1_supply_switch && !ev1_water_waste_switch &&
                        !emu1_o2_supply_switch && !emu2_pwr_switch && !ev2_supply_switch &&
                        !ev2_water_waste_switch && !emu2_o2_supply_switch && !o2_vent_switch &&
                        !depress_pump_switch)
                {
                    _statusImage.texture = _greenCheck;
                    _statusTextbox.text = "Completed";
                    if (_timer < _transitionTime)
                    {
                        _timer += Time.deltaTime;
                    }
                    else
                    {
                        _timer = 0;
                        State = UIAState.Complete_EMU_Pressurization_OpenSupply;
                    }
                }
                else
                {
                    _statusImage.texture = _redCheck;
                    _statusTextbox.text = "Not completed";
                    _timer = 0;
                }
                break;

            case UIAState.Complete_EMU_Pressurization_OpenSupply:
                _EVA_1_Power_reversed = false; _EVA_1_Supply_reversed = true; _EVA_1_Waste_reversed = true;
                _EVA_2_Supply_reversed = true; _EVA_2_Waste_reversed = true; _EVA_2_Power_reversed = true;
                _EMU_1_O2_reversed = false; _EMU_2_O2_reversed = true; _O2_Pump_reversed = true; _O2_Depress_Pump_reversed = true;
                _mainTextbox.text = "<size=8>7. EMU Pressurization</size>\n" +
                    "\n<size=5>7.1. Switch O2 SUPPLY to OPEN";

                if (emu1_pwr_switch && !ev1_supply_switch && !ev1_water_waste_switch &&
                        emu1_o2_supply_switch && !emu2_pwr_switch && !ev2_supply_switch &&
                        !ev2_water_waste_switch && !emu2_o2_supply_switch && !o2_vent_switch &&
                        !depress_pump_switch)
                {
                    _statusImage.texture = _greenCheck;
                    _statusTextbox.text = "Completed";
                    if (_timer < _transitionTime)
                    {
                        _timer += Time.deltaTime;
                    }
                    else
                    {
                        _timer = 0;
                        State = UIAState.Complete_EMU_Pressurization_CloseSupply;
                    }
                }
                else
                {
                    _statusImage.texture = _redCheck;
                    _statusTextbox.text = "Not completed";
                    _timer = 0;
                }
                break;

            case UIAState.Complete_EMU_Pressurization_CloseSupply:
                _EVA_1_Power_reversed = false; _EVA_1_Supply_reversed = true; _EVA_1_Waste_reversed = true;
                _EVA_2_Supply_reversed = true; _EVA_2_Waste_reversed = true; _EVA_2_Power_reversed = true;
                _EMU_1_O2_reversed = true; _EMU_2_O2_reversed = true; _O2_Pump_reversed = true; _O2_Depress_Pump_reversed = true;
                _mainTextbox.text = "<size=8>7. EMU Pressurization</size>\n" +
                    "\n<size=5>7.2. Wait for UIA SUPPLY PRESSURE to reach above 3000 psi" +
                    "\n7.3. Switch O2 SUPPLY to CLOSE";

                if (emu1_pwr_switch && !ev1_supply_switch && !ev1_water_waste_switch &&
                        !emu1_o2_supply_switch && !emu2_pwr_switch && !ev2_supply_switch &&
                        !ev2_water_waste_switch && !emu2_o2_supply_switch && !o2_vent_switch &&
                        !depress_pump_switch)
                {
                    _statusImage.texture = _greenCheck;
                    _statusTextbox.text = "Completed";
                    if (_timer < _transitionTime)
                    {
                        _timer += Time.deltaTime;
                    }
                    else
                    {
                        _timer = 0;
                        State = UIAState.Complete_Airlock_Depressurization_OpenDepress;
                    }
                }
                else
                {
                    _statusImage.texture = _redCheck;
                    _statusTextbox.text = "Not completed";
                    _timer = 0;
                }
                break;

            case UIAState.Complete_Airlock_Depressurization_OpenDepress:
                _EVA_1_Power_reversed = false; _EVA_1_Supply_reversed = true; _EVA_1_Waste_reversed = true;
                _EVA_2_Supply_reversed = true; _EVA_2_Waste_reversed = true; _EVA_2_Power_reversed = true;
                _EMU_1_O2_reversed = true; _EMU_2_O2_reversed = true; _O2_Pump_reversed = true; _O2_Depress_Pump_reversed = false;
                _mainTextbox.text = "<size=8>8. Airlock Depressurization</size>\n" +
                    "\n<size=5>8.1. Switch DEPRESS PUMP to ON";

                if (emu1_pwr_switch && !ev1_supply_switch && !ev1_water_waste_switch &&
                        !emu1_o2_supply_switch && !emu2_pwr_switch && !ev2_supply_switch &&
                        !ev2_water_waste_switch && !emu2_o2_supply_switch && !o2_vent_switch &&
                        depress_pump_switch)
                {
                    _statusImage.texture = _greenCheck;
                    _statusTextbox.text = "Completed";
                    if (_timer < _transitionTime)
                    {
                        _timer += Time.deltaTime;
                    }
                    else
                    {
                        _timer = 0;
                        State = UIAState.Complete_Airlock_Depressurization_CloseDepress;
                    }
                }
                else
                {
                    _statusImage.texture = _redCheck;
                    _statusTextbox.text = "Not completed";
                    _timer = 0;
                }
                break;

            case UIAState.Complete_Airlock_Depressurization_CloseDepress:
                _EVA_1_Power_reversed = false; _EVA_1_Supply_reversed = true; _EVA_1_Waste_reversed = true;
                _EVA_2_Supply_reversed = true; _EVA_2_Waste_reversed = true; _EVA_2_Power_reversed = true;
                _EMU_1_O2_reversed = true; _EMU_2_O2_reversed = true; _O2_Pump_reversed = true; _O2_Depress_Pump_reversed = true;
                _mainTextbox.text = "<size=8>8. Airlock Depressurization</size>\n" +
                    "\n<size=5>8.2. Wait for AIRLOCK PRESSURE to reach below 0.1 psi" +
                    "\n8.3. Switch DEPRESS PUMP to OFF";

                if (emu1_pwr_switch && !ev1_supply_switch && !ev1_water_waste_switch &&
                        !emu1_o2_supply_switch && !emu2_pwr_switch && !ev2_supply_switch &&
                        !ev2_water_waste_switch && !emu2_o2_supply_switch && !o2_vent_switch &&
                        !depress_pump_switch)
                {
                    _statusImage.texture = _greenCheck;
                    _statusTextbox.text = "Completed";
                    if (_timer < _transitionTime)
                    {
                        _timer += Time.deltaTime;
                    }
                    else
                    {
                        _timer = 0;
                        State = UIAState.Exit;
                    }
                }
                else
                {
                    _statusImage.texture = _redCheck;
                    _statusTextbox.text = "Not completed";
                    _timer = 0;
                }
                break;


            case UIAState.Exit:
                _EVA_1_Power_reversed = false; _EVA_1_Supply_reversed = true; _EVA_1_Waste_reversed = true;
                _EVA_2_Supply_reversed = true; _EVA_2_Waste_reversed = true; _EVA_2_Power_reversed = true;
                _EMU_1_O2_reversed = true; _EMU_2_O2_reversed = true; _O2_Pump_reversed = true; _O2_Depress_Pump_reversed = true;
                _mainTextbox.text = "<size=8>9. Exit the Airlock</size>\n" +
                    "\n<size=6>U.I.A procudures are complete. Proceed to exit the airlock."; ;
                _statusImage.texture = _greenCheck;
                _statusTextbox.text = "Completed";
                _closeButton.SetActive(true);
                break;
        }
        #region EMU1 Power Switch
        if (emu1_pwr_switch)
        {
            if (_EVA_1_Power_reversed)
                _EVA_1_Power.texture = _redRing;
            else
                _EVA_1_Power.texture = _greenRing;
            _EVA_1_Power.gameObject.transform.Find("On").gameObject.SetActive(true);
            _EVA_1_Power.gameObject.transform.Find("Off").gameObject.SetActive(false);
        }
        else
        {
            if (_EVA_1_Power_reversed)
                _EVA_1_Power.texture = _greenRing;
            else
                _EVA_1_Power.texture = _redRing;
            _EVA_1_Power.gameObject.transform.Find("On").gameObject.SetActive(false);
            _EVA_1_Power.gameObject.transform.Find("Off").gameObject.SetActive(true);
        }
        #endregion
        #region EVA1 Supply Switch
        if (ev1_supply_switch)
        {
            if (_EVA_1_Supply_reversed)
                _EVA_1_Supply.texture = _redRing;
            else
                _EVA_1_Supply.texture = _greenRing;
            _EVA_1_Supply.gameObject.transform.Find("On").gameObject.SetActive(true);
            _EVA_1_Supply.gameObject.transform.Find("Off").gameObject.SetActive(false);
        }
        else
        {
            if (_EVA_1_Supply_reversed)
                _EVA_1_Supply.texture = _greenRing;
            else
                _EVA_1_Supply.texture = _redRing;
            _EVA_1_Supply.gameObject.transform.Find("On").gameObject.SetActive(false);
            _EVA_1_Supply.gameObject.transform.Find("Off").gameObject.SetActive(true);
        }
        #endregion
        #region EVA1 Waste Switch
        if (ev1_water_waste_switch)
        {
            if (_EVA_1_Waste_reversed)
                _EVA_1_Waste.texture = _redRing;
            else
                _EVA_1_Waste.texture = _greenRing;
            _EVA_1_Waste.gameObject.transform.Find("On").gameObject.SetActive(true);
            _EVA_1_Waste.gameObject.transform.Find("Off").gameObject.SetActive(false);
        }
        else
        {
            if (_EVA_1_Waste_reversed)
                _EVA_1_Waste.texture = _greenRing;
            else
                _EVA_1_Waste.texture = _redRing;
            _EVA_1_Waste.gameObject.transform.Find("On").gameObject.SetActive(false);
            _EVA_1_Waste.gameObject.transform.Find("Off").gameObject.SetActive(true);
        }
        #endregion
        #region EVA2 Supply Switch
        if (ev2_supply_switch)
        {
            if (_EVA_2_Supply_reversed)
                _EVA_2_Supply.texture = _redRing;
            else
                _EVA_2_Supply.texture = _greenRing;
            _EVA_2_Supply.gameObject.transform.Find("On").gameObject.SetActive(true);
            _EVA_2_Supply.gameObject.transform.Find("Off").gameObject.SetActive(false);
        }
        else
        {
            if (_EVA_2_Supply_reversed)
                _EVA_2_Supply.texture = _greenRing;
            else
                _EVA_2_Supply.texture = _redRing;
            _EVA_2_Supply.gameObject.transform.Find("On").gameObject.SetActive(false);
            _EVA_2_Supply.gameObject.transform.Find("Off").gameObject.SetActive(true);
        }
        #endregion
        #region EVA2 Waste Switch
        if (ev2_water_waste_switch)
        {
            if (_EVA_2_Waste_reversed)
                _EVA_2_Waste.texture = _redRing;
            else
                _EVA_2_Waste.texture = _greenRing;
            _EVA_2_Waste.gameObject.transform.Find("On").gameObject.SetActive(true);
            _EVA_2_Waste.gameObject.transform.Find("Off").gameObject.SetActive(false);
        }
        else
        {
            if (_EVA_2_Waste_reversed)
                _EVA_2_Waste.texture = _greenRing;
            else
                _EVA_2_Waste.texture = _redRing;
            _EVA_2_Waste.gameObject.transform.Find("On").gameObject.SetActive(false);
            _EVA_2_Waste.gameObject.transform.Find("Off").gameObject.SetActive(true);
        }
        #endregion
        #region EMU2 Power Switch
        if (emu2_pwr_switch)
        {
            if (_EVA_2_Power_reversed)
                _EVA_2_Power.texture = _redRing;
            else
                _EVA_2_Power.texture = _greenRing;
            _EVA_2_Power.gameObject.transform.Find("On").gameObject.SetActive(true);
            _EVA_2_Power.gameObject.transform.Find("Off").gameObject.SetActive(false);
        }
        else
        {
            if (_EVA_2_Power_reversed)
                _EVA_2_Power.texture = _greenRing;
            else
                _EVA_2_Power.texture = _redRing;
            _EVA_2_Power.gameObject.transform.Find("On").gameObject.SetActive(false);
            _EVA_2_Power.gameObject.transform.Find("Off").gameObject.SetActive(true);
        }
        #endregion
        #region EMU1 O2 Switch
        if (emu1_o2_supply_switch)
        {
            if (_EMU_1_O2_reversed)
                _EMU_1_O2.texture = _redRing;
            else
                _EMU_1_O2.texture = _greenRing;
            _EMU_1_O2.gameObject.transform.Find("On").gameObject.SetActive(true);
            _EMU_1_O2.gameObject.transform.Find("Off").gameObject.SetActive(false);
        }
        else
        {
            if (_EMU_1_O2_reversed)
                _EMU_1_O2.texture = _greenRing;
            else
                _EMU_1_O2.texture = _redRing;
            _EMU_1_O2.gameObject.transform.Find("On").gameObject.SetActive(false);
            _EMU_1_O2.gameObject.transform.Find("Off").gameObject.SetActive(true);
        }
        #endregion
        #region EMU2 O2 Switch
        if (emu2_o2_supply_switch)
        {
            if (_EMU_2_O2_reversed)
                _EMU_2_O2.texture = _redRing;
            else
                _EMU_2_O2.texture = _greenRing;
            _EMU_2_O2.gameObject.transform.Find("On").gameObject.SetActive(true);
            _EMU_2_O2.gameObject.transform.Find("Off").gameObject.SetActive(false);
        }
        else
        {
            if (_EMU_2_O2_reversed)
                _EMU_2_O2.texture = _greenRing;
            else
                _EMU_2_O2.texture = _redRing;
            _EMU_2_O2.gameObject.transform.Find("On").gameObject.SetActive(false);
            _EMU_2_O2.gameObject.transform.Find("Off").gameObject.SetActive(true);
        }
        #endregion
        #region O2 Pump Switch
        if (o2_vent_switch)
        {
            if (_O2_Pump_reversed)
                _O2_Pump.texture = _redRing;
            else
                _O2_Pump.texture = _greenRing;
            _O2_Pump.gameObject.transform.Find("On").gameObject.SetActive(true);
            _O2_Pump.gameObject.transform.Find("Off").gameObject.SetActive(false);
        }
        else
        {
            if (_O2_Pump_reversed)
                _O2_Pump.texture = _greenRing;
            else
                _O2_Pump.texture = _redRing;
            _O2_Pump.gameObject.transform.Find("On").gameObject.SetActive(false);
            _O2_Pump.gameObject.transform.Find("Off").gameObject.SetActive(true);
        }
        #endregion
        #region O2 Depress Pump Switch
        if (depress_pump_switch)
        {
            if (_O2_Depress_Pump_reversed)
                _O2_Depress_Pump.texture = _redRing;
            else
                _O2_Depress_Pump.texture = _greenRing;
            _O2_Depress_Pump.gameObject.transform.Find("On").gameObject.SetActive(true);
            _O2_Depress_Pump.gameObject.transform.Find("Off").gameObject.SetActive(false);
        }
        else
        {
            if (_O2_Depress_Pump_reversed)
                _O2_Depress_Pump.texture = _greenRing;
            else
                _O2_Depress_Pump.texture = _redRing;
            _O2_Depress_Pump.gameObject.transform.Find("On").gameObject.SetActive(false);
            _O2_Depress_Pump.gameObject.transform.Find("Off").gameObject.SetActive(true);
        }
        #endregion
    }
}

[SerializeField]
public enum UIAState
{
    Idle,
    Power_on_EMU1,
    Prepare_UIA_OpenVent,
    Prepare_UIA_CloseVent,
    Purge_N2_OpenSupply,
    Purge_N2_CloseSupply,
    Purge_N2_OpenVent,
    Purge_N2_CloseVent,
    Initial_O2_Pressurization_OpenSupply,
    Initial_O2_Pressurization_CloseSupply,
    Fill_EMU_Water_OpenWaste,
    Fill_EMU_Water_CloseWaste,
    Fill_EMU_Water_OpenSupply,
    Fill_EMU_Water_CloseSupply,
    Depressurize_Airlock_OpenDepress,
    Depressurize_Airlock_CloseDepress,
    Complete_EMU_Pressurization_OpenSupply,
    Complete_EMU_Pressurization_CloseSupply,
    Complete_Airlock_Depressurization_OpenDepress,
    Complete_Airlock_Depressurization_CloseDepress,
    Exit
}
