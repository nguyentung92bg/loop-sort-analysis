// Namespace: 
public sealed class EditorProvider : IAdsProvider, IAnalyticsProvider // TypeDefIndex: 14952
{
	// Fields
	[Inject]
	private Monitors _monitors; // 0x10

	// Methods

	// RVA: 0x2240AE8 Offset: 0x223CAE8 VA: 0x2240AE8 Slot: 4
	public void EnableNoAds() { }

	// RVA: 0x2240AEC Offset: 0x223CAEC VA: 0x2240AEC Slot: 5
	public void DisableNoAds() { }

	// RVA: 0x2240AF0 Offset: 0x223CAF0 VA: 0x2240AF0 Slot: 6
	public void WatchRewardedVideo(string placement, Action<bool> watched) { }

	// RVA: 0x2240C54 Offset: 0x223CC54 VA: 0x2240C54 Slot: 7
	public void WatchInterstitial(string placement, Action<bool> watched) { }

	// RVA: 0x2240C80 Offset: 0x223CC80 VA: 0x2240C80 Slot: 8
	public bool CanShowInterstitial() { }

	// RVA: 0x2240C88 Offset: 0x223CC88 VA: 0x2240C88 Slot: 9
	public bool IsRewardedVideoAvailable() { }

	// RVA: 0x2240C90 Offset: 0x223CC90 VA: 0x2240C90 Slot: 10
	public void OnRewardedButtonShown(string placement) { }

	// RVA: 0x2240C94 Offset: 0x223CC94 VA: 0x2240C94 Slot: 11
	public void StartGame(int levelNumber, Dictionary<string, object> customData) { }

	// RVA: 0x2240C98 Offset: 0x223CC98 VA: 0x2240C98 Slot: 12
	public void WinGame(int levelNumber, Dictionary<string, object> customData) { }

	// RVA: 0x2240C9C Offset: 0x223CC9C VA: 0x2240C9C Slot: 13
	public void LoseGame(int levelNumber, Dictionary<string, object> customData) { }

	// RVA: 0x2240CA0 Offset: 0x223CCA0 VA: 0x2240CA0 Slot: 14
	public void ExitGame(int currentLevel, Dictionary<string, object> customData) { }

	// RVA: 0x2240CA4 Offset: 0x223CCA4 VA: 0x2240CA4 Slot: 15
	public void PauseGame() { }

	// RVA: 0x2240CA8 Offset: 0x223CCA8 VA: 0x2240CA8 Slot: 16
	public void ResumeGame() { }

	// RVA: 0x2240CAC Offset: 0x223CCAC VA: 0x2240CAC Slot: 17
	public void CustomEvent(string eventName, Dictionary<string, object> customData) { }

	// RVA: 0x2240CB0 Offset: 0x223CCB0 VA: 0x2240CB0 Slot: 18
	public void AddItem(EconomyAddMessage m) { }

	// RVA: 0x2240CB4 Offset: 0x223CCB4 VA: 0x2240CB4 Slot: 19
	public void ConsumeItem(EconomyConsumeMessage m) { }

	// RVA: 0x2240CB8 Offset: 0x223CCB8 VA: 0x2240CB8 Slot: 20
	public void StartPurchase(AnalyticsPurchaseEvent args) { }

	// RVA: 0x2240EC0 Offset: 0x223CEC0 VA: 0x2240EC0 Slot: 21
	public void CompletePurchase(AnalyticsPurchaseEvent args) { }

	// RVA: 0x22410C8 Offset: 0x223D0C8 VA: 0x22410C8 Slot: 22
	public void FailPurchase(AnalyticsPurchaseEvent args) { }

	// RVA: 0x2241308 Offset: 0x223D308 VA: 0x2241308 Slot: 23
	public void UseBooster(BoosterType boosterType) { }

	// RVA: 0x224130C Offset: 0x223D30C VA: 0x224130C Slot: 24
	public void UseEgp(AnalyticsEgpArgs args) { }

	// RVA: 0x2241310 Offset: 0x223D310 VA: 0x2241310 Slot: 25
	public void ShopOpen() { }

	// RVA: 0x2241314 Offset: 0x223D314 VA: 0x2241314 Slot: 26
	public void SetGameInteractable() { }

	// RVA: 0x2241318 Offset: 0x223D318 VA: 0x2241318 Slot: 27
	public void ShowPrivacy() { }

	// RVA: 0x224131C Offset: 0x223D31C VA: 0x224131C Slot: 28
	public void TryToShowAppRater() { }

	// RVA: 0x2241320 Offset: 0x223D320 VA: 0x2241320 Slot: 29
	public bool GetDebuggerAuthorization() { }

	// RVA: 0x2241328 Offset: 0x223D328 VA: 0x2241328 Slot: 30
	public AnalyticsUserInfo GetUserInfo() { }

	// RVA: 0x2241338 Offset: 0x223D338 VA: 0x2241338 Slot: 31
	public void LiveOpsEventJoined(LiveOps liveOps) { }

	// RVA: 0x224133C Offset: 0x223D33C VA: 0x224133C Slot: 32
	public void LiveOpsImpressions(LiveOps liveOps, LiveOpsImpressionTrigger trigger) { }

	// RVA: 0x2241340 Offset: 0x223D340 VA: 0x2241340 Slot: 33
	public void LiveOpsMilestoneCompleted(LiveOps liveOps, LiveOpsMilestoneArgs args) { }

	// RVA: 0x2241344 Offset: 0x223D344 VA: 0x2241344 Slot: 34
	public void LiveOpsEventCompleted(LiveOps liveOps, LiveOpsEventCompletedArgs args) { }

	// RVA: 0x2241348 Offset: 0x223D348 VA: 0x2241348 Slot: 35
	public void LiveOpsPurchase(LiveOps liveOps, string placement) { }

	// RVA: 0x224134C Offset: 0x223D34C VA: 0x224134C Slot: 36
	public void LiveOpsItemTransaction(LiveOps liveOps, LiveOpsItemTransactionArgs args) { }

	// RVA: 0x2241350 Offset: 0x223D350 VA: 0x2241350
	public void .ctor() { }
}

