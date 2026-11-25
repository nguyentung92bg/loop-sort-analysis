// Namespace: 
public abstract class PlaySessionBase // TypeDefIndex: 4728
{
	// Properties
	public abstract LevelSheet.Level Level { get; }
	public abstract ThemeType Theme { get; }
	public abstract int LevelIdx { get; }
	public abstract int LoopCount { get; }
	public abstract string Label { get; }
	public virtual bool IsMainLevel { get; }
	public virtual bool HasBoosters { get; }
	public virtual bool HasRevive { get; }
	public virtual float TimeLimit { get; }
	public virtual bool Liquid { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	public abstract LevelSheet.Level get_Level();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract ThemeType get_Theme();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract int get_LevelIdx();

	// RVA: -1 Offset: -1 Slot: 7
	public abstract int get_LoopCount();

	// RVA: -1 Offset: -1 Slot: 8
	public abstract string get_Label();

	// RVA: 0x24FB9D8 Offset: 0x24F79D8 VA: 0x24FB9D8 Slot: 9
	public virtual bool get_IsMainLevel() { }

	// RVA: 0x24FB9E0 Offset: 0x24F79E0 VA: 0x24FB9E0 Slot: 10
	public virtual bool get_HasBoosters() { }

	// RVA: 0x24FB9E8 Offset: 0x24F79E8 VA: 0x24FB9E8 Slot: 11
	public virtual bool get_HasRevive() { }

	// RVA: 0x24FB9F0 Offset: 0x24F79F0 VA: 0x24FB9F0 Slot: 12
	public virtual float get_TimeLimit() { }

	// RVA: 0x24FB9F8 Offset: 0x24F79F8 VA: 0x24FB9F8 Slot: 13
	public virtual bool get_Liquid() { }

	// RVA: 0x24FBA00 Offset: 0x24F7A00 VA: 0x24FBA00 Slot: 14
	public virtual void OnWin() { }

	// RVA: 0x24FBA04 Offset: 0x24F7A04 VA: 0x24FBA04 Slot: 15
	public virtual void OnLose() { }

	// RVA: 0x24FBA08 Offset: 0x24F7A08 VA: 0x24FBA08
	protected void .ctor() { }
}

