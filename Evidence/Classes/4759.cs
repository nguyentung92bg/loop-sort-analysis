// Namespace: 
public abstract class CellElementBase : GameBehaviourBase // TypeDefIndex: 4759
{
	// Fields
	[CompilerGenerated]
	[SerializeField]
	private CellElementType <ElementType>k__BackingField; // 0xA0
	[CompilerGenerated]
	[SerializeField]
	private int <Priority>k__BackingField; // 0xA4
	[CompilerGenerated]
	[SerializeField]
	private Vector3 <Offset>k__BackingField; // 0xA8
	[CompilerGenerated]
	[SerializeField]
	private Vector2Int <Size>k__BackingField; // 0xB4
	[CompilerGenerated]
	private Grid <Grid>k__BackingField; // 0xC0
	[CompilerGenerated]
	private CellBase <Cell>k__BackingField; // 0xC8
	public readonly List<CellBase> Cells; // 0xD0
	public readonly List<CellBase> SizeCells; // 0xD8

	// Properties
	public CellElementType ElementType { get; set; }
	public int Priority { get; set; }
	public Vector3 Offset { get; set; }
	public Vector2Int Size { get; set; }
	public Grid Grid { get; set; }
	public CellBase Cell { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2505FB4 Offset: 0x2501FB4 VA: 0x2505FB4
	public CellElementType get_ElementType() { }

	[CompilerGenerated]
	// RVA: 0x2505FBC Offset: 0x2501FBC VA: 0x2505FBC
	private void set_ElementType(CellElementType value) { }

	[CompilerGenerated]
	// RVA: 0x2505FC4 Offset: 0x2501FC4 VA: 0x2505FC4
	public int get_Priority() { }

	[CompilerGenerated]
	// RVA: 0x2505FCC Offset: 0x2501FCC VA: 0x2505FCC
	private void set_Priority(int value) { }

	[CompilerGenerated]
	// RVA: 0x2505FD4 Offset: 0x2501FD4 VA: 0x2505FD4
	public Vector3 get_Offset() { }

	[CompilerGenerated]
	// RVA: 0x2505FE0 Offset: 0x2501FE0 VA: 0x2505FE0
	private void set_Offset(Vector3 value) { }

	[CompilerGenerated]
	// RVA: 0x2505FEC Offset: 0x2501FEC VA: 0x2505FEC
	public Vector2Int get_Size() { }

	[CompilerGenerated]
	// RVA: 0x2505FF4 Offset: 0x2501FF4 VA: 0x2505FF4
	private void set_Size(Vector2Int value) { }

	[CompilerGenerated]
	// RVA: 0x2505FFC Offset: 0x2501FFC VA: 0x2505FFC
	public Grid get_Grid() { }

	[CompilerGenerated]
	// RVA: 0x2506004 Offset: 0x2502004 VA: 0x2506004
	private void set_Grid(Grid value) { }

	[CompilerGenerated]
	// RVA: 0x250600C Offset: 0x250200C VA: 0x250600C
	public CellBase get_Cell() { }

	[CompilerGenerated]
	// RVA: 0x2506014 Offset: 0x2502014 VA: 0x2506014
	private void set_Cell(CellBase value) { }

	// RVA: 0x250601C Offset: 0x250201C VA: 0x250601C Slot: 12
	public override void OnReturn() { }

	// RVA: 0x2505888 Offset: 0x2501888 VA: 0x2505888
	public void SetGrid(Grid grid) { }

	// RVA: 0x2505890 Offset: 0x2501890 VA: 0x2505890
	public void SetCell(CellBase cell) { }

	// RVA: 0x25058F8 Offset: 0x25018F8 VA: 0x25058F8
	public void SetSizeCells(List<CellBase> sizeCells) { }

	// RVA: 0x25062FC Offset: 0x25022FC VA: 0x25062FC
	public Vector3 GetSelfLocalPosition() { }

	// RVA: 0x2506304 Offset: 0x2502304 VA: 0x2506304
	public Vector3 GetSelfWorldPosition() { }

	// RVA: 0x2505ADC Offset: 0x2501ADC VA: 0x2505ADC
	public Vector3 GetLocalPositionAt(CellBase cell) { }

	// RVA: 0x250630C Offset: 0x250230C VA: 0x250630C
	public Vector3 GetWorldPositionAt(CellBase cell) { }

	// RVA: 0x2506434 Offset: 0x2502434 VA: 0x2506434 Slot: 14
	public virtual bool IsCreateValueValid(string value) { }

	// RVA: 0x250643C Offset: 0x250243C VA: 0x250643C Slot: 15
	public virtual void OnCreate(string value) { }

	// RVA: 0x2506440 Offset: 0x2502440 VA: 0x2506440
	protected void .ctor() { }
}

