// Namespace: 
public sealed class RockCarrierSystem : SystemBase // TypeDefIndex: 4541
{
	// Fields
	[Inject]
	private ISubscriber<CarrierCompleteMessage> _carrierCompleteSub; // 0x30

	// Methods

	// RVA: 0x24AC200 Offset: 0x24A8200 VA: 0x24AC200 Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x24AC320 Offset: 0x24A8320 VA: 0x24AC320
	private void OnCarrierComplete(CarrierCompleteMessage m) { }

	// RVA: 0x24AC324 Offset: 0x24A8324 VA: 0x24AC324
	private void HandleCompleteMotion(Carrier completedCarrier) { }

	// RVA: 0x24AC390 Offset: 0x24A8390 VA: 0x24AC390
	public void .ctor() { }
}

