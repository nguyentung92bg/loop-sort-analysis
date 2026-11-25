// Namespace: 
public sealed class FeatureTutorial : TutorialBase // TypeDefIndex: 5542
{
	// Fields
	[Inject]
	private Features _features; // 0xB0
	[Inject]
	private SheetContainer _sheetContainer; // 0xB8
	private FeatureType _unlockedFeature; // 0xC0

	// Methods

	// RVA: 0x2490718 Offset: 0x248C718 VA: 0x2490718 Slot: 19
	public override void SetCustomScope(LifetimeScope scope) { }

	[AsyncStateMachine(typeof(FeatureTutorial.<Play>d__4))]
	// RVA: 0x2490784 Offset: 0x248C784 VA: 0x2490784 Slot: 17
	public override UniTask<bool> Play(CancellationToken cancellationToken) { }

	// RVA: 0x2490894 Offset: 0x248C894 VA: 0x2490894
	public void .ctor() { }
}

