using UnityEngine;

/// <summary>
/// Helper class that forces the gameObject attached by this component to follow
/// a given followee
/// </summary>
public class ForceFollow : MonoBehaviour
{
    [SerializeField]
    [Tooltip("Transform of the gameObject that is being followed")]
    private Transform _followee;

    [SerializeField] private bool _useFixedYPosition = false;
    [SerializeField] private float _fixedYPosition = 0.0f;

    /// <summary>
    /// Forces the gameObject attached by this component to follow a given followee
    /// </summary>
    private void Update()
    {
        if (_useFixedYPosition)
            transform.position = new Vector3(_followee.position.x, _fixedYPosition, _followee.position.z);
        else
            transform.position = _followee.position;
    }

    public void ForceUpdateTransform()
    {
        if (_useFixedYPosition)
            transform.position = new Vector3(_followee.position.x, _fixedYPosition, _followee.position.z);
        else
            transform.position = _followee.position;
    }
}