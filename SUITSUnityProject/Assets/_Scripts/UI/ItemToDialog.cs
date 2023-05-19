using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemToDialog : MonoBehaviour
{
    private PopupDialogHandler _popupDialogHandler;

    private void Awake()
    {
        Transform root = transform.parent.parent.parent.parent.parent;
        _popupDialogHandler = root.GetComponent<PopupDialogHandler>();
    }

    public void ShowDialog() {
        WaypointStorage waystore = gameObject.GetComponent<WaypointStorage>();
        if (waystore != null)
        {
            _popupDialogHandler.waypoint = waystore.waypoint;
        }
        _popupDialogHandler.ShowDialog();
    }

    public void HideDialog() => _popupDialogHandler.HideDialog();
}
