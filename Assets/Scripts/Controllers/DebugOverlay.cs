using UnityEngine;
using TMPro;
using System.Collections.Generic;

public class DebugOverlay : MonoBehaviour
{
    public TextMeshProUGUI logText;
    public TextMeshProUGUI statsText;
    public TimeModel timeModel;

    private Queue<string> lines = new Queue<string>();
    private int maxLines = 8;
    private float deltaTime = 0.0f;

    void OnEnable() { Application.logMessageReceived += HandleLog; }
    void OnDisable() { Application.logMessageReceived -= HandleLog; }

    void HandleLog(string logString, string stackTrace, LogType type)
    {
        string color = type == LogType.Warning ? "yellow" : (type == LogType.Error ? "red" : "white");
        lines.Enqueue($"<color={color}>{logString}</color>");
        if (lines.Count > maxLines) lines.Dequeue();
        logText.text = string.Join("\n", lines);
    }

    void Update()
    {
        deltaTime += (Time.unscaledDeltaTime - deltaTime) * 0.1f;
        float fps = 1.0f / deltaTime;

        if (timeModel != null)
        {
            statsText.text = $"[PERF] FPS: {Mathf.Ceil(fps)} | Frame: {Time.unscaledDeltaTime*1000:F1}ms\n" +
                             $"[TIME] {timeModel.CurrentTime:yyyy-MM-dd} (x{timeModel.timeScale})";
        }
    }
}