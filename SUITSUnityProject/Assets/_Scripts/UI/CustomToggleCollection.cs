using Microsoft.MixedReality.Toolkit.UX;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CustomToggleCollection : ToggleCollection
{
    public void SetSelection(int index)
    {
        if (CurrentIndex != index)
        {
            SetSelection(index, true);
        }
    }
}
