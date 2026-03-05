using UnityEngine;

public class PlanetView : MonoBehaviour
{
    public PlanetData.Planet planet;
    private LineRenderer orbitLine;

    void Awake()
    {
        GameObject orbitObj = new GameObject($"{planet}_Orbit");
        orbitObj.transform.SetParent(transform.parent, false);
        orbitObj.transform.localPosition = Vector3.zero;

        orbitLine = orbitObj.AddComponent<LineRenderer>();
        orbitLine.useWorldSpace = false; 
        orbitLine.loop = true;
        orbitLine.startWidth = 0.002f;
        orbitLine.endWidth = 0.002f;

        orbitLine.material = new Material(Shader.Find("Sprites/Default")); 
        
        orbitLine.startColor = new Color(1f, 1f, 1f, 0.3f); 
        orbitLine.endColor = new Color(1f, 1f, 1f, 0.3f);

    }

    public void SetPosition(Vector3 pos)
    {
        transform.localPosition = pos;
    }
    public void SetOrbitPoints(Vector3[] points, bool show)
    {
        orbitLine.positionCount = points.Length;
        orbitLine.SetPositions(points);
        orbitLine.enabled = show;
    }
}