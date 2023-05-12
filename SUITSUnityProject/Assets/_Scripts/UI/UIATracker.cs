using System.Collections;
using System.Collections.Generic;
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

    [SerializeField] private Texture _redRing;
    [SerializeField] private Texture _greenRing;

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

    private void Start()
    {
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

                if (!emu1_pwr_switch && !ev1_supply_switch && !ev1_water_waste_switch &&
                        !emu1_o2_supply_switch && !emu2_pwr_switch && !ev2_supply_switch &&
                        !ev2_water_waste_switch && !emu2_o2_supply_switch && !o2_vent_switch &&
                        !depress_pump_switch)
                    State = UIAState.Power_on_EMU1;
                break;

            case UIAState.Power_on_EMU1:
                _EVA_1_Power_reversed = false; _EVA_1_Supply_reversed = true; _EVA_1_Waste_reversed = true;
                _EVA_2_Supply_reversed = true; _EVA_2_Waste_reversed = true; _EVA_2_Power_reversed = true;
                _EMU_1_O2_reversed = true; _EMU_2_O2_reversed = true; _O2_Pump_reversed = true; _O2_Depress_Pump_reversed = true;

                if (emu1_pwr_switch && !ev1_supply_switch && !ev1_water_waste_switch &&
                        !emu1_o2_supply_switch && !emu2_pwr_switch && !ev2_supply_switch &&
                        !ev2_water_waste_switch && !emu2_o2_supply_switch && !o2_vent_switch &&
                        !depress_pump_switch)
                    State = UIAState.Prepare_UIA;
                break;

            case UIAState.Prepare_UIA:
                _EVA_1_Power_reversed = false; _EVA_1_Supply_reversed = true; _EVA_1_Waste_reversed = true;
                _EVA_2_Supply_reversed = true; _EVA_2_Waste_reversed = true; _EVA_2_Power_reversed = true;
                _EMU_1_O2_reversed = true; _EMU_2_O2_reversed = true; _O2_Pump_reversed = false; _O2_Depress_Pump_reversed = true;

                if (emu1_pwr_switch && !ev1_supply_switch && !ev1_water_waste_switch &&
                        !emu1_o2_supply_switch && !emu2_pwr_switch && !ev2_supply_switch &&
                        !ev2_water_waste_switch && !emu2_o2_supply_switch && o2_vent_switch &&
                        !depress_pump_switch) ;
    
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
    Prepare_UIA,
    Purge_N2,
    Initial_O2_Pressurization,
    Fill_EMU_Water,
    Depressurize_Airlock,
    Complete_EMU_Pressurization,
    Complete_Airlock_Depressurization,
    Exit
}
