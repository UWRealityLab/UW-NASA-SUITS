using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIATracker : MonoBehaviour
{
    [SerializeField] private int _numOfSwitchesLeft = 0;
    [SerializeField] private PopupDialogHandler _popupWhenComplete;

    public void SwitchOn()
    {
        _numOfSwitchesLeft--;
        if (_numOfSwitchesLeft == 0)
        {
            StateManager.Instance.ChangeState(State.Explore);
            if (_popupWhenComplete != null)
                _popupWhenComplete.ShowDialog();
        }
    }
    public void SwitchOff() => _numOfSwitchesLeft++;
}
