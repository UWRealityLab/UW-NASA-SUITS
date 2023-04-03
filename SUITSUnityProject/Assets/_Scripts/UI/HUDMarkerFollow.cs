using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HUDMarkerFollow : MonoBehaviour
{
    [SerializeField] private float _startPosX;
    [SerializeField] private float _endPosX;

    private Transform _mainCameraTransform;
    private RectTransform _rectTransform;

    private void Awake()
    {
        _mainCameraTransform = GameObject.FindGameObjectWithTag("MainCamera").GetComponent<Transform>();
        _rectTransform = GetComponent<RectTransform>();
    }

    private void Update()
    {
        float t = (_mainCameraTransform.rotation.eulerAngles.y - (0)) / (360 - (0));
        float posX = (1 - t) * _endPosX + t * _startPosX;
        float posY = _rectTransform.anchoredPosition.y;
        _rectTransform.anchoredPosition = new Vector2(posX, posY);
    }
}
