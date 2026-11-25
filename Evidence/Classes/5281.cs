// Namespace: 
public sealed class CoreStreakHomeElement : ElementBase // TypeDefIndex: 5281
{
	// Fields
	[Inject]
	private CoreStreak _coreStreak; // 0x28
	[Inject]
	private LiveOpsModule _liveOpsModule; // 0x30
	[Inject]
	private IAsyncSubscriber<CoreStreakHomeActionMessage> _coreStreakHomeActionSub; // 0x38
	private StatefulComponent _barView; // 0x40

	// Methods

	// RVA: 0x24186D0 Offset: 0x24146D0 VA: 0x24186D0 Slot: 8
	public override void Setup() { }

	// RVA: 0x241887C Offset: 0x241487C VA: 0x241887C
	private void OnSelectClicked() { }

	[AsyncStateMachine(typeof(CoreStreakHomeElement.<OnHomeAction>d__6))]
	// RVA: 0x24188B0 Offset: 0x24148B0 VA: 0x24188B0
	private UniTask OnHomeAction(CoreStreakHomeActionMessage m, CancellationToken cancellationToken) { }

	// RVA: 0x2418968 Offset: 0x2414968 VA: 0x2418968
	public void .ctor() { }
}

