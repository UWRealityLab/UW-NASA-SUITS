using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HUDCompassControl : Singleton<HUDCompassControl>
{
    [SerializeField] private float _northRotation = 0;
    [SerializeField] private float _startPosX;
    [SerializeField] private float _endPosX;
    private Transform _mainCameraTransform;
    private RectTransform _rectTransform;

    public void UpdateNorthRotation(float rotation)
    {
        _northRotation = rotation;
    }

    public float GetLerpParameter(float angle)
    {
        return ((angle + 360 - _northRotation) % 360) / (360);
    }

    private void Start()
    {
        _mainCameraTransform = GameObject.FindGameObjectWithTag("MainCamera").GetComponent<Transform>();
        _rectTransform = GetComponent<RectTransform>();
    }

    private void Update()
    {
        Quaternion angle = _mainCameraTransform.rotation;
        float t = ((angle.eulerAngles.y + 360 - _northRotation) % 360) / (360);
        float posX = (1 - t) * _endPosX + t * _startPosX;
        float posY = _rectTransform.anchoredPosition.y;
        _rectTransform.anchoredPosition = new Vector2(posX, posY);
    }
}
