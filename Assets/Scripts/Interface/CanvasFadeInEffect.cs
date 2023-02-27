using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CanvasFadeInEffect : MonoBehaviour
{
    CanvasGroup csGrp;

    void Awake()
    {
        csGrp = GetComponent<CanvasGroup>();
    }

    void OnEnable()
    {
        StartCoroutine("FadeIn");
    }

    void OnDisable()
    {
        StopAllCoroutines();
    }

    IEnumerator FadeIn()
    {
        csGrp.alpha = 0;
        float time = 5f;

        while (csGrp.alpha < 1)
        {
            csGrp.alpha += Time.deltaTime / time;
            yield return null;
        }
    }
}
