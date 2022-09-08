using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FootprintListener : MonoBehaviour
{
    private FootprintController parent;

    public void Start()
    {
        parent = gameObject.GetComponentInParent<FootprintController>();
    }

    private void OnTriggerEnter(Collider other)
    {
        Debug.Log("Trigger Entered");
        parent.nextPos = transform.position;
    }

    private void OnTriggerStay(Collider other)
    {
        //parent.nextPos = transform.position;
    }

    private void OnTriggerExit(Collider other)
    {
        Debug.Log("Trigger Exited");
        parent.nextPos = null;
    }
}
