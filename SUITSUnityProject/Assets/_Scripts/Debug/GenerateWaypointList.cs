using Microsoft.MixedReality.Toolkit.UX;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class GenerateWaypointList : MonoBehaviour
{
    [SerializeField] private GameObject _buttonPrefab;
    [SerializeField] private Transform _content;

    private void Start() => WaypointManager.OnWaypointAdd += UpdateWaypointList;
    private void OnDestroy() => WaypointManager.OnWaypointAdd -= UpdateWaypointList;

    private void UpdateWaypointList(Waypoint waypoint)
    {
        GameObject button = Instantiate(_buttonPrefab, _content);
        foreach (var text in button.GetComponentsInChildren<TextMeshProUGUI>())
        {
            if (text.gameObject.name == "Text")
                text.text = $"Waypoint: {waypoint.Name}";
        }
        button.GetComponent<PressableButton>().OnClicked.AddListener(() =>
            WaypointManager.Instance.UpdateUserTargetLocation(waypoint.Position));
    }
}
