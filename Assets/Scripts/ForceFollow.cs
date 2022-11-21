using UnityEngine;

/// <summary>
/// Helper class that forces the gameObject attached by this component to follow
/// a given followee
/// </summary>
public class ForceFollow : MonoBehaviour
{
    [SerializeField]
    [Tooltip("Transform of the gameObject that is being followed")]
    private Transform followee;

    [SerializeField]
    [Tooltip("Height of this gameObject when following")]
    private int yOffset = 0;

    [SerializeField]
    [Tooltip("Should this gameObject rotate based on the rotation of the followee?")]
    private bool isRotating = false;

    /// <summary>
    /// Forces the gameObject attached by this component to follow a given followee
    /// </summary>
    void Update()
    {
        Vector3 position = followee.position;
        position.y += yOffset;
        transform.position = position;

        if (isRotating)
        {
            Vector3 rotation = followee.rotation.eulerAngles;
            rotation.x = transform.rotation.eulerAngles.x;
            rotation.z = transform.rotation.eulerAngles.z;
            transform.rotation = Quaternion.Euler(rotation);
        }
    }
}
