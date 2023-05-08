using Microsoft.MixedReality.Toolkit;
using Microsoft.MixedReality.Toolkit.UX;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ToggleController : MonoBehaviour
{
    [SerializeField] StatefulInteractable _statefulInteractable;
    [SerializeField] StatefulInteractable _statefulInteractable1;

    private void Update()
    {
        _statefulInteractable1.ForceSetToggled(_statefulInteractable.IsToggled);
    }
}