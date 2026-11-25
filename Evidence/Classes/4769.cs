// Namespace: 
public sealed class HexCell : CellBase // TypeDefIndex: 4769
{
	// Fields
	private readonly List<CellBase> _neighborCells; // 0xE8
	private static readonly Vector3Int[] AxialNeighborDirections; // 0x0

	// Methods

	// RVA: 0x2508200 Offset: 0x2504200 VA: 0x2508200
	public Vector3Int ToAxialCoordinate() { }

	// RVA: 0x2508224 Offset: 0x2504224 VA: 0x2508224
	public static Vector2Int AxialToOffset(Vector3Int axial) { }

	// RVA: 0x250823C Offset: 0x250423C VA: 0x250823C Slot: 14
	public override List<CellBase> GetNeighbors() { }

	// RVA: 0x25083D8 Offset: 0x25043D8 VA: 0x25083D8
	public void .ctor() { }

	// RVA: 0x2508460 Offset: 0x2504460 VA: 0x2508460
	private static void .cctor() { }
}

