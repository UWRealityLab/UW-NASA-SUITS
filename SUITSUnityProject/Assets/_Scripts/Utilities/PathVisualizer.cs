using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PathVisualizer : MonoBehaviour
{
    [SerializeField]
    private LineRenderer _lineRenderer;
    [SerializeField]
    private float _pathVisualUpdateFrequency = 1.0f;

    private Vector3[] _corners;

    private void Awake()
    {
        if (_lineRenderer == null)
        {
            _lineRenderer = GetComponent<LineRenderer>();
        }
        _lineRenderer.positionCount = 0;
        _lineRenderer.alignment = LineAlignment.TransformZ;
        _lineRenderer.gameObject.transform.rotation = Quaternion.Euler(new Vector3(90, 0, 0));
    }

    public void UpdatePath(Path newPath)
    {
        _corners = newPath.Corners.ToArray();
    }

    private void OnEnable()
    {
        _lineRenderer.enabled = true;
        InvokeRepeating(nameof(UpdatePathVisual), 0.0f, _pathVisualUpdateFrequency);
    }

    private void OnDisable()
    {
        _lineRenderer.enabled = false;
        CancelInvoke();
    }

    private void UpdatePathVisual()
    {
        if (_corners != null)
        {
            _lineRenderer.positionCount = _corners.Length;
            _lineRenderer.SetPositions(_corners);
        }
    }
}
