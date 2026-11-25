// Namespace: 
public sealed class TunnelCarrierSystem : SystemBase // TypeDefIndex: 4546
{
	// Fields
	[Inject]
	private ISubscriber<CarrierBlockCreateCompleteMessage> _carrierBlockCreateCompleteSub; // 0x30
	[Inject]
	private ISubscriber<BlockTransferStartMessage> _blockTransferStartSub; // 0x38
	[Inject]
	private ISubscriber<BlockTransferCompleteMessage> _blockTransferCompleteSub; // 0x40
	[Inject]
	private ISubscriber<LevelAnimationEnterStartMessage> _levelAnimationEnterStartSub; // 0x48
	[Inject]
	private ISubscriber<LevelAnimationCarrierCompleteMessage> _levelAnimationCarrierCompleteSub; // 0x50
	[Inject]
	private Conveyor _conveyor; // 0x58
	private Stash<BehaviourView<Carrier>> _carriers; // 0x60
	private Stash<BehaviourView<TunnelCarrier>> _tunnelCarriers; // 0x68
	private Filter _tunnelCarrierFilter; // 0x70

	// Methods

	// RVA: 0x24ADB44 Offset: 0x24A9B44 VA: 0x24ADB44 Slot: 9
	public override void OnAwake() { }

	// RVA: 0x24ADC74 Offset: 0x24A9C74 VA: 0x24ADC74 Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x24AE13C Offset: 0x24AA13C VA: 0x24AE13C
	private void OnCarrierBlockCreateComplete(CarrierBlockCreateCompleteMessage m) { }

	// RVA: 0x24AE3A8 Offset: 0x24AA3A8 VA: 0x24AE3A8
	private void OnBlockTransferStart(BlockTransferStartMessage m) { }

	// RVA: 0x24AE64C Offset: 0x24AA64C VA: 0x24AE64C
	private void OnBlockTransferComplete(BlockTransferCompleteMessage m) { }

	// RVA: 0x24AE790 Offset: 0x24AA790 VA: 0x24AE790
	private void OnLevelAnimationEnterStart(LevelAnimationEnterStartMessage m) { }

	// RVA: 0x24AE8D8 Offset: 0x24AA8D8 VA: 0x24AE8D8
	private void OnLevelAnimationCarrierComplete(LevelAnimationCarrierCompleteMessage m) { }

	[AsyncStateMachine(typeof(TunnelCarrierSystem.<EnableNextTransferBlocks>d__16))]
	// RVA: 0x24AE6E0 Offset: 0x24AA6E0 VA: 0x24AE6E0
	private UniTaskVoid EnableNextTransferBlocks(Carrier carrier) { }

	// RVA: 0x24AE140 Offset: 0x24AA140 VA: 0x24AE140
	private void SetBlockPositions() { }

	// RVA: 0x24AEA20 Offset: 0x24AAA20 VA: 0x24AEA20
	public void .ctor() { }
}

