// Namespace: 
[RequireComponent(typeof(CanvasRenderer))]
public sealed class HomeSceneQuad : MaskableGraphic // TypeDefIndex: 5335
{
	// Fields
	public float TopAlpha; // 0xD8
	public float BottomAlpha; // 0xDC
	public float TopWidth; // 0xE0
	public float SkewX; // 0xE4
	public Vector2[] AlphaStops; // 0xE8
	private Texture _texture; // 0xF0
	private Rect _uv; // 0xF8

	// Properties
	public override Texture mainTexture { get; }

	// Methods

	// RVA: 0x2429B38 Offset: 0x2425B38 VA: 0x2429B38 Slot: 35
	public override Texture get_mainTexture() { }

	// RVA: 0x2429BD4 Offset: 0x2425BD4 VA: 0x2429BD4
	public void SetTexture(Texture texture, Rect uv) { }

	// RVA: 0x2429CAC Offset: 0x2425CAC VA: 0x2429CAC Slot: 44
	protected override void OnPopulateMesh(VertexHelper vh) { }

	// RVA: 0x242A0D4 Offset: 0x24260D4 VA: 0x242A0D4
	public void .ctor() { }
}

