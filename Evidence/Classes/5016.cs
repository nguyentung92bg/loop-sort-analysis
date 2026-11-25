// Namespace: 
public struct OutlineEntity : IEquatable<OutlineEntity> // TypeDefIndex: 5016
{
	// Fields
	public uint Index; // 0x0
	public GameObject Target; // 0x8
	public Renderer Renderer; // 0x10
	public Mesh Mesh; // 0x18
	public Color Color; // 0x20
	public float Width; // 0x30
	public OutlineRenderMode RenderMode; // 0x34
	public Material FillMaterial; // 0x38
	public Material MaskMaterial; // 0x40

	// Methods

	// RVA: 0x254F7EC Offset: 0x254B7EC VA: 0x254F7EC Slot: 4
	public bool Equals(OutlineEntity other) { }

	// RVA: 0x254F800 Offset: 0x254B800 VA: 0x254F800 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x254F878 Offset: 0x254B878 VA: 0x254F878 Slot: 2
	public override int GetHashCode() { }
}

