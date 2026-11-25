// Namespace: 
public sealed class CoreStreak : LiveOpsBase // TypeDefIndex: 4803
{
	// Fields
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x10
	[Inject]
	private LiveOpsModule _liveOpsModule; // 0x18
	[Inject]
	private SheetContainer _sheetContainer; // 0x20
	[Inject]
	private Monitors _monitors; // 0x28
	[Inject]
	private PlaySessionModule _playSessionModule; // 0x30
	[Inject]
	private ISubscriber<LevelWinMessage> _levelWinSub; // 0x38
	[Inject]
	private ISubscriber<LevelLoseMessage> _levelLoseSub; // 0x40
	[Inject]
	private ISubscriber<ReviveContinueResultUpdateMessage> _reviveContinueResultUpdateSub; // 0x48
	[Inject]
	private IAsyncPublisher<CoreStreakHomeActionMessage> _coreStreakHomeActionPub; // 0x50
	public const int MaxWinStreak = 5;
	private CoreStreakConfig _config; // 0x58

	// Methods

	// RVA: 0x2512A28 Offset: 0x250EA28 VA: 0x2512A28 Slot: 5
	public override void Initialize() { }

	[AsyncStateMachine(typeof(CoreStreak.<ApplyHomeAction>d__12))]
	// RVA: 0x2512D6C Offset: 0x250ED6C VA: 0x2512D6C Slot: 6
	public override UniTask ApplyHomeAction(CancellationToken cancellationToken) { }

	// RVA: 0x2512E24 Offset: 0x250EE24 VA: 0x2512E24 Slot: 13
	public override bool CanShow() { }

	// RVA: 0x2512E3C Offset: 0x250EE3C VA: 0x2512E3C Slot: 14
	public override bool CanShowInHome() { }

	// RVA: 0x2512E54 Offset: 0x250EE54 VA: 0x2512E54 Slot: 12
	public override bool CanAutoJoin() { }

	// RVA: 0x2512E5C Offset: 0x250EE5C VA: 0x2512E5C Slot: 9
	public override bool CanComplete() { }

	// RVA: 0x2512D54 Offset: 0x250ED54 VA: 0x2512D54
	public bool IsActive() { }

	// RVA: 0x2512E64 Offset: 0x250EE64 VA: 0x2512E64
	public bool IsUnlocked() { }

	// RVA: 0x2512EE4 Offset: 0x250EEE4 VA: 0x2512EE4
	private void OnLevelWin(LevelWinMessage m) { }

	// RVA: 0x2512FEC Offset: 0x250EFEC VA: 0x2512FEC
	private void OnLevelLose(LevelLoseMessage m) { }

	// RVA: 0x2513068 Offset: 0x250F068 VA: 0x2513068
	private void OnReviveContinueResultUpdate(ReviveContinueResultUpdateMessage m) { }

	// RVA: 0x2513268 Offset: 0x250F268 VA: 0x2513268
	public int GetCurrentItemCount() { }

	[AsyncStateMachine(typeof(CoreStreak.<UpdateBarView>d__23))]
	// RVA: 0x2513184 Offset: 0x250F184 VA: 0x2513184
	public UniTask UpdateBarView(StatefulComponent view, bool withMotion = False, CancellationToken cancellationToken) { }

	// RVA: 0x251333C Offset: 0x250F33C VA: 0x251333C
	public void .ctor() { }
}

