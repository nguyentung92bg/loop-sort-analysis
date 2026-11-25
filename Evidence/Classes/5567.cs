// Namespace: 
public sealed class GameObjectThemeRegistry : MonoBehaviour // TypeDefIndex: 5567
{
	// Fields
	[SerializeField]
	private ThemeType DefaultTheme; // 0x20
	[SerializeField]
	private bool ShouldDisplayDefault; // 0x24
	[SerializeField]
	private GenericDictionary<ThemeType, GameObject> Registries; // 0x28
	private static SceneModule _sceneModule; // 0x0

	// Methods

	// RVA: 0x249AF70 Offset: 0x2496F70 VA: 0x249AF70
	private void OnEnable() { }

	// RVA: 0x249AF74 Offset: 0x2496F74 VA: 0x249AF74
	private void SetTheme() { }

	// RVA: 0x249B0E8 Offset: 0x24970E8 VA: 0x249B0E8
	public void ApplyTheme(ThemeType themeType) { }

	// RVA: 0x249B45C Offset: 0x249745C VA: 0x249B45C
	public void .ctor() { }
}

