// Namespace: 
public sealed class HiddenCarrierSystem : SystemBase // TypeDefIndex: 4529
{
	// Fields
	[Inject]
	private ISubscriber<CarrierCompleteMessage> _carrierCompleteSub; // 0x30
	private Stash<BehaviourView<HiddenCarrier>> _hiddenCarriers; // 0x38

	// Methods

	// RVA: 0x24A54B4 Offset: 0x24A14B4 VA: 0x24A54B4 Slot: 9
	public override void OnAwake() { }

	// RVA: 0x24A5518 Offset: 0x24A1518 VA: 0x24A5518 Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x24A5638 Offset: 0x24A1638 VA: 0x24A5638
	private void OnCarrierComplete(CarrierCompleteMessage m) { }

	// RVA: 0x24A563C Offset: 0x24A163C VA: 0x24A563C
	private void HandleComplete(Carrier completedCarrier) { }

	// RVA: 0x24A57C8 Offset: 0x24A17C8 VA: 0x24A57C8
	public void .ctor() { }
}

