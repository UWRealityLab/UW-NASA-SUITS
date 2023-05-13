using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PathInMapVisualizer : MonoBehaviour
{
    [SerializeField] private Sprite _pathVisual;
    [SerializeField] private Transform _visualParent;
    [SerializeField] private float _pathVisualUpdateFrequency = 1.0f;

    private IReadOnlyList<Vector3> _corners;

    private void OnEnable()
    {
        InvokeRepeating(nameof(UpdatePathVisual), 0.0f, _pathVisualUpdateFrequency);
    }

    private void OnDisable()
    {
        while (transform.childCount > 0)
        {
            DestroyImmediate(transform.GetChild(0).gameObject);
        }
        CancelInvoke();
    }

    private void UpdatePathVisual()
    {
        _corners = BreadcrumbManager.Instance.Breadcrumbs;
        if (_corners != null)
        {
            while (transform.childCount > 0)
            {
                DestroyImmediate(transform.GetChild(0).gameObject);
            }

            for (int i = 1; i < _corners.Count; i++)
            {
                Vector3 start = MinimapManager.Instance.WorldToMinimapPosition(GPSEncoder.GetRotationCorrection() * _corners[i - 1]);
                Vector3 end = MinimapManager.Instance.WorldToMinimapPosition(GPSEncoder.GetRotationCorrection() * _corners[i]);
                Vector2 start2D = new Vector2(start.x, start.z);
                Vector2 end2D = new Vector2(end.x, end.z);

                GameObject gameObject = new GameObject("dotConnection", typeof(Image));
                gameObject.transform.SetParent(_visualParent, false);
                gameObject.GetComponent<Image>().sprite = _pathVisual;
                gameObject.GetComponent<Image>().type = Image.Type.Tiled;
                RectTransform rectTransform = gameObject.GetComponent<RectTransform>();
                Vector2 dir = (end2D - start2D).normalized;
                float distance = Vector2.Distance(start2D, end2D);
                rectTransform.anchorMin = new Vector2(0.5f, 0.5f);
                rectTransform.anchorMax = new Vector2(0.5f, 0.5f);
                rectTransform.sizeDelta = new Vector2(distance, 8f);
                rectTransform.anchoredPosition = start2D + dir * distance * 0.5f;
                if (Vector2.SignedAngle(Vector2.right, dir) >= 0)
                {
                    rectTransform.localEulerAngles = new Vector3(0, 0, Vector2.SignedAngle(Vector2.right, dir) + 180);
                }
                else
                {
                    rectTransform.localEulerAngles = new Vector3(0, 0, Vector2.SignedAngle(Vector2.right, dir));
                }
            }
        }
    }
}
