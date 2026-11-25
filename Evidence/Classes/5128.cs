// Namespace: 
public sealed class DailyChallengeSheetModule : ModuleBase // TypeDefIndex: 5128
{
	// Fields
	private Nullable<bool> _hasData; // 0x10
	private Nullable<UniTask<DailyChallengeSheetContainer>> _loadTask; // 0x18

	// Properties
	public bool HasData { get; }

	// Methods

	// RVA: 0x255E38C Offset: 0x255A38C VA: 0x255E38C
	public bool get_HasData() { }

	// RVA: 0x255E54C Offset: 0x255A54C VA: 0x255E54C
	public UniTask<DailyChallengeSheetContainer> LoadAsync() { }

	[AsyncStateMachine(typeof(DailyChallengeSheetModule.<BakeAsync>d__5))]
	// RVA: 0x255E738 Offset: 0x255A738 VA: 0x255E738
	private static UniTask<DailyChallengeSheetContainer> BakeAsync() { }

	// RVA: 0x255E830 Offset: 0x255A830 VA: 0x255E830
	public void .ctor() { }
}

