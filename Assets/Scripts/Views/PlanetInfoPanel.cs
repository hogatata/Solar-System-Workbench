using UnityEngine;
using TMPro;

public class PlanetInfoPanel : MonoBehaviour
{
    public TextMeshProUGUI nameText;
    public float heightOffset = 0.15f;

    private Transform targetPlanet;

    public void ShowName(string planetName, Transform planetTransform)
    {
        gameObject.SetActive(true);
        nameText.text = planetName.ToUpper();
        targetPlanet = planetTransform;
    }

    public void Hide()
    {
        gameObject.SetActive(false);
        targetPlanet = null;
    }

    void Update()
    {
        if (targetPlanet != null)
        {
            transform.position = targetPlanet.position + Vector3.up * heightOffset;
        }

        if (Camera.main != null)
        {
            transform.LookAt(transform.position + Camera.main.transform.rotation * Vector3.forward,
                             Camera.main.transform.rotation * Vector3.up);
        }
    }
}