using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class WayPointDistanceDisplayController : MonoBehaviour
{
    [SerializeField] private float height;
    [SerializeField] private Transform playerTransform;
    [SerializeField] private TextMeshProUGUI textMesh;
    [SerializeField] private float sizeScaler;

    private Transform targetTransform = null;


    // activate and deactivate functions
    public void ActivateDisplay()
    {
        if (targetTransform != null)
        {
            gameObject.SetActive(true);
            UpdatePosition();
        }
    }

    public void DeactivateDisplay()
    {
        gameObject.SetActive(false);
    }


    // call back functions to change the target and player info
    public void UpdateTarget(Transform targetTransform)
    {
        this.targetTransform = targetTransform;
        UpdatePosition();
    }


    // update the text in the TextMesh
    public void UpdateTextMesh(int distance)
    {
        textMesh.text = $"{distance}m";
    }

    // calculate the actual distant from a list of vector3
    public void CalculateDistance(Vector3[] points)
    {
        float distance = 0.0f;
        for (int i = 1; i < points.Length; i++)
        {
            distance += Vector3.Distance(points[i - 1], points[i]);
        }
        UpdateTextMesh((int)distance);
    }


    // repeating functions to keep the text facing towards player
    public void OnEnable()
    {
        InvokeRepeating("ForceFacingPlayerAndUpdateSize", 0.0f, 5.0f);
    }

    public void OnDisable()
    {
        CancelInvoke();
    }

    private void ForceFacingPlayerAndUpdateSize()
    {
        transform.LookAt(playerTransform);
        float distance = Vector3.Distance(transform.position, playerTransform.position);
        transform.localScale = (sizeScaler * distance) * new Vector3(-1f, 1f, 1f);
    }


    // update the current object location
    private void UpdatePosition()
    {
        if (targetTransform != null)
        {
            transform.position = targetTransform.position + height * Vector3.up;
        }
    }

}
