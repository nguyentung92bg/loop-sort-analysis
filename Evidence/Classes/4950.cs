// Namespace: 
public interface IAnalyticsProvider // TypeDefIndex: 4950
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void StartGame(int levelNumber, Dictionary<string, object> customData);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void WinGame(int levelNumber, Dictionary<string, object> customData);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void LoseGame(int levelNumber, Dictionary<string, object> customData);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void ExitGame(int currentLevel, Dictionary<string, object> customData);

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void PauseGame();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void ResumeGame();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract void CustomEvent(string eventName, Dictionary<string, object> customData);

	// RVA: -1 Offset: -1 Slot: 7
	public abstract void AddItem(EconomyAddMessage m);

	// RVA: -1 Offset: -1 Slot: 8
	public abstract void ConsumeItem(EconomyConsumeMessage m);

	// RVA: -1 Offset: -1 Slot: 9
	public abstract void StartPurchase(AnalyticsPurchaseEvent args);

	// RVA: -1 Offset: -1 Slot: 10
	public abstract void CompletePurchase(AnalyticsPurchaseEvent args);

	// RVA: -1 Offset: -1 Slot: 11
	public abstract void FailPurchase(AnalyticsPurchaseEvent args);

	// RVA: -1 Offset: -1 Slot: 12
	public abstract void UseBooster(BoosterType boosterType);

	// RVA: -1 Offset: -1 Slot: 13
	public abstract void UseEgp(AnalyticsEgpArgs args);

	// RVA: -1 Offset: -1 Slot: 14
	public abstract void ShopOpen();

	// RVA: -1 Offset: -1 Slot: 15
	public abstract void SetGameInteractable();

	// RVA: -1 Offset: -1 Slot: 16
	public abstract void ShowPrivacy();

	// RVA: -1 Offset: -1 Slot: 17
	public abstract void TryToShowAppRater();

	// RVA: -1 Offset: -1 Slot: 18
	public abstract bool GetDebuggerAuthorization();

	// RVA: -1 Offset: -1 Slot: 19
	public abstract AnalyticsUserInfo GetUserInfo();

	// RVA: -1 Offset: -1 Slot: 20
	public abstract void LiveOpsEventJoined(LiveOps liveOps);

	// RVA: -1 Offset: -1 Slot: 21
	public abstract void LiveOpsImpressions(LiveOps liveOps, LiveOpsImpressionTrigger trigger);

	// RVA: -1 Offset: -1 Slot: 22
	public abstract void LiveOpsMilestoneCompleted(LiveOps liveOps, LiveOpsMilestoneArgs args);

	// RVA: -1 Offset: -1 Slot: 23
	public abstract void LiveOpsEventCompleted(LiveOps liveOps, LiveOpsEventCompletedArgs args);

	// RVA: -1 Offset: -1 Slot: 24
	public abstract void LiveOpsPurchase(LiveOps liveOps, string placement);

	// RVA: -1 Offset: -1 Slot: 25
	public abstract void LiveOpsItemTransaction(LiveOps liveOps, LiveOpsItemTransactionArgs args);
}

