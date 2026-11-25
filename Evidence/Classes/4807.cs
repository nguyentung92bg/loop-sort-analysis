// Namespace: 
private sealed class DailyChallenge.PlaySession : PlaySessionBase // TypeDefIndex: 4807
{
	// Fields
	private readonly DailyChallenge _dailyChallenge; // 0x10
	private readonly DateTime _date; // 0x18
	[CompilerGenerated]
	private readonly LevelSheet.Level <Level>k__BackingField; // 0x20

	// Properties
	public override LevelSheet.Level Level { get; }
	public override ThemeType Theme { get; }
	public override int LevelIdx { get; }
	public override int LoopCount { get; }
	public override string Label { get; }
	public override bool IsMainLevel { get; }
	public override bool HasBoosters { get; }
	public override bool HasRevive { get; }
	public override float TimeLimit { get; }
	public override bool Liquid { get; }

	// Methods

	// RVA: 0x2516A08 Offset: 0x2512A08 VA: 0x2516A08
	public void .ctor(DailyChallenge dailyChallenge, LevelSheet.Level level, DateTime date) { }

	[CompilerGenerated]
	// RVA: 0x2516A5C Offset: 0x2512A5C VA: 0x2516A5C Slot: 4
	public override LevelSheet.Level get_Level() { }

	// RVA: 0x2516A64 Offset: 0x2512A64 VA: 0x2516A64 Slot: 5
	public override ThemeType get_Theme() { }

	// RVA: 0x2516A88 Offset: 0x2512A88 VA: 0x2516A88 Slot: 6
	public override int get_LevelIdx() { }

	// RVA: 0x2516A90 Offset: 0x2512A90 VA: 0x2516A90 Slot: 7
	public override int get_LoopCount() { }

	// RVA: 0x2516A98 Offset: 0x2512A98 VA: 0x2516A98 Slot: 8
	public override string get_Label() { }

	// RVA: 0x2516B40 Offset: 0x2512B40 VA: 0x2516B40 Slot: 9
	public override bool get_IsMainLevel() { }

	// RVA: 0x2516B48 Offset: 0x2512B48 VA: 0x2516B48 Slot: 10
	public override bool get_HasBoosters() { }

	// RVA: 0x2516B50 Offset: 0x2512B50 VA: 0x2516B50 Slot: 11
	public override bool get_HasRevive() { }

	// RVA: 0x2516B58 Offset: 0x2512B58 VA: 0x2516B58 Slot: 12
	public override float get_TimeLimit() { }

	// RVA: 0x2516B64 Offset: 0x2512B64 VA: 0x2516B64 Slot: 13
	public override bool get_Liquid() { }

	// RVA: 0x2516B88 Offset: 0x2512B88 VA: 0x2516B88 Slot: 14
	public override void OnWin() { }

	// RVA: 0x2516BC4 Offset: 0x2512BC4 VA: 0x2516BC4 Slot: 15
	public override void OnLose() { }
}

