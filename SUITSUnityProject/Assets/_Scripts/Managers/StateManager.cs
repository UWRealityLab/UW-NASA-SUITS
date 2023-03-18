using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StateManager : Singleton<StateManager>
{
    public static event Action<State> OnBeforeStateChanged;
    public static event Action<State> OnAfterStateChanged;

    public State CurrentState { get; private set; }

    private void Start()
    {
        ChangeState(State.Indoor);
    }

    public void ChangeState(State newState)
    {
        OnBeforeStateChanged?.Invoke(newState);

        CurrentState = newState;

        OnAfterStateChanged?.Invoke(newState);
    }

    public void FinishedUIA()
    {
        ChangeState(State.Outdoor);
    }
}

[SerializeField]
public enum State
{
    Indoor = 0,  // UIA
    Outdoor = 1  // geology scan, rover control, navigation
}