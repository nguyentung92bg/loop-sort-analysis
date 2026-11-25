// Namespace: 
public sealed class GameLoseState : GameStateBase // TypeDefIndex: 4735
{
	// Fields
	[Inject]
	private Monitors _monitors; // 0x70
	[Inject]
	private AnalyticsModule _analyticsModule; // 0x78
	[Inject]
	private InteractionModule _interactionModule; // 0x80
	[Inject]
	private EconomyModule _economyModule; // 0x88
	[Inject]
	private SceneModule _sceneModule; // 0x90
	[Inject]
	private LifeModule _lifeModule; // 0x98
	[Inject]
	private TimeModule _timeModule; // 0xA0
	[Inject]
	private CloudSaveModule _cloudSaveModule; // 0xA8
	[Inject]
	private PlaySessionModule _playSessionModule; // 0xB0
	[Inject]
	private IPublisher<LevelLoseMessage> _levelLosePub; // 0xB8
	[Inject]
	private ISubscriber<LevelLoseMessage> _levelLoseSub; // 0xC0

	// Methods

	// RVA: 0x24FDCD8 Offset: 0x24F9CD8 VA: 0x24FDCD8 Slot: 5
	public override void Init() { }

	// RVA: 0x24FDE08 Offset: 0x24F9E08 VA: 0x24FDE08 Slot: 6
	public override void OnEnter() { }

	// RVA: 0x24FE200 Offset: 0x24FA200 VA: 0x24FE200 Slot: 8
	public override void OnExit() { }

	// RVA: 0x24FE310 Offset: 0x24FA310 VA: 0x24FE310
	private void OnLevelLose(LevelLoseMessage m) { }

	// RVA: 0x24FE430 Offset: 0x24FA430 VA: 0x24FE430
	public void .ctor() { }
}

