// Namespace: 
public sealed class BlockTransferSystem : SystemBase // TypeDefIndex: 4432
{
	// Fields
	[Inject]
	private SplineComputer _splineComputer; // 0x30
	[Inject]
	private GameMachine _gameMachine; // 0x38
	[Inject]
	private AudioModule _audioModule; // 0x40
	[Inject]
	private Conveyor _conveyor; // 0x48
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x50
	[Inject]
	private IObjectResolver _resolver; // 0x58
	private SandFlowSystem _sandFlowSystem; // 0x60
	[Inject]
	private ISubscriber<BlockTransferMessage> _blockTransferSub; // 0x68
	[Inject]
	private ISubscriber<LevelBuildCompleteMessage> _levelBuildCompleteSub; // 0x70
	[Inject]
	private IPublisher<BlockTransferCompleteMessage> _blockTransferCompletePub; // 0x78
	[Inject]
	private IPublisher<BlockTransferStartMessage> _blockTransferStartPub; // 0x80
	[Inject]
	private IPublisher<BlockTransferRejectMessage> _blockTransferRejectPub; // 0x88
	[Inject]
	private IPublisher<BlockCarrierMeshUpdateMessage> _blockCarrierMeshUpdatePub; // 0x90
	private Filter _conveyorSlotFilter; // 0x98
	private Stash<BehaviourView<Carrier>> _carriers; // 0xA0
	private Stash<BehaviourView<ConveyorSlot>> _conveyorSlots; // 0xA8
	private Stash<BlockLoop> _blockLoops; // 0xB0
	private Stash<BlockTransferCarrier> _blockTransferCarriers; // 0xB8
	private Stash<BlockGroup> _blockGroups; // 0xC0
	private Stash<BlockTransferBond> _blockTransferBonds; // 0xC8
	private PaceConfig _paceConfig; // 0xD0
	private BlockTransferConfig _blockTransferConfig; // 0xD8
	private int _nextGroupId; // 0xE0
	private readonly Dictionary<Carrier, Carrier> _removeTransferBlockTarget; // 0xE8
	private readonly Dictionary<int, Carrier> _groupTargetCarrier; // 0xF0

	// Methods

	// RVA: 0x23E4B4C Offset: 0x23E0B4C VA: 0x23E4B4C Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x23E4D58 Offset: 0x23E0D58 VA: 0x23E4D58 Slot: 9
	public override void OnAwake() { }

	// RVA: 0x23E4FC8 Offset: 0x23E0FC8 VA: 0x23E4FC8
	private void OnLevelBuildComplete(LevelBuildCompleteMessage m) { }

	// RVA: 0x23E4FCC Offset: 0x23E0FCC VA: 0x23E4FCC
	public void SetRemoveTransferBlockTargets() { }

	// RVA: 0x23E5BC8 Offset: 0x23E1BC8 VA: 0x23E5BC8
	private ConveyorSlot FindEmptySlot() { }

	// RVA: 0x23E5D24 Offset: 0x23E1D24 VA: 0x23E5D24
	private double ProjectEmptySlotPercent(Carrier carrier) { }

	// RVA: 0x23E5D74 Offset: 0x23E1D74 VA: 0x23E5D74
	private void OnBlockTransfer(BlockTransferMessage m) { }

	// RVA: 0x23E5D78 Offset: 0x23E1D78 VA: 0x23E5D78
	private void TransferNextBlocks(Carrier carrier) { }

	[AsyncStateMachine(typeof(BlockTransferSystem.<TransferBlocks>d__33))]
	// RVA: 0x23E60C0 Offset: 0x23E20C0 VA: 0x23E60C0
	public UniTask TransferBlocks(Carrier carrier, List<Block> blocks) { }

	// RVA: 0x23E618C Offset: 0x23E218C VA: 0x23E618C
	private void RemoveGroupTargets(Carrier carrier) { }

	// RVA: 0x23E669C Offset: 0x23E269C VA: 0x23E669C
	private void HandleHiddenBlockReveal(Carrier carrier, List<Block> blocks) { }

	// RVA: 0x23E6970 Offset: 0x23E2970 VA: 0x23E6970
	private void HandleBondedTransfer(List<Block> blocks) { }

	// RVA: 0x23E6C38 Offset: 0x23E2C38 VA: 0x23E6C38
	private void HandleSurpriseTransfer(List<Block> blocks) { }

	// RVA: 0x23E6EE0 Offset: 0x23E2EE0 VA: 0x23E6EE0
	private int GetConveyorBlockCount() { }

	// RVA: 0x23E5F38 Offset: 0x23E1F38 VA: 0x23E5F38
	private void TrimBlocks(Carrier carrier, List<Block> blocks) { }

	// RVA: 0x23E7028 Offset: 0x23E3028 VA: 0x23E7028
	private void HandleCarrierTrigger(SplineUser splineUser, Carrier carrier) { }

	// RVA: 0x23E7118 Offset: 0x23E3118 VA: 0x23E7118
	public void HandleCarrierTrigger(Carrier carrier, List<Block> blocks) { }

	// RVA: 0x23E7870 Offset: 0x23E3870 VA: 0x23E7870
	private bool HasBetterCarrier(Carrier referenceCarrier, Block block) { }

	// RVA: 0x23E7B34 Offset: 0x23E3B34 VA: 0x23E7B34
	public void .ctor() { }
}

