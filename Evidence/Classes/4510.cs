// Namespace: 
public sealed class CarrierOutlineSystem : SystemBase // TypeDefIndex: 4510
{
	// Fields
	[Inject]
	private ISubscriber<BlockTransferStartMessage> _blockTransferStartSub; // 0x30
	[Inject]
	private ISubscriber<BlockTransferCompleteMessage> _blockTransferCompleteSub; // 0x38

	// Methods

	// RVA: 0x240D920 Offset: 0x2409920 VA: 0x240D920 Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x240DB2C Offset: 0x2409B2C VA: 0x240DB2C
	private void OnBlockTransferStart(BlockTransferStartMessage m) { }

	// RVA: 0x240DBC8 Offset: 0x2409BC8 VA: 0x240DBC8
	private void OnBlockTransferComplete(BlockTransferCompleteMessage m) { }

	[AsyncStateMachine(typeof(CarrierOutlineSystem.<HandleOutline>d__5))]
	// RVA: 0x240DB50 Offset: 0x2409B50 VA: 0x240DB50
	private UniTaskVoid HandleOutline(BlockTransferStartMessage m) { }

	// RVA: 0x240DBCC Offset: 0x2409BCC VA: 0x240DBCC
	public void .ctor() { }
}

