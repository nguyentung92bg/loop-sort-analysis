// Namespace: 
public sealed class Areas : Data // TypeDefIndex: 5228
{
	// Fields
	public List<IconInfo> Backgrounds; // 0x18
	public List<GameObject> Scenes; // 0x20
	public List<AssetReferenceT<HomeSceneAsset>> HomeScenes; // 0x28
	public List<IconInfo> SceneBackgrounds; // 0x30

	// Methods

	// RVA: 0x256FB40 Offset: 0x256BB40 VA: 0x256FB40
	public bool TryGetBackground(AreaType type, out IconInfo background) { }

	// RVA: 0x256FB4C Offset: 0x256BB4C VA: 0x256FB4C
	public bool TryGetBackground(AreaType type, bool scene, out IconInfo background) { }

	// RVA: 0x256FCCC Offset: 0x256BCCC VA: 0x256FCCC
	public void .ctor() { }
}

