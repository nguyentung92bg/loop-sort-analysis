// Namespace: 
[RequireComponent(typeof(CanvasRenderer))]
public sealed class HomeSceneDisc : MaskableGraphic // TypeDefIndex: 5313
{
	// Fields
	private const int Segments = 28;
	private static readonly float[] BandX; // 0x0
	private static readonly float[] BandXAlpha; // 0x8
	private static readonly float[] BandY; // 0x10
	private static readonly float[] BandYAlpha; // 0x18
	public float RingWidth; // 0xD8
	public bool Band; // 0xDC
	private Texture _texture; // 0xE0
	private Rect _uvRect; // 0xE8

	// Properties
	public override Texture mainTexture { get; }

	// Methods

	// RVA: 0x241F7BC Offset: 0x241B7BC VA: 0x241F7BC Slot: 35
	public override Texture get_mainTexture() { }

	// RVA: 0x241F858 Offset: 0x241B858 VA: 0x241F858
	public void SetTexture(Texture texture, Rect uvRect) { }

	// RVA: 0x241F8BC Offset: 0x241B8BC VA: 0x241F8BC Slot: 44
	protected override void OnPopulateMesh(VertexHelper vh) { }

	// RVA: 0x24200C8 Offset: 0x241C0C8 VA: 0x24200C8
	public void .ctor() { }

	// RVA: 0x24200DC Offset: 0x241C0DC VA: 0x24200DC
	private static void .cctor() { }
}

