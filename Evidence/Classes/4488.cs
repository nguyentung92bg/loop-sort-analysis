// Namespace: 
public sealed class UndoBoosterSystem : SystemBase // TypeDefIndex: 4488
{
	// Fields
	[Inject]
	private ISubscriber<BlockTransferStartMessage> _blockTransferStartSub; // 0x30
	[Inject]
	private ISubscriber<BlockTransferCompleteMessage> _blockTransferCompleteSub; // 0x38
	[Inject]
	private Conveyor _conveyor; // 0x40
	private bool _isTransferCompleted; // 0x48
	private Carrier _targetCarrier; // 0x50
	private List<Block> _targetBlocks; // 0x58

	// Methods

	// RVA: 0x2402BA4 Offset: 0x23FEBA4 VA: 0x2402BA4 Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x2402DB0 Offset: 0x23FEDB0 VA: 0x2402DB0
	private void OnBlockTransferStart(BlockTransferStartMessage m) { }

	// RVA: 0x2402EB0 Offset: 0x23FEEB0 VA: 0x2402EB0
	private void OnBlockTransferComplete(BlockTransferCompleteMessage m) { }

	// RVA: 0x24026FC Offset: 0x23FE6FC VA: 0x24026FC
	public bool CanUndo() { }

	// RVA: 0x2402998 Offset: 0x23FE998 VA: 0x2402998
	public void Undo() { }

	// RVA: 0x2402E84 Offset: 0x23FEE84 VA: 0x2402E84
	private void ResetTransferState() { }

	// RVA: 0x2402E20 Offset: 0x23FEE20 VA: 0x2402E20
	private bool AreAllBlocksGrouped(List<Block> blocks) { }

	// RVA: 0x2402F8C Offset: 0x23FEF8C VA: 0x2402F8C
	public void .ctor() { }
}

