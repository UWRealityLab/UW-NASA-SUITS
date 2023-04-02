using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIATracker : MonoBehaviour
{
    [SerializeField] private int _numOfSwitchesLeft = 0;

    public void SwitchOn()
    {
        _numOfSwitchesLeft--;
        if (_numOfSwitchesLeft == 0)
        {
            StateManager.Instance.ChangeState(State.Explore);
        }
    }
    public void SwitchOff() => _numOfSwitchesLeft++;
}
