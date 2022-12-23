using System;
using UnityEngine;


/// <summary>
/// It takes an input signal and queries the ray interaction based on the input
/// Example: when pinching detected, query the hand ray raycast hit
///          when voice command detected, query the gaze ray raycast hit
/// </summary>
public static class InputToRayInteractorHandler
{
    public static Func<Vector3> OnRaycastQuerying;

    public static Vector3 QueryRaycastHit()
    {
        if (OnRaycastQuerying != null)
        {
            return OnRaycastQuerying();
        }
        return Vector3.zero;
    }
}

public static class RaycastEventHandler
{
    public static Action<Vector3> OnRaycastHit;

    public static void ValidInputDetected()
    {
        Vector3 raycastHit = InputToRayInteractorHandler.QueryRaycastHit();
        if (OnRaycastHit != null)
        {
            OnRaycastHit(raycastHit);
        }
    }
}
