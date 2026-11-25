// Namespace: 
public sealed class ConveyorCapacityBooster : BoosterBase // TypeDefIndex: 4472
{
	// Fields
	[SerializeField]
	private Canvas Canvas; // 0xB8
	[SerializeField]
	private Transform IconParentT; // 0xC0
	[SerializeField]
	private Transform IconT; // 0xC8
	[Inject]
	private ConveyorCapacityBoosterSystem _conveyorCapacityBoosterSystem; // 0xD0
	[Inject]
	private Monitors _monitors; // 0xD8
	[Inject]
	private Camera _camera; // 0xE0
	private readonly CompositeMotionHandle _motions; // 0xE8

	// Methods

	// RVA: 0x23F80AC Offset: 0x23F40AC VA: 0x23F80AC Slot: 6
	protected override void Awake() { }

	// RVA: 0x23F80EC Offset: 0x23F40EC VA: 0x23F80EC Slot: 7
	protected override void Start() { }

	// RVA: 0x23F8198 Offset: 0x23F4198 VA: 0x23F8198 Slot: 10
	protected override void OnDestroy() { }

	[AsyncStateMachine(typeof(ConveyorCapacityBooster.<Apply>d__10))]
	// RVA: 0x23F8108 Offset: 0x23F4108 VA: 0x23F8108
	private UniTaskVoid Apply() { }

	[AsyncStateMachine(typeof(ConveyorCapacityBooster.<ApplyIconMotion>d__11))]
	// RVA: 0x23F81C0 Offset: 0x23F41C0 VA: 0x23F81C0
	private UniTask ApplyIconMotion() { }

	// RVA: 0x23F825C Offset: 0x23F425C VA: 0x23F825C
	public void .ctor() { }
}

