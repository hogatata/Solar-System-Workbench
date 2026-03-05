using System;

public class TimeModel
{
    public DateTime CurrentTime { get; private set; }

    public float TimeScale { get; private set; } = 1f;

    public bool IsPlaying { get; set; } = true;

    public event Action<DateTime> OnTimeChanged;

    public float timeScale = 1f;

    public void SetTime(DateTime t)
    {
        CurrentTime = t;
        OnTimeChanged?.Invoke(CurrentTime);
    }

    public void SetScale(float scale)
    {
        TimeScale = scale;
    }

    public void Play()
    {
        IsPlaying = true;
    }

    public void Pause()
    {
        IsPlaying = false;
    }
}