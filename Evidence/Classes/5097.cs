// Namespace: 
public sealed class AreaSheet : Sheet<int, AreaSheet.Row> // TypeDefIndex: 5097
{
	// Fields
	[CompilerGenerated]
	private bool <HasRewards>k__BackingField; // 0x48

	// Properties
	public bool HasRewards { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x25575BC Offset: 0x25535BC VA: 0x25575BC
	public bool get_HasRewards() { }

	[CompilerGenerated]
	// RVA: 0x25575C4 Offset: 0x25535C4 VA: 0x25575C4
	private void set_HasRewards(bool value) { }

	// RVA: 0x25575CC Offset: 0x25535CC VA: 0x25575CC Slot: 57
	public override void PostLoad(SheetConvertingContext context) { }

	// RVA: 0x2557950 Offset: 0x2553950 VA: 0x2557950
	public AreaSheet.Row GetCurrentArea() { }

	// RVA: 0x25579C0 Offset: 0x25539C0 VA: 0x25579C0
	public AreaSheet.Row GetArea(int level) { }

	// RVA: 0x2557B18 Offset: 0x2553B18 VA: 0x2557B18
	public List<ValueTuple<AreaSheet.Row, AreaSheet.Elem>> GetRewards(int fromLevel, int toLevel) { }

	// RVA: 0x2557D9C Offset: 0x2553D9C VA: 0x2557D9C
	public AreaSheet.Row GetHomeArea() { }

	// RVA: 0x2557DC0 Offset: 0x2553DC0 VA: 0x2557DC0
	public AreaSheet.Row GetPickedArea() { }

	// RVA: 0x2558044 Offset: 0x2554044 VA: 0x2558044
	public void PickHomeArea(AreaSheet.Row area) { }

	// RVA: 0x2557FAC Offset: 0x2553FAC VA: 0x2557FAC
	private AreaSheet.Row GetReachedArea() { }

	// RVA: 0x2558444 Offset: 0x2554444 VA: 0x2558444
	public AreaSheet.Row GetPreviousArea() { }

	// RVA: 0x2558114 Offset: 0x2554114 VA: 0x2558114
	public bool TryGetCompletedArea(int level, out AreaSheet.Row data) { }

	// RVA: 0x2558580 Offset: 0x2554580 VA: 0x2558580
	public void .ctor() { }
}

