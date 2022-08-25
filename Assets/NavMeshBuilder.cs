using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class NavMeshBuilder : MonoBehaviour
{
    private GameObject spatialMesh;
    private GameObject spatialMeshChild;
    private NavMeshSurface surface;

    // Start is called before the first frame update
    void Start()
    {
        spatialMesh = GameObject.Find("Trackables");
        spatialMesh.name = "spatialMesh";
        spatialMeshChild = GameObject.Find("Trackables");
        spatialMeshChild.name = "spatialMeshChild";
        spatialMeshChild.transform.SetParent(spatialMesh.transform);
        surface = spatialMesh.AddComponent<NavMeshSurface>();
        surface.useGeometry = NavMeshCollectGeometry.PhysicsColliders;
        surface.collectObjects = CollectObjects.Children;
        InvokeRepeating("BuildNavMesh", 0.0f, 15.0f);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void BuildNavMesh()
    {
        surface.BuildNavMesh();
    }
}
