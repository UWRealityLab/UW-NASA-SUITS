using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class PopulateWaypointList : MonoBehaviour
{
    [SerializeField] private GameObject _waypointItemPrefab;
    [SerializeField] private Transform _parentTransform;

    private void OnEnable()
    {
        foreach(Waypoint waypoint in WaypointManager.Instance.ActiveWaypoints)
        {
            GameObject waypointItem = Instantiate(_waypointItemPrefab, _parentTransform);
            TMP_Text text = waypointItem.GetComponentInChildren<TMP_Text>();
            text.text = $"<size=8>{waypoint.Name}</size><size=6>\n" +
                $"<alpha=#88>{150m} Away</size>";
        }
    }
}
