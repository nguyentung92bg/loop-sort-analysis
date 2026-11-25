// Namespace: 
public sealed class HiddenBlockSystem : SystemBase // TypeDefIndex: 4446
{
	// Fields
	[Inject]
	private ISubscriber<BlockTransferStartMessage> _blockTransferStartSub; // 0x30
	[Inject]
	private ISubscriber<BlockTransferCompleteMessage> _blockTransferCompleteSub; // 0x38
	[Inject]
	private ISubscriber<ShuffleCarrierMessage> _shuffleCarrierSub; // 0x40
	[Inject]
	private ISubscriber<CarrierCompleteMessage> _carrierCompleteSub; // 0x48
	[Inject]
	private ISubscriber<SelectBoosterUseMessage> _selectBoosterUseSub; // 0x50
	[Inject]
	private IPublisher<HiddenBlockRevealMessage> _hiddenBlockRevealPub; // 0x58
	[Inject]
	private Particles _particles; // 0x60
	[Inject]
	private PrefabModule _prefabModule; // 0x68
	[Inject]
	private Materials _materials; // 0x70
	[Inject]
	private Conveyor _conveyor; // 0x78
	private readonly Dictionary<Carrier, Vector3> _positionByCarrier; // 0x80
	private readonly Dictionary<Carrier, List<HiddenBlock>> _hiddenBlocksByCarrier; // 0x88

	// Methods

	// RVA: 0x23E9CF4 Offset: 0x23E5CF4 VA: 0x23E9CF4 Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x23EA1AC Offset: 0x23E61AC VA: 0x23EA1AC
	private void OnBlockTransferStart(BlockTransferStartMessage m) { }

	// RVA: 0x23EA7E8 Offset: 0x23E67E8 VA: 0x23EA7E8
	private void OnBlockTransferComplete(BlockTransferCompleteMessage m) { }

	// RVA: 0x23EA898 Offset: 0x23E6898 VA: 0x23EA898
	private void OnShuffleCarrier(ShuffleCarrierMessage m) { }

	// RVA: 0x23EA8C0 Offset: 0x23E68C0 VA: 0x23EA8C0
	private void OnCarrierComplete(CarrierCompleteMessage m) { }

	// RVA: 0x23EA900 Offset: 0x23E6900 VA: 0x23EA900
	private void OnSelectBoosterUse(SelectBoosterUseMessage m) { }

	// RVA: 0x23EA648 Offset: 0x23E6648 VA: 0x23EA648
	private void HandleReveal(Carrier carrier) { }

	// RVA: 0x23EA8E8 Offset: 0x23E68E8 VA: 0x23EA8E8
	private void HandleComplete(Carrier carrier) { }

	// RVA: 0x23EA1D8 Offset: 0x23E61D8 VA: 0x23EA1D8
	public void HandleHiddenBlocks(Carrier carrier, List<Block> blocks, bool withEffects = True) { }

	[AsyncStateMachine(typeof(HiddenBlockSystem.<HandleOpen>d__21))]
	// RVA: 0x23EA7EC Offset: 0x23E67EC VA: 0x23EA7EC
	private UniTaskVoid HandleOpen(Carrier carrier) { }

	// RVA: 0x23EA908 Offset: 0x23E6908 VA: 0x23EA908
	private void HandleParticle(Carrier carrier) { }

	// RVA: 0x23EAA84 Offset: 0x23E6A84 VA: 0x23EAA84
	private void HandleDissolve(Carrier carrier) { }

	// RVA: 0x23EB108 Offset: 0x23E7108 VA: 0x23EB108
	public void .ctor() { }
}

