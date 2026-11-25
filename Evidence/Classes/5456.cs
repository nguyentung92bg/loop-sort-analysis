// Namespace: 
public sealed class ShopMonitor : PageMonitorBase // TypeDefIndex: 5456
{
	// Fields
	[Inject]
	private Shop _shop; // 0x98
	[Inject]
	private PurchasingModule _purchasingModule; // 0xA0
	[Inject]
	private SheetContainer _sheetContainer; // 0xA8
	[Inject]
	private LifeModule _lifeModule; // 0xB0
	[Inject]
	private GameMachine _gameMachine; // 0xB8
	[Inject]
	private HomeNavigationMonitor _homeNavigationMonitor; // 0xC0
	[Inject]
	private FulfillModule _fulfillModule; // 0xC8
	[Inject]
	private AdsModule _adsModule; // 0xD0
	[Inject]
	private AnalyticsModule _analyticsModule; // 0xD8
	[Inject]
	private EconomyModule _economyModule; // 0xE0
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0xE8
	[Inject]
	private ISubscriber<EconomyUpdateMessage> _economyUpdateSub; // 0xF0
	[Inject]
	private ISubscriber<PurchaseCompleteMessage> _purchaseCompleteSub; // 0xF8
	private readonly Dictionary<string, StatefulComponent> _viewByProductId; // 0x100
	private Vector2 _originalPagePosition; // 0x108
	private bool _popup; // 0x110
	private string _popupSource; // 0x118
	private StatefulComponent _rewardedView; // 0x120

	// Methods

	// RVA: 0x245FCE4 Offset: 0x245BCE4 VA: 0x245FCE4 Slot: 13
	public override void Setup() { }

	// RVA: 0x2460338 Offset: 0x245C338 VA: 0x2460338 Slot: 16
	public override void OnDeactivated() { }

	// RVA: 0x2460360 Offset: 0x245C360 VA: 0x2460360 Slot: 14
	public override void Render() { }

	// RVA: 0x24605B0 Offset: 0x245C5B0 VA: 0x24605B0 Slot: 17
	public override void OnTransition() { }

	// RVA: 0x24607F0 Offset: 0x245C7F0 VA: 0x24607F0
	private void RefreshView() { }

	// RVA: 0x2460034 Offset: 0x245C034 VA: 0x2460034
	private void FillBundleElements() { }

	// RVA: 0x2461054 Offset: 0x245D054 VA: 0x2461054
	private void CreateBundleElement(StatefulComponent view, Shop.Bundle data) { }

	// RVA: 0x246082C Offset: 0x245C82C VA: 0x246082C
	private void RefreshBundleElements() { }

	// RVA: 0x246129C Offset: 0x245D29C VA: 0x246129C
	private void RefreshBundleElement(StatefulComponent view, Shop.Bundle data) { }

	// RVA: 0x2460100 Offset: 0x245C100 VA: 0x2460100
	private void FillProductElements() { }

	// RVA: 0x2461FD8 Offset: 0x245DFD8 VA: 0x2461FD8
	private void CreateProductElement(StatefulComponent view, Shop.Product data) { }

	// RVA: 0x2460A6C Offset: 0x245CA6C VA: 0x2460A6C
	private void RefreshProductElements() { }

	// RVA: 0x2462148 Offset: 0x245E148 VA: 0x2462148
	private void RefreshProductElement(StatefulComponent view, Shop.Product data) { }

	// RVA: 0x2461C64 Offset: 0x245DC64 VA: 0x2461C64
	private void SetBuyButtonData(StatefulComponent view, ProductMetadata metadata) { }

	// RVA: 0x2461CAC Offset: 0x245DCAC VA: 0x2461CAC
	private string FormatGoldQuantity(double quantity) { }

	// RVA: 0x2461E38 Offset: 0x245DE38 VA: 0x2461E38
	private string FormatLifeQuantity(double quantity) { }

	// RVA: 0x2462494 Offset: 0x245E494 VA: 0x2462494
	private void OnRestoreClicked() { }

	// RVA: 0x24624AC Offset: 0x245E4AC VA: 0x24624AC
	private void OnCloseClicked() { }

	// RVA: 0x2460CA8 Offset: 0x245CCA8 VA: 0x2460CA8
	private void UpdateGold() { }

	// RVA: 0x2460D04 Offset: 0x245CD04 VA: 0x2460D04
	private void UpdateSpecialOffers() { }

	[AsyncStateMachine(typeof(ShopMonitor.<HandleFulfill>d__38))]
	// RVA: 0x2462634 Offset: 0x245E634 VA: 0x2462634
	private UniTaskVoid HandleFulfill() { }

	// RVA: 0x2461CA0 Offset: 0x245DCA0 VA: 0x2461CA0
	private static bool MatchesPayoutType(FulfillPayout payout, Item target) { }

	// RVA: 0x24626C0 Offset: 0x245E6C0 VA: 0x24626C0
	private void OnPurchaseComplete(PurchaseCompleteMessage m) { }

	// RVA: 0x245C378 Offset: 0x2458378 VA: 0x245C378
	public void ShowPopup(string placement) { }

	// RVA: 0x24605D4 Offset: 0x245C5D4 VA: 0x24605D4
	private void TrackShopOpen() { }

	// RVA: 0x24601CC Offset: 0x245C1CC VA: 0x24601CC
	private void CreateRewardedElement(StatefulComponent view) { }

	// RVA: 0x246037C Offset: 0x245C37C VA: 0x246037C
	private void RefreshRewardedElement(StatefulComponent view) { }

	// RVA: 0x246273C Offset: 0x245E73C VA: 0x246273C
	private void OnRewardedClaimClicked() { }

	// RVA: 0x24627E4 Offset: 0x245E7E4 VA: 0x24627E4
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x246286C Offset: 0x245E86C VA: 0x246286C
	private void <Setup>b__18_0(EconomyUpdateMessage _) { }

	[CompilerGenerated]
	// RVA: 0x2462870 Offset: 0x245E870 VA: 0x2462870
	private void <OnRewardedClaimClicked>b__45_0(bool watched) { }
}

