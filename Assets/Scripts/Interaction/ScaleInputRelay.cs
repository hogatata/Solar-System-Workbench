using UnityEngine;
using UnityEngine.InputSystem;

public class ScaleInputRelay : MonoBehaviour
{
    public ScaleController target;
    public InputActionReference thumbstickY;
    void Update()
    {
        float value = thumbstickY.action.ReadValue<Vector2>().y;
        if (Mathf.Abs(value) > 0.1f) 
        {
            target.SetScale(value); 
        }
    }
}