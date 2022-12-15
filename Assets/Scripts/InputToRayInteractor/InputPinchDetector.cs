using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InputPinchDetector : MonoBehaviour
{
    [SerializeField]
    private GameObject visual;

    private void OnEnable()
    {
        Vector3 hitPoint = InputToRayInteractorHandler.QueryRaycastHit();

        visual.transform.position = hitPoint;
    }
}
