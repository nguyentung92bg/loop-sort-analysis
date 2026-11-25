// Namespace: 
public sealed class BattlePass : LiveOpsBase, INotificationPopup // TypeDefIndex: 4790
{
	// Fields
	[Inject]
	private SheetContainer _sheetContainer; // 0x10
	[Inject]
	private EconomyModule _economyModule; // 0x18
	[Inject]
	private Shop _shop; // 0x20
	[Inject]
	private Monitors _monitors; // 0x28
	[Inject]
	private AnalyticsModule _analyticsModule; // 0x30
	[Inject]
	private LiveOpsModule _liveOpsModule; // 0x38
	[Inject]
	private WeeklyMissions _weeklyMissions; // 0x40
	[Inject]
	private PurchasingModule _purchasingModule; // 0x48
	[Inject]
	private AdsModule _adsModule; // 0x50
	[Inject]
	private ISubscriber<LevelWinMessage> _levelWinSub; // 0x58
	[Inject]
	private ISubscriber<WeeklyMissionsMilestoneCreateMessage> _weeklyMissionsMilestoneCreateSub; // 0x60
	public CloudPrefsBool Premium; // 0x68
	public CloudPrefsBool Tutorial; // 0x88
	public CloudPrefsInt Level; // 0xA8

	// Methods

	// RVA: 0x250B600 Offset: 0x2507600 VA: 0x250B600 Slot: 5
	public override void Initialize() { }

	// RVA: 0x250B86C Offset: 0x250786C VA: 0x250B86C Slot: 8
	public override void Complete() { }

	// RVA: 0x250BA3C Offset: 0x2507A3C VA: 0x250BA3C Slot: 16
	public override LiveOpsEventCompletedArgs GetEventCompletedData() { }

	// RVA: 0x250BCF4 Offset: 0x2507CF4 VA: 0x250BCF4 Slot: 15
	public override Dictionary<string, object> GetAnalyticsData() { }

	// RVA: 0x250BE90 Offset: 0x2507E90 VA: 0x250BE90
	public int GetTotalKeyCount() { }

	// RVA: 0x250BEAC Offset: 0x2507EAC VA: 0x250BEAC
	public int GetCurrentLevel() { }

	// RVA: 0x250BE14 Offset: 0x2507E14 VA: 0x250BE14
	public BattlePassSheet.Row GetCurrentLevelData() { }

	// RVA: 0x250C138 Offset: 0x2508138 VA: 0x250C138
	public int GetCurrentKeyCount() { }

	// RVA: 0x250BEC8 Offset: 0x2507EC8 VA: 0x250BEC8
	private void RefreshProgress() { }

	// RVA: 0x250C1D0 Offset: 0x25081D0 VA: 0x250C1D0
	private void MigrateLegacyProgress() { }

	// RVA: 0x250C45C Offset: 0x250845C VA: 0x250C45C
	private int GetHighestClaimedId() { }

	// RVA: 0x250C3C4 Offset: 0x25083C4 VA: 0x250C3C4
	public BattlePassSheet.Row GetLastProgressData() { }

	// RVA: 0x250C680 Offset: 0x2508680 VA: 0x250C680 Slot: 19
	public bool CanShowNotificationBadge(out string text) { }

	// RVA: 0x250C924 Offset: 0x2508924 VA: 0x250C924
	private void OnLevelWin(LevelWinMessage m) { }

	// RVA: 0x250CB00 Offset: 0x2508B00 VA: 0x250CB00
	public bool IsTutorialRequired() { }

	// RVA: 0x250CA00 Offset: 0x2508A00 VA: 0x250CA00
	private bool IsProgressComplete() { }

	// RVA: 0x250CBC8 Offset: 0x2508BC8 VA: 0x250CBC8
	private void OnWeeklyMissionsMilestoneCreate(WeeklyMissionsMilestoneCreateMessage m) { }

	[AsyncStateMachine(typeof(BattlePass.<ShowWeeklyMissionsInfo>d__31))]
	// RVA: 0x250CCA4 Offset: 0x2508CA4 VA: 0x250CCA4
	private UniTaskVoid ShowWeeklyMissionsInfo() { }

	// RVA: 0x250CD38 Offset: 0x2508D38 VA: 0x250CD38
	private void OnBattlePassPurchase(FulfillPurchaseMessage m) { }

	// RVA: 0x250CDB0 Offset: 0x2508DB0 VA: 0x250CDB0
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x250CE74 Offset: 0x2508E74 VA: 0x250CE74
	private void <OnWeeklyMissionsMilestoneCreate>b__30_0() { }
}

