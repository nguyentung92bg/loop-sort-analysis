// Namespace: 
[AddComponentMenu("UI/Mirrored Image")]
public class MirroredImage : Image // TypeDefIndex: 5292
{
	// Fields
	[SerializeField]
	private bool m_MirrorHorizontally; // 0x110
	[SerializeField]
	private bool m_MirrorVertically; // 0x111
	[SerializeField]
	private bool m_UseSlicing; // 0x112

	// Properties
	public bool MirrorHorizontally { get; set; }
	public bool MirrorVertically { get; set; }
	public bool UseSlicing { get; set; }
	private Sprite ActiveSprite { get; }

	// Methods

	// RVA: 0x241BCE4 Offset: 0x2417CE4 VA: 0x241BCE4
	public bool get_MirrorHorizontally() { }

	// RVA: 0x241BCEC Offset: 0x2417CEC VA: 0x241BCEC
	public void set_MirrorHorizontally(bool value) { }

	// RVA: 0x241BD14 Offset: 0x2417D14 VA: 0x241BD14
	public bool get_MirrorVertically() { }

	// RVA: 0x241BD1C Offset: 0x2417D1C VA: 0x241BD1C
	public void set_MirrorVertically(bool value) { }

	// RVA: 0x241BD44 Offset: 0x2417D44 VA: 0x241BD44
	public bool get_UseSlicing() { }

	// RVA: 0x241BD4C Offset: 0x2417D4C VA: 0x241BD4C
	public void set_UseSlicing(bool value) { }

	// RVA: 0x241BD74 Offset: 0x2417D74 VA: 0x241BD74
	private Sprite get_ActiveSprite() { }

	// RVA: 0x241BE04 Offset: 0x2417E04 VA: 0x241BE04
	public void SetMirrorMode(bool horizontal, bool vertical) { }

	// RVA: 0x241BE40 Offset: 0x2417E40 VA: 0x241BE40 Slot: 44
	protected override void OnPopulateMesh(VertexHelper vh) { }

	// RVA: 0x241C754 Offset: 0x2418754 VA: 0x241C754
	private void PopulateSimple(VertexHelper vh, Sprite sp, Rect rect, Color32 color32) { }

	// RVA: 0x241C000 Offset: 0x2418000 VA: 0x241C000
	private void PopulateSliced(VertexHelper vh, Sprite sp, Rect rect, Color32 color32) { }

	// RVA: 0x241C67C Offset: 0x241867C VA: 0x241C67C
	private Rect FitToAspect(Rect rect, Sprite sp) { }

	// RVA: 0x241CFD4 Offset: 0x2418FD4 VA: 0x241CFD4
	private static Vector4 ClampBorder(Vector4 border, float width, float height) { }

	// RVA: 0x241CC94 Offset: 0x2418C94 VA: 0x241CC94
	private static void GenerateGrid(VertexHelper vh, ReadOnlySpan<float> xPos, ReadOnlySpan<float> yPos, ReadOnlySpan<float> uvX, ReadOnlySpan<float> uvY, Color32 color32, bool skipCenter = False) { }

	// RVA: 0x241D018 Offset: 0x2419018 VA: 0x241D018 Slot: 45
	public override void SetNativeSize() { }

	// RVA: 0x241D160 Offset: 0x2419160 VA: 0x241D160
	public void .ctor() { }
}

