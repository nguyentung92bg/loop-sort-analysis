// Namespace: 
public sealed class CarrierSelectSystem : SystemBase // TypeDefIndex: 4511
{
	// Fields
	[Inject]
	private IPublisher<BlockTransferMessage> _blockTransferPub; // 0x30
	[Inject]
	private ISubscriber<CarrierSelectMessage> _carrierSelectSub; // 0x38

	// Methods

	// RVA: 0x240DF44 Offset: 0x2409F44 VA: 0x240DF44 Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x240E064 Offset: 0x240A064 VA: 0x240E064
	private void OnCarrierSelect(CarrierSelectMessage m) { }

	// RVA: 0x240E0B0 Offset: 0x240A0B0 VA: 0x240E0B0
	private void Transfer(Carrier from) { }

	// RVA: 0x240E178 Offset: 0x240A178 VA: 0x240E178
	public void .ctor() { }
}

