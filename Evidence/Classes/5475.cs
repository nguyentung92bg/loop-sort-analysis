// Namespace: 
public sealed class AreaOfferSubMonitor : SubMonitorBase // TypeDefIndex: 5475
{
	// Fields
	private static readonly ObjectRole[] BoosterRoles; // 0x0
	[SerializeField]
	private LiveOps LiveOps; // 0x40
	[Inject]
	private PurchasingModule _purchasingModule; // 0x48
	[Inject]
	private Payouts _payouts; // 0x50
	[Inject]
	private Shop _shop; // 0x58
	[Inject]
	private SheetContainer _sheetContainer; // 0x60
	private AreaOffer _areaOffer; // 0x68
	private string _productId; // 0x70
	private AsyncOperationHandle<Sprite> _artHandle; // 0x78

	// Methods

	// RVA: 0x246C88C Offset: 0x246888C VA: 0x246C88C Slot: 8
	public override void Setup() { }

	// RVA: 0x246CF08 Offset: 0x2468F08 VA: 0x246CF08 Slot: 9
	public override void Render() { }

	// RVA: 0x246D128 Offset: 0x2469128 VA: 0x246D128
	private void OnDestroy() { }

	// RVA: 0x246CABC Offset: 0x2468ABC VA: 0x246CABC
	private void UpdateArt() { }

	// RVA: 0x246CC3C Offset: 0x2468C3C VA: 0x246CC3C
	private void UpdatePrice() { }

	// RVA: 0x246CCF0 Offset: 0x2468CF0 VA: 0x246CCF0
	private void UpdatePayouts() { }

	// RVA: 0x246D254 Offset: 0x2469254 VA: 0x246D254
	private void OnBuyClicked() { }

	// RVA: 0x246D2D0 Offset: 0x24692D0 VA: 0x246D2D0
	private void OnPurchase(FulfillPurchaseMessage m) { }

	// RVA: 0x246D324 Offset: 0x2469324 VA: 0x246D324
	public void .ctor() { }

	// RVA: 0x246D32C Offset: 0x246932C VA: 0x246D32C
	private static void .cctor() { }
}

