// Namespace: 
public sealed class CapacityBoosterSystem : SystemBase // TypeDefIndex: 4469
{
	// Fields
	private const float BeltPastCarrier = 2.3;
	private const float BeltGrowDuration = 0.4;
	private Filter _filterDisabled; // 0x30
	private Stash<BehaviourView<Carrier>> _carriers; // 0x38
	private MotionHandle _beltGrowMotion; // 0x40
	private ParticleSystem _beltGrowTrail; // 0x50
	[Inject]
	private PrefabModule _prefabModule; // 0x58
	[Inject]
	private Particles _particles; // 0x60
	[Inject]
	private Conveyor _conveyor; // 0x68
	[Inject]
	private SplineComputer _splineComputer; // 0x70
	[Inject]
	private BlockTransferSystem _blockTransferSystem; // 0x78
	[Inject]
	private ConveyorArrowSystem _conveyorArrowSystem; // 0x80
	[Inject]
	private ConveyorEndMeshSystem _conveyorEndMeshSystem; // 0x88
	[Inject]
	private IPublisher<CameraUpdateBoundsMessage> _cameraUpdateBoundsPub; // 0x90

	// Methods

	// RVA: 0x23F499C Offset: 0x23F099C VA: 0x23F499C Slot: 9
	public override void OnAwake() { }

	// RVA: 0x23F48E4 Offset: 0x23F08E4 VA: 0x23F48E4
	public bool HasCapacityCarrier() { }

	[AsyncStateMachine(typeof(CapacityBoosterSystem.<IncreaseCapacity>d__16))]
	// RVA: 0x23F4904 Offset: 0x23F0904 VA: 0x23F4904
	public UniTaskVoid IncreaseCapacity() { }

	// RVA: 0x23F4AE8 Offset: 0x23F0AE8 VA: 0x23F4AE8
	private static bool ComesBefore(Carrier carrier, Carrier current) { }

	// RVA: 0x23F4B24 Offset: 0x23F0B24 VA: 0x23F4B24
	private void GrowBelt(Carrier carrier) { }

	// RVA: 0x23F4E48 Offset: 0x23F0E48 VA: 0x23F4E48
	public void .ctor() { }
}

