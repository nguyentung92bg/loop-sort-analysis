// Namespace: 
public sealed class GlassCarrierSystem : SystemBase // TypeDefIndex: 4527
{
	// Fields
	[Inject]
	private ISubscriber<BlockTransferCompleteMessage> _blockTransferCompleteSub; // 0x30
	private Stash<BehaviourView<GlassCarrier>> _glassCarriers; // 0x38

	// Methods

	// RVA: 0x24A4A74 Offset: 0x24A0A74 VA: 0x24A4A74 Slot: 9
	public override void OnAwake() { }

	// RVA: 0x24A4AD8 Offset: 0x24A0AD8 VA: 0x24A4AD8 Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x24A4BF8 Offset: 0x24A0BF8 VA: 0x24A4BF8
	private void OnBlockTransferComplete(BlockTransferCompleteMessage m) { }

	// RVA: 0x24A4D0C Offset: 0x24A0D0C VA: 0x24A4D0C
	public void .ctor() { }
}

