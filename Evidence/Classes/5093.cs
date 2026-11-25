// Namespace: 
public class AreaSheet.Row : SheetRowArray<int, AreaSheet.Elem> // TypeDefIndex: 5093
{
	// Fields
	[CompilerGenerated]
	private AreaType <Type>k__BackingField; // 0x20
	[CompilerGenerated]
	private int <UnlockLevel>k__BackingField; // 0x24
	[CompilerGenerated]
	private Nullable<int> <NextUnlockLevel>k__BackingField; // 0x28
	[CompilerGenerated]
	private List<AreaSheet.Elem> <RewardElems>k__BackingField; // 0x30
	private CloudPrefsBool _isUnlocked; // 0x38

	// Properties
	public AreaType Type { get; set; }
	[NonSerialized]
	public int UnlockLevel { get; set; }
	[NonSerialized]
	public Nullable<int> NextUnlockLevel { get; set; }
	[NonSerialized]
	public List<AreaSheet.Elem> RewardElems { get; set; }
	[NonSerialized]
	public string LevelRange { get; }
	public bool IsUnlocked { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x25585C8 Offset: 0x25545C8 VA: 0x25585C8
	public AreaType get_Type() { }

	[CompilerGenerated]
	// RVA: 0x25585D0 Offset: 0x25545D0 VA: 0x25585D0
	private void set_Type(AreaType value) { }

	[CompilerGenerated]
	// RVA: 0x25585D8 Offset: 0x25545D8 VA: 0x25585D8
	public int get_UnlockLevel() { }

	[CompilerGenerated]
	// RVA: 0x25585E0 Offset: 0x25545E0 VA: 0x25585E0
	private void set_UnlockLevel(int value) { }

	[CompilerGenerated]
	// RVA: 0x25585E8 Offset: 0x25545E8 VA: 0x25585E8
	public Nullable<int> get_NextUnlockLevel() { }

	[CompilerGenerated]
	// RVA: 0x25585F0 Offset: 0x25545F0 VA: 0x25585F0
	internal void set_NextUnlockLevel(Nullable<int> value) { }

	[CompilerGenerated]
	// RVA: 0x25585F8 Offset: 0x25545F8 VA: 0x25585F8
	public List<AreaSheet.Elem> get_RewardElems() { }

	[CompilerGenerated]
	// RVA: 0x2558600 Offset: 0x2554600 VA: 0x2558600
	private void set_RewardElems(List<AreaSheet.Elem> value) { }

	// RVA: 0x2558608 Offset: 0x2554608 VA: 0x2558608
	public string get_LevelRange() { }

	// RVA: 0x2558574 Offset: 0x2554574 VA: 0x2558574
	public bool get_IsUnlocked() { }

	// RVA: 0x2558844 Offset: 0x2554844 VA: 0x2558844
	public void Unlock() { }

	// RVA: 0x2558854 Offset: 0x2554854 VA: 0x2558854
	public void Relock(ICloudPrefsStore store) { }

	// RVA: 0x255889C Offset: 0x255489C VA: 0x255889C Slot: 7
	public override void PostLoad(SheetConvertingContext context) { }

	// RVA: 0x2558DE8 Offset: 0x2554DE8 VA: 0x2558DE8
	public void .ctor() { }
}

