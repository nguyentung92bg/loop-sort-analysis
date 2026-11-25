// Namespace: 
public sealed class BoosterTutorial : TutorialBase // TypeDefIndex: 5540
{
	// Fields
	[Inject]
	private Boosters _boosters; // 0xB0
	[Inject]
	private SheetContainer _sheetContainer; // 0xB8
	private BoosterType _unlockedBooster; // 0xC0

	// Methods

	// RVA: 0x248FF74 Offset: 0x248BF74 VA: 0x248FF74 Slot: 19
	public override void SetCustomScope(LifetimeScope scope) { }

	[AsyncStateMachine(typeof(BoosterTutorial.<Play>d__4))]
	// RVA: 0x248FFE4 Offset: 0x248BFE4 VA: 0x248FFE4 Slot: 17
	public override UniTask<bool> Play(CancellationToken cancellationToken) { }

	// RVA: 0x24900F4 Offset: 0x248C0F4 VA: 0x24900F4
	public void .ctor() { }
}

