using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.UX;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ForceToggleOffHelper : MonoBehaviour
{
    [SerializeField] StatefulInteractable _statefulInteractable;

    private void Start()
    {
        if (_statefulInteractable == null)
        {
            _statefulInteractable = gameObject.GetComponent<StatefulInteractable>();
        }
    }

    public void ForceToggle(bool state)
    {
        _statefulInteractable.ForceSetToggled(state);
    }
}