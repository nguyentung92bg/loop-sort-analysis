// Namespace: 
public class WeeklyMissionProgressSheet.Row : SheetRow<int> // TypeDefIndex: 5200
{
	// Fields
	[CompilerGenerated]
	private int <RequiredBlockCount>k__BackingField; // 0x18
	[CompilerGenerated]
	private string <Rewards>k__BackingField; // 0x20
	[CompilerGenerated]
	private CloudPrefsBool <Fulfill>k__BackingField; // 0x28
	[CompilerGenerated]
	private readonly List<RewardInfo> <RewardsParse>k__BackingField; // 0x48

	// Properties
	public int RequiredBlockCount { get; set; }
	public string Rewards { get; set; }
	[NonSerialized]
	public CloudPrefsBool Fulfill { get; set; }
	[NonSerialized]
	public List<RewardInfo> RewardsParse { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2568E10 Offset: 0x2564E10 VA: 0x2568E10
	public int get_RequiredBlockCount() { }

	[CompilerGenerated]
	// RVA: 0x2568E18 Offset: 0x2564E18 VA: 0x2568E18
	private void set_RequiredBlockCount(int value) { }

	[CompilerGenerated]
	// RVA: 0x2568E20 Offset: 0x2564E20 VA: 0x2568E20
	public string get_Rewards() { }

	[CompilerGenerated]
	// RVA: 0x2568E28 Offset: 0x2564E28 VA: 0x2568E28
	private void set_Rewards(string value) { }

	[CompilerGenerated]
	// RVA: 0x2568E30 Offset: 0x2564E30 VA: 0x2568E30
	public CloudPrefsBool get_Fulfill() { }

	[CompilerGenerated]
	// RVA: 0x2568E40 Offset: 0x2564E40 VA: 0x2568E40
	private void set_Fulfill(CloudPrefsBool value) { }

	[CompilerGenerated]
	// RVA: 0x2568E60 Offset: 0x2564E60 VA: 0x2568E60
	public List<RewardInfo> get_RewardsParse() { }

	// RVA: 0x2568E68 Offset: 0x2564E68 VA: 0x2568E68 Slot: 7
	public override void PostLoad(SheetConvertingContext context) { }

	// RVA: 0x25690B4 Offset: 0x25650B4 VA: 0x25690B4
	public void .ctor() { }
}

