// Namespace: 
public sealed class RocketSystem : SystemBase // TypeDefIndex: 4585
{
	// Fields
	[Inject]
	private Camera _camera; // 0x30
	[Inject]
	private Conveyor _conveyor; // 0x38
	[Inject]
	private RocketConfig _rocketConfig; // 0x40
	[Inject]
	private PrefabModule _prefabModule; // 0x48
	[Inject]
	private HiddenBlockSystem _hiddenBlockSystem; // 0x50
	[Inject]
	private HapticModule _hapticModule; // 0x58
	[Inject]
	private Materials _materials; // 0x60
	[Inject]
	private CoreStreak _coreStreak; // 0x68
	[Inject]
	private AudioModule _audioModule; // 0x70
	[Inject]
	private ISubscriber<CoreStreakRocketFireMessage> _coreStreakRocketFireSub; // 0x78
	[Inject]
	private ISubscriber<CarrierBlockCreateCompleteMessage> _carrierBlockCreateCompleteSub; // 0x80
	[Inject]
	private ISubscriber<CarrierBlockGroupUpdateMessage> _carrierBlockGroupUpdateSub; // 0x88
	private Filter _enabledCarriers; // 0x90
	private Stash<BehaviourView<Carrier>> _carriers; // 0x98
	private readonly HashSet<Block> _targetedBlocks; // 0xA0
	private readonly List<List<Block>> _fakeHiddenGroups; // 0xA8
	private const float MinMoveDirection = 0.001;
	private const float StrikeClearance = 0.15;

	// Methods

	// RVA: 0x24B8028 Offset: 0x24B4028 VA: 0x24B8028 Slot: 9
	public override void OnAwake() { }

	// RVA: 0x24B8180 Offset: 0x24B4180 VA: 0x24B8180 Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x24B8498 Offset: 0x24B4498 VA: 0x24B8498
	private void OnCoreStreakRocketFire(CoreStreakRocketFireMessage m) { }

	// RVA: 0x24B8580 Offset: 0x24B4580 VA: 0x24B8580
	private void OnCarrierBlockCreateComplete(CarrierBlockCreateCompleteMessage m) { }

	// RVA: 0x24B8644 Offset: 0x24B4644 VA: 0x24B8644
	private void OnCarrierBlockGroupUpdate(CarrierBlockGroupUpdateMessage m) { }

	[AsyncStateMachine(typeof(RocketSystem.<HandleCoreStreak>d__23))]
	// RVA: 0x24B84E0 Offset: 0x24B44E0 VA: 0x24B84E0
	private UniTaskVoid HandleCoreStreak(CoreStreakRocketFireMessage m) { }

	[AsyncStateMachine(typeof(RocketSystem.<Fire>d__24))]
	// RVA: 0x24B89DC Offset: 0x24B49DC VA: 0x24B89DC
	private UniTaskVoid Fire() { }

	// RVA: 0x24B8A70 Offset: 0x24B4A70 VA: 0x24B8A70
	private void FindTargetHiddenBlocks(List<Block> blocks) { }

	// RVA: 0x24B8C18 Offset: 0x24B4C18 VA: 0x24B8C18
	private void CollectHiddenBlockGroups(List<List<Block>> groups) { }

	// RVA: 0x24B8FAC Offset: 0x24B4FAC VA: 0x24B8FAC
	private void FindHiddenBlockGroups(Carrier carrier, List<List<Block>> groups) { }

	[AsyncStateMachine(typeof(RocketSystem.<AssignFakeHiddenBlocks>d__28))]
	// RVA: 0x24B85B4 Offset: 0x24B45B4 VA: 0x24B85B4
	private UniTaskVoid AssignFakeHiddenBlocks() { }

	// RVA: 0x24B91CC Offset: 0x24B51CC VA: 0x24B91CC
	private void CollectFakeHiddenCandidateGroups(List<List<Block>> groups) { }

	// RVA: 0x24B957C Offset: 0x24B557C VA: 0x24B957C
	private List<Block> FindFakeHiddenBlocks(List<Block> blocks) { }

	// RVA: 0x24B88E4 Offset: 0x24B48E4 VA: 0x24B88E4
	private void ApplyFakeHiddenMaterial(List<Block> group) { }

	// RVA: 0x24B8D60 Offset: 0x24B4D60 VA: 0x24B8D60
	private static void ReleaseGroups(List<List<Block>> groups) { }

	// RVA: 0x24B9954 Offset: 0x24B5954 VA: 0x24B9954
	private Vector3 GetSpawnPosition() { }

	// RVA: 0x24B99EC Offset: 0x24B59EC VA: 0x24B99EC
	private Vector3 GetApexPoint(Vector3 from, Vector3 to) { }

	// RVA: 0x24B9A90 Offset: 0x24B5A90 VA: 0x24B9A90
	private Vector3 GetStrikePoint(Vector3 to) { }

	// RVA: 0x24B9AD8 Offset: 0x24B5AD8 VA: 0x24B9AD8
	private MotionHandle ApplyFlightMotion(Transform instanceT, Transform cameraT, Vector3 from, Vector3 apex, Vector3 strike, Vector3 to) { }

	// RVA: 0x24B9F64 Offset: 0x24B5F64 VA: 0x24B9F64
	private static Vector3 GetFlightPoint(Vector3 from, Vector3 apex, Vector3 strike, Vector3 to, float t) { }

	// RVA: 0x24B9FFC Offset: 0x24B5FFC VA: 0x24B9FFC
	public void .ctor() { }
}

