// Namespace: 
public class LiveOpsSheet.Row : SheetRow<LiveOps> // TypeDefIndex: 5162
{
	// Fields
	[CompilerGenerated]
	private int <RefreshMinutes>k__BackingField; // 0x18
	[CompilerGenerated]
	private int <IntervalMinutes>k__BackingField; // 0x1C
	[CompilerGenerated]
	private bool <Welcome>k__BackingField; // 0x20
	[CompilerGenerated]
	private string <WeeklyScheduleUtc>k__BackingField; // 0x28
	[CompilerGenerated]
	private bool <Sync>k__BackingField; // 0x30
	[CompilerGenerated]
	private CloudPrefsT<DateTimeOffset> <RefreshTimestampUtc>k__BackingField; // 0x38
	[CompilerGenerated]
	private CloudPrefsT<DateTimeOffset> <JoinTimestampUtc>k__BackingField; // 0x68
	[CompilerGenerated]
	private CloudPrefsT<DateTimeOffset> <IntervalTimestampUtc>k__BackingField; // 0x98
	[CompilerGenerated]
	private CloudPrefsInt <JoinCount>k__BackingField; // 0xC8
	private List<LiveOpsSheet.Row.WeeklyMoment> _weeklyMoments; // 0xE8
	private static readonly DateTimeOffset GlobalAnchor; // 0x0

	// Properties
	public int RefreshMinutes { get; set; }
	public int IntervalMinutes { get; set; }
	public bool Welcome { get; set; }
	public string WeeklyScheduleUtc { get; set; }
	public bool Sync { get; set; }
	[NonSerialized]
	public CloudPrefsT<DateTimeOffset> RefreshTimestampUtc { get; set; }
	[NonSerialized]
	public CloudPrefsT<DateTimeOffset> JoinTimestampUtc { get; set; }
	[NonSerialized]
	public CloudPrefsT<DateTimeOffset> IntervalTimestampUtc { get; set; }
	[NonSerialized]
	public CloudPrefsInt JoinCount { get; set; }
	public bool HasWeeklySchedule { get; }
	public bool HasPostCompletionCooldown { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2562FA0 Offset: 0x255EFA0 VA: 0x2562FA0
	public int get_RefreshMinutes() { }

	[CompilerGenerated]
	// RVA: 0x2562FA8 Offset: 0x255EFA8 VA: 0x2562FA8
	private void set_RefreshMinutes(int value) { }

	[CompilerGenerated]
	// RVA: 0x2562FB0 Offset: 0x255EFB0 VA: 0x2562FB0
	public int get_IntervalMinutes() { }

	[CompilerGenerated]
	// RVA: 0x2562FB8 Offset: 0x255EFB8 VA: 0x2562FB8
	private void set_IntervalMinutes(int value) { }

	[CompilerGenerated]
	// RVA: 0x2562FC0 Offset: 0x255EFC0 VA: 0x2562FC0
	public bool get_Welcome() { }

	[CompilerGenerated]
	// RVA: 0x2562FC8 Offset: 0x255EFC8 VA: 0x2562FC8
	private void set_Welcome(bool value) { }

	[CompilerGenerated]
	// RVA: 0x2562FD0 Offset: 0x255EFD0 VA: 0x2562FD0
	public string get_WeeklyScheduleUtc() { }

	[CompilerGenerated]
	// RVA: 0x2562FD8 Offset: 0x255EFD8 VA: 0x2562FD8
	private void set_WeeklyScheduleUtc(string value) { }

	[CompilerGenerated]
	// RVA: 0x2562FE0 Offset: 0x255EFE0 VA: 0x2562FE0
	public bool get_Sync() { }

	[CompilerGenerated]
	// RVA: 0x2562FE8 Offset: 0x255EFE8 VA: 0x2562FE8
	private void set_Sync(bool value) { }

	[CompilerGenerated]
	// RVA: 0x2562FF0 Offset: 0x255EFF0 VA: 0x2562FF0
	public CloudPrefsT<DateTimeOffset> get_RefreshTimestampUtc() { }

	[CompilerGenerated]
	// RVA: 0x2563008 Offset: 0x255F008 VA: 0x2563008
	private void set_RefreshTimestampUtc(CloudPrefsT<DateTimeOffset> value) { }

	[CompilerGenerated]
	// RVA: 0x2563030 Offset: 0x255F030 VA: 0x2563030
	public CloudPrefsT<DateTimeOffset> get_JoinTimestampUtc() { }

	[CompilerGenerated]
	// RVA: 0x2563048 Offset: 0x255F048 VA: 0x2563048
	private void set_JoinTimestampUtc(CloudPrefsT<DateTimeOffset> value) { }

	[CompilerGenerated]
	// RVA: 0x2563070 Offset: 0x255F070 VA: 0x2563070
	public CloudPrefsT<DateTimeOffset> get_IntervalTimestampUtc() { }

	[CompilerGenerated]
	// RVA: 0x2563088 Offset: 0x255F088 VA: 0x2563088
	private void set_IntervalTimestampUtc(CloudPrefsT<DateTimeOffset> value) { }

	[CompilerGenerated]
	// RVA: 0x25630B0 Offset: 0x255F0B0 VA: 0x25630B0
	public CloudPrefsInt get_JoinCount() { }

	[CompilerGenerated]
	// RVA: 0x25630C0 Offset: 0x255F0C0 VA: 0x25630C0
	private void set_JoinCount(CloudPrefsInt value) { }

	// RVA: 0x25630E0 Offset: 0x255F0E0 VA: 0x25630E0
	public bool get_HasWeeklySchedule() { }

	// RVA: 0x256312C Offset: 0x255F12C VA: 0x256312C
	public bool get_HasPostCompletionCooldown() { }

	// RVA: 0x256316C Offset: 0x255F16C VA: 0x256316C Slot: 7
	public override void PostLoad(SheetConvertingContext context) { }

	// RVA: 0x25636B4 Offset: 0x255F6B4 VA: 0x25636B4
	public DateTimeOffset GetJoinStartTime(DateTimeOffset utcNow) { }

	// RVA: 0x2563B6C Offset: 0x255FB6C VA: 0x2563B6C
	public DateTimeOffset GetNextJoinStartTime(DateTimeOffset utcNow) { }

	// RVA: 0x2563F70 Offset: 0x255FF70 VA: 0x2563F70
	public void .ctor() { }

	// RVA: 0x2563FB8 Offset: 0x255FFB8 VA: 0x2563FB8
	private static void .cctor() { }
}

