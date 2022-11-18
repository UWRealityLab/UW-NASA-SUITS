using UnityEngine;

/// <summary>
/// A collection of call back functions to control several state of navigation
/// </summary>
public class ToggleController : MonoBehaviour
{
    private const int DEFAULT_LAYER = 0;
    private const int MINIMAP_LAYER = 6;

    [SerializeField]
    [Tooltip("PathTracer class to activate and deactivate path calculation and line rendering")]
    private GameObject pathTracer;

    [SerializeField]
    [Tooltip("Gameobject that displays the minimap to player")]
    private GameObject miniMap;

    [SerializeField]
    [Tooltip("NavMeshBuilder class that has a BuildNavMesh method to update the NavMesh at runtime")]
    private NavMeshBuilder builder;

    /// <summary>
    /// Deactivate every functionality related to navigation
    /// </summary>
    public void HideAllActivate()
    {
        pathTracer.SetActive(false);
        miniMap.SetActive(false);
    }

    // Called when button untoggled
    // Used to update the NavMesh before activating pathTracer and minimap
    public void HideAllDeactivate()
    {
        builder.BuildNavMesh();
    }

    /// <summary>
    /// Activate pathTracer and miniMap, but won't display the route to player
    /// </summary>
    public void NavActivate()
    {
        pathTracer.SetActive(true);
        miniMap.SetActive(true);
    }

    // Called when button untoggled
    public void NavDeactivate()
    {

    }

    /// <summary>
    /// Activate pathTracer and set the layer appropriately to display the actual path
    /// </summary>
    public void NavWithPathActivate()
    {
        pathTracer.SetActive(true);
        pathTracer.layer = DEFAULT_LAYER;
    }

    // Called when button untoggled
    // Hide the displayed route
    public void NavWithPathDeactivate()
    {
        pathTracer.layer = MINIMAP_LAYER;
    }
}
