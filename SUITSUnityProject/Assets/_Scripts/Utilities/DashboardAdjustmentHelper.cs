using Microsoft.MixedReality.Toolkit.SpatialManipulation;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DashboardAdjustmentHelper : MonoBehaviour
{
    [SerializeField] RadialView _dashboard;
    [SerializeField] GameObject _downArrow;
    [SerializeField] GameObject _upArrow;

    private bool _isUp = true;

    public void togglePosition()
    {
        if (_isUp)
            MoveDown();
        else
            MoveUp();
    }

    public void MoveDown()
    {
        _isUp = false;
        _dashboard.FixedVerticalPosition = -0.2f;
        _downArrow.SetActive(false);
        _upArrow.SetActive(true);
    }

    public void MoveUp()
    {
        _isUp = true;
        _dashboard.FixedVerticalPosition = 0.17f;
        _downArrow.SetActive(true);
        _upArrow.SetActive(false);
    }
}
