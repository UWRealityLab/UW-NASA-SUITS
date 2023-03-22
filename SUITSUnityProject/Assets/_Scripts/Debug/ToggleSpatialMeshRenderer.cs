using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ToggleSpatialMeshRenderer : MonoBehaviour
{
    private GameObject _spatialMesh;

    public void EnableSpatialMeshVisual()
    {
        if (_spatialMesh == null)
        {
            _spatialMesh = GameObject.FindGameObjectWithTag("SpatialMesh");
            
        }
        foreach (var mesh in _spatialMesh.GetComponentsInChildren<MeshRenderer>())
        {
            mesh.enabled = true;
        }
    }

    public void DisableSpatialMeshVisual()
    {
        if (_spatialMesh == null)
        {
            _spatialMesh = GameObject.FindGameObjectWithTag("SpatialMesh");

        }
        foreach (var mesh in _spatialMesh.GetComponentsInChildren<MeshRenderer>())
        {
            mesh.enabled = false;
        }
    }
}
