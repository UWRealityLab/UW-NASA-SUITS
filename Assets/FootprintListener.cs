using UnityEngine;

/// <summary>
//////////////////////////////// STILL IN DEVELOPMENT/////////////////////////////////////////////////////
/// </summary>
public class FootprintListener : MonoBehaviour
{
    private FootprintController parent;

    public void Start()
    {
        parent = gameObject.GetComponentInParent<FootprintController>();
    }

    private void OnTriggerEnter(Collider other)
    {
        Debug.Log(other.gameObject.name);
        if (other.gameObject.tag == "MainCamera")
        {
            Debug.Log("Trigger Entered");
            parent.nextPos = transform.position;
        }
    }

    private void OnTriggerStay(Collider other)
    {
        Debug.Log(other.gameObject.name);
        if (other.gameObject.tag == "MainCamera")
        {
            Debug.Log("Trigger Entered");
            parent.nextPos = transform.position;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        Debug.Log(other.gameObject.name);
        if (other.gameObject.tag == "MainCamera")
        {
            Debug.Log("Trigger Exited");
            parent.nextPos = null;
        }
    }
}
