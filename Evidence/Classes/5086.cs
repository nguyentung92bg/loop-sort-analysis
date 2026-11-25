// Namespace: 
public struct Level // TypeDefIndex: 5086
{
	// Fields
	public int Index; // 0x0
	public CloudPrefsInt LoseCount; // 0x8
	private readonly LevelSheet.Level _level; // 0x28
	private readonly List<ColorType> _colorTypes; // 0x30
	private readonly Dictionary<ColorType, int> _idxByColorType; // 0x38
	private readonly int _loopCount; // 0x40
	private readonly bool _noColorRandomisation; // 0x44

	// Methods

	// RVA: 0x25557B8 Offset: 0x25517B8 VA: 0x25557B8
	public void .ctor(int idx, LevelSheet.Level level, int loopCount, RemoteConfigModule remoteConfigModule) { }

	// RVA: 0x2555CA8 Offset: 0x2551CA8 VA: 0x2555CA8
	public ColorType GetColor(string data) { }

	// RVA: 0x2555CDC Offset: 0x2551CDC VA: 0x2555CDC
	public ColorType GetColor(ColorType color) { }
}

