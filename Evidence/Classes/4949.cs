// Namespace: 
public sealed class AnalyticsModule : ModuleBase, IInitializable // TypeDefIndex: 4949
{
	// Fields
	[Inject]
	private IAnalyticsProvider _provider; // 0x10
	[Inject]
	private SheetContainer _sheetContainer; // 0x18
	[Inject]
	private Monitors _monitors; // 0x20
	[Inject]
	private ISubscriber<EconomyAddMessage> _economyAddSub; // 0x28
	[Inject]
	private ISubscriber<EconomyConsumeMessage> _economyConsumeSub; // 0x30
	[Inject]
	private ISubscriber<EconomyConsumeFailMessage> _economyConsumeFailSub; // 0x38
	[Inject]
	private ISubscriber<OutOfLivesMessage> _outOfLivesSub; // 0x40
	[Inject]
	private IPublisher<LiveOpsJoinedMessage> _liveOpsJoinedPub; // 0x48
	[Inject]
	private IPublisher<LiveOpsMilestoneCompletedMessage> _liveOpsMilestoneCompletedPub; // 0x50
	private int _currentLevel; // 0x58

	// Methods

	// RVA: 0x253E8E8 Offset: 0x253A8E8 VA: 0x253E8E8 Slot: 4
	public void Initialize() { }

	// RVA: 0x253EC80 Offset: 0x253AC80 VA: 0x253EC80
	public void StartGame(int levelNumber, Dictionary<string, object> customData) { }

	// RVA: 0x253ED4C Offset: 0x253AD4C VA: 0x253ED4C
	public void WinGame(Dictionary<string, object> customData) { }

	// RVA: 0x253EE08 Offset: 0x253AE08 VA: 0x253EE08
	public void LoseGame(Dictionary<string, object> customData) { }

	// RVA: 0x253EEC4 Offset: 0x253AEC4 VA: 0x253EEC4
	public void ExitGame(Dictionary<string, object> customData) { }

	// RVA: 0x253EF80 Offset: 0x253AF80 VA: 0x253EF80
	public void CustomEvent(string eventName, Dictionary<string, object> customData) { }

	// RVA: 0x253F048 Offset: 0x253B048 VA: 0x253F048
	public void AddItem(EconomyAddMessage m) { }

	// RVA: 0x253F124 Offset: 0x253B124 VA: 0x253F124
	public void ConsumeItem(EconomyConsumeMessage m) { }

	// RVA: 0x253F200 Offset: 0x253B200 VA: 0x253F200
	public void StartPurchase(AnalyticsPurchaseEvent args) { }

	// RVA: 0x253F2E8 Offset: 0x253B2E8 VA: 0x253F2E8
	public void CompletePurchase(AnalyticsPurchaseEvent args) { }

	// RVA: 0x253F414 Offset: 0x253B414 VA: 0x253F414
	public void FailPurchase(AnalyticsPurchaseEvent args) { }

	// RVA: 0x253F4FC Offset: 0x253B4FC VA: 0x253F4FC
	public void UseBooster(BoosterType boosterType) { }

	// RVA: 0x253F5B0 Offset: 0x253B5B0 VA: 0x253F5B0
	public void UseEgp(AnalyticsEgpArgs args) { }

	// RVA: 0x253F664 Offset: 0x253B664 VA: 0x253F664
	public void ShopOpen() { }

	// RVA: 0x253F710 Offset: 0x253B710 VA: 0x253F710
	public void SetGameInteractable() { }

	// RVA: 0x253F7BC Offset: 0x253B7BC VA: 0x253F7BC
	public void PauseGame() { }

	// RVA: 0x253F868 Offset: 0x253B868 VA: 0x253F868
	public void ResumeGame() { }

	// RVA: 0x253F914 Offset: 0x253B914 VA: 0x253F914
	public void ShowPrivacy() { }

	// RVA: 0x253F9C0 Offset: 0x253B9C0 VA: 0x253F9C0
	public bool TryToShowAppRater(Action<bool> rated) { }

	// RVA: 0x253FBD4 Offset: 0x253BBD4 VA: 0x253FBD4
	public bool GetDebuggerAuthorization() { }

	// RVA: 0x253FC84 Offset: 0x253BC84 VA: 0x253FC84
	public AnalyticsUserInfo GetUserInfo() { }

	// RVA: 0x253FD5C Offset: 0x253BD5C VA: 0x253FD5C
	private void OnEconomyAdd(EconomyAddMessage m) { }

	// RVA: 0x253FD8C Offset: 0x253BD8C VA: 0x253FD8C
	private void OnEconomyConsume(EconomyConsumeMessage m) { }

	// RVA: 0x253FEC0 Offset: 0x253BEC0 VA: 0x253FEC0
	private void OnEconomyConsumeFail(EconomyConsumeFailMessage m) { }

	// RVA: 0x253FED4 Offset: 0x253BED4 VA: 0x253FED4
	private void OnOutOfLives(OutOfLivesMessage m) { }

	// RVA: 0x253FE3C Offset: 0x253BE3C VA: 0x253FE3C
	private void OnOutOfGolds() { }

	// RVA: 0x25403E8 Offset: 0x253C3E8 VA: 0x25403E8
	public void LiveOpsEventJoined(LiveOps liveOps) { }

	// RVA: 0x254055C Offset: 0x253C55C VA: 0x254055C
	public void LiveOpsImpressions(LiveOps liveOps, LiveOpsImpressionTrigger trigger) { }

	// RVA: 0x2540658 Offset: 0x253C658 VA: 0x2540658
	public void LiveOpsMilestoneCompleted(LiveOps liveOps, LiveOpsMilestoneArgs args) { }

	// RVA: 0x2540804 Offset: 0x253C804 VA: 0x2540804
	public void LiveOpsEventCompleted(LiveOps liveOps, LiveOpsEventCompletedArgs args) { }

	// RVA: 0x2540920 Offset: 0x253C920 VA: 0x2540920
	public void LiveOpsPurchase(LiveOps liveOps, string placement) { }

	// RVA: 0x2540A1C Offset: 0x253CA1C VA: 0x2540A1C
	public void LiveOpsItemTransaction(LiveOps liveOps, LiveOpsItemTransactionArgs args) { }

	// RVA: 0x2540B48 Offset: 0x253CB48 VA: 0x2540B48
	public void .ctor() { }
}

