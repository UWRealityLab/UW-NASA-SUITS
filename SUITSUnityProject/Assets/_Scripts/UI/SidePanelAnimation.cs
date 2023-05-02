using Microsoft.MixedReality.Toolkit.SpatialManipulation;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SidePanelAnimation : MonoBehaviour
{
    [SerializeField] private Transform _startAtTransform;
    [SerializeField] private Vector3 _startOffset;
    [SerializeField] private GameObject _sidePanel;
    [SerializeField] private float _duration;

    private Transform _sidePanelTransform;
    private SolverHandler _solverHandler;
    private RadialView _radialView;

    public void EnablePanel()
    {
        _sidePanelTransform.position = _startAtTransform.position + _startOffset;
        _sidePanelTransform.rotation = _startAtTransform.rotation;
        _sidePanel.SetActive(true);
        StartCoroutine(RotateForSeconds(_duration));
    }
    
    public void DisablePanel()
    {
        StopAllCoroutines();
        _sidePanel.SetActive(false);
        _solverHandler.enabled = false;
        _radialView.enabled = false;
    }

    private void Awake()
    {
        _sidePanelTransform = _sidePanel.GetComponent<Transform>();
        _solverHandler = _sidePanel.GetComponent<SolverHandler>();
        _radialView = _sidePanel.GetComponent<RadialView>();
        _solverHandler.enabled = false;
        _radialView.enabled = false;
    }

    private IEnumerator RotateForSeconds(float duration)
    {
        float end = Time.time + duration;
        while (Time.time < end)
        {
            _sidePanelTransform.Rotate(new Vector3(1, 0, 0) * Time.deltaTime * 10);
            _sidePanelTransform.Translate(Vector3.down * Time.deltaTime * 0.3f);
            yield return null;
        }
        _radialView.enabled = true;
        _radialView.MaxViewDegrees = 30;
        Invoke(nameof(ChangeVeiwDegreeTo), 0.1f);
        _solverHandler.enabled = true;
    }

    private void ChangeVeiwDegreeTo()
    {
        _radialView.MaxViewDegrees = 50;
    }
}
