// Namespace: 
public sealed class LavaQuest : LiveOpsBase, ITickable // TypeDefIndex: 4823
{
	// Fields
	[Inject]
	private ISubscriber<LevelWinMessage> _levelWinSub; // 0x10
	[Inject]
	private ISubscriber<LevelLoseMessage> _levelLoseSub; // 0x18
	[Inject]
	private ISubscriber<ReviveContinueResultUpdateMessage> _reviveContinueResultUpdateSub; // 0x20
	[Inject]
	private ISubscriber<WeeklyMissionsMilestoneCreateMessage> _weeklyMissionsMilestoneCreateSub; // 0x28
	[Inject]
	private LiveOpsModule _liveOpsModule; // 0x30
	[Inject]
	private SheetContainer _sheetContainer; // 0x38
	[Inject]
	private AnalyticsModule _analyticsModule; // 0x40
	[Inject]
	private Monitors _monitors; // 0x48
	[Inject]
	private FulfillModule _fulfillModule; // 0x50
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x58
	[Inject]
	private WeeklyMissions _weeklyMissions; // 0x60
	public const int MaxPlayerElementCount = 12;
	public const int MaxPlayerCount = 100;
	public const int MaxGameLevel = 10;
	public const int MaxEliminateCount = 3;
	private Nullable<LavaQuestGame> _progressFromGame; // 0x68
	private Nullable<LavaQuestGame> _progressToGame; // 0x84
	private LavaQuestConfig _config; // 0xA0
	private StreakTournamentConfig _streakTournamentConfig; // 0xA8

	// Properties
	private static CloudPrefsT<LavaQuestGame> Game { get; }

	// Methods

	// RVA: 0x2519E88 Offset: 0x2515E88 VA: 0x2519E88
	private static CloudPrefsT<LavaQuestGame> get_Game() { }

	// RVA: 0x2519EFC Offset: 0x2515EFC VA: 0x2519EFC Slot: 5
	public override void Initialize() { }

	// RVA: 0x251A310 Offset: 0x2516310 VA: 0x251A310 Slot: 15
	public override Dictionary<string, object> GetAnalyticsData() { }

	// RVA: 0x251A484 Offset: 0x2516484 VA: 0x251A484 Slot: 16
	public override LiveOpsEventCompletedArgs GetEventCompletedData() { }

	// RVA: 0x251A5A0 Offset: 0x25165A0 VA: 0x251A5A0 Slot: 11
	public override bool CanJoin() { }

	// RVA: 0x251A864 Offset: 0x2516864 VA: 0x251A864 Slot: 12
	public override bool CanAutoJoin() { }

	// RVA: 0x251A86C Offset: 0x251686C VA: 0x251A86C Slot: 13
	public override bool CanShow() { }

	// RVA: 0x251A884 Offset: 0x2516884 VA: 0x251A884 Slot: 14
	public override bool CanShowInHome() { }

	// RVA: 0x251A6E4 Offset: 0x25166E4 VA: 0x251A6E4
	private bool IsStreakTournamentWindow() { }

	// RVA: 0x251A8D4 Offset: 0x25168D4 VA: 0x251A8D4 Slot: 8
	public override void Complete() { }

	[AsyncStateMachine(typeof(LavaQuest.<ApplyHomeAction>d__30))]
	// RVA: 0x251AB50 Offset: 0x2516B50 VA: 0x251AB50 Slot: 6
	public override UniTask ApplyHomeAction(CancellationToken cancellationToken) { }

	// RVA: 0x251ABF4 Offset: 0x2516BF4 VA: 0x251ABF4
	public void JoinGame() { }

	// RVA: 0x251ACDC Offset: 0x2516CDC VA: 0x251ACDC
	public LavaQuestGame GetNewGame() { }

	// RVA: 0x251AD74 Offset: 0x2516D74 VA: 0x251AD74
	private void WinGame() { }

	// RVA: 0x251B1E4 Offset: 0x25171E4 VA: 0x251B1E4
	private void LoseGame() { }

	// RVA: 0x251B138 Offset: 0x2517138 VA: 0x251B138
	private LavaQuestGame DecreasePlayerCount(LavaQuestGame game) { }

	// RVA: 0x251B510 Offset: 0x2517510 VA: 0x251B510
	private void HandlePrizeClaim(LavaQuestGame game) { }

	// RVA: 0x251B678 Offset: 0x2517678 VA: 0x251B678
	private void OnLevelWin(LevelWinMessage m) { }

	// RVA: 0x251B67C Offset: 0x251767C VA: 0x251B67C
	private void OnLevelLose(LevelLoseMessage m) { }

	// RVA: 0x251B680 Offset: 0x2517680 VA: 0x251B680
	private void OnReviveContinueResultUpdate(ReviveContinueResultUpdateMessage m) { }

	// RVA: 0x251B768 Offset: 0x2517768 VA: 0x251B768 Slot: 19
	public void Tick() { }

	// RVA: 0x251B76C Offset: 0x251776C VA: 0x251B76C Slot: 17
	public override string GetHomeText() { }

	// RVA: 0x251B998 Offset: 0x2517998 VA: 0x251B998
	private void OnWeeklyMissionsMilestoneCreate(WeeklyMissionsMilestoneCreateMessage m) { }

	[AsyncStateMachine(typeof(LavaQuest.<ShowWeeklyMissionsInfo>d__43))]
	// RVA: 0x251BA74 Offset: 0x2517A74 VA: 0x251BA74
	private UniTaskVoid ShowWeeklyMissionsInfo() { }

	// RVA: 0x251BB08 Offset: 0x2517B08 VA: 0x251BB08
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x251BB10 Offset: 0x2517B10 VA: 0x251BB10
	private void <OnWeeklyMissionsMilestoneCreate>b__42_0() { }
}

