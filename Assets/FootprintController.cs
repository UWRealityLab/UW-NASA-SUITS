using System.Collections;
using System.Collections.Generic;
using UnityEngine;

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
        lineRenderer.SetColors(red, red);
        lineRenderer.SetWidth(0.2F, 0.2F);
        lineRenderer.positionCount = 1;
        InvokeRepeating("WaitForNextPosUpdate", 0.0f, 1.0f);
    }

    public void OnDisable()
    {
        CancelInvoke();
    }

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
        }
    }

    private void TryGenerateFootprint()
    {
        Instantiate(footprintPrefab, playerTransform.position, Quaternion.identity, transform);
    }
}
