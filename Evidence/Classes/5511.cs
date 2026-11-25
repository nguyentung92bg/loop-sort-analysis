// Namespace: 
public sealed class PiggyBankSubMonitor : SubMonitorBase // TypeDefIndex: 5511
{
	// Fields
	[Inject]
	private PiggyBank _controller; // 0x40
	[Inject]
	private EconomyModule _economyModule; // 0x48
	[Inject]
	private PurchasingModule _purchasingModule; // 0x50
	[Inject]
	private SheetContainer _sheetContainer; // 0x58
	private const string StoreProductId = "com.garawell.loopsort.piggybank";
	private PlayerPrefsInt _popupLevel; // 0x60
	private PlayerPrefsInt _breakCount; // 0x70
	private SkeletonGraphic _piggy; // 0x80

	// Methods

	// RVA: 0x2481878 Offset: 0x247D878 VA: 0x2481878 Slot: 8
	public override void Setup() { }

	// RVA: 0x2481C7C Offset: 0x247DC7C VA: 0x2481C7C
	private void OnDestroy() { }

	// RVA: 0x2481D24 Offset: 0x247DD24 VA: 0x2481D24
	private void OnBreakClicked() { }

	// RVA: 0x24819E8 Offset: 0x247D9E8 VA: 0x24819E8
	private void UpdatePrice() { }

	// RVA: 0x2481AAC Offset: 0x247DAAC VA: 0x2481AAC
	private void UpdateView() { }

	// RVA: 0x2481DBC Offset: 0x247DDBC VA: 0x2481DBC
	private void OnPurchase(FulfillPurchaseMessage m) { }

	// RVA: 0x2481FDC Offset: 0x247DFDC VA: 0x2481FDC
	public void .ctor() { }
}

