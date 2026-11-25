// Namespace: 
public sealed class SurpriseBlockSystem : SystemBase // TypeDefIndex: 4465
{
	// Fields
	[Inject]
	private ISubscriber<BlockTransferStartMessage> _blockTransferStartSub; // 0x30
	[Inject]
	private ISubscriber<CarrierBlockCreateMessage> _carrierBlockCreateSub; // 0x38
	[Inject]
	private ISubscriber<ShuffleCarrierMessage> _shuffleCarrierSub; // 0x40
	[Inject]
	private Conveyor _conveyor; // 0x48
	[Inject]
	private Particles _particles; // 0x50
	[Inject]
	private PrefabModule _prefabModule; // 0x58

	// Methods

	// RVA: 0x23F3AB0 Offset: 0x23EFAB0 VA: 0x23F3AB0 Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x23F3DA0 Offset: 0x23EFDA0 VA: 0x23F3DA0
	private void OnBlockTransferStart(BlockTransferStartMessage m) { }

	// RVA: 0x23F455C Offset: 0x23F055C VA: 0x23F455C
	private void OnCarrierBlockCreate(CarrierBlockCreateMessage m) { }

	// RVA: 0x23F47E4 Offset: 0x23F07E4 VA: 0x23F47E4
	private void OnShuffleCarrier(ShuffleCarrierMessage m) { }

	// RVA: 0x23F3DC8 Offset: 0x23EFDC8 VA: 0x23F3DC8
	private void HandleReveal(Carrier carrier, List<Block> blocks) { }

	// RVA: 0x23F4274 Offset: 0x23F0274 VA: 0x23F4274
	private void HandleEnableTransferExit(Carrier carrier) { }

	// RVA: 0x23F4560 Offset: 0x23F0560 VA: 0x23F4560
	private void HandleDisableTransferExit(Carrier carrier) { }

	// RVA: 0x23F480C Offset: 0x23F080C VA: 0x23F480C
	public void .ctor() { }
}

