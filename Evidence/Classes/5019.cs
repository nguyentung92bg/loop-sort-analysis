// Namespace: 
public class OutlineRenderer : MonoBehaviour // TypeDefIndex: 5019
{
	// Fields
	[CompilerGenerated]
	[SerializeField]
	private OutlineRenderMode <Mode>k__BackingField; // 0x20
	[CompilerGenerated]
	[SerializeField]
	private OutlineLayer <Layer>k__BackingField; // 0x24
	[CompilerGenerated]
	[SerializeField]
	private Color <Color>k__BackingField; // 0x28
	[CompilerGenerated]
	[SerializeField]
	[Range(0, 10)]
	private float <Width>k__BackingField; // 0x38
	private OutlineRenderMode _mode; // 0x3C
	private OutlineLayer _layer; // 0x40
	private Color _color; // 0x44
	private float _width; // 0x54
	private List<MeshFilter> _meshFilters; // 0x58
	private List<OutlineEntity> _outlineEntities; // 0x60
	private static OutlineModule _outlineModule; // 0x0

	// Properties
	public OutlineRenderMode Mode { get; set; }
	public OutlineLayer Layer { get; set; }
	public Color Color { get; set; }
	public float Width { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x254F880 Offset: 0x254B880 VA: 0x254F880
	public OutlineRenderMode get_Mode() { }

	[CompilerGenerated]
	// RVA: 0x254F888 Offset: 0x254B888 VA: 0x254F888
	public void set_Mode(OutlineRenderMode value) { }

	[CompilerGenerated]
	// RVA: 0x254F890 Offset: 0x254B890 VA: 0x254F890
	public OutlineLayer get_Layer() { }

	[CompilerGenerated]
	// RVA: 0x254F898 Offset: 0x254B898 VA: 0x254F898
	public void set_Layer(OutlineLayer value) { }

	[CompilerGenerated]
	// RVA: 0x254F8A0 Offset: 0x254B8A0 VA: 0x254F8A0
	public Color get_Color() { }

	[CompilerGenerated]
	// RVA: 0x254F8AC Offset: 0x254B8AC VA: 0x254F8AC
	public void set_Color(Color value) { }

	[CompilerGenerated]
	// RVA: 0x254F8B8 Offset: 0x254B8B8 VA: 0x254F8B8
	public float get_Width() { }

	[CompilerGenerated]
	// RVA: 0x254F8C0 Offset: 0x254B8C0 VA: 0x254F8C0
	public void set_Width(float value) { }

	// RVA: 0x254F8C8 Offset: 0x254B8C8 VA: 0x254F8C8
	private void Awake() { }

	// RVA: 0x254FA74 Offset: 0x254BA74 VA: 0x254FA74
	private void OnEnable() { }

	// RVA: 0x254FD24 Offset: 0x254BD24 VA: 0x254FD24
	private void OnDisable() { }

	// RVA: 0x254FFA0 Offset: 0x254BFA0 VA: 0x254FFA0
	private void OnDestroy() { }

	// RVA: 0x2550060 Offset: 0x254C060 VA: 0x2550060
	private void Update() { }

	// RVA: 0x25500A4 Offset: 0x254C0A4 VA: 0x25500A4
	private bool HasChanges() { }

	// RVA: 0x254FA78 Offset: 0x254BA78 VA: 0x254FA78
	private void Add() { }

	// RVA: 0x254FD28 Offset: 0x254BD28 VA: 0x254FD28
	private void Remove() { }

	// RVA: 0x2550194 Offset: 0x254C194 VA: 0x2550194
	public void .ctor() { }
}

