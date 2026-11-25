// Namespace: 
public class CollectionBarSheet.Row : SheetRow<int> // TypeDefIndex: 5115
{
	// Fields
	[CompilerGenerated]
	private string <Reward>k__BackingField; // 0x18
	[CompilerGenerated]
	private int <Token>k__BackingField; // 0x20
	[CompilerGenerated]
	private readonly List<CollectionBarSheet.RewardArgs> <Rewards>k__BackingField; // 0x28
	[CompilerGenerated]
	private CloudPrefsBool <Claim>k__BackingField; // 0x30

	// Properties
	public string Reward { get; set; }
	public int Token { get; set; }
	[NonSerialized]
	public List<CollectionBarSheet.RewardArgs> Rewards { get; }
	[NonSerialized]
	public CloudPrefsBool Claim { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x255D2B0 Offset: 0x25592B0 VA: 0x255D2B0
	public string get_Reward() { }

	[CompilerGenerated]
	// RVA: 0x255D2B8 Offset: 0x25592B8 VA: 0x255D2B8
	private void set_Reward(string value) { }

	[CompilerGenerated]
	// RVA: 0x255D2C0 Offset: 0x25592C0 VA: 0x255D2C0
	public int get_Token() { }

	[CompilerGenerated]
	// RVA: 0x255D2C8 Offset: 0x25592C8 VA: 0x255D2C8
	private void set_Token(int value) { }

	[CompilerGenerated]
	// RVA: 0x255D2D0 Offset: 0x25592D0 VA: 0x255D2D0
	public List<CollectionBarSheet.RewardArgs> get_Rewards() { }

	[CompilerGenerated]
	// RVA: 0x255D2D8 Offset: 0x25592D8 VA: 0x255D2D8
	public CloudPrefsBool get_Claim() { }

	[CompilerGenerated]
	// RVA: 0x255D2E4 Offset: 0x25592E4 VA: 0x255D2E4
	private void set_Claim(CloudPrefsBool value) { }

	// RVA: 0x255D300 Offset: 0x2559300 VA: 0x255D300 Slot: 7
	public override void PostLoad(SheetConvertingContext context) { }

	// RVA: 0x255D548 Offset: 0x2559548 VA: 0x255D548
	public void .ctor() { }
}

