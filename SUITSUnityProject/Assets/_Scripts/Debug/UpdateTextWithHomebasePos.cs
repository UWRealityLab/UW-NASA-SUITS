using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class UpdateTextWithHomebasePos : MonoBehaviour
{
    private TMP_Text _tmp;

    private void Awake() => _tmp = GetComponent<TMP_Text>();

    private void Update()
    {
        if (_tmp != null)
        {
            Waypoint homeWaypoint = WaypointManager.Instance.Home;
            _tmp.text = $"HomeBase Position:\n<color=\"green\">{homeWaypoint.Position}</color>\n";
            Waypoint userWaypoint = WaypointManager.Instance.User;
            _tmp.text += $"User Position:\n<color=\"green\">{userWaypoint.Position}</color>\n"; ;
        }
    }
}
