// Namespace: 
public sealed class FeatureSheet : Sheet<FeatureType, FeatureSheet.Feature> // TypeDefIndex: 5136
{
	// Fields
	private readonly List<FeatureSheet.Feature> _sortedFeatures; // 0x48
	private readonly CloudPrefsInt _level; // 0x50

	// Methods

	// RVA: 0x255F2CC Offset: 0x255B2CC VA: 0x255F2CC
	public void ResolveUnlockLevels(LevelSheet levels) { }

	// RVA: 0x255F994 Offset: 0x255B994 VA: 0x255F994
	private void MarkUnlocked(FeatureType type, int level) { }

	// RVA: 0x255FA20 Offset: 0x255BA20 VA: 0x255FA20
	public FeatureSheet.Progress GetCurrentProgress() { }

	// RVA: 0x255FC80 Offset: 0x255BC80 VA: 0x255FC80
	public bool TryGetUnlockedFeature(int level, out FeatureType unlockedFeature) { }

	// RVA: 0x255FEA4 Offset: 0x255BEA4 VA: 0x255FEA4
	public void .ctor() { }
}

