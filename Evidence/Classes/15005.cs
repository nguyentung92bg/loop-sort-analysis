// Namespace: 
public sealed class VoodooSauceProvider : IInitializable, IAnalyticsProvider, IAdsProvider // TypeDefIndex: 15005
{
	// Fields
	[Inject]
	private Monitors _monitors; // 0x10
	[Inject]
	private SheetContainer _sheetContainer; // 0x18
	[Inject]
	private LifeModule _lifeModule; // 0x20
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x28
	[Inject]
	private ISubscriber<ToggleDebuggerModeMessage> _toggleDebuggerModeSub; // 0x30
	private int _goldSpent; // 0x38
	private int _reviveCount; // 0x3C
	private int _reviveCountRv; // 0x40
	private LevelFunnelConfig _levelFunnelConfig; // 0x48
	private GameStartedParameters _gameStartedParameters; // 0x50
	private readonly Dictionary<BoosterType, int> _boosterUseCount; // 0x58

	// Properties
	private string LevelFunnelName { get; }

	// Methods

	// RVA: 0x22552D4 Offset: 0x22512D4 VA: 0x22552D4
	private string get_LevelFunnelName() { }

	// RVA: 0x2255440 Offset: 0x2251440 VA: 0x2255440 Slot: 4
	public void Initialize() { }

	// RVA: 0x225569C Offset: 0x225169C VA: 0x225569C
	private void ToggleDebuggerMode(ToggleDebuggerModeMessage m) { }

	// RVA: 0x22556A4 Offset: 0x22516A4 VA: 0x22556A4 Slot: 5
	public void StartGame(int levelNumber, Dictionary<string, object> customData) { }

	// RVA: 0x2255C48 Offset: 0x2251C48 VA: 0x2255C48 Slot: 6
	public void WinGame(int levelNumber, Dictionary<string, object> customData) { }

	// RVA: 0x2256C4C Offset: 0x2252C4C VA: 0x2256C4C Slot: 7
	public void LoseGame(int levelNumber, Dictionary<string, object> customData) { }

	// RVA: 0x2256CF4 Offset: 0x2252CF4 VA: 0x2256CF4 Slot: 8
	public void ExitGame(int levelNumber, Dictionary<string, object> customData) { }

	// RVA: 0x2256D9C Offset: 0x2252D9C VA: 0x2256D9C Slot: 9
	public void PauseGame() { }

	// RVA: 0x2256DF0 Offset: 0x2252DF0 VA: 0x2256DF0 Slot: 10
	public void ResumeGame() { }

	// RVA: 0x2256E44 Offset: 0x2252E44 VA: 0x2256E44 Slot: 11
	public void CustomEvent(string eventName, Dictionary<string, object> customData) { }

	// RVA: 0x2256EB4 Offset: 0x2252EB4 VA: 0x2256EB4 Slot: 12
	public void AddItem(EconomyAddMessage m) { }

	// RVA: 0x2257374 Offset: 0x2253374 VA: 0x2257374 Slot: 13
	public void ConsumeItem(EconomyConsumeMessage m) { }

	// RVA: 0x2257458 Offset: 0x2253458 VA: 0x2257458 Slot: 14
	public void StartPurchase(AnalyticsPurchaseEvent args) { }

	// RVA: 0x2257628 Offset: 0x2253628 VA: 0x2257628 Slot: 15
	public void CompletePurchase(AnalyticsPurchaseEvent args) { }

	// RVA: 0x225778C Offset: 0x225378C VA: 0x225778C Slot: 16
	public void FailPurchase(AnalyticsPurchaseEvent args) { }

	// RVA: 0x22574D8 Offset: 0x22534D8 VA: 0x22574D8
	private static void SendPurchaseEvent(AnalyticsPurchaseEvent purchaseEvent, AnalyticsCustomEvent customEvent) { }

	// RVA: 0x225780C Offset: 0x225380C VA: 0x225780C Slot: 17
	public void UseBooster(BoosterType boosterType) { }

	// RVA: 0x22578D8 Offset: 0x22538D8 VA: 0x22578D8 Slot: 18
	public void UseEgp(AnalyticsEgpArgs args) { }

	// RVA: 0x22578F8 Offset: 0x22538F8 VA: 0x22578F8 Slot: 19
	public void ShopOpen() { }

	// RVA: 0x2257944 Offset: 0x2253944 VA: 0x2257944 Slot: 20
	public void SetGameInteractable() { }

	// RVA: 0x2257994 Offset: 0x2253994 VA: 0x2257994 Slot: 21
	public void ShowPrivacy() { }

	// RVA: 0x22579E8 Offset: 0x22539E8 VA: 0x22579E8 Slot: 22
	public void TryToShowAppRater() { }

	// RVA: 0x22579F0 Offset: 0x22539F0 VA: 0x22579F0 Slot: 23
	public bool GetDebuggerAuthorization() { }

	// RVA: 0x2257A40 Offset: 0x2253A40 VA: 0x2257A40 Slot: 24
	public AnalyticsUserInfo GetUserInfo() { }

	// RVA: 0x2257D1C Offset: 0x2253D1C VA: 0x2257D1C Slot: 25
	public void LiveOpsEventJoined(LiveOps liveOps) { }

	// RVA: 0x2257D9C Offset: 0x2253D9C VA: 0x2257D9C Slot: 26
	public void LiveOpsImpressions(LiveOps liveOps, LiveOpsImpressionTrigger trigger) { }

	// RVA: 0x2257E38 Offset: 0x2253E38 VA: 0x2257E38 Slot: 27
	public void LiveOpsMilestoneCompleted(LiveOps liveOps, LiveOpsMilestoneArgs args) { }

	// RVA: 0x225812C Offset: 0x225412C VA: 0x225812C Slot: 28
	public void LiveOpsEventCompleted(LiveOps liveOps, LiveOpsEventCompletedArgs args) { }

	// RVA: 0x22583AC Offset: 0x22543AC VA: 0x22583AC Slot: 29
	public void LiveOpsPurchase(LiveOps liveOps, string placement) { }

	// RVA: 0x2258448 Offset: 0x2254448 VA: 0x2258448 Slot: 30
	public void LiveOpsItemTransaction(LiveOps liveOps, LiveOpsItemTransactionArgs args) { }

	// RVA: 0x2258788 Offset: 0x2254788 VA: 0x2258788 Slot: 31
	public void EnableNoAds() { }

	// RVA: 0x22587D8 Offset: 0x22547D8 VA: 0x22587D8 Slot: 32
	public void DisableNoAds() { }

	// RVA: 0x22555FC Offset: 0x22515FC VA: 0x22555FC
	private void RestoreNoAds() { }

	// RVA: 0x2258828 Offset: 0x2254828 VA: 0x2258828 Slot: 33
	public void WatchRewardedVideo(string placement, Action<bool> watched) { }

	// RVA: 0x225895C Offset: 0x225495C VA: 0x225895C Slot: 34
	public void WatchInterstitial(string placement, Action<bool> watched) { }

	// RVA: 0x2258A94 Offset: 0x2254A94 VA: 0x2258A94 Slot: 35
	public bool CanShowInterstitial() { }

	// RVA: 0x2258AE4 Offset: 0x2254AE4 VA: 0x2258AE4 Slot: 36
	public bool IsRewardedVideoAvailable() { }

	// RVA: 0x2258B38 Offset: 0x2254B38 VA: 0x2258B38 Slot: 37
	public void OnRewardedButtonShown(string placement) { }

	// RVA: 0x2256F40 Offset: 0x2252F40 VA: 0x2256F40
	private static ItemTransactionParameters CreateItemTransactionParameters(EconomyModule.Transaction transaction, int newAmount, TransactionType transactionType) { }

	// RVA: 0x2255D18 Offset: 0x2251D18 VA: 0x2255D18
	private GameFinishedParameters CreateGameFinishedParameters(int levelNumber, bool status, Dictionary<string, object> customData) { }

	// RVA: 0x2258B90 Offset: 0x2254B90 VA: 0x2258B90
	public void .ctor() { }
}

