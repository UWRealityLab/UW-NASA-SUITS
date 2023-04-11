using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ScrollViewButtonControl : MonoBehaviour
{
    [SerializeField] private ScrollRect _scrollRect;
    [SerializeField] private float _scrollSpeed;

    private void Awake()
    {
        if (_scrollRect == null)
            _scrollRect = GetComponent<ScrollRect>();
    }

    public void ScrollDown()
    {
        if (_scrollRect != null)
        {
            if (_scrollRect.verticalNormalizedPosition >= 0f)
            {
                StartCoroutine(Scroll(_scrollRect.verticalNormalizedPosition - _scrollSpeed, 0.3f));
            }
        }
    }

    public void ScrollUp()
    {
        if (_scrollRect != null)
        {
            if (_scrollRect.verticalNormalizedPosition <= 1f)
            {
                StartCoroutine(Scroll(_scrollRect.verticalNormalizedPosition + _scrollSpeed, 0.3f));
            }
        }
    }

    private IEnumerator Scroll(float destination, float duration)
    {
        float end = Time.time + duration;
        while (Time.time < end)
        {
            _scrollRect.verticalNormalizedPosition = Mathf.Lerp(_scrollRect.verticalNormalizedPosition, destination, 0.5f * Time.deltaTime);
            yield return null;
        }
    }
} 
