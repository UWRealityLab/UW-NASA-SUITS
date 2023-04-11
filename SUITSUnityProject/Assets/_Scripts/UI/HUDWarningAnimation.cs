using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HUDWarningAnimation : MonoBehaviour
{
    [SerializeField] private float _duration;
    [SerializeField] private float _speed;

    private RectTransform _rectTransform;

    private void Awake()
    {
        _rectTransform = GetComponent<RectTransform>();
    }

    private void OnEnable()
    {
        StartCoroutine(MoveForSeconds(_duration));
    }

    private void OnDisable()
    {
        StopAllCoroutines();
    }

    private IEnumerator MoveForSeconds(float duration)
    {
        float end = Time.time + duration;
        while (Time.time < end)
        {
            _rectTransform.Translate(Vector3.right * Time.deltaTime * _speed);
            yield return null;
        }
        gameObject.SetActive(false);
    }
}
