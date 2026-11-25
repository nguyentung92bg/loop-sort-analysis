// Namespace: 
public class StreakTowerSheet.Stage : SheetRow<int> // TypeDefIndex: 5198
{
	// Fields
	[CompilerGenerated]
	private int <MilestoneCount>k__BackingField; // 0x18
	[CompilerGenerated]
	private string <Rewards>k__BackingField; // 0x20
	private List<RewardInfo> _rewards; // 0x28
	[CompilerGenerated]
	private CloudPrefsBool <Claim>k__BackingField; // 0x30
	[CompilerGenerated]
	private int <StageMilestone>k__BackingField; // 0x50

	// Properties
	public int MilestoneCount { get; set; }
	public string Rewards { get; set; }
	[NonSerialized]
	public CloudPrefsBool Claim { get; set; }
	[NonSerialized]
	public int StageMilestone { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2568A04 Offset: 0x2564A04 VA: 0x2568A04
	public int get_MilestoneCount() { }

	[CompilerGenerated]
	// RVA: 0x2568A0C Offset: 0x2564A0C VA: 0x2568A0C
	private void set_MilestoneCount(int value) { }

	[CompilerGenerated]
	// RVA: 0x2568A14 Offset: 0x2564A14 VA: 0x2568A14
	public string get_Rewards() { }

	[CompilerGenerated]
	// RVA: 0x2568A1C Offset: 0x2564A1C VA: 0x2568A1C
	private void set_Rewards(string value) { }

	[CompilerGenerated]
	// RVA: 0x2568A24 Offset: 0x2564A24 VA: 0x2568A24
	public CloudPrefsBool get_Claim() { }

	[CompilerGenerated]
	// RVA: 0x2568A30 Offset: 0x2564A30 VA: 0x2568A30
	private void set_Claim(CloudPrefsBool value) { }

	[CompilerGenerated]
	// RVA: 0x2568A4C Offset: 0x2564A4C VA: 0x2568A4C
	public int get_StageMilestone() { }

	[CompilerGenerated]
	// RVA: 0x2568A54 Offset: 0x2564A54 VA: 0x2568A54
	public void set_StageMilestone(int value) { }

	// RVA: 0x2568A5C Offset: 0x2564A5C VA: 0x2568A5C Slot: 7
	public override void PostLoad(SheetConvertingContext context) { }

	// RVA: 0x2568B84 Offset: 0x2564B84 VA: 0x2568B84
	public List<RewardInfo> GetRewards() { }

	// RVA: 0x2568D80 Offset: 0x2564D80 VA: 0x2568D80
	public void .ctor() { }
}

