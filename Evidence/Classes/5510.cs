// Namespace: 
public sealed class NoAdsOfferSubMonitor : SubMonitorBase // TypeDefIndex: 5510
{
	// Fields
	[SerializeField]
	private string ProductId; // 0x40
	[Inject]
	private PurchasingModule _purchasingModule; // 0x48
	[Inject]
	private Payouts _payouts; // 0x50

	// Methods

	// RVA: 0x2480EA8 Offset: 0x247CEA8 VA: 0x2480EA8 Slot: 8
	public override void Setup() { }

	// RVA: 0x24814A4 Offset: 0x247D4A4 VA: 0x24814A4
	private void OnDestroy() { }

	// RVA: 0x2481538 Offset: 0x247D538 VA: 0x2481538
	private void OnBuyClicked() { }

	// RVA: 0x248159C Offset: 0x247D59C VA: 0x248159C
	private void OnPurchase(FulfillPurchaseMessage m) { }

	[AsyncStateMachine(typeof(NoAdsOfferSubMonitor.<HandleClose>d__7))]
	// RVA: 0x24815A0 Offset: 0x247D5A0 VA: 0x24815A0
	private UniTaskVoid HandleClose() { }

	// RVA: 0x248162C Offset: 0x247D62C VA: 0x248162C
	public void .ctor() { }
}

