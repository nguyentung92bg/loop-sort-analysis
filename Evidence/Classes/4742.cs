// Namespace: 
public sealed class GameMainMenuState : GameStateBase // TypeDefIndex: 4742
{
	// Fields
	[Inject]
	private Monitors _monitors; // 0x70
	[Inject]
	private AudioModule _audioModule; // 0x78
	[Inject]
	private SceneModule _sceneModule; // 0x80
	[Inject]
	private TimeModule _timeModule; // 0x88
	[Inject]
	private SheetContainer _sheetContainer; // 0x90
	[Inject]
	private LiveOpsModule _liveOpsModule; // 0x98
	[Inject]
	private CloudSaveModule _cloudSaveModule; // 0xA0
	[Inject]
	private PlaySessionModule _playSessionModule; // 0xA8
	[Inject]
	private FulfillModule _fulfillModule; // 0xB0
	[Inject]
	private AnalyticsModule _analyticsModule; // 0xB8

	// Methods

	// RVA: 0x24FE450 Offset: 0x24FA450 VA: 0x24FE450 Slot: 6
	public override void OnEnter() { }

	[AsyncStateMachine(typeof(GameMainMenuState.<OnEnterAsync>d__11))]
	// RVA: 0x24FE468 Offset: 0x24FA468 VA: 0x24FE468
	private UniTaskVoid OnEnterAsync() { }

	// RVA: 0x24FE4F8 Offset: 0x24FA4F8 VA: 0x24FE4F8 Slot: 8
	public override void OnExit() { }

	[AsyncStateMachine(typeof(GameMainMenuState.<HandleHomeActions>d__13))]
	// RVA: 0x24FE51C Offset: 0x24FA51C VA: 0x24FE51C
	private UniTaskVoid HandleHomeActions() { }

	[AsyncStateMachine(typeof(GameMainMenuState.<HandleAreaProgress>d__14))]
	// RVA: 0x24FE5AC Offset: 0x24FA5AC VA: 0x24FE5AC
	private UniTask HandleAreaProgress(HomeNavigationMonitor homeNavigationMonitor, CancellationToken token) { }

	[AsyncStateMachine(typeof(GameMainMenuState.<PlayAreaProgress>d__15))]
	// RVA: 0x24FE678 Offset: 0x24FA678 VA: 0x24FE678
	private UniTask PlayAreaProgress(HomeNavigationMonitor homeNavigationMonitor, int fromLevel, int toLevel, CancellationToken token) { }

	[AsyncStateMachine(typeof(GameMainMenuState.<HandleAreaComplete>d__16))]
	// RVA: 0x24FE758 Offset: 0x24FA758 VA: 0x24FE758
	private UniTask HandleAreaComplete() { }

	// RVA: 0x24FE7F0 Offset: 0x24FA7F0 VA: 0x24FE7F0
	private void ScheduleRefreshEventsNotification() { }

	// RVA: 0x24FEC68 Offset: 0x24FAC68 VA: 0x24FEC68
	public void .ctor() { }
}

