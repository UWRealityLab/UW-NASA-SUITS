using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : Singleton<SoundManager>
{
    [SerializeField] private AudioSource _source;
    [SerializeField] private AudioClip _notificationSound;
    [SerializeField] private AudioClip _cautionSound;
    [SerializeField] private AudioClip _warningSound;

    public void PlayNotificationSound()
    {
        _source.PlayOneShot(_notificationSound);
    }

    public void PlayCautionSound()
    {
        _source.PlayOneShot(_cautionSound);
    }

    public void PlayWarningSound()
    {
        _source.PlayOneShot(_warningSound);
    }
}
