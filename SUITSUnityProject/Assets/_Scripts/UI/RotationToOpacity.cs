using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotationToOpacity : MonoBehaviour
{
    [SerializeField] private CanvasGroup _canvasGroup;
    [SerializeField] private Transform _mainCamera;
    [SerializeField] private float _thresholdStart = 0;
    [SerializeField] private float _thresholdEnd = 0.5f;

    private void Start()
    {
        if (_canvasGroup == null)
            _canvasGroup = GetComponent<CanvasGroup>();
        if (_mainCamera == null)
            _mainCamera = GameObject.FindGameObjectWithTag("MainCamera").transform;
        _canvasGroup.alpha = 0;
    }

    private void Update()
    {
        if (_mainCamera.rotation.eulerAngles.x > 180f)
        {
            float step = (_mainCamera.rotation.eulerAngles.x - 360.0f - _thresholdStart) / (_thresholdEnd - _thresholdStart);
            _canvasGroup.alpha = step;
        }
    }
}
