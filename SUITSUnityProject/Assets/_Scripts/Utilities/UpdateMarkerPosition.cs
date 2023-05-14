using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UpdateMarkerPosition : MonoBehaviour
{
    private void start()
    {
        HUDManager.Instance.UpdateMarkerPosition(gameObject.transform.position);
    }
}
