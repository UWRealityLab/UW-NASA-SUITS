using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PopupDialogHandler : MonoBehaviour
{
    [SerializeField] private GameObject _popupDialog;
    [SerializeField] private bool _autoDisappear;
    [SerializeField] private float _disappearTimer;
    [SerializeField] private bool _autoReturnToHomepage;
    [SerializeField] private GameObject _homePage;
    [SerializeField] private GameObject _currentPage;
    public Waypoint waypoint;

    public void ShowDialog()
    {
        if (Object.Equals(waypoint, default(Waypoint)))
        {
            _popupDialog.GetComponent<WaypointStorage>().waypoint = waypoint;
        }
        _popupDialog.SetActive(true);
        if (_autoDisappear)
            Invoke(nameof(HideDialog), _disappearTimer);
    }

    public void HideDialog()
    {
        _popupDialog.SetActive(false);
        if (_autoReturnToHomepage)
        {
            _currentPage.SetActive(false);
            _homePage.SetActive(true);
        }
    }
}
