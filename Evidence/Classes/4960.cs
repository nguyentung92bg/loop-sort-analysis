// Namespace: 
public sealed class FulfillModule : ModuleBase, IInitializable, ITickable // TypeDefIndex: 4960
{
	// Fields
	[Inject]
	private EconomyModule _economyModule; // 0x10
	[Inject]
	private SheetContainer _sheetContainer; // 0x18
	[Inject]
	private LifeModule _lifeModule; // 0x20
	[Inject]
	private AdsModule _adsModule; // 0x28
	[Inject]
	private Monitors _monitors; // 0x30
	[Inject]
	private GameMachine _gameMachine; // 0x38
	[Inject]
	private CloudSaveModule _cloudSaveModule; // 0x40
	[Inject]
	private ISubscriber<FulfillPurchaseMessage> _fulfillPurchaseSub; // 0x48
	[Inject]
	private ISubscriber<EconomyConsumeMessage> _economyConsumeSub; // 0x50
	private string _placement; // 0x58
	private Item _itemUsed; // 0x60
	private int _suppressCount; // 0x64

	// Methods

	// RVA: 0x25429A0 Offset: 0x253E9A0 VA: 0x25429A0 Slot: 4
	public void Initialize() { }

	// RVA: 0x2542B88 Offset: 0x253EB88 VA: 0x2542B88 Slot: 5
	public void Tick() { }

	// RVA: 0x254304C Offset: 0x253F04C VA: 0x254304C
	private void OnFulfillPurchase(FulfillPurchaseMessage m) { }

	// RVA: 0x25433B8 Offset: 0x253F3B8 VA: 0x25433B8
	private void OnEconomyConsume(EconomyConsumeMessage m) { }

	// RVA: 0x25430A4 Offset: 0x253F0A4 VA: 0x25430A4
	public void FulfillPurchase(FulfillPurchaseMessage m) { }

	// RVA: 0x2543454 Offset: 0x253F454 VA: 0x2543454
	public void FulfillPurchasePayout(FulfillPayout payout, string placement) { }

	// RVA: 0x254358C Offset: 0x253F58C VA: 0x254358C
	public void FulfillFreePayout(FulfillPayout payout, string placement) { }

	// RVA: 0x2543594 Offset: 0x253F594 VA: 0x2543594
	public void FulfillRewardedPayout(FulfillPayout payout, string placement) { }

	// RVA: 0x254345C Offset: 0x253F45C VA: 0x254345C
	private void FulfillPayout(FulfillPayout payout, string placement, Item itemUsed) { }

	// RVA: 0x254359C Offset: 0x253F59C VA: 0x254359C
	private void FulfillGold(double quantity) { }

	// RVA: 0x2543690 Offset: 0x253F690 VA: 0x2543690
	private void FulfillBoosters(double quantity) { }

	// RVA: 0x254393C Offset: 0x253F93C VA: 0x254393C
	private void FulfillBooster(Item itemType, double quantity) { }

	// RVA: 0x2543BA8 Offset: 0x253FBA8 VA: 0x2543BA8
	private void FulfillLife(double quantity) { }

	// RVA: 0x2543C24 Offset: 0x253FC24 VA: 0x2543C24
	private void FulfillNoAds() { }

	// RVA: 0x2543DD4 Offset: 0x253FDD4 VA: 0x2543DD4
	public IDisposable SuppressFulfill() { }

	// RVA: 0x2543E78 Offset: 0x253FE78 VA: 0x2543E78
	public void .ctor() { }
}

