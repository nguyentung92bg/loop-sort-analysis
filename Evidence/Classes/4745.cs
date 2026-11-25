// Namespace: 
public sealed class GameReviveState : GameStateBase // TypeDefIndex: 4745
{
	// Fields
	[Inject]
	private Monitors _monitors; // 0x70
	[Inject]
	private SceneModule _sceneModule; // 0x78
	[Inject]
	private HapticModule _hapticModule; // 0x80
	[Inject]
	private AudioModule _audioModule; // 0x88
	[Inject]
	private InteractionModule _interactionModule; // 0x90
	[Inject]
	private TimeModule _timeModule; // 0x98
	[Inject]
	private LifeModule _lifeModule; // 0xA0
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0xA8
	[Inject]
	private PlaySessionModule _playSessionModule; // 0xB0
	private GiveUpConfig _giveUpConfig; // 0xB8
	private PaceConfig _paceConfig; // 0xC0

	// Methods

	// RVA: 0x2501DC4 Offset: 0x24FDDC4 VA: 0x2501DC4 Slot: 5
	public override void Init() { }

	// RVA: 0x2501E7C Offset: 0x24FDE7C VA: 0x2501E7C Slot: 6
	public override void OnEnter() { }

	[AsyncStateMachine(typeof(GameReviveState.<OnEnterAsync>d__13))]
	// RVA: 0x2501E94 Offset: 0x24FDE94 VA: 0x2501E94
	private UniTaskVoid OnEnterAsync() { }

	// RVA: 0x2501F28 Offset: 0x24FDF28 VA: 0x2501F28 Slot: 8
	public override void OnExit() { }

	// RVA: 0x2501F50 Offset: 0x24FDF50 VA: 0x2501F50
	public void .ctor() { }
}

