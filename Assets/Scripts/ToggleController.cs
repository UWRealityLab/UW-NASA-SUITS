using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ToggleController : MonoBehaviour
{
    [SerializeField]
    private GameObject pathTracer;

    [SerializeField]
    private GameObject miniMap;

    public void HideAllActivate()
    {
        pathTracer.SetActive(false);
        miniMap.SetActive(false);
    }

    public void HideAllDeactivate()
    {

    }

    public void NavActivate()
    {
        pathTracer.SetActive(true);
        miniMap.SetActive(true);
    }

    public void NavDeactivate()
    {

    }

    public void NavWithPathActivate()
    {
        pathTracer.SetActive(true);
        pathTracer.layer = 0;
    }

    public void NavWithPathDeactivate()
    {
        pathTracer.layer = 6;
    }

}
