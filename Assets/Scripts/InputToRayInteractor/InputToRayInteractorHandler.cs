using System.Collections;
using System.Collections.Generic;
using UnityEngine;


/// <summary>
/// It takes an input signal and queries the ray interaction based on the input
/// Example: when pinching detected, query the hand ray raycast hit
///          when voice command detected, query the gaze ray raycast hit
/// </summary>
public class InputToRayInteractorHandler : MonoBehaviour
{
    public delegate Vector3 InputObserver();
    public static InputObserver OnQueryRaycastHit;

    public static Vector3 QueryRaycastHit()
    {
        if (OnQueryRaycastHit != null)
        {
            return OnQueryRaycastHit();
        }
        return Vector3.zero;
    }
}
