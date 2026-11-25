// Namespace: 
public sealed class HomeSceneShimmer : HomeSceneFxRunner // TypeDefIndex: 5342
{
	// Fields
	private static readonly Vector2[] Mask; // 0x0
	private static Texture2D _glintA; // 0x8
	private static Texture2D _glintB; // 0x10
	private readonly HomeSceneQuad _a; // 0x10
	private readonly HomeSceneQuad _b; // 0x18
	private readonly Vector2 _tilesA; // 0x20
	private readonly Vector2 _tilesB; // 0x28

	// Methods

	// RVA: 0x242EA2C Offset: 0x242AA2C VA: 0x242EA2C
	public void .ctor(HomeSceneFx fx, RectTransform parent) { }

	// RVA: 0x242EBFC Offset: 0x242ABFC VA: 0x242EBFC
	private static Texture2D Glint(int w, int h, float rx, float ry, float alpha) { }

	// RVA: 0x242ECE4 Offset: 0x242ACE4 VA: 0x242ECE4
	private static HomeSceneQuad Band(RectTransform parent, Rect rect, Texture texture) { }

	// RVA: 0x242EE4C Offset: 0x242AE4C VA: 0x242EE4C Slot: 4
	public override void Tick(float t) { }

	// RVA: 0x242EFE8 Offset: 0x242AFE8 VA: 0x242EFE8
	private static void .cctor() { }
}

