using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AlertManager : Singleton<AlertManager>
{
    private Dictionary<TSSEVATypeEnum, TSSErrorStateEnum> _map = new ();
    private Dictionary<TSSEVATypeEnum, TSSErrorStateEnum> _mapOld = new ();

    private void Start()
    {
        TelemetryManager.OnBatteryPercentWarning += OnEVAErrorStateChange;
        TelemetryManager.OnBatteryCapacityCaution += OnEVAErrorStateChange;
    }

    public void OnEVAErrorStateChange(string msg, TSSEVATypeEnum type)
    {
       /* if (_mapOld[type] != _map[type] && _mapOld[type])*/
    }
}
