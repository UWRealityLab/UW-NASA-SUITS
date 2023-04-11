using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARFoundation;

public class ToggleSpatialMeshRenderer : MonoBehaviour
{
    [SerializeField] private ARMeshManager _arMeshManager;
    private MeshRenderer _meshRenderer;

    private void Awake() => _meshRenderer = _arMeshManager.meshPrefab.GetComponent<MeshRenderer>();

    public void EnableSpatialMeshVisual() => _meshRenderer.enabled = true;
    public void DisableSpatialMeshVisual() => _meshRenderer.enabled = false;
}
