// Namespace: 
public class WeeklyMissionSheet.Elem : SheetRowElem // TypeDefIndex: 5203
{
	// Fields
	[CompilerGenerated]
	private string <Mission>k__BackingField; // 0x18
	[CompilerGenerated]
	private string <Rewards>k__BackingField; // 0x20
	[CompilerGenerated]
	private WeeklyMissionSheet.MissionArgs <MissionParse>k__BackingField; // 0x28
	[CompilerGenerated]
	private readonly List<RewardInfo> <RewardsParse>k__BackingField; // 0x30
	[CompilerGenerated]
	private CloudPrefsBool <Claim>k__BackingField; // 0x38
	[CompilerGenerated]
	private CloudPrefsBool <Completed>k__BackingField; // 0x58

	// Properties
	public string Mission { get; set; }
	public string Rewards { get; set; }
	[NonSerialized]
	public WeeklyMissionSheet.MissionArgs MissionParse { get; set; }
	[NonSerialized]
	public List<RewardInfo> RewardsParse { get; }
	[NonSerialized]
	public CloudPrefsBool Claim { get; set; }
	[NonSerialized]
	public CloudPrefsBool Completed { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2569BD0 Offset: 0x2565BD0 VA: 0x2569BD0
	public string get_Mission() { }

	[CompilerGenerated]
	// RVA: 0x2569BD8 Offset: 0x2565BD8 VA: 0x2569BD8
	private void set_Mission(string value) { }

	[CompilerGenerated]
	// RVA: 0x2569BE0 Offset: 0x2565BE0 VA: 0x2569BE0
	public string get_Rewards() { }

	[CompilerGenerated]
	// RVA: 0x2569BE8 Offset: 0x2565BE8 VA: 0x2569BE8
	private void set_Rewards(string value) { }

	[CompilerGenerated]
	// RVA: 0x2569BF0 Offset: 0x2565BF0 VA: 0x2569BF0
	public WeeklyMissionSheet.MissionArgs get_MissionParse() { }

	[CompilerGenerated]
	// RVA: 0x2569BF8 Offset: 0x2565BF8 VA: 0x2569BF8
	private void set_MissionParse(WeeklyMissionSheet.MissionArgs value) { }

	[CompilerGenerated]
	// RVA: 0x2569C00 Offset: 0x2565C00 VA: 0x2569C00
	public List<RewardInfo> get_RewardsParse() { }

	[CompilerGenerated]
	// RVA: 0x2569C08 Offset: 0x2565C08 VA: 0x2569C08
	public CloudPrefsBool get_Claim() { }

	[CompilerGenerated]
	// RVA: 0x2569C18 Offset: 0x2565C18 VA: 0x2569C18
	public void set_Claim(CloudPrefsBool value) { }

	[CompilerGenerated]
	// RVA: 0x2569C38 Offset: 0x2565C38 VA: 0x2569C38
	public CloudPrefsBool get_Completed() { }

	[CompilerGenerated]
	// RVA: 0x2569C48 Offset: 0x2565C48 VA: 0x2569C48
	public void set_Completed(CloudPrefsBool value) { }

	// RVA: 0x2569C68 Offset: 0x2565C68 VA: 0x2569C68 Slot: 5
	public override void PostLoad(SheetConvertingContext context) { }

	// RVA: 0x2569E7C Offset: 0x2565E7C VA: 0x2569E7C
	public void .ctor() { }
}

