// Namespace: 
public sealed class IceCarrierSystem : SystemBase // TypeDefIndex: 4532
{
	// Fields
	[Inject]
	private ISubscriber<CarrierCompleteMessage> _carrierCompleteSub; // 0x30
	private Stash<BehaviourView<IceCarrier>> _iceCarriers; // 0x38

	// Methods

	// RVA: 0x24A6298 Offset: 0x24A2298 VA: 0x24A6298 Slot: 9
	public override void OnAwake() { }

	// RVA: 0x24A62FC Offset: 0x24A22FC VA: 0x24A62FC Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x24A641C Offset: 0x24A241C VA: 0x24A641C
	private void OnCarrierComplete(CarrierCompleteMessage m) { }

	// RVA: 0x24A6420 Offset: 0x24A2420 VA: 0x24A6420
	private void HandleComplete(Carrier completedCarrier) { }

	// RVA: 0x24A65A4 Offset: 0x24A25A4 VA: 0x24A65A4
	public void .ctor() { }
}

