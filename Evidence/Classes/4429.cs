// Namespace: 
public sealed class BlockPhysicsSystem : SystemBase, IFixedSystem, ISystem, IInitializer, IDisposable // TypeDefIndex: 4429
{
	// Fields
	[Inject]
	private BlockConfig _config; // 0x30
	[Inject]
	private SplineComputer _splineComputer; // 0x38
	[Inject]
	private Conveyor _conveyor; // 0x40
	[Inject]
	private ISubscriber<ConveyorSlotAddBlockMessage> _conveyorSlotAddBlockSub; // 0x48
	[Inject]
	private ISubscriber<ConveyorSlotRemoveBlockMessage> _conveyorSlotRemoveBlockSub; // 0x50
	[Inject]
	private ISubscriber<LevelBuildCompleteMessage> _levelBuildCompleteSub; // 0x58
	private Filter _filter; // 0x60
	private Stash<BehaviourView<Block>> _blocks; // 0x68
	private const float PhysicsFixedDeltaTime = 0.0333;
	private const float PhysicsMaximumDeltaTime = 0.05;
	private Vector3[] _bakedPositions; // 0x70
	private Vector3[] _bakedTargetPositions; // 0x78
	private Vector3[] _bakedForward; // 0x80
	private Vector3[] _bakedUp; // 0x88
	private Dictionary<long, List<int>> _spatialHash; // 0x90
	private float _cellSize; // 0x98

	// Methods

	// RVA: 0x23E3374 Offset: 0x23DF374 VA: 0x23E3374 Slot: 9
	public override void OnAwake() { }

	// RVA: 0x23E34E8 Offset: 0x23DF4E8 VA: 0x23E34E8 Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x23E3808 Offset: 0x23DF808 VA: 0x23E3808
	private void OnConveyorSlotAddBlock(ConveyorSlotAddBlockMessage m) { }

	// RVA: 0x23E3F30 Offset: 0x23DFF30 VA: 0x23E3F30
	private void OnConveyorSlotRemoveBlock(ConveyorSlotRemoveBlockMessage m) { }

	// RVA: 0x23E3F6C Offset: 0x23DFF6C VA: 0x23E3F6C
	private void OnLevelBuildComplete(LevelBuildCompleteMessage m) { }

	// RVA: 0x23E43A8 Offset: 0x23E03A8 VA: 0x23E43A8 Slot: 10
	public override void OnUpdate(float deltaTime) { }

	// RVA: 0x23E3F84 Offset: 0x23DFF84 VA: 0x23E3F84
	private void BakeSpline(int sampleCount) { }

	// RVA: 0x23E49D8 Offset: 0x23E09D8 VA: 0x23E49D8
	private long HashPosition(Vector3 position) { }

	// RVA: 0x23E3A18 Offset: 0x23DFA18 VA: 0x23E3A18
	private Vector3 GetTargetForcePosition(Vector3 position, out int bestIndex) { }

	// RVA: 0x23E4B44 Offset: 0x23E0B44 VA: 0x23E4B44
	public void .ctor() { }
}

