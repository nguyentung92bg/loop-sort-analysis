// Namespace: 
public sealed class ConveyorView : WorldCanvasBase // TypeDefIndex: 4566
{
	// Fields
	[Inject]
	private Camera _camera; // 0xA8
	[Inject]
	private Conveyor _conveyor; // 0xB0
	[Inject]
	private ConveyorConfig _config; // 0xB8
	[Inject]
	private ISubscriber<ConveyorSlotAddBlockMessage> _conveyorSlotAddBlockSub; // 0xC0
	[Inject]
	private ISubscriber<ConveyorSlotRemoveBlockMessage> _conveyorSlotRemoveBlockSub; // 0xC8
	[Inject]
	private ISubscriber<SlotCreateCompleteMessage> _slotCreateCompleteSub; // 0xD0
	private Image _background; // 0xD8
	private Color _originalColor; // 0xE0
	private Color _targetColor; // 0xF0

	// Methods

	// RVA: 0x24B61E4 Offset: 0x24B21E4 VA: 0x24B61E4 Slot: 6
	protected override void Awake() { }

	// RVA: 0x24B6258 Offset: 0x24B2258 VA: 0x24B6258
	private void Update() { }

	// RVA: 0x24B62FC Offset: 0x24B22FC VA: 0x24B62FC Slot: 11
	public override void OnRent() { }

	// RVA: 0x24B631C Offset: 0x24B231C VA: 0x24B631C Slot: 13
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x24B660C Offset: 0x24B260C VA: 0x24B660C
	private void OnConveyorSlotAddBlock(ConveyorSlotAddBlockMessage m) { }

	// RVA: 0x24B6614 Offset: 0x24B2614 VA: 0x24B6614
	private void OnConveyorSlotRemoveBlock(ConveyorSlotRemoveBlockMessage m) { }

	// RVA: 0x24B6618 Offset: 0x24B2618 VA: 0x24B6618
	private void OnSlotCreateComplete(SlotCreateCompleteMessage m) { }

	// RVA: 0x24B6610 Offset: 0x24B2610 VA: 0x24B6610
	private void UpdateView() { }

	// RVA: 0x24B661C Offset: 0x24B261C VA: 0x24B661C
	public void .ctor() { }
}

