// Namespace: 
public sealed class MainPlaySession : PlaySessionBase // TypeDefIndex: 4729
{
	// Fields
	public const int FirstBoosterLevel = 2;
	private readonly SheetContainer _sheetContainer; // 0x10

	// Properties
	private int MaxLevelOffset { get; }
	public override LevelSheet.Level Level { get; }
	public override ThemeType Theme { get; }
	public override int LevelIdx { get; }
	public override int LoopCount { get; }
	public override string Label { get; }
	public override bool HasBoosters { get; }

	// Methods

	// RVA: 0x24FBA10 Offset: 0x24F7A10 VA: 0x24FBA10
	public void .ctor(SheetContainer sheetContainer) { }

	// RVA: 0x24FBA40 Offset: 0x24F7A40 VA: 0x24FBA40
	private int get_MaxLevelOffset() { }

	// RVA: 0x24FBA9C Offset: 0x24F7A9C VA: 0x24FBA9C Slot: 4
	public override LevelSheet.Level get_Level() { }

	// RVA: 0x24FBAD0 Offset: 0x24F7AD0 VA: 0x24FBAD0 Slot: 5
	public override ThemeType get_Theme() { }

	// RVA: 0x24FBB70 Offset: 0x24F7B70 VA: 0x24FBB70 Slot: 6
	public override int get_LevelIdx() { }

	// RVA: 0x24FBBC8 Offset: 0x24F7BC8 VA: 0x24FBBC8 Slot: 7
	public override int get_LoopCount() { }

	// RVA: 0x24FBBF8 Offset: 0x24F7BF8 VA: 0x24FBBF8 Slot: 8
	public override string get_Label() { }

	// RVA: 0x24FBC90 Offset: 0x24F7C90 VA: 0x24FBC90 Slot: 10
	public override bool get_HasBoosters() { }
}

