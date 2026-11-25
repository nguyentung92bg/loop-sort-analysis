// Namespace: 
[RequireComponent(typeof(CanvasRenderer))]
[AddComponentMenu("UI/Sliced Filled Image", 11)]
public class SlicedFilledImage : MaskableGraphic, ISerializationCallbackReceiver, ILayoutElement, ICanvasRaycastFilter // TypeDefIndex: 5586
{
	// Fields
	private static readonly Vector3[] s_Vertices; // 0x0
	private static readonly Vector2[] s_UVs; // 0x8
	private static readonly Vector2[] s_SlicedVertices; // 0x10
	private static readonly Vector2[] s_SlicedUVs; // 0x18
	[SerializeField]
	private Sprite m_Sprite; // 0xD8
	[SerializeField]
	private SlicedFilledImage.FillDirection m_FillDirection; // 0xE0
	[Range(0, 1)]
	[SerializeField]
	private float m_FillAmount; // 0xE4
	[SerializeField]
	private bool m_FillCenter; // 0xE8
	[SerializeField]
	private float m_PixelsPerUnitMultiplier; // 0xEC
	private Sprite m_OverrideSprite; // 0xF0
	[CompilerGenerated]
	private float <alphaHitTestMinimumThreshold>k__BackingField; // 0xF8
	private bool m_Tracked; // 0xFC
	private static List<SlicedFilledImage> m_TrackedTexturelessImages; // 0x20
	private static bool s_Initialized; // 0x28

	// Properties
	public Sprite sprite { get; set; }
	public SlicedFilledImage.FillDirection fillDirection { get; set; }
	public float fillAmount { get; set; }
	public bool fillCenter { get; set; }
	public float pixelsPerUnitMultiplier { get; set; }
	public float pixelsPerUnit { get; }
	public Sprite overrideSprite { get; set; }
	private Sprite activeSprite { get; }
	public override Texture mainTexture { get; }
	public bool hasBorder { get; }
	public override Material material { get; set; }
	public float alphaHitTestMinimumThreshold { get; set; }
	private int UnityEngine.UI.ILayoutElement.layoutPriority { get; }
	private float UnityEngine.UI.ILayoutElement.minWidth { get; }
	private float UnityEngine.UI.ILayoutElement.minHeight { get; }
	private float UnityEngine.UI.ILayoutElement.flexibleWidth { get; }
	private float UnityEngine.UI.ILayoutElement.flexibleHeight { get; }
	private float UnityEngine.UI.ILayoutElement.preferredWidth { get; }
	private float UnityEngine.UI.ILayoutElement.preferredHeight { get; }

	// Methods

	// RVA: 0x249D170 Offset: 0x2499170 VA: 0x249D170
	public Sprite get_sprite() { }

	// RVA: 0x249D178 Offset: 0x2499178 VA: 0x249D178
	public void set_sprite(Sprite value) { }

	// RVA: 0x249D3A0 Offset: 0x24993A0 VA: 0x249D3A0
	public SlicedFilledImage.FillDirection get_fillDirection() { }

	// RVA: 0x249D3A8 Offset: 0x24993A8 VA: 0x249D3A8
	public void set_fillDirection(SlicedFilledImage.FillDirection value) { }

	// RVA: 0x249D420 Offset: 0x2499420 VA: 0x249D420
	public float get_fillAmount() { }

	// RVA: 0x249D428 Offset: 0x2499428 VA: 0x249D428
	public void set_fillAmount(float value) { }

	// RVA: 0x249D4B8 Offset: 0x24994B8 VA: 0x249D4B8
	public bool get_fillCenter() { }

	// RVA: 0x249D4C0 Offset: 0x24994C0 VA: 0x249D4C0
	public void set_fillCenter(bool value) { }

	// RVA: 0x249D53C Offset: 0x249953C VA: 0x249D53C
	public float get_pixelsPerUnitMultiplier() { }

	// RVA: 0x249D544 Offset: 0x2499544 VA: 0x249D544
	public void set_pixelsPerUnitMultiplier(float value) { }

	// RVA: 0x249D55C Offset: 0x249955C VA: 0x249D55C
	public float get_pixelsPerUnit() { }

	// RVA: 0x249D6D8 Offset: 0x24996D8 VA: 0x249D6D8
	public Sprite get_overrideSprite() { }

	// RVA: 0x249D6DC Offset: 0x24996DC VA: 0x249D6DC
	public void set_overrideSprite(Sprite value) { }

	// RVA: 0x249D660 Offset: 0x2499660 VA: 0x249D660
	private Sprite get_activeSprite() { }

	// RVA: 0x249D764 Offset: 0x2499764 VA: 0x249D764 Slot: 35
	public override Texture get_mainTexture() { }

	// RVA: 0x249D8DC Offset: 0x24998DC VA: 0x249D8DC
	public bool get_hasBorder() { }

	// RVA: 0x249D994 Offset: 0x2499994 VA: 0x249D994 Slot: 32
	public override Material get_material() { }

	// RVA: 0x249DAC4 Offset: 0x2499AC4 VA: 0x249DAC4 Slot: 33
	public override void set_material(Material value) { }

	[CompilerGenerated]
	// RVA: 0x249DACC Offset: 0x2499ACC VA: 0x249DACC
	public float get_alphaHitTestMinimumThreshold() { }

	[CompilerGenerated]
	// RVA: 0x249DAD4 Offset: 0x2499AD4 VA: 0x249DAD4
	public void set_alphaHitTestMinimumThreshold(float value) { }

	// RVA: 0x249DADC Offset: 0x2499ADC VA: 0x249DADC
	protected void .ctor() { }

	// RVA: 0x249DB0C Offset: 0x2499B0C VA: 0x249DB0C Slot: 5
	protected override void OnEnable() { }

	// RVA: 0x249DB28 Offset: 0x2499B28 VA: 0x249DB28 Slot: 7
	protected override void OnDisable() { }

	// RVA: 0x249DBDC Offset: 0x2499BDC VA: 0x249DBDC Slot: 44
	protected override void OnPopulateMesh(VertexHelper vh) { }

	// RVA: 0x249E4E4 Offset: 0x249A4E4 VA: 0x249E4E4 Slot: 40
	protected override void UpdateMaterial() { }

	// RVA: 0x249DC80 Offset: 0x2499C80 VA: 0x249DC80
	private void GenerateSlicedFilledSprite(VertexHelper vh) { }

	// RVA: 0x249E9B0 Offset: 0x249A9B0 VA: 0x249E9B0
	private Vector4 GetAdjustedBorders(Vector4 border, Rect adjustedRect) { }

	// RVA: 0x249E5E4 Offset: 0x249A5E4 VA: 0x249E5E4
	private void GenerateFilledSprite(VertexHelper vh, Vector4 vertices, Vector4 uvs, float fillAmount) { }

	// RVA: 0x249EB38 Offset: 0x249AB38 VA: 0x249EB38 Slot: 75
	private int UnityEngine.UI.ILayoutElement.get_layoutPriority() { }

	// RVA: 0x249EB40 Offset: 0x249AB40 VA: 0x249EB40 Slot: 69
	private float UnityEngine.UI.ILayoutElement.get_minWidth() { }

	// RVA: 0x249EB48 Offset: 0x249AB48 VA: 0x249EB48 Slot: 72
	private float UnityEngine.UI.ILayoutElement.get_minHeight() { }

	// RVA: 0x249EB50 Offset: 0x249AB50 VA: 0x249EB50 Slot: 71
	private float UnityEngine.UI.ILayoutElement.get_flexibleWidth() { }

	// RVA: 0x249EB58 Offset: 0x249AB58 VA: 0x249EB58 Slot: 74
	private float UnityEngine.UI.ILayoutElement.get_flexibleHeight() { }

	// RVA: 0x249EB60 Offset: 0x249AB60 VA: 0x249EB60 Slot: 70
	private float UnityEngine.UI.ILayoutElement.get_preferredWidth() { }

	// RVA: 0x249EC00 Offset: 0x249AC00 VA: 0x249EC00 Slot: 73
	private float UnityEngine.UI.ILayoutElement.get_preferredHeight() { }

	// RVA: 0x249ECA0 Offset: 0x249ACA0 VA: 0x249ECA0 Slot: 67
	private void UnityEngine.UI.ILayoutElement.CalculateLayoutInputHorizontal() { }

	// RVA: 0x249ECA4 Offset: 0x249ACA4 VA: 0x249ECA4 Slot: 68
	private void UnityEngine.UI.ILayoutElement.CalculateLayoutInputVertical() { }

	// RVA: 0x249ECA8 Offset: 0x249ACA8 VA: 0x249ECA8 Slot: 76
	private bool UnityEngine.ICanvasRaycastFilter.IsRaycastLocationValid(Vector2 screenPoint, Camera eventCamera) { }

	// RVA: 0x249F25C Offset: 0x249B25C VA: 0x249F25C Slot: 65
	private void UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize() { }

	// RVA: 0x249F260 Offset: 0x249B260 VA: 0x249F260 Slot: 66
	private void UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize() { }

	// RVA: 0x249D200 Offset: 0x2499200 VA: 0x249D200
	private void TrackImage() { }

	// RVA: 0x249DB54 Offset: 0x2499B54 VA: 0x249DB54
	private void UnTrackImage() { }

	// RVA: 0x249F284 Offset: 0x249B284 VA: 0x249F284
	private static void RebuildImage(SpriteAtlas spriteAtlas) { }

	// RVA: 0x249F3DC Offset: 0x249B3DC VA: 0x249F3DC
	private static void .cctor() { }
}

