// Namespace: 
public class BattlePassSheet.Row : SheetRow<int> // TypeDefIndex: 5101
{
	// Fields
	[CompilerGenerated]
	private string <Free>k__BackingField; // 0x18
	[CompilerGenerated]
	private string <Paid>k__BackingField; // 0x20
	[CompilerGenerated]
	private int <KeyCount>k__BackingField; // 0x28
	[CompilerGenerated]
	private readonly List<BattlePassSheet.RewardArgs> <FreeRewards>k__BackingField; // 0x30
	[CompilerGenerated]
	private readonly List<BattlePassSheet.RewardArgs> <PaidRewards>k__BackingField; // 0x38
	[CompilerGenerated]
	private CloudPrefsBool <FreeClaim>k__BackingField; // 0x40
	[CompilerGenerated]
	private CloudPrefsBool <PaidClaim>k__BackingField; // 0x60

	// Properties
	public string Free { get; set; }
	public string Paid { get; set; }
	public int KeyCount { get; set; }
	[NonSerialized]
	public List<BattlePassSheet.RewardArgs> FreeRewards { get; }
	[NonSerialized]
	public List<BattlePassSheet.RewardArgs> PaidRewards { get; }
	[NonSerialized]
	public CloudPrefsBool FreeClaim { get; set; }
	[NonSerialized]
	public CloudPrefsBool PaidClaim { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2559490 Offset: 0x2555490 VA: 0x2559490
	public string get_Free() { }

	[CompilerGenerated]
	// RVA: 0x2559498 Offset: 0x2555498 VA: 0x2559498
	private void set_Free(string value) { }

	[CompilerGenerated]
	// RVA: 0x25594A0 Offset: 0x25554A0 VA: 0x25594A0
	public string get_Paid() { }

	[CompilerGenerated]
	// RVA: 0x25594A8 Offset: 0x25554A8 VA: 0x25594A8
	private void set_Paid(string value) { }

	[CompilerGenerated]
	// RVA: 0x25594B0 Offset: 0x25554B0 VA: 0x25594B0
	public int get_KeyCount() { }

	[CompilerGenerated]
	// RVA: 0x25594B8 Offset: 0x25554B8 VA: 0x25594B8
	private void set_KeyCount(int value) { }

	[CompilerGenerated]
	// RVA: 0x25594C0 Offset: 0x25554C0 VA: 0x25594C0
	public List<BattlePassSheet.RewardArgs> get_FreeRewards() { }

	[CompilerGenerated]
	// RVA: 0x25594C8 Offset: 0x25554C8 VA: 0x25594C8
	public List<BattlePassSheet.RewardArgs> get_PaidRewards() { }

	[CompilerGenerated]
	// RVA: 0x25594D0 Offset: 0x25554D0 VA: 0x25594D0
	public CloudPrefsBool get_FreeClaim() { }

	[CompilerGenerated]
	// RVA: 0x25594DC Offset: 0x25554DC VA: 0x25594DC
	private void set_FreeClaim(CloudPrefsBool value) { }

	[CompilerGenerated]
	// RVA: 0x25594F8 Offset: 0x25554F8 VA: 0x25594F8
	public CloudPrefsBool get_PaidClaim() { }

	[CompilerGenerated]
	// RVA: 0x2559504 Offset: 0x2555504 VA: 0x2559504
	private void set_PaidClaim(CloudPrefsBool value) { }

	// RVA: 0x2559520 Offset: 0x2555520 VA: 0x2559520 Slot: 7
	public override void PostLoad(SheetConvertingContext context) { }

	// RVA: 0x2559930 Offset: 0x2555930 VA: 0x2559930
	public void .ctor() { }
}

