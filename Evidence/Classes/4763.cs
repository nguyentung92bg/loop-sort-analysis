// Namespace: 
public sealed class GridConfig : Data // TypeDefIndex: 4763
{
	// Fields
	public GridType Type; // 0x18
	public Grid GridPrefab; // 0x20
	public CellBase CellPrefab; // 0x28
	public float OuterRadius; // 0x30
	public Vector2Int MinSize; // 0x34
	public Vector2Int MaxSize; // 0x3C

	// Properties
	public float InnerRadius { get; }

	// Methods

	// RVA: 0x25065C8 Offset: 0x25025C8 VA: 0x25065C8
	public float get_InnerRadius() { }

	// RVA: 0x25065E8 Offset: 0x25025E8 VA: 0x25065E8
	public void .ctor() { }
}

