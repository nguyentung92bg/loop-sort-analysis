// Namespace: 
public sealed class CameraBoundsSystem : SystemBase // TypeDefIndex: 4607
{
	// Fields
	[Inject]
	private CameraConfig _config; // 0x30
	[Inject]
	private CinemachineTargetGroup _targetGroup; // 0x38
	[Inject]
	private CinemachineGroupFraming _groupFraming; // 0x40
	[Inject]
	private SplineComputer _splineComputer; // 0x48
	[Inject]
	private LevelSheet.Level _level; // 0x50
	[Inject]
	private Conveyor _conveyor; // 0x58
	[Inject]
	private ISubscriber<CameraUpdateBoundsMessage> _cameraUpdateBoundsSub; // 0x60
	[Inject]
	private IPublisher<CameraUpdateCompleteMessage> _cameraUpdateCompletePub; // 0x68
	private Transform _targetGroupParent; // 0x70
	private Transform _top; // 0x78
	private Transform _bottom; // 0x80
	private Transform _left; // 0x88
	private Transform _right; // 0x90
	private bool _isBoundsInitialized; // 0x98
	private MotionHandle _topMotion; // 0x9C
	private MotionHandle _bottomMotion; // 0xA8
	private MotionHandle _leftMotion; // 0xB4
	private MotionHandle _rightMotion; // 0xC0
	private Filter _filter; // 0xD0
	private Stash<BehaviourView<Carrier>> _carriers; // 0xD8

	// Methods

	// RVA: 0x24D50F4 Offset: 0x24D10F4 VA: 0x24D50F4 Slot: 9
	public override void OnAwake() { }

	// RVA: 0x24D53A4 Offset: 0x24D13A4 VA: 0x24D53A4 Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x24D54C4 Offset: 0x24D14C4 VA: 0x24D54C4
	private void OnCameraUpdateBounds(CameraUpdateBoundsMessage m) { }

	// RVA: 0x24D54C8 Offset: 0x24D14C8 VA: 0x24D54C8
	private void CalculateCameraBounds() { }

	// RVA: 0x24D6358 Offset: 0x24D2358 VA: 0x24D6358
	private void MoveTarget(Transform target, Vector3 to, ref MotionHandle motion) { }

	// RVA: 0x24D621C Offset: 0x24D221C VA: 0x24D621C
	private void SetGroupFramingSettings() { }

	// RVA: 0x24D5248 Offset: 0x24D1248 VA: 0x24D5248
	private void CreateTargetGroup() { }

	// RVA: 0x24D6484 Offset: 0x24D2484 VA: 0x24D6484
	private Transform CreateTarget(string targetName) { }

	// RVA: 0x24D6530 Offset: 0x24D2530 VA: 0x24D6530
	public void .ctor() { }
}

