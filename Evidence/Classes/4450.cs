// Namespace: 
public sealed class KeyBlockGroupSystem : SystemBase // TypeDefIndex: 4450
{
	// Fields
	[Inject]
	private Features _features; // 0x30
	[Inject]
	private PrefabModule _prefabModule; // 0x38
	[Inject]
	private Level _level; // 0x40
	[Inject]
	private Conveyor _conveyor; // 0x88
	[Inject]
	private ISubscriber<CarrierBlockCreateMessage> _carrierBlockCreateSub; // 0x90
	[Inject]
	private ISubscriber<BlockNextTransferUpdateMessage> _nextTransferUpdateSub; // 0x98
	[Inject]
	private ISubscriber<SelectBoosterUseMessage> _selectBoosterUseSub; // 0xA0
	private readonly Dictionary<ColorType, KeyBlockGroup> _keyByColor; // 0xA8
	private readonly Dictionary<Block, KeyBlockGroup> _keyByBlock; // 0xB0

	// Methods

	// RVA: 0x23EBC0C Offset: 0x23E7C0C VA: 0x23EBC0C Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x23EBEFC Offset: 0x23E7EFC VA: 0x23EBEFC
	private void OnCarrierBlockCreate(CarrierBlockCreateMessage m) { }

	// RVA: 0x23EC2DC Offset: 0x23E82DC VA: 0x23EC2DC
	private void OnBlockNextTransferUpdate(BlockNextTransferUpdateMessage m) { }

	// RVA: 0x23EC36C Offset: 0x23E836C VA: 0x23EC36C
	private void OnSelectBoosterUse(SelectBoosterUseMessage m) { }

	// RVA: 0x23EBF00 Offset: 0x23E7F00 VA: 0x23EBF00
	private void CreateKeys(Carrier carrier) { }

	// RVA: 0x23EC2F0 Offset: 0x23E82F0 VA: 0x23EC2F0
	private void TryCollectKey(Block block) { }

	// RVA: 0x23EC3E0 Offset: 0x23E83E0 VA: 0x23EC3E0
	public void .ctor() { }
}

