// Namespace: 
public sealed class ImageThemeRegistry : MonoBehaviour // TypeDefIndex: 5572
{
	// Fields
	[SerializeField]
	private ThemeType DefaultTheme; // 0x20
	[SerializeField]
	private bool ShouldDisplayDefault; // 0x24
	[SerializeField]
	private GenericDictionary<ThemeType, ImageThemeRegistry.Data> Registries; // 0x28
	private Image _image; // 0x30
	private static SceneModule _sceneModule; // 0x0

	// Methods

	// RVA: 0x249BE1C Offset: 0x2497E1C VA: 0x249BE1C
	private void OnEnable() { }

	// RVA: 0x249BE20 Offset: 0x2497E20 VA: 0x249BE20
	private void SetTheme() { }

	// RVA: 0x249BF94 Offset: 0x2497F94 VA: 0x249BF94
	public void ApplyTheme(ThemeType themeType) { }

	// RVA: 0x249C10C Offset: 0x249810C VA: 0x249C10C
	public void .ctor() { }
}

