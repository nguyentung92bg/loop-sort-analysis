// Namespace: 
public sealed class BlockNextTransferSystem : SystemBase // TypeDefIndex: 4425
{
	// Fields
	[Inject]
	private ISubscriber<BlockTransferStartMessage> _blockTransferStartSub; // 0x30
	[Inject]
	private ISubscriber<BlockTransferCompleteMessage> _blockTransferCompleteSub; // 0x38
	[Inject]
	private ISubscriber<CarrierAddBlockMessage> _carrierAddBlockSub; // 0x40
	[Inject]
	private ISubscriber<ShuffleCarrierMessage> _shuffleCarrierSub; // 0x48
	[Inject]
	private ISubscriber<LevelAnimationEnterCompleteMessage> _levelAnimationEnterCompleteSub; // 0x50
	[Inject]
	private IPublisher<BlockNextTransferUpdateMessage> _blockNextTransferUpdatePub; // 0x58
	private Stash<BlockNextTransfer> _blockNextTransfers; // 0x60
	private Stash<BehaviourView<Carrier>> _carriers; // 0x68
	private bool _isBlockCreateComplete; // 0x70
	private readonly Stack<Carrier> _updateNextTransferQueue; // 0x78

	// Methods

	// RVA: 0x23E1C90 Offset: 0x23DDC90 VA: 0x23E1C90 Slot: 9
	public override void OnAwake() { }

	// RVA: 0x23E1D2C Offset: 0x23DDD2C VA: 0x23E1D2C Slot: 10
	public override void OnUpdate(float deltaTime) { }

	// RVA: 0x23E2300 Offset: 0x23DE300 VA: 0x23E2300 Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x23E27B8 Offset: 0x23DE7B8 VA: 0x23E27B8
	private void OnBlockTransferStart(BlockTransferStartMessage m) { }

	// RVA: 0x23E2B28 Offset: 0x23DEB28 VA: 0x23E2B28
	private void OnBlockTransferComplete(BlockTransferCompleteMessage m) { }

	// RVA: 0x23E2B2C Offset: 0x23DEB2C VA: 0x23E2B2C
	private void OnCarrierAddBlock(CarrierAddBlockMessage m) { }

	// RVA: 0x23E2BC0 Offset: 0x23DEBC0 VA: 0x23E2BC0
	private void OnShuffleCarrier(ShuffleCarrierMessage m) { }

	// RVA: 0x23E2BC4 Offset: 0x23DEBC4 VA: 0x23E2BC4
	private void OnLevelAnimationEnterComplete(LevelAnimationEnterCompleteMessage m) { }

	// RVA: 0x23E2B30 Offset: 0x23DEB30 VA: 0x23E2B30
	private void AddCarrierToUpdateQueue(Carrier carrier) { }

	// RVA: 0x23E1DCC Offset: 0x23DDDCC VA: 0x23E1DCC
	private void UpdateNextTransferBlocks(Carrier carrier) { }

	// RVA: 0x23E2D1C Offset: 0x23DED1C VA: 0x23E2D1C
	public void .ctor() { }
}

