// Namespace: 
public sealed class BlockCarrierMeshSystem : SystemBase // TypeDefIndex: 4421
{
	// Fields
	[Inject]
	private BlockConfig _blockConfig; // 0x30
	[Inject]
	private Conveyor _conveyor; // 0x38
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x40
	[Inject]
	private ISubscriber<CarrierAddBlockMessage> _carrierAddBlockSub; // 0x48
	[Inject]
	private ISubscriber<CarrierRemoveBlockMessage> _carrierRemoveBlockSub; // 0x50
	[Inject]
	private ISubscriber<BlockCarrierMeshUpdateMessage> _blockCarrierMeshUpdateSub; // 0x58
	[Inject]
	private ISubscriber<CarrierBlockCreateCompleteMessage> _carrierBlockCreateCompleteSub; // 0x60
	[Inject]
	private IPublisher<CarrierBlockGroupUpdateMessage> _carrierBlockGroupUpdatePub; // 0x68
	private readonly List<BlockCarrierMeshSystem.Rule> _rules; // 0x70
	private Stash<BehaviourView<Carrier>> _carriers; // 0x78
	private bool _isBlockCreateComplete; // 0x80
	private BlockGroupConfig _blockGroupConfig; // 0x88

	// Methods

	// RVA: 0x23DD270 Offset: 0x23D9270 VA: 0x23DD270 Slot: 9
	public override void OnAwake() { }

	// RVA: 0x23DED2C Offset: 0x23DAD2C VA: 0x23DED2C Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x23DF100 Offset: 0x23DB100 VA: 0x23DF100
	private void OnCarrierAddBlock(CarrierAddBlockMessage m) { }

	// RVA: 0x23E00FC Offset: 0x23DC0FC VA: 0x23E00FC
	private void OnCarrierRemoveBlock(CarrierRemoveBlockMessage m) { }

	// RVA: 0x23E013C Offset: 0x23DC13C VA: 0x23E013C
	private void OnBlockCarrierMeshUpdate(BlockCarrierMeshUpdateMessage m) { }

	// RVA: 0x23E0300 Offset: 0x23DC300 VA: 0x23E0300
	private void OnCarrierBlockCreateComplete(CarrierBlockCreateCompleteMessage m) { }

	// RVA: 0x23DF438 Offset: 0x23DB438 VA: 0x23DF438
	private void SetCarrierBlockMesh(Carrier carrier, Block block) { }

	// RVA: 0x23DF8A8 Offset: 0x23DB8A8 VA: 0x23DF8A8
	private void HandleGroupBlocks(Carrier carrier) { }

	// RVA: 0x23DD318 Offset: 0x23D9318 VA: 0x23DD318
	private void RegisterRules() { }

	// RVA: 0x23E05F0 Offset: 0x23DC5F0 VA: 0x23E05F0
	public void .ctor() { }
}

