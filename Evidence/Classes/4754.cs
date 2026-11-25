// Namespace: 
public sealed class GameWinState : GameStateBase // TypeDefIndex: 4754
{
	// Fields
	[Inject]
	private Monitors _monitors; // 0x70
	[Inject]
	private SceneModule _sceneModule; // 0x78
	[Inject]
	private AnalyticsModule _analyticsModule; // 0x80
	[Inject]
	private HapticModule _hapticModule; // 0x88
	[Inject]
	private AudioModule _audioModule; // 0x90
	[Inject]
	private InteractionModule _interactionModule; // 0x98
	[Inject]
	private TimeModule _timeModule; // 0xA0
	[Inject]
	private EconomyModule _economyModule; // 0xA8
	[Inject]
	private SheetContainer _sheetContainer; // 0xB0
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0xB8
	[Inject]
	private CloudSaveModule _cloudSaveModule; // 0xC0
	[Inject]
	private PlaySessionModule _playSessionModule; // 0xC8
	[Inject]
	private IPublisher<LevelWinMessage> _levelWinPub; // 0xD0
	[Inject]
	private ISubscriber<LevelLoseMessage> _levelLoseSub; // 0xD8
	private LevelAnimationConfig _levelAnimationConfig; // 0xE0

	// Methods

	// RVA: 0x2503C90 Offset: 0x24FFC90 VA: 0x2503C90 Slot: 5
	public override void Init() { }

	// RVA: 0x2503DF0 Offset: 0x24FFDF0 VA: 0x2503DF0 Slot: 6
	public override void OnEnter() { }

	[AsyncStateMachine(typeof(GameWinState.<OnEnterAsync>d__17))]
	// RVA: 0x2503E08 Offset: 0x24FFE08 VA: 0x2503E08
	private UniTaskVoid OnEnterAsync() { }

	// RVA: 0x2503E98 Offset: 0x24FFE98 VA: 0x2503E98 Slot: 8
	public override void OnExit() { }

	// RVA: 0x2503ED4 Offset: 0x24FFED4 VA: 0x2503ED4
	private void OnLevelLose(LevelLoseMessage m) { }

	// RVA: 0x2503F30 Offset: 0x24FFF30 VA: 0x2503F30
	private int GetGoldRewardQuantity(ThemeType themeType) { }

	// RVA: 0x2503FA4 Offset: 0x24FFFA4 VA: 0x2503FA4
	public void .ctor() { }
}

