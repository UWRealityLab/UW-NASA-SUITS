using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class ReturnHomeDetailsHelper : MonoBehaviour
{
    [SerializeField] private TMP_Text _textbox;

    private void Update()
    {
        _textbox.text = $"{Vector3.Distance(WaypointManager.Instance.Home.Position, WaypointManager.Instance.User.Position):F2}m Away ETA 2 minutes";
    }
} 
