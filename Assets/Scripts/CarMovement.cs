using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CarMovement : MonoBehaviour {

    public float CarSpeed = 1f;
    public float RotateSpeed = 45f;
    public bool moving = false;
    public Camera Cam1;
    public Camera Cam2;
    public Camera Cam3;
    public Camera OverallCam;

    // Update is called once per frame
    void Update()
    {

        if(Input.GetKeyDown(KeyCode.F1))
        {
           Cam1.gameObject.SetActive(true);
           Cam2.gameObject.SetActive(false);
           Cam3.gameObject.SetActive(false);
           OverallCam.gameObject.SetActive(false);
        }

        if (Input.GetKeyDown(KeyCode.F2))
        {
            Cam1.gameObject.SetActive(false);
            Cam2.gameObject.SetActive(true);
            Cam3.gameObject.SetActive(false);
            OverallCam.gameObject.SetActive(false);
        }

        if (Input.GetKeyDown(KeyCode.F3))
        {
            Cam1.gameObject.SetActive(false);
            Cam2.gameObject.SetActive(false);
            Cam3.gameObject.SetActive(true);
            OverallCam.gameObject.SetActive(false);
        }

        if (Input.GetKeyDown(KeyCode.F4))
        {
            Cam1.gameObject.SetActive(false);
            Cam2.gameObject.SetActive(false);
            Cam3.gameObject.SetActive(true);
            OverallCam.gameObject.SetActive(true);
        }

        OverallCam.transform.LookAt(transform);

        if (Input.GetKey(KeyCode.W))
        {
            transform.Translate(0, 0, CarSpeed * Time.deltaTime);
            moving = true;
        }

        if (Input.GetKey(KeyCode.S))
        {
            transform.Translate(0, 0, -CarSpeed * Time.deltaTime);
            moving = true;
        }

        if (Input.GetKeyUp(KeyCode.W) || Input.GetKeyUp(KeyCode.S))
        {
            moving= false;
        }

        if (Input.GetKey(KeyCode.A) && moving == true)
        {
            transform.Rotate(0, -RotateSpeed * Time.deltaTime, 0);
        }

        if (Input.GetKey(KeyCode.D) && moving == true)
        {
            transform.Rotate(0, RotateSpeed * Time.deltaTime, 0);
        }

    }
}
