using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class UpdateTextWithTelemetry : MonoBehaviour
{
    private TMP_Text _tmp;

    private void Awake() => _tmp = GetComponent<TMP_Text>();

    private void Update()
    {
        if (_tmp != null)
        {
            string uri = TelemetryManager.Instance.URI;
            _tmp.text = $"TelemetryServer URI: <color=\"green\">{uri}</color>";
        }
    }
}
