// Namespace: 
public sealed class LevelAnimationSystem : SystemBase // TypeDefIndex: 4618
{
	// Fields
	[Inject]
	private ISubscriber<CameraUpdateCompleteMessage> _cameraUpdateCompleteSub; // 0x30
	[Inject]
	private ISubscriber<LevelWinMessage> _levelWinSub; // 0x38
	[Inject]
	private IPublisher<LevelAnimationEnterStartMessage> _levelAnimationEnterStartPub; // 0x40
	[Inject]
	private IPublisher<LevelAnimationEnterCompleteMessage> _levelAnimationEnterCompletePub; // 0x48
	[Inject]
	private IPublisher<LevelAnimationCarrierCompleteMessage> _levelAnimationCarrierCompletePub; // 0x50
	[Inject]
	private SplineMesh _splineMesh; // 0x58
	[Inject]
	private ConveyorArrowSystem _conveyorArrowSystem; // 0x60
	[Inject]
	private ConveyorEndMeshSystem _conveyorEndMeshSystem; // 0x68
	[Inject]
	private PrefabModule _prefabModule; // 0x70
	[Inject]
	private Particles _particles; // 0x78
	[Inject]
	private InteractionModule _interactionModule; // 0x80
	[Inject]
	private Monitors _monitors; // 0x88
	[Inject]
	private CameraConfig _cameraConfig; // 0x90
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x98
	[Inject]
	private Conveyor _conveyor; // 0xA0
	private Filter _carrierFilter; // 0xA8
	private Stash<BehaviourView<Carrier>> _carriers; // 0xB0
	private Stash<Enabled> _enabledEntities; // 0xB8
	private ParticleSystem _conveyorTrail; // 0xC0
	private bool _isLevelEntered; // 0xC8
	private LevelAnimationConfig _levelAnimationConfig; // 0xD0
	private CameraUpdateCompleteMessage _cameraMessage; // 0xD8
	private readonly List<UniTask> _tasks; // 0x118

	// Methods

	// RVA: 0x24D7860 Offset: 0x24D3860 VA: 0x24D7860 Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x24D7A7C Offset: 0x24D3A7C VA: 0x24D7A7C Slot: 9
	public override void OnAwake() { }

	// RVA: 0x24D7C58 Offset: 0x24D3C58 VA: 0x24D7C58
	private void OnCameraUpdateComplete(CameraUpdateCompleteMessage m) { }

	[AsyncStateMachine(typeof(LevelAnimationSystem.<HandleLevelEnterAnimation>d__26))]
	// RVA: 0x24D7D4C Offset: 0x24D3D4C VA: 0x24D7D4C
	private UniTaskVoid HandleLevelEnterAnimation() { }

	// RVA: 0x24D7DDC Offset: 0x24D3DDC VA: 0x24D7DDC
	private void OnLevelWin(LevelWinMessage m) { }

	// RVA: 0x24D7E8C Offset: 0x24D3E8C VA: 0x24D7E8C
	private void ApplyMoveMotion(Carrier carrier, Vector3 from, Vector3 to) { }

	// RVA: 0x24D8438 Offset: 0x24D4438 VA: 0x24D8438
	private void ApplyPostMoveMotion(Carrier carrier, Vector3 originalDirection, Vector3 carrierDirection) { }

	// RVA: 0x24D89C4 Offset: 0x24D49C4 VA: 0x24D89C4
	private Vector3 GetPositionOutOfCameraBounds(Transform t) { }

	[AsyncStateMachine(typeof(LevelAnimationSystem.<ApplyLevelEnter>d__31))]
	// RVA: 0x24D8D20 Offset: 0x24D4D20 VA: 0x24D8D20
	private UniTask ApplyLevelEnter() { }

	[AsyncStateMachine(typeof(LevelAnimationSystem.<ApplyLevelExit>d__32))]
	// RVA: 0x24D7DFC Offset: 0x24D3DFC VA: 0x24D7DFC
	private UniTaskVoid ApplyLevelExit() { }

	// RVA: 0x24D8DBC Offset: 0x24D4DBC VA: 0x24D8DBC
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x24D8E44 Offset: 0x24D4E44 VA: 0x24D8E44
	private void <ApplyLevelEnter>b__31_0(float x) { }

	[CompilerGenerated]
	// RVA: 0x24D8ED8 Offset: 0x24D4ED8 VA: 0x24D8ED8
	private void <ApplyLevelExit>b__32_0(float x) { }
}

