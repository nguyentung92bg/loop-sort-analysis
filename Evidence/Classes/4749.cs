// Namespace: 
public sealed class GameStartState : GameStateBase // TypeDefIndex: 4749
{
	// Fields
	[Inject]
	private SceneModule _sceneModule; // 0x70
	[Inject]
	private AnalyticsModule _analyticsModule; // 0x78
	[Inject]
	private TimeModule _timeModule; // 0x80
	[Inject]
	private AudioModule _audioModule; // 0x88
	[Inject]
	private Monitors _monitors; // 0x90
	[Inject]
	private CloudSaveModule _cloudSaveModule; // 0x98
	[Inject]
	private CoreStreak _coreStreak; // 0xA0
	[Inject]
	private PlaySessionModule _playSessionModule; // 0xA8
	[Inject]
	private ConnectivityModule _connectivityModule; // 0xB0

	// Methods

	// RVA: 0x2502A3C Offset: 0x24FEA3C VA: 0x2502A3C Slot: 6
	public override void OnEnter() { }

	// RVA: 0x2502AF4 Offset: 0x24FEAF4 VA: 0x2502AF4 Slot: 14
	public override bool CanEnter() { }

	[AsyncStateMachine(typeof(GameStartState.<OnEnterAsync>d__11))]
	// RVA: 0x2502A64 Offset: 0x24FEA64 VA: 0x2502A64
	private UniTaskVoid OnEnterAsync() { }

	[AsyncStateMachine(typeof(GameStartState.<TrackStartGame>d__12))]
	// RVA: 0x2502B74 Offset: 0x24FEB74 VA: 0x2502B74
	private UniTaskVoid TrackStartGame(LevelSheet.Level level) { }

	// RVA: 0x2502C20 Offset: 0x24FEC20 VA: 0x2502C20
	public void .ctor() { }
}

