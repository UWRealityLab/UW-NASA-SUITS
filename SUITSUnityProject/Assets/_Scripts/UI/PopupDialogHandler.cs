using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PopupDialogHandler : MonoBehaviour
{
    [SerializeField] private GameObject _popupDialog;
    [SerializeField] private bool _autoDisappear;
    [SerializeField] private float _disappearTimer;

    public void ShowDialog()
    {
        _popupDialog.SetActive(true);
        if (_autoDisappear)
            Invoke(nameof(RemovePopupDialog), _disappearTimer);
    }

    private void RemovePopupDialog() => _popupDialog.SetActive(false);
}
