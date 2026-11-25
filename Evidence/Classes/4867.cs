// Namespace: 
public sealed class WeeklyMissions : LiveOpsBase, INotificationPopup // TypeDefIndex: 4867
{
	// Fields
	[Inject]
	private ISubscriber<LevelWinMessage> _levelWinSub; // 0x10
	[Inject]
	private ISubscriber<LevelLoseMessage> _levelLoseSub; // 0x18
	[Inject]
	private ISubscriber<BoosterCompletedMessage> _boosterCompletedSub; // 0x20
	[Inject]
	private ISubscriber<EconomyConsumeMessage> _economyConsumeSub; // 0x28
	[Inject]
	private ISubscriber<EconomyAddMessage> _economyAddSub; // 0x30
	[Inject]
	private ISubscriber<ReviveMessage> _reviveSub; // 0x38
	[Inject]
	private ISubscriber<HiddenBlockRevealMessage> _hiddenBlockRevealSub; // 0x40
	[Inject]
	private ISubscriber<LoginMessage> _loginSub; // 0x48
	[Inject]
	private ISubscriber<RewardedVideoPostShowMessage> _rewardedVideoPostShowSub; // 0x50
	[Inject]
	private ISubscriber<PurchaseCompleteMessage> _purchaseCompleteSub; // 0x58
	[Inject]
	private ISubscriber<LiveOpsJoinedMessage> _liveOpsJoinedSub; // 0x60
	[Inject]
	private ISubscriber<LiveOpsMilestoneCompletedMessage> _liveOpsMilestoneCompletedSub; // 0x68
	[Inject]
	private LiveOpsModule _liveOpsModule; // 0x70
	[Inject]
	private SheetContainer _sheetContainer; // 0x78
	[Inject]
	private AnalyticsModule _analyticsModule; // 0x80

	// Methods

	// RVA: 0x252A18C Offset: 0x252618C VA: 0x252A18C Slot: 5
	public override void Initialize() { }

	// RVA: 0x252ABE4 Offset: 0x2526BE4 VA: 0x252ABE4
	private bool IsActive() { }

	// RVA: 0x252AC34 Offset: 0x2526C34 VA: 0x252AC34
	public int GetQuantityOf(WeeklyMissionSheet.MissionType missionType) { }

	// RVA: 0x252AD88 Offset: 0x2526D88 VA: 0x252AD88
	public bool IsCompleted(WeeklyMissionSheet.MissionArgs mission) { }

	// RVA: 0x252AE2C Offset: 0x2526E2C VA: 0x252AE2C
	private void SaveProgress(WeeklyMissionsProgress progress) { }

	// RVA: 0x252AED8 Offset: 0x2526ED8 VA: 0x252AED8
	private void TrackCompletedMissions() { }

	// RVA: 0x252B0E8 Offset: 0x25270E8 VA: 0x252B0E8
	private void OnLevelWin(LevelWinMessage m) { }

	// RVA: 0x252B228 Offset: 0x2527228 VA: 0x252B228
	private void OnLevelLose(LevelLoseMessage m) { }

	// RVA: 0x252B324 Offset: 0x2527324 VA: 0x252B324
	private void OnBoosterCompleted(BoosterCompletedMessage m) { }

	// RVA: 0x252B490 Offset: 0x2527490 VA: 0x252B490
	private void OnEconomyConsume(EconomyConsumeMessage m) { }

	// RVA: 0x252B5B0 Offset: 0x25275B0 VA: 0x252B5B0
	private void OnEconomyAdd(EconomyAddMessage m) { }

	// RVA: 0x252B708 Offset: 0x2527708 VA: 0x252B708
	private void OnRevive(ReviveMessage m) { }

	// RVA: 0x252B874 Offset: 0x2527874 VA: 0x252B874
	private void OnHiddenBlockReveal(HiddenBlockRevealMessage m) { }

	// RVA: 0x252B984 Offset: 0x2527984 VA: 0x252B984
	private void OnLogin(LoginMessage m) { }

	// RVA: 0x252BC04 Offset: 0x2527C04 VA: 0x252BC04
	private void OnRewardedVideoPostShow(RewardedVideoPostShowMessage m) { }

	// RVA: 0x252BD4C Offset: 0x2527D4C VA: 0x252BD4C
	private void OnPurchaseComplete(PurchaseCompleteMessage m) { }

	// RVA: 0x252BE3C Offset: 0x2527E3C VA: 0x252BE3C
	private void OnLiveOpsJoined(LiveOpsJoinedMessage m) { }

	// RVA: 0x252BF2C Offset: 0x2527F2C VA: 0x252BF2C
	private void OnLiveOpsMilestoneCompleted(LiveOpsMilestoneCompletedMessage m) { }

	// RVA: 0x252C024 Offset: 0x2528024 VA: 0x252C024 Slot: 10
	public override void Join() { }

	// RVA: 0x252C028 Offset: 0x2528028 VA: 0x252C028 Slot: 8
	public override void Complete() { }

	// RVA: 0x252C3CC Offset: 0x25283CC VA: 0x252C3CC Slot: 9
	public override bool CanComplete() { }

	// RVA: 0x252C8AC Offset: 0x25288AC VA: 0x252C8AC Slot: 16
	public override LiveOpsEventCompletedArgs GetEventCompletedData() { }

	// RVA: 0x252C638 Offset: 0x2528638 VA: 0x252C638
	public int GetCurrentDay() { }

	// RVA: 0x252CB98 Offset: 0x2528B98 VA: 0x252CB98
	public void AddBlock(int quantity) { }

	// RVA: 0x252CC0C Offset: 0x2528C0C VA: 0x252CC0C
	public float GetProgress01() { }

	// RVA: 0x252CD64 Offset: 0x2528D64 VA: 0x252CD64
	public bool TryGetProgressRewards(out int id, out List<RewardInfo> rewards) { }

	// RVA: 0x252CFE0 Offset: 0x2528FE0 VA: 0x252CFE0 Slot: 19
	public bool CanShowNotificationBadge(out string text) { }

	// RVA: 0x252D3E8 Offset: 0x25293E8 VA: 0x252D3E8
	public bool HasClaimableMission(int day) { }

	// RVA: 0x252D630 Offset: 0x2529630 VA: 0x252D630
	public void .ctor() { }
}

