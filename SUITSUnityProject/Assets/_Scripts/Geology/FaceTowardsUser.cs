using Microsoft.MixedReality.Toolkit.SpatialManipulation;
using Microsoft.MixedReality.Toolkit.Utilities;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FaceTowardsUser : MonoBehaviour
{
    public bool faceAway = true;
    public bool alwaysFaceUser = true;
    

    void Start()
    {
        FaceUser();
    }

    private void Update()
    {
        if (alwaysFaceUser)
        {
            FaceUser();
        }
    }

    private void FaceUser()
    {
        Vector3 directionToTarget = transform.position - CameraCache.Main.transform.position;
        transform.rotation = Quaternion.LookRotation(faceAway ? directionToTarget : -directionToTarget);
    }
}
