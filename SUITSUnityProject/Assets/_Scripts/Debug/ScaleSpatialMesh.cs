using Microsoft.MixedReality.Toolkit.UX;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScaleSpatialMesh : MonoBehaviour
{
    [SerializeField] private Transform _spatialMeshTransform;
    
    public void OnValueUpdated(SliderEventData sliderEventData)
    {
        if (_spatialMeshTransform != null)
        {
            float scale = (sliderEventData.NewValue) * 500f + (1 - sliderEventData.NewValue) * 20;
            _spatialMeshTransform.localScale = new Vector3(scale, scale, scale);
        }
    }
}
