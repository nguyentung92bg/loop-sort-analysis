// Namespace: 
public sealed class SingleProductOfferSubMonitor : SubMonitorBase // TypeDefIndex: 5512
{
	// Fields
	[SerializeField]
	private string StoreProductId; // 0x40
	[SerializeField]
	private string AnalyticsPlacement; // 0x48
	[SerializeField]
	private LiveOps LiveOps; // 0x50
	[Inject]
	private PurchasingModule _purchasingModule; // 0x58
	[Inject]
	private Payouts _payouts; // 0x60
	[Inject]
	private Shop _shop; // 0x68
	[Inject]
	private SheetContainer _sheetContainer; // 0x70

	// Methods

	// RVA: 0x2482074 Offset: 0x247E074 VA: 0x2482074 Slot: 8
	public override void Setup() { }

	// RVA: 0x2482360 Offset: 0x247E360 VA: 0x2482360 Slot: 9
	public override void Render() { }

	// RVA: 0x2482540 Offset: 0x247E540 VA: 0x2482540
	private void OnDestroy() { }

	// RVA: 0x2482188 Offset: 0x247E188 VA: 0x2482188
	private void UpdatePrice() { }

	// RVA: 0x248223C Offset: 0x247E23C VA: 0x248223C
	private void UpdatePayouts() { }

	// RVA: 0x24825D8 Offset: 0x247E5D8 VA: 0x24825D8
	private void OnBuyClicked() { }

	// RVA: 0x2482604 Offset: 0x247E604 VA: 0x2482604
	private void OnPurchase(FulfillPurchaseMessage m) { }

	// RVA: 0x2482658 Offset: 0x247E658 VA: 0x2482658
	public void .ctor() { }
}

