// Namespace: 
public class HomeLiveOpsSheet.Slot : SheetRow<int> // TypeDefIndex: 5144
{
	// Fields
	[CompilerGenerated]
	private int <UnlockLevel>k__BackingField; // 0x18
	[CompilerGenerated]
	private bool <ShowLock>k__BackingField; // 0x1C
	[CompilerGenerated]
	private HomeLiveOpsSheet.Position <Position>k__BackingField; // 0x20
	[CompilerGenerated]
	private string <Order>k__BackingField; // 0x28
	[CompilerGenerated]
	private readonly List<LiveOps> <OrderParse>k__BackingField; // 0x30
	[CompilerGenerated]
	private CloudPrefsInt <OrderIdx>k__BackingField; // 0x38

	// Properties
	public int UnlockLevel { get; set; }
	public bool ShowLock { get; set; }
	public HomeLiveOpsSheet.Position Position { get; set; }
	public string Order { get; set; }
	[NonSerialized]
	public List<LiveOps> OrderParse { get; }
	[NonSerialized]
	public CloudPrefsInt OrderIdx { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x256115C Offset: 0x255D15C VA: 0x256115C
	public int get_UnlockLevel() { }

	[CompilerGenerated]
	// RVA: 0x2561164 Offset: 0x255D164 VA: 0x2561164
	private void set_UnlockLevel(int value) { }

	[CompilerGenerated]
	// RVA: 0x256116C Offset: 0x255D16C VA: 0x256116C
	public bool get_ShowLock() { }

	[CompilerGenerated]
	// RVA: 0x2561174 Offset: 0x255D174 VA: 0x2561174
	private void set_ShowLock(bool value) { }

	[CompilerGenerated]
	// RVA: 0x256117C Offset: 0x255D17C VA: 0x256117C
	public HomeLiveOpsSheet.Position get_Position() { }

	[CompilerGenerated]
	// RVA: 0x2561184 Offset: 0x255D184 VA: 0x2561184
	private void set_Position(HomeLiveOpsSheet.Position value) { }

	[CompilerGenerated]
	// RVA: 0x256118C Offset: 0x255D18C VA: 0x256118C
	public string get_Order() { }

	[CompilerGenerated]
	// RVA: 0x2561194 Offset: 0x255D194 VA: 0x2561194
	private void set_Order(string value) { }

	[CompilerGenerated]
	// RVA: 0x256119C Offset: 0x255D19C VA: 0x256119C
	public List<LiveOps> get_OrderParse() { }

	[CompilerGenerated]
	// RVA: 0x25611A4 Offset: 0x255D1A4 VA: 0x25611A4
	public CloudPrefsInt get_OrderIdx() { }

	[CompilerGenerated]
	// RVA: 0x25611B4 Offset: 0x255D1B4 VA: 0x25611B4
	private void set_OrderIdx(CloudPrefsInt value) { }

	// RVA: 0x25611D4 Offset: 0x255D1D4 VA: 0x25611D4 Slot: 7
	public override void PostLoad(SheetConvertingContext context) { }

	// RVA: 0x25613CC Offset: 0x255D3CC VA: 0x25613CC
	public LiveOps GetCurrent() { }

	// RVA: 0x2561620 Offset: 0x255D620 VA: 0x2561620
	public void MoveToNext() { }

	// RVA: 0x25616A4 Offset: 0x255D6A4 VA: 0x25616A4
	public bool IsLocked() { }

	// RVA: 0x2561740 Offset: 0x255D740 VA: 0x2561740
	public void .ctor() { }
}

