// Namespace: 
public sealed class CoinRushSubMonitor : SubMonitorBase, LoopScrollPrefabSource, LoopScrollDataSource // TypeDefIndex: 5482
{
	// Fields
	[Inject]
	private CoinRush _coinRush; // 0x40
	[Inject]
	private SheetContainer _sheetContainer; // 0x48
	[Inject]
	private PurchasingModule _purchasingModule; // 0x50
	[Inject]
	private FulfillModule _fulfillModule; // 0x58
	[Inject]
	private AnalyticsModule _analyticsModule; // 0x60
	[Inject]
	private FulfillItemsMonitor _fulfillItemsMonitor; // 0x68

	// Methods

	// RVA: 0x247043C Offset: 0x246C43C VA: 0x247043C Slot: 8
	public override void Setup() { }

	// RVA: 0x2470794 Offset: 0x246C794 VA: 0x2470794
	private void OnDestroy() { }

	// RVA: 0x247083C Offset: 0x246C83C VA: 0x247083C Slot: 9
	public override void Render() { }

	// RVA: 0x24709D4 Offset: 0x246C9D4 VA: 0x24709D4 Slot: 12
	public GameObject GetObject(int index) { }

	// RVA: 0x2470A08 Offset: 0x246CA08 VA: 0x2470A08 Slot: 13
	public void ReturnObject(Transform t) { }

	// RVA: 0x2470A68 Offset: 0x246CA68 VA: 0x2470A68 Slot: 14
	public void ProvideData(Transform t, int idx) { }

	// RVA: 0x2470B28 Offset: 0x246CB28 VA: 0x2470B28
	private void CreateMilestoneElement(StatefulComponent view, CoinRushSheet.Row data) { }

	// RVA: 0x2470EFC Offset: 0x246CEFC VA: 0x2470EFC
	private void OnMilestoneClaimClicked(StatefulComponent view, CoinRushSheet.Row data) { }

	// RVA: 0x24712A0 Offset: 0x246D2A0 VA: 0x24712A0
	private void OnBuyClicked() { }

	// RVA: 0x2471318 Offset: 0x246D318 VA: 0x2471318
	private void OnPurchase(FulfillPurchaseMessage m) { }

	// RVA: 0x24713A4 Offset: 0x246D3A4 VA: 0x24713A4
	public void .ctor() { }
}

