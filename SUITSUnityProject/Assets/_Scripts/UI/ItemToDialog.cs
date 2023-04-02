using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ItemToDialog : MonoBehaviour
{
    public void ShowDialog()
    {
        Transform root = transform.parent.parent.parent.parent.parent;
        PopupDialogHandler popupDialogHandler = root.GetComponent<PopupDialogHandler>();
        popupDialogHandler.ShowDialog();
    }
}
