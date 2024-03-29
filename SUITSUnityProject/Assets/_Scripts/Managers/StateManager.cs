using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StateManager : Singleton<StateManager>
{
    public static event Action<State> OnBeforeStateChanged;
    public static event Action<State> OnAfterStateChanged;

    public State CurrentState { get; private set; }

    private const float INIT_AFTER = 1f;

    private void Start() => Invoke(nameof(Init), INIT_AFTER);

    public void ChangeState(State newState)
    {
        OnBeforeStateChanged?.Invoke(newState);

        CurrentState = newState;

        OnAfterStateChanged?.Invoke(newState);
    }

    public void ChangeState(int intNewState)
    {
        State newState = (State)intNewState;
        OnBeforeStateChanged?.Invoke(newState);

        CurrentState = newState;

        OnAfterStateChanged?.Invoke(newState);
    }

    private void Init()
    {
        ChangeState(State.Indoor);
        ChangeState(State.Explore);
    }
}

[SerializeField]
public enum State
{
    Indoor = 0,   // UIA
    Explore = 1,  // geology scan, rover control, breadcrumb record
    Return = 2    // breadcrumb replay
}