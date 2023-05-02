using Microsoft.MixedReality.Toolkit.UX;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScaleSpatialMesh : MonoBehaviour
{
    [SerializeField] private Transform _spatialMeshTransform;
    [SerializeField] private float _minScale;
    [SerializeField] private float _maxScale;
    public void OnValueUpdated(SliderEventData sliderEventData)
    {
        if (_spatialMeshTransform != null)
        {
            float scale = (sliderEventData.NewValue) * _maxScale + (1 - sliderEventData.NewValue) * _minScale;
            _spatialMeshTransform.localScale = new Vector3(scale, scale, scale);
        }
    }
}
