// Namespace: 
public sealed class ConveyorArrowSystem : SystemBase // TypeDefIndex: 4551
{
	// Fields
	[Inject]
	private ConveyorConfig _config; // 0x30
	[Inject]
	private SplineComputer _splineComputer; // 0x38
	[Inject]
	private PrefabModule _prefabModule; // 0x40
	[Inject]
	private Conveyor _conveyor; // 0x48
	[Inject]
	private ISubscriber<LevelBuildCompleteMessage> _levelBuildCompleteSub; // 0x50
	public readonly List<SplineFollower> Arrows; // 0x58
	private bool _scrollsAlongBelt; // 0x60
	private float _scroll; // 0x64

	// Methods

	// RVA: 0x24B1694 Offset: 0x24AD694 VA: 0x24B1694 Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x24B17B4 Offset: 0x24AD7B4 VA: 0x24B17B4
	private void OnLevelBuildComplete(LevelBuildCompleteMessage obj) { }

	// RVA: 0x24B1868 Offset: 0x24AD868 VA: 0x24B1868 Slot: 10
	public override void OnUpdate(float deltaTime) { }

	[AsyncStateMachine(typeof(ConveyorArrowSystem.<CreateArrows>d__11))]
	// RVA: 0x24B17D8 Offset: 0x24AD7D8 VA: 0x24B17D8
	private UniTaskVoid CreateArrows() { }

	// RVA: 0x24B1B94 Offset: 0x24ADB94 VA: 0x24B1B94
	public void Extend() { }

	// RVA: 0x24B1CE8 Offset: 0x24ADCE8 VA: 0x24B1CE8
	private SplineFollower RentArrow(bool follow) { }

	// RVA: 0x24B1E38 Offset: 0x24ADE38 VA: 0x24B1E38
	public void .ctor() { }
}

