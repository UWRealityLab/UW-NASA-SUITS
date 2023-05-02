using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GeoPointLine : MonoBehaviour
{
    public Transform sphere;
    public RectTransform canvas;

    private LineRenderer m_line;

    private void Start()
    {
        m_line = GetComponent<LineRenderer>();
        m_line.positionCount = 2;
    }

    private void Update()
    {
        Vector3[] canvasCorners = new Vector3[4];
        canvas.GetWorldCorners(canvasCorners);
        Vector3 bottomOfCanvas = (canvasCorners[0] + canvasCorners[3]) / 2;  // midpoint of bottom two canvas corners

        m_line.SetPosition(0, sphere.position);
        m_line.SetPosition(1, bottomOfCanvas);
    }
}
