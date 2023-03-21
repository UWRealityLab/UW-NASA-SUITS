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

    /// <summary>
    /// Forces the gameObject attached by this component to follow a given followee
    /// </summary>
    void Update() => transform.position = followee.position;
}