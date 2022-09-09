using System.Collections.Generic;
using UnityEngine;

/// <summary>
//////////////////////////////// STILL IN DEVELOPMENT/////////////////////////////////////////////////////
/// </summary>
public class FootprintController : MonoBehaviour
{
    public Vector3? nextPos;

    [SerializeField] private GameObject footprintPrefab;
    [SerializeField] private Transform playerTransform;

    private List<Vector3> playerPos;
    private LineRenderer lineRenderer;

    public void OnEnable()
    {
        nextPos = null;
        playerPos = new List<Vector3>();
        lineRenderer = gameObject.GetComponent<LineRenderer>();
        Color red = Color.red;
        lineRenderer.startColor = red;
        lineRenderer.endColor = red;
        lineRenderer.startWidth = 0.2f;
        lineRenderer.endWidth = 0.2f;
        lineRenderer.positionCount = 1;
        InvokeRepeating("WaitForNextPosUpdate", 0.0f, 1.0f);
    }

    public void OnDisable()
    {
        CancelInvoke();
    }

    /// <summary>
    /// Generate a new point unless the player is near a known point already
    /// </summary>
    private void WaitForNextPosUpdate()
    {
        if (nextPos != null)
        {
            playerPos.Add((Vector3)nextPos);
            //Change how mant points based on the mount of positions is the List
            lineRenderer.positionCount++;
            lineRenderer.SetPosition(lineRenderer.positionCount - 1, (Vector3)nextPos);
        }
        else
        {
            TryGenerateFootprint();

            // DEBUG USE START
            lineRenderer.positionCount++;
            lineRenderer.SetPosition(lineRenderer.positionCount - 1, playerTransform.position);
            // DEBUG USE END
        }
    }

    private void TryGenerateFootprint()
    {
        Instantiate(footprintPrefab, playerTransform.position, Quaternion.identity, transform);
    }
}
