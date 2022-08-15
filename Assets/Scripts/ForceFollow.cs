using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ForceFollow : MonoBehaviour
{
    [SerializeField] private Transform followee;
    [SerializeField] private int yOffset = 0;
    [SerializeField] private bool isRotating = false;
    void Start()
    {
        
    }

    // Update is called once per frame
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
