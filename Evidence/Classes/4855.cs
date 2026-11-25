// Namespace: 
public sealed class StreakTournament : LiveOpsBase, ITickable, INotificationPopup // TypeDefIndex: 4855
{
	// Fields
	[Inject]
	private ISubscriber<LevelWinMessage> _levelWinSub; // 0x10
	[Inject]
	private ISubscriber<LevelLoseMessage> _levelLoseSub; // 0x18
	[Inject]
	private ISubscriber<PlayerProfileUpdateMessage> _playerProfileUpdateSub; // 0x20
	[Inject]
	private ISubscriber<ReviveContinueResultUpdateMessage> _reviveContinueResultUpdateSub; // 0x28
	[Inject]
	private LiveOpsModule _liveOpsModule; // 0x30
	[Inject]
	private SheetContainer _sheetContainer; // 0x38
	[Inject]
	private Avatars _avatars; // 0x40
	[Inject]
	private FulfillModule _fulfillModule; // 0x48
	[Inject]
	private Monitors _monitors; // 0x50
	[Inject]
	private EconomyModule _economyModule; // 0x58
	[Inject]
	private NicknameGenerator _nicknameGenerator; // 0x60
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x68
	[Inject]
	private AnalyticsModule _analyticsModule; // 0x70
	[CompilerGenerated]
	private List<int> <Multipliers>k__BackingField; // 0x78
	private int _winToken; // 0x80
	private StreakTournamentConfig _config; // 0x88
	private bool _playedLevelThisSession; // 0x90

	// Properties
	public List<int> Multipliers { get; set; }
	public StreakTournamentSave Save { get; }
	public StreakTournamentPlayer MainPlayer { get; }
	public StreakTournamentLeaderboard Leaderboard { get; }
	public StreakTournamentStatus Status { get; }
	public StreakTournamentPersonal Personal { get; }
	public int AppliedTimeProgression { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2524110 Offset: 0x2520110 VA: 0x2524110
	public List<int> get_Multipliers() { }

	[CompilerGenerated]
	// RVA: 0x2524118 Offset: 0x2520118 VA: 0x2524118
	private void set_Multipliers(List<int> value) { }

	// RVA: 0x2524120 Offset: 0x2520120 VA: 0x2524120
	public StreakTournamentSave get_Save() { }

	// RVA: 0x25241B4 Offset: 0x25201B4 VA: 0x25241B4
	public StreakTournamentPlayer get_MainPlayer() { }

	// RVA: 0x25241E4 Offset: 0x25201E4 VA: 0x25241E4
	public StreakTournamentLeaderboard get_Leaderboard() { }

	// RVA: 0x2524204 Offset: 0x2520204 VA: 0x2524204
	public StreakTournamentStatus get_Status() { }

	// RVA: 0x2524224 Offset: 0x2520224 VA: 0x2524224
	public StreakTournamentPersonal get_Personal() { }

	// RVA: 0x2524248 Offset: 0x2520248 VA: 0x2524248
	public int get_AppliedTimeProgression() { }

	// RVA: 0x2524268 Offset: 0x2520268 VA: 0x2524268 Slot: 5
	public override void Initialize() { }

	// RVA: 0x2524608 Offset: 0x2520608 VA: 0x2524608
	private void SetupData() { }

	// RVA: 0x25247E0 Offset: 0x25207E0 VA: 0x25247E0 Slot: 15
	public override Dictionary<string, object> GetAnalyticsData() { }

	// RVA: 0x25249D4 Offset: 0x25209D4 VA: 0x25249D4 Slot: 16
	public override LiveOpsEventCompletedArgs GetEventCompletedData() { }

	// RVA: 0x2524CF8 Offset: 0x2520CF8 VA: 0x2524CF8 Slot: 11
	public override bool CanJoin() { }

	// RVA: 0x2524D3C Offset: 0x2520D3C VA: 0x2524D3C Slot: 13
	public override bool CanShow() { }

	// RVA: 0x2524D54 Offset: 0x2520D54 VA: 0x2524D54 Slot: 14
	public override bool CanShowInHome() { }

	// RVA: 0x2524D6C Offset: 0x2520D6C VA: 0x2524D6C Slot: 12
	public override bool CanAutoJoin() { }

	// RVA: 0x2524D74 Offset: 0x2520D74 VA: 0x2524D74 Slot: 9
	public override bool CanComplete() { }

	// RVA: 0x2524D7C Offset: 0x2520D7C VA: 0x2524D7C Slot: 8
	public override void Complete() { }

	// RVA: 0x2524F3C Offset: 0x2520F3C VA: 0x2524F3C Slot: 17
	public override string GetHomeText() { }

	[AsyncStateMachine(typeof(StreakTournament.<ApplyHomeAction>d__43))]
	// RVA: 0x2525208 Offset: 0x2521208 VA: 0x2525208 Slot: 6
	public override UniTask ApplyHomeAction(CancellationToken cancellationToken) { }

	// RVA: 0x25252A4 Offset: 0x25212A4 VA: 0x25252A4
	private static void UpdateSave(StreakTournamentPlayer mainPlayer, StreakTournamentPlayer[] players) { }

	// RVA: 0x25253E8 Offset: 0x25213E8 VA: 0x25253E8
	private static void UpdateStatus(StreakTournamentStatus status) { }

	// RVA: 0x2525504 Offset: 0x2521504 VA: 0x2525504
	public void UpdatePersonal(StreakTournamentPersonal personal) { }

	// RVA: 0x2525628 Offset: 0x2521628 VA: 0x2525628
	public void UpdateGame() { }

	// RVA: 0x2525B20 Offset: 0x2521B20 VA: 0x2525B20
	private void StartGameIfNeeded() { }

	// RVA: 0x2525B58 Offset: 0x2521B58 VA: 0x2525B58
	private void StartGame() { }

	// RVA: 0x2526308 Offset: 0x2522308 VA: 0x2526308
	public void CompleteGame() { }

	// RVA: 0x25259E4 Offset: 0x25219E4 VA: 0x25259E4
	private void TryCompleteStatus() { }

	// RVA: 0x2526324 Offset: 0x2522324 VA: 0x2526324
	public void HandlePayouts(List<RewardInfo> rewards) { }

	// RVA: 0x25265E0 Offset: 0x25225E0 VA: 0x25265E0
	public void TrackPersonalRewardClaim(List<RewardInfo> rewards, int milestoneLevel) { }

	// RVA: 0x2526984 Offset: 0x2522984 VA: 0x2526984
	public void TrackLeaderboardRewardClaim(List<RewardInfo> rewards) { }

	// RVA: 0x2526C7C Offset: 0x2522C7C VA: 0x2526C7C
	private void OnLevelWin(LevelWinMessage m) { }

	// RVA: 0x252714C Offset: 0x252314C VA: 0x252714C
	private void OnLevelLose(LevelLoseMessage m) { }

	// RVA: 0x2525654 Offset: 0x2521654 VA: 0x2525654
	private void UpdateTimeProgression() { }

	// RVA: 0x2526E0C Offset: 0x2522E0C VA: 0x2526E0C
	private void ApplyProgression() { }

	// RVA: 0x252702C Offset: 0x252302C VA: 0x252702C
	private StreakTournamentPlayer UpdatePlayer(StreakTournamentPlayer player, bool win) { }

	// RVA: 0x252724C Offset: 0x252324C VA: 0x252724C
	private void OnPlayerProfileUpdate(PlayerProfileUpdateMessage m) { }

	// RVA: 0x25272D4 Offset: 0x25232D4 VA: 0x25272D4
	private void OnReviveContinueResultUpdate(ReviveContinueResultUpdateMessage m) { }

	// RVA: 0x2524F94 Offset: 0x2520F94 VA: 0x2524F94
	public bool CanClaim() { }

	// RVA: 0x25259A0 Offset: 0x25219A0 VA: 0x25259A0
	private bool IsGameActive() { }

	// RVA: 0x25275BC Offset: 0x25235BC VA: 0x25275BC Slot: 20
	public bool CanShowNotificationBadge(out string text) { }

	// RVA: 0x2524AAC Offset: 0x2520AAC VA: 0x2524AAC
	public List<StreakTournamentPlayer> GetLeaderboard() { }

	// RVA: 0x2524C58 Offset: 0x2520C58 VA: 0x2524C58
	public int GetMainPlayerRank(List<StreakTournamentPlayer> leaderboard) { }

	// RVA: 0x25276AC Offset: 0x25236AC VA: 0x25276AC Slot: 19
	public void Tick() { }

	// RVA: 0x25276B0 Offset: 0x25236B0 VA: 0x25276B0
	public void .ctor() { }
}

