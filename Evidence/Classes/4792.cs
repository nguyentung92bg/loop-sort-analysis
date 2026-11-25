// Namespace: 
public sealed class CoinRush : LiveOpsBase, INotificationPopup // TypeDefIndex: 4792
{
	// Fields
	[Inject]
	private SheetContainer _sheetContainer; // 0x10
	[Inject]
	private LiveOpsModule _liveOpsModule; // 0x18
	[Inject]
	private PurchasingModule _purchasingModule; // 0x20
	[Inject]
	private ISubscriber<LevelWinMessage> _levelWinSub; // 0x28
	public CloudPrefsBool Active; // 0x30
	public CloudPrefsInt Progress; // 0x50
	public CloudPrefsInt WinCount; // 0x70

	// Methods

	// RVA: 0x250D818 Offset: 0x2509818 VA: 0x250D818 Slot: 5
	public override void Initialize() { }

	// RVA: 0x250DC10 Offset: 0x2509C10 VA: 0x250DC10 Slot: 8
	public override void Complete() { }

	// RVA: 0x250DDC0 Offset: 0x2509DC0 VA: 0x250DDC0 Slot: 13
	public override bool CanShow() { }

	// RVA: 0x250DF44 Offset: 0x2509F44 VA: 0x250DF44 Slot: 9
	public override bool CanComplete() { }

	// RVA: 0x250E0F4 Offset: 0x250A0F4 VA: 0x250E0F4
	private void OnLevelWin(LevelWinMessage m) { }

	// RVA: 0x250E164 Offset: 0x250A164 VA: 0x250E164
	private void OnPurchase(FulfillPurchaseMessage m) { }

	// RVA: 0x250E174 Offset: 0x250A174 VA: 0x250E174
	public void OnMonitorActive() { }

	// RVA: 0x250D9B4 Offset: 0x25099B4 VA: 0x250D9B4
	private void SetCompletedStates() { }

	// RVA: 0x250E178 Offset: 0x250A178 VA: 0x250E178
	public int GetTotalReward() { }

	// RVA: 0x250E2CC Offset: 0x250A2CC VA: 0x250E2CC
	public int GetFocusId() { }

	// RVA: 0x250E4DC Offset: 0x250A4DC VA: 0x250E4DC Slot: 19
	public bool CanShowNotificationBadge(out string text) { }

	// RVA: 0x250E698 Offset: 0x250A698 VA: 0x250E698
	public void .ctor() { }
}

