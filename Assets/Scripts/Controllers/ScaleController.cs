using UnityEngine;

public class ScaleController : MonoBehaviour
{
    public Transform rootToScale;
    public float minScale = 0.5f;
    public float maxScale = 3f;

    public void SetScale(float delta)
    {
        Debug.Log($"[INPUT] Scale requested with delta: {delta}");
        
        float currentScale = rootToScale.localScale.x;
        float newScale = currentScale + delta;

        if (newScale < minScale || newScale > maxScale)
        {
            Debug.Log("[WARN] Scale clamped");
            newScale = Mathf.Clamp(newScale, minScale, maxScale);
        }

        rootToScale.localScale = Vector3.one * newScale;
        Debug.Log($"[XR] Scale applied. New scale: {newScale}");
    }
}