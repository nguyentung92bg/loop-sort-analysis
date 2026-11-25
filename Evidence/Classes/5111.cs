// Namespace: 
public class CoinRushSheet.Row : SheetRow<int> // TypeDefIndex: 5111
{
	// Fields
	[CompilerGenerated]
	private int <WinCount>k__BackingField; // 0x18
	[CompilerGenerated]
	private int <Reward>k__BackingField; // 0x1C
	[CompilerGenerated]
	private CloudPrefsBool <Claimed>k__BackingField; // 0x20
	[CompilerGenerated]
	private CloudPrefsBool <Completed>k__BackingField; // 0x40

	// Properties
	public int WinCount { get; set; }
	public int Reward { get; set; }
	[NonSerialized]
	public CloudPrefsBool Claimed { get; set; }
	[NonSerialized]
	public CloudPrefsBool Completed { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x255CF54 Offset: 0x2558F54 VA: 0x255CF54
	public int get_WinCount() { }

	[CompilerGenerated]
	// RVA: 0x255CF5C Offset: 0x2558F5C VA: 0x255CF5C
	private void set_WinCount(int value) { }

	[CompilerGenerated]
	// RVA: 0x255CF64 Offset: 0x2558F64 VA: 0x255CF64
	public int get_Reward() { }

	[CompilerGenerated]
	// RVA: 0x255CF6C Offset: 0x2558F6C VA: 0x255CF6C
	private void set_Reward(int value) { }

	[CompilerGenerated]
	// RVA: 0x255CF74 Offset: 0x2558F74 VA: 0x255CF74
	public CloudPrefsBool get_Claimed() { }

	[CompilerGenerated]
	// RVA: 0x255CF80 Offset: 0x2558F80 VA: 0x255CF80
	public void set_Claimed(CloudPrefsBool value) { }

	[CompilerGenerated]
	// RVA: 0x255CF9C Offset: 0x2558F9C VA: 0x255CF9C
	public CloudPrefsBool get_Completed() { }

	[CompilerGenerated]
	// RVA: 0x255CFA8 Offset: 0x2558FA8 VA: 0x255CFA8
	public void set_Completed(CloudPrefsBool value) { }

	// RVA: 0x255CFC4 Offset: 0x2558FC4 VA: 0x255CFC4 Slot: 7
	public override void PostLoad(SheetConvertingContext context) { }

	// RVA: 0x255D18C Offset: 0x255918C VA: 0x255D18C
	public void .ctor() { }
}

