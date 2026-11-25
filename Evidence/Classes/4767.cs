// Namespace: 
[DefaultExecutionOrder(-10)]
public sealed class Grid : GameBehaviourBase // TypeDefIndex: 4767
{
	// Fields
	[CompilerGenerated]
	[SerializeField]
	private GridSheet.LayoutType <LayoutType>k__BackingField; // 0xA0
	[CompilerGenerated]
	[SerializeField]
	private Grid.PivotType <Pivot>k__BackingField; // 0xA4
	[Inject]
	private GridConfig _config; // 0xA8
	[Inject]
	private CellElements _cellElements; // 0xB0
	[CompilerGenerated]
	private CellBase[,] <Cells>k__BackingField; // 0xB8
	[CompilerGenerated]
	private Vector2Int <Size>k__BackingField; // 0xC0
	[CompilerGenerated]
	private Bounds <Bounds>k__BackingField; // 0xC8
	[CompilerGenerated]
	private GridSheet.Layout <Layout>k__BackingField; // 0xE0
	private readonly List<CellBase> _allCells; // 0xE8
	private readonly List<CellBase> _tempCells; // 0xF0
	private readonly Dictionary<int, List<CellBase>> _columnCells; // 0xF8
	private readonly Dictionary<int, List<CellBase>> _rowCells; // 0x100
	private static readonly CellDistanceComparer DistanceComparer; // 0x0

	// Properties
	public GridSheet.LayoutType LayoutType { get; set; }
	public Grid.PivotType Pivot { get; set; }
	public CellBase[,] Cells { get; set; }
	public Vector2Int Size { get; set; }
	public Bounds Bounds { get; set; }
	public GridSheet.Layout Layout { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2506664 Offset: 0x2502664 VA: 0x2506664
	public GridSheet.LayoutType get_LayoutType() { }

	[CompilerGenerated]
	// RVA: 0x250666C Offset: 0x250266C VA: 0x250666C
	private void set_LayoutType(GridSheet.LayoutType value) { }

	[CompilerGenerated]
	// RVA: 0x2506674 Offset: 0x2502674 VA: 0x2506674
	public Grid.PivotType get_Pivot() { }

	[CompilerGenerated]
	// RVA: 0x250667C Offset: 0x250267C VA: 0x250667C
	private void set_Pivot(Grid.PivotType value) { }

	[CompilerGenerated]
	// RVA: 0x2506684 Offset: 0x2502684 VA: 0x2506684
	public CellBase[,] get_Cells() { }

	[CompilerGenerated]
	// RVA: 0x250668C Offset: 0x250268C VA: 0x250668C
	private void set_Cells(CellBase[,] value) { }

	[CompilerGenerated]
	// RVA: 0x2506694 Offset: 0x2502694 VA: 0x2506694
	public Vector2Int get_Size() { }

	[CompilerGenerated]
	// RVA: 0x250669C Offset: 0x250269C VA: 0x250669C
	private void set_Size(Vector2Int value) { }

	[CompilerGenerated]
	// RVA: 0x25066A4 Offset: 0x25026A4 VA: 0x25066A4
	public Bounds get_Bounds() { }

	[CompilerGenerated]
	// RVA: 0x25066B8 Offset: 0x25026B8 VA: 0x25066B8
	private void set_Bounds(Bounds value) { }

	[CompilerGenerated]
	// RVA: 0x25066CC Offset: 0x25026CC VA: 0x25066CC
	public GridSheet.Layout get_Layout() { }

	[CompilerGenerated]
	// RVA: 0x25066D4 Offset: 0x25026D4 VA: 0x25066D4
	private void set_Layout(GridSheet.Layout value) { }

	// RVA: 0x25066E0 Offset: 0x25026E0 VA: 0x25066E0
	private void Update() { }

	// RVA: 0x250679C Offset: 0x250279C VA: 0x250679C
	public void SetLayoutType(GridSheet.LayoutType layoutType) { }

	// RVA: 0x25067A4 Offset: 0x25027A4 VA: 0x25067A4
	public void Initialize(GridSheet.Layout layout) { }

	// RVA: 0x2506E00 Offset: 0x2502E00 VA: 0x2506E00
	private Vector3 CoordinateToWorldOffset(Vector2Int c) { }

	// RVA: -1 Offset: -1
	public void GetCellElements<T>(List<T> list) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x261CDD0 Offset: 0x2618DD0 VA: 0x261CDD0
	|-Grid.GetCellElements<object>
	*/

	// RVA: 0x2505768 Offset: 0x2501768 VA: 0x2505768
	public CellBase GetCellAt(Vector2Int offsetCoordinate) { }

	// RVA: 0x2506FAC Offset: 0x2502FAC VA: 0x2506FAC
	public List<CellBase> GetColumn(int column) { }

	// RVA: 0x2507150 Offset: 0x2503150 VA: 0x2507150
	public List<CellBase> GetRow(int row) { }

	// RVA: 0x25072EC Offset: 0x25032EC VA: 0x25072EC
	public List<CellBase> GetCells() { }

	// RVA: 0x25072F4 Offset: 0x25032F4 VA: 0x25072F4
	public CellBase FindNearestCell(Vector3 worldPosition, float maxDistance = 100) { }

	// RVA: 0x2507578 Offset: 0x2503578 VA: 0x2507578
	public List<CellBase> GetNearbyCells(Vector3 worldPosition, float maxDistance) { }

	// RVA: 0x2506DBC Offset: 0x2502DBC VA: 0x2506DBC
	public Vector2Int GetLayoutSize() { }

	// RVA: 0x2506E84 Offset: 0x2502E84 VA: 0x2506E84
	public void PopulateCellElements(GridSheet.Cell[,] cells, Nullable<CellElementType> allowedType) { }

	// RVA: 0x25078FC Offset: 0x25038FC VA: 0x25078FC
	public void PopulateCellWithElement(CellBase cell, GridSheet.Cell layoutCell, Nullable<CellElementType> allowedType) { }

	// RVA: 0x2507C30 Offset: 0x2503C30 VA: 0x2507C30
	private void InitializeCellElement(CellBase cell, GridSheet.Cell layoutCell, CellElementType cellElementType) { }

	// RVA: 0x2507D08 Offset: 0x2503D08 VA: 0x2507D08
	public void .ctor() { }

	// RVA: 0x2507E50 Offset: 0x2503E50 VA: 0x2507E50
	private static void .cctor() { }
}

