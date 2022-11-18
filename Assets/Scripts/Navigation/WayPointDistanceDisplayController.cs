using TMPro;
using UnityEngine;

/// <summary>
/// A class that controls displaying the distance between player and waypoints
/// </summary>
public class WayPointDistanceDisplayController : MonoBehaviour
{
    private float TEXT_HEIGHT = 0.4f;  // Y axis offset for the TextMeshProUGUI that displays the distance
    private float TEXT_SIZE_SCALER = 0.0008f;  // scaler that controls how the canvas that contains the text should scale when player moves

    [SerializeField]
    [Tooltip("Transform of the player that is used to calculated the distance")]
    private Transform playerTransform;

    [SerializeField]
    [Tooltip("TextMeshProUGUI obejct that is used to display the distance")]
    private TextMeshProUGUI textMesh;

    private Transform targetTransform = null;  // target transform, updated at runtime

    /// <summary>
    /// Set the current gameObject to active. Should be called when everything is ready for showing
    /// the distance information to player
    /// </summary>
    public void ActivateDisplay()
    {
        if (targetTransform != null)
        {
            gameObject.SetActive(true);
            UpdatePosition();
        }
    }

    /// <summary>
    /// Set the current gameObject to inactive
    /// </summary>
    public void DeactivateDisplay()
    {
        gameObject.SetActive(false);
    }

    /// <summary>
    /// Update the position of the gameObject to follow the position of the new target
    /// </summary>
    /// <param name="targetTransform">transform of the targeted waypoint</param>
    public void UpdateTarget(Transform targetTransform)
    {
        this.targetTransform = targetTransform;
        UpdatePosition();
    }

    /// <summary>
    /// Update the textMesh with the given distance
    /// </summary>
    /// <param name="distance">a truncated integer that is the distance between player and target</param>
    public void UpdateTextMesh(int distance)
    {
        textMesh.text = $"{distance}m";
    }

    /// <summary>
    /// Call back function that gets called whenever an updated path is found by pathTracer
    /// Used to calculate the total distance of a given path
    /// </summary>
    /// <param name="points">the path that is being found stored in an array of Vector3</param>
    public void CalculateDistance(Vector3[] points)
    {
        float distance = 0.0f;
        for (int i = 1; i < points.Length; i++)
        {
            distance += Vector3.Distance(points[i - 1], points[i]);
        }
        UpdateTextMesh((int)distance);
    }

    /// <summary>
    /// Update the transform whenever a targetTransform has been given
    /// </summary>
    private void UpdatePosition()
    {
        if (targetTransform != null)
        {
            transform.position = targetTransform.position + TEXT_HEIGHT * Vector3.up;
        }
    }

 /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // repeating functions to keep the text facing towards player
    public void OnEnable()
    {
        InvokeRepeating("ForceFacingPlayerAndUpdateSize", 0.0f, 5.0f);
    }

    public void OnDisable()
    {
        CancelInvoke();
    }

    /// <summary>
    /// Make sure the text is always facing towards the player and the size of it
    /// is scaled appropriately according to the distance between player and target
    /// </summary>
    private void ForceFacingPlayerAndUpdateSize()
    {
        transform.LookAt(playerTransform);
        float distance = Vector3.Distance(transform.position, playerTransform.position);
        transform.localScale = (TEXT_SIZE_SCALER * distance) * new Vector3(-1f, 1f, 1f);   // -1f here to flip the canvas horizontally
    }
}
