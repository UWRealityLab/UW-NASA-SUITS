using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class roverTest : MonoBehaviour
{

    private Transform rover;
    [SerializeField] public Vector3 targetCoordinate;
    [SerializeField] public float speed = 1;

    // Start is called before the first frame update
    void Start()
    {
        rover = gameObject.transform;
        targetCoordinate = new Vector3(0, 0, 0);
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 direction = targetCoordinate = rover.position;
        if (direction.magnitude > 0.2)
        {
            rover.Translate(direction.normalized * speed * Time.deltaTime);
        }
    }

    void setCoordFromGPS(Vector3 gpsCoord)
    {
        targetCoordinate = GPSManager.Instance.GPStoWorld(gpsCoord);
    }

}
