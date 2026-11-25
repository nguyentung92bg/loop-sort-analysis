// Namespace: 
public sealed class BattlePassSubMonitor : SubMonitorBase, LoopScrollPrefabSource, LoopScrollDataSource // TypeDefIndex: 5479
{
	// Fields
	[SerializeField]
	private Sprite FreeChestSprite; // 0x40
	[SerializeField]
	private Sprite[] PaidChestSprites; // 0x48
	[Inject]
	private BattlePass _controller; // 0x50
	[Inject]
	private SheetContainer _sheetContainer; // 0x58
	[Inject]
	private Shop _shop; // 0x60
	[Inject]
	private FulfillModule _fulfillModule; // 0x68
	[Inject]
	private PurchasingModule _purchasingModule; // 0x70
	[Inject]
	private AnalyticsModule _analyticsModule; // 0x78
	[Inject]
	private FulfillItemsMonitor _fulfillItemsMonitor; // 0x80
	private StatefulComponent _buyView; // 0x88
	private StatefulComponent _infoView; // 0x90
	private CancellationTokenSource _infoCancellation; // 0x98
	private BattlePassSheet.Row _currentLevelData; // 0xA0
	private StatefulComponent _previousPreviewItemTarget; // 0xA8

	// Methods

	// RVA: 0x246D3CC Offset: 0x24693CC VA: 0x246D3CC Slot: 8
	public override void Setup() { }

	// RVA: 0x246DB78 Offset: 0x2469B78 VA: 0x246DB78
	private void OnDestroy() { }

	// RVA: 0x246DC20 Offset: 0x2469C20 VA: 0x246DC20 Slot: 9
	public override void Render() { }

	// RVA: 0x246DE30 Offset: 0x2469E30 VA: 0x246DE30 Slot: 12
	public GameObject GetObject(int index) { }

	// RVA: 0x246DF08 Offset: 0x2469F08 VA: 0x246DF08 Slot: 13
	public void ReturnObject(Transform t) { }

	// RVA: 0x246DF68 Offset: 0x2469F68 VA: 0x246DF68 Slot: 14
	public void ProvideData(Transform t, int idx) { }

	// RVA: 0x246D938 Offset: 0x2469938 VA: 0x246D938
	private void UpdateProgressBar() { }

	// RVA: 0x246E670 Offset: 0x246A670 VA: 0x246E670
	private void RefreshProgressElements() { }

	// RVA: 0x246E020 Offset: 0x246A020 VA: 0x246E020
	private void CreateProgressElement(StatefulComponent view, BattlePassSheet.Row data) { }

	// RVA: 0x246E6F0 Offset: 0x246A6F0 VA: 0x246E6F0
	private void CreateProgressRewardElement(StatefulComponent view, List<BattlePassSheet.RewardArgs> rewards, Sprite chestSprite, bool forcePreview) { }

	// RVA: 0x246E978 Offset: 0x246A978 VA: 0x246E978
	private void OnProgressClaimClicked(StatefulComponent view, CloudPrefsBool claim, List<BattlePassSheet.RewardArgs> rewards, int milestoneLevel, bool premium) { }

	// RVA: 0x246F0BC Offset: 0x246B0BC VA: 0x246F0BC
	private void OnProgressRewardClicked(StatefulComponent view, List<BattlePassSheet.RewardArgs> rewards) { }

	// RVA: 0x246F540 Offset: 0x246B540 VA: 0x246F540
	private void OnScrollChanged(Vector2 value) { }

	// RVA: 0x246EE78 Offset: 0x246AE78 VA: 0x246EE78
	private static List<FulfillPayout> ToPayouts(List<BattlePassSheet.RewardArgs> rewards) { }

	// RVA: 0x246F580 Offset: 0x246B580 VA: 0x246F580
	private void OnActivateClicked() { }

	// RVA: 0x246F5AC Offset: 0x246B5AC VA: 0x246F5AC
	private void OnBuyViewCloseClicked() { }

	// RVA: 0x246F5D8 Offset: 0x246B5D8 VA: 0x246F5D8
	private void OnBuyViewBuyClicked() { }

	// RVA: 0x246F650 Offset: 0x246B650 VA: 0x246F650
	private void OnInfoClicked() { }

	// RVA: 0x246F708 Offset: 0x246B708 VA: 0x246F708
	private void OnInfoContinueClicked() { }

	// RVA: 0x246F748 Offset: 0x246B748 VA: 0x246F748
	private void OnBattlePassPurchase(FulfillPurchaseMessage m) { }

	[AsyncStateMachine(typeof(BattlePassSubMonitor.<ApplyTutorial>d__34))]
	// RVA: 0x246DACC Offset: 0x2469ACC VA: 0x246DACC
	private UniTaskVoid ApplyTutorial(LoopVerticalScrollRect scrollRect) { }

	// RVA: 0x246F544 Offset: 0x246B544 VA: 0x246F544
	private void ClearPreviewItemContainer() { }

	// RVA: 0x246F7AC Offset: 0x246B7AC VA: 0x246F7AC
	public void .ctor() { }
}

