using System;
using System.Collections.Generic;
using UnityEngine;

public class BreadcrumbManager : Singleton<BreadcrumbManager>
{
    [SerializeField] private Transform _userTransform;
    [SerializeField] private float _updateFrequency;
    [SerializeField] private float _distanceBetweenBreadcrumbs;

    private Vector3 _homeLocation;
    private List<Vector3> _breadcrumbs;
    
    private void Start()
    {
        StateManager.OnAfterStateChanged += StateChanged;
        _breadcrumbs = new List<Vector3>();
    }

    private void OnDestroy()
    {
        StateManager.OnAfterStateChanged -= StateChanged;
    }

    private void StateChanged(State newState)
    {
        switch (newState)
        {
            case State.Indoor:
                CancelInvoke();
                _breadcrumbs.Clear();
                break;
            case State.Outdoor:
                _homeLocation = _userTransform.position;
                _breadcrumbs.Add(_homeLocation);
                InvokeRepeating("UpdateBreadcrumbs", 0, _updateFrequency);
                break;
            default:
                throw new ArgumentOutOfRangeException(nameof(newState), newState, null);
        }
    }

    private void UpdateBreadcrumbs()
    {
        Vector3 currentPos = _userTransform.position;
        float dist = Vector3.Distance(currentPos, _breadcrumbs[^1]);
        if (dist > _distanceBetweenBreadcrumbs)
        {
            if (_breadcrumbs.Count > 2)  //checking if you looped back on yourself
            {
                int indexer = _breadcrumbs.Count - 2;
                while (indexer >= 0 && dist > _distanceBetweenBreadcrumbs)
                {
                    dist = Vector3.Distance(currentPos, _breadcrumbs[indexer]);
                    indexer -= 1;
                }
                if (indexer >= 0)
                { 
                    // if we found an index you're too close to, just
                    //take all the elements up to that index
                    _breadcrumbs.RemoveAll(x => _breadcrumbs.IndexOf(x) > indexer);
                }
            }
            _breadcrumbs.Add(currentPos);
        }

        foreach(Vector3 pos in _breadcrumbs)
        {
            Debug.Log(pos);
        }
    }
}
