using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class NavMeshBuilder : MonoBehaviour
{
    private GameObject spatialMesh;
    private NavMeshSurface surface;

    // Start is called before the first frame update
    void Start()
    {
        spatialMesh = GameObject.Find("Trackables");
        surface = spatialMesh.AddComponent<NavMeshSurface>();
        InvokeRepeating("BuildNavMesh", 0.0f, 5.0f);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void BuildNavMesh()
    {
        surface.useGeometry = NavMeshCollectGeometry.PhysicsColliders;
        surface.BuildNavMesh();
    }
}
