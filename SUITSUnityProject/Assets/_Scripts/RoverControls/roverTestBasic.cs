using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class roverTestBasic : MonoBehaviour
{

    public string coordInput;
    GameObject rover;
    public GameObject FakeRover;

    public Vector3 targetPosition;
    public float speed = 1;

    // Start is called before the first frame update
    void Start()
    {
        Vector3 targetPosition = new Vector3(1, 1, 1);
        // Instantiate at position (0, 0, 0) and zero rotation.
        rover = Instantiate(FakeRover, targetPosition, Quaternion.identity);
        targetPosition = new Vector3(0, 1, 1);
        rover.Transform.translate = targetPosition;

    }

    // Update is called once per frame
    void Update()
    {
        rover.transform.translate = targetPosition;
        Vector3 direction = targetPosition = rover.position;
        if (direction.magnitude > 0.2)
        {
            rover.Translate(direction.normalized * speed * Time.deltaTime);
        }
    }



}
