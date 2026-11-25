// Namespace: 
public sealed class LevelSheet : Sheet<int, LevelSheet.Level> // TypeDefIndex: 5160
{
	// Fields
	private readonly CloudPrefsInt _level; // 0x48
	private readonly ThemeType[] _themes; // 0x68

	// Methods

	// RVA: 0x2562700 Offset: 0x255E700 VA: 0x2562700
	public LevelSheet.Level GetCurrent(int maxLevelOffset = 0, int levelOffset = 0) { }

	// RVA: 0x2562A90 Offset: 0x255EA90 VA: 0x2562A90
	public ThemeType GetNextTheme(int frequency) { }

	// RVA: 0x2562B00 Offset: 0x255EB00 VA: 0x2562B00
	public int GetLoopCount(int maxLevelOffset = 0) { }

	// RVA: 0x2562D3C Offset: 0x255ED3C VA: 0x2562D3C
	public void .ctor() { }
}

