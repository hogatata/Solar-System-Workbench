using UnityEngine;

public class PlanetView : MonoBehaviour
{
    public PlanetData.Planet planet;
    private LineRenderer orbitLine;

    void Awake()
    {
        // On crée un objet statique pour la ligne, attaché au même parent (SolarSystem)
        GameObject orbitObj = new GameObject($"{planet}_Orbit");
        orbitObj.transform.SetParent(transform.parent, false);
        orbitObj.transform.localPosition = Vector3.zero;

        // On configure le LineRenderer
        orbitLine = orbitObj.AddComponent<LineRenderer>();
        orbitLine.useWorldSpace = false; 
        orbitLine.loop = true; // Ferme le cercle de l'orbite
        orbitLine.startWidth = 0.002f; // Ligne très fine
        orbitLine.endWidth = 0.002f;

        orbitLine.material = new Material(Shader.Find("Sprites/Default")); 
        
        // 2. On change la couleur (ici, un blanc légèrement transparent)
        orbitLine.startColor = new Color(1f, 1f, 1f, 0.3f); 
        orbitLine.endColor = new Color(1f, 1f, 1f, 0.3f);
        // -------------------------------
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