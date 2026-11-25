// Namespace: 
public sealed class BlockTriggerSystem : SystemBase, IFixedSystem, ISystem, IInitializer, IDisposable // TypeDefIndex: 4443
{
	// Fields
	[Inject]
	private SplineComputer _splineComputer; // 0x30
	[Inject]
	private GameMachine _gameMachine; // 0x38
	[Inject]
	private ConveyorConfig _conveyorConfig; // 0x40
	[Inject]
	private BlockTransferSystem _blockTransferSystem; // 0x48
	[Inject]
	private SandFlowSystem _sandFlowSystem; // 0x50
	[Inject]
	private ISubscriber<LevelBuildCompleteMessage> _levelBuildCompleteSub; // 0x58
	private Stash<BehaviourView<Carrier>> _carriers; // 0x60

	// Methods

	// RVA: 0x23E9214 Offset: 0x23E5214 VA: 0x23E9214 Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x23E9344 Offset: 0x23E5344 VA: 0x23E9344
	private void OnLevelBuildComplete(LevelBuildCompleteMessage obj) { }

	// RVA: 0x23E9348 Offset: 0x23E5348 VA: 0x23E9348
	private void AddCarrierTriggers() { }

	// RVA: 0x23E98B8 Offset: 0x23E58B8 VA: 0x23E98B8 Slot: 9
	public override void OnAwake() { }

	// RVA: 0x23E991C Offset: 0x23E591C VA: 0x23E991C
	public void .ctor() { }
}

