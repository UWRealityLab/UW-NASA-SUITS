using Microsoft.MixedReality.GraphicsTools;
using Microsoft.MixedReality.Toolkit.SpatialManipulation;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainPanelController : MonoBehaviour
{
    [SerializeField] private RectTransform canvas;
    [SerializeField] private CanvasElementRoundedRect backPlate;
    [SerializeField] private GameObject content;
    [SerializeField] private RadialView radialView;

    private bool isOpened = false;

    public void OpenPanel()
    {
        if (!isOpened)
        {
            isOpened = true;
            canvas.position = new Vector3(canvas.position.x, 0.0f, canvas.position.z);
            canvas.sizeDelta = new Vector2(canvas.rect.width, 522.9816f);
            backPlate.enabled = true;
            content.SetActive(true);
            radialView.FixedVerticalPosition = 0.0f;
        }
    }

    public void ClosePanel()
    {
        if (isOpened)
        {
            radialView.FixedVerticalPosition = -0.7f;
            content.SetActive(false);
            backPlate.enabled = false;
            canvas.position = new Vector3(canvas.position.x, -0.20147f, canvas.position.z);
            canvas.sizeDelta = new Vector2(canvas.rect.width, 121.5884f);
            isOpened = false;
        }
    }
}
