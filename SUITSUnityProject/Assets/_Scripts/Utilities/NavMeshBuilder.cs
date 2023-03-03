using UnityEngine;
using UnityEngine.AI;

/// <summary>
/// NavMeshSurface helper class that is used to attach the NavMeshSurface component to
/// the appropriate spatial mesh generated by ARMeshManager and update the NavMesh at runtime
/// </summary>
public class NavMeshBuilder : Singleton<NavMeshBuilder>
{
    [SerializeField]
    public float NavMeshUpdateFrequency = 15.0f;

    private GameObject spatialMesh;
    private GameObject spatialMeshChild;
    private NavMeshSurface surface;

    /// <summary>
    /// Hardcoded approach to find the spatial mesh data
    /// MAKE SURE NO other game object is called "Trackables"
    /// </summary>
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

        InvokeRepeating("BuildNavMesh", 0.0f, NavMeshUpdateFrequency);
    }

    /// <summary>
    /// Wrapper method that controls how to build the NavMesh
    /// </summary>
    public void BuildNavMesh()
    {
        // directly calls BuildNavMesh for now
        surface.BuildNavMesh();
    }
}