// Namespace: 
public abstract class CellBase : GameBehaviourBase // TypeDefIndex: 4757
{
	// Fields
	public List<CellElementBase> Elements; // 0xA0
	[CompilerGenerated]
	private Vector2Int <Coordinate>k__BackingField; // 0xA8
	[CompilerGenerated]
	private Vector3 <Size>k__BackingField; // 0xB0
	[CompilerGenerated]
	private Vector3 <CenterOffset>k__BackingField; // 0xBC
	[CompilerGenerated]
	private Quaternion <CenterRotation>k__BackingField; // 0xC8
	[CompilerGenerated]
	private Grid <Grid>k__BackingField; // 0xD8
	private readonly Dictionary<Type, CellElementBase> _elementByType; // 0xE0

	// Properties
	public CellElementBase TopElement { get; }
	public Vector2Int Coordinate { get; set; }
	public Vector3 Size { get; set; }
	public Vector3 CenterOffset { get; set; }
	public Quaternion CenterRotation { get; set; }
	public Vector3 CenterPosition { get; }
	protected Grid Grid { get; set; }

	// Methods

	// RVA: 0x2504D6C Offset: 0x2500D6C VA: 0x2504D6C
	public CellElementBase get_TopElement() { }

	[CompilerGenerated]
	// RVA: 0x2504DEC Offset: 0x2500DEC VA: 0x2504DEC
	public Vector2Int get_Coordinate() { }

	[CompilerGenerated]
	// RVA: 0x2504DF4 Offset: 0x2500DF4 VA: 0x2504DF4
	private void set_Coordinate(Vector2Int value) { }

	[CompilerGenerated]
	// RVA: 0x2504DFC Offset: 0x2500DFC VA: 0x2504DFC
	public Vector3 get_Size() { }

	[CompilerGenerated]
	// RVA: 0x2504E08 Offset: 0x2500E08 VA: 0x2504E08
	private void set_Size(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x2504E14 Offset: 0x2500E14 VA: 0x2504E14
	public Vector3 get_CenterOffset() { }

	[CompilerGenerated]
	// RVA: 0x2504E20 Offset: 0x2500E20 VA: 0x2504E20
	private void set_CenterOffset(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x2504E2C Offset: 0x2500E2C VA: 0x2504E2C
	public Quaternion get_CenterRotation() { }

	[CompilerGenerated]
	// RVA: 0x2504E38 Offset: 0x2500E38 VA: 0x2504E38
	private void set_CenterRotation(Quaternion value) { }

	// RVA: 0x2504E44 Offset: 0x2500E44 VA: 0x2504E44
	public Vector3 get_CenterPosition() { }

	[CompilerGenerated]
	// RVA: 0x2504EBC Offset: 0x2500EBC VA: 0x2504EBC
	protected Grid get_Grid() { }

	[CompilerGenerated]
	// RVA: 0x2504EC4 Offset: 0x2500EC4 VA: 0x2504EC4
	private void set_Grid(Grid value) { }

	// RVA: 0x2504ECC Offset: 0x2500ECC VA: 0x2504ECC
	public void Initialize(Grid grid, Vector2Int coordinate, Vector3 size, Vector3 offset) { }

	// RVA: 0x2504F34 Offset: 0x2500F34 VA: 0x2504F34
	public void AddElement(CellElementBase element, bool worldPositionStays = False) { }

	// RVA: 0x2505964 Offset: 0x2501964 VA: 0x2505964
	public void AddSizeElement(CellElementBase element) { }

	// RVA: 0x25057E4 Offset: 0x25017E4 VA: 0x25057E4
	public void RemoveElement(CellElementBase cellElement) { }

	// RVA: 0x2505BC4 Offset: 0x2501BC4 VA: 0x2505BC4
	public void SetRotation(Quaternion rotation) { }

	// RVA: -1 Offset: -1
	public bool TryGetElement<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x25BD138 Offset: 0x25B9138 VA: 0x25BD138
	|-CellBase.TryGetElement<object>
	*/

	// RVA: -1 Offset: -1
	public bool TryGetElement<T>(out T resultElement) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x25BD180 Offset: 0x25B9180 VA: 0x25BD180
	|-CellBase.TryGetElement<object>
	*/

	// RVA: -1 Offset: -1 Slot: 14
	public abstract List<CellBase> GetNeighbors();

	// RVA: 0x2505BD0 Offset: 0x2501BD0 VA: 0x2505BD0
	public CellBase GetNeighborAt(Vector2Int offsetDirection) { }

	// RVA: 0x2505C00 Offset: 0x2501C00 VA: 0x2505C00
	public CellBase GetNeighborAt(Vector3Int offsetDirection) { }

	// RVA: 0x2505C08 Offset: 0x2501C08 VA: 0x2505C08
	protected void .ctor() { }
}

