using System;
using System.Collections.Generic;
using System.Threading.Tasks;
using UnityEngine;

public class BreadcrumbManager : Singleton<BreadcrumbManager>
{
    [SerializeField] private Transform _userTransform;
    [SerializeField] private float _updateFrequency;
    [SerializeField] private float _distanceBetweenBreadcrumbs;
    [SerializeField] private PathVisualizer _pathVisualizer;

    private Vector3 _homeLocation;

    public IReadOnlyList<Vector3> Breadcrumbs {
        get { return _breadcrumbs; }
    }
    private List<Vector3> _breadcrumbs;
    private const int CAPACITY = 1024;
    private int _count = 0;

    private const float HUMANOID_HEIGHT = 1.4f;
    private const float PATH_Y_OFFSET = 0.05f;

    protected override void Awake() 
    {
        base.Awake();
        _breadcrumbs = new List<Vector3>(new Vector3[CAPACITY]);
    }

    private void Start() => StateManager.OnAfterStateChanged += StateChanged;

    private void OnDestroy() => StateManager.OnAfterStateChanged -= StateChanged;

    private void StateChanged(State newState)
    {
        switch (newState)
        {
            case State.Indoor:
                CancelInvoke();
                _pathVisualizer.enabled = false;
                _homeLocation = _userTransform.position;
                if (Physics.Raycast(_homeLocation, -Vector3.up, out RaycastHit hit))
                    _homeLocation = hit.point + PATH_Y_OFFSET * Vector3.up;
                else
                    _homeLocation += -HUMANOID_HEIGHT * Vector3.up;
                WaypointManager.Instance.UpdateHomeLocation(_homeLocation);
                WaypointManager.Instance.UpdateUserLocation(_homeLocation);
                _breadcrumbs[0] = _homeLocation;
                _count = 1;
                break;
            case State.Explore:
                _pathVisualizer.enabled = false;
                InvokeRepeating(nameof(UpdateBreadcrumbs), 0, _updateFrequency);
                break;
            case State.Return:
                _pathVisualizer.enabled = true;
                break;
            default:
                throw new ArgumentOutOfRangeException(nameof(newState), newState, null);
        }
    }

    private async void UpdateBreadcrumbs()
    {
        Vector3 currentPos = _userTransform.position;
        if (Physics.Raycast(currentPos, -Vector3.up, out RaycastHit hit))
            currentPos = hit.point + PATH_Y_OFFSET * Vector3.up;
        else
            currentPos += -HUMANOID_HEIGHT * Vector3.up;
        WaypointManager.Instance.UpdateUserLocation(currentPos);

        await Task.Run(() => RemoveLoops(currentPos));
        if (_count == 0)  // we get back to homebase
        {
            /* 
             * StateManager.Instance.ChangeState(State.Indoor); 
             */
            return;
        }

        float dist = Vector3.Distance(currentPos, _breadcrumbs[_count - 1]);
        if (dist > _distanceBetweenBreadcrumbs)
        {
            if (_count >= _breadcrumbs.Count)
            {
                _breadcrumbs.Add(currentPos);
                _count++;
            }
            else
            {
                _breadcrumbs[_count++] = currentPos;
            }
            _pathVisualizer.UpdatePath(new Path(_breadcrumbs.ToArray()[.._count]));
            MinimapManager.Instance.UpdateTrail(new Path(_breadcrumbs.ToArray()[.._count]));
        }
    }

    private void RemoveLoops(Vector3 _userPosition)
    {
        int indexer = _count - 2;
        for (; indexer >= 0; indexer--)
        {
            Vector3 currentPos = _userPosition;
            float dist = Vector3.Distance(currentPos, _breadcrumbs[indexer]);
            if (dist <= _distanceBetweenBreadcrumbs)
                break;
        }
        if (indexer >= 0)
            _count = indexer;   
    }
}
