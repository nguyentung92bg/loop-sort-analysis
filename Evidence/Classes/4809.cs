// Namespace: 
public sealed class DailyChallenge : LiveOpsBase // TypeDefIndex: 4809
{
	// Fields
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x10
	[Inject]
	private SheetContainer _sheetContainer; // 0x18
	[Inject]
	private DailyChallengeSheetModule _dailyChallengeSheetModule; // 0x20
	[Inject]
	private GameMachine _gameMachine; // 0x28
	[Inject]
	private FulfillModule _fulfillModule; // 0x30
	[Inject]
	private LiveOpsModule _liveOpsModule; // 0x38
	[Inject]
	private PlaySessionModule _playSessionModule; // 0x40
	[Inject]
	private AnalyticsModule _analyticsModule; // 0x48
	private DailyChallengeConfig _config; // 0x50
	private bool _showOnHome; // 0x58
	private bool _isStarting; // 0x59
	private int _progressFrom; // 0x5C

	// Methods

	// RVA: 0x251504C Offset: 0x251104C VA: 0x251504C Slot: 5
	public override void Initialize() { }

	// RVA: 0x25150B8 Offset: 0x25110B8 VA: 0x25150B8 Slot: 6
	public override UniTask ApplyHomeAction(CancellationToken cancellationToken) { }

	// RVA: 0x2515440 Offset: 0x2511440 VA: 0x2515440 Slot: 13
	public override bool CanShow() { }

	// RVA: 0x2515444 Offset: 0x2511444 VA: 0x2515444 Slot: 14
	public override bool CanShowInHome() { }

	// RVA: 0x2515448 Offset: 0x2511448 VA: 0x2515448 Slot: 12
	public override bool CanAutoJoin() { }

	// RVA: 0x2515450 Offset: 0x2511450 VA: 0x2515450 Slot: 9
	public override bool CanComplete() { }

	// RVA: 0x2515458 Offset: 0x2511458 VA: 0x2515458 Slot: 17
	public override string GetHomeText() { }

	// RVA: 0x25155D0 Offset: 0x25115D0 VA: 0x25155D0 Slot: 15
	public override Dictionary<string, object> GetAnalyticsData() { }

	// RVA: 0x2515358 Offset: 0x2511358 VA: 0x2515358
	private bool IsActive() { }

	// RVA: 0x25157B4 Offset: 0x25117B4 VA: 0x25157B4
	public void Prepare() { }

	// RVA: 0x2515830 Offset: 0x2511830 VA: 0x2515830
	public void Play() { }

	[AsyncStateMachine(typeof(DailyChallenge.<Play>d__23))]
	// RVA: 0x25158F0 Offset: 0x25118F0 VA: 0x25158F0
	public UniTaskVoid Play(DateTime date) { }

	// RVA: 0x2515994 Offset: 0x2511994 VA: 0x2515994
	private void Finish(bool isWin, DateTime date, ThemeType theme) { }

	// RVA: 0x2515C98 Offset: 0x2511C98 VA: 0x2515C98
	public int GetReward(ThemeType theme) { }

	// RVA: 0x2515D10 Offset: 0x2511D10 VA: 0x2515D10
	private static void SetMonth(DateTime date) { }

	// RVA: 0x2515B34 Offset: 0x2511B34 VA: 0x2515B34
	private void Complete(DateTime date) { }

	// RVA: 0x2515E38 Offset: 0x2511E38 VA: 0x2515E38
	public int ConsumeProgressFrom() { }

	// RVA: 0x2515E6C Offset: 0x2511E6C VA: 0x2515E6C
	public bool IsRewardClaimed(DailyChallengeRewardSheet.Day data) { }

	// RVA: 0x2515180 Offset: 0x2511180 VA: 0x2515180
	private bool HasUnclaimedReward() { }

	// RVA: 0x251604C Offset: 0x251204C VA: 0x251604C
	public List<RewardInfo> ClaimReward(DailyChallengeRewardSheet.Day data) { }

	// RVA: 0x25165C8 Offset: 0x25125C8 VA: 0x25165C8
	private static LevelSheet.Level GetLevel(DailyChallengeSheetContainer sheetContainer, DateTime date) { }

	// RVA: 0x251673C Offset: 0x251273C VA: 0x251673C
	private static int[] GetMonthOrder(int count, int month) { }

	// RVA: 0x2516874 Offset: 0x2512874 VA: 0x2516874
	private static ulong NextRandom(ref ulong state) { }

	// RVA: 0x25168CC Offset: 0x25128CC VA: 0x25168CC
	public bool IsCompleted(int day) { }

	// RVA: 0x251695C Offset: 0x251295C VA: 0x251695C
	public bool IsFailed(int day) { }

	// RVA: 0x25155B0 Offset: 0x25115B0 VA: 0x25155B0
	public int GetCompletedDayCount() { }

	// RVA: 0x25168EC Offset: 0x25128EC VA: 0x25168EC
	private static int GetCompletedDays() { }

	// RVA: 0x2515F40 Offset: 0x2511F40 VA: 0x2515F40
	private static int GetMonthValue(CloudPrefsInt prefs) { }

	// RVA: 0x25169F8 Offset: 0x25129F8 VA: 0x25169F8
	public void .ctor() { }
}

