// Namespace: 
public sealed class StickyBlockGroupSystem : SystemBase // TypeDefIndex: 4463
{
	// Fields
	[Inject]
	private Features _features; // 0x30
	[Inject]
	private PrefabModule _prefabModule; // 0x38
	[Inject]
	private Conveyor _conveyor; // 0x40
	[Inject]
	private ISubscriber<CarrierBlockCreateMessage> _carrierBlockCreateSub; // 0x48
	[Inject]
	private ISubscriber<CarrierCompleteMessage> _carrierCompleteSub; // 0x50
	[Inject]
	private ISubscriber<BlockTakeOffMessage> _blockTakeOffSub; // 0x58
	[Inject]
	private ISubscriber<BlockTransferRejectMessage> _blockTransferRejectSub; // 0x60
	private Stash<BlockTransferBond> _blockTransferBonds; // 0x68
	private readonly Dictionary<Block, StickyBlockGroup> _stickyByBlock; // 0x70
	private readonly Dictionary<Carrier, List<StickyBlockGroup>> _stickiesByCarrier; // 0x78

	// Methods

	// RVA: 0x23F2A98 Offset: 0x23EEA98 VA: 0x23F2A98 Slot: 9
	public override void OnAwake() { }

	// RVA: 0x23F2AFC Offset: 0x23EEAFC VA: 0x23F2AFC Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x23F2ED0 Offset: 0x23EEED0 VA: 0x23F2ED0
	private void OnCarrierBlockCreate(CarrierBlockCreateMessage m) { }

	// RVA: 0x23F3294 Offset: 0x23EF294 VA: 0x23F3294
	private void OnCarrierComplete(CarrierCompleteMessage m) { }

	// RVA: 0x23F3470 Offset: 0x23EF470 VA: 0x23F3470
	private void OnBlockTakeOff(BlockTakeOffMessage m) { }

	// RVA: 0x23F34EC Offset: 0x23EF4EC VA: 0x23F34EC
	private void OnBlockTransferReject(BlockTransferRejectMessage m) { }

	// RVA: 0x23F2ED4 Offset: 0x23EEED4 VA: 0x23F2ED4
	private void Create(Carrier carrier) { }

	// RVA: 0x23F37E4 Offset: 0x23EF7E4 VA: 0x23F37E4
	private void AddStickyToCarrier(Carrier carrier, StickyBlockGroup instance) { }

	// RVA: 0x23F38EC Offset: 0x23EF8EC VA: 0x23F38EC
	public void .ctor() { }
}

