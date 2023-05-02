using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class UpdateTextWithState : MonoBehaviour
{
    private TMP_Text _tmp;

    private void Awake() => _tmp = GetComponent<TMP_Text>();

    private void Update()
    {
        if (_tmp != null)
        {
            _tmp.text = StateManager.Instance.CurrentState switch
            {
                State.Indoor => "Current State:\n<color=\"green\">Indoor</color>",
                State.Explore => "Current State:\n<color=\"yellow\">Explore</color>",
                State.Return => "Current State:\n<color=#b404ff>Return</color>",
                _ => "<color=\"red\">Errors in StateManager!</color>",
            };
        }
    }
}
