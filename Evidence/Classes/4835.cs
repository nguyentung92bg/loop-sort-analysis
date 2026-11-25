// Namespace: 
public sealed class Leaderboard : LiveOpsBase // TypeDefIndex: 4835
{
	// Fields
	[Inject]
	private LeaderboardModule _leaderboardModule; // 0x10
	[Inject]
	private TournamentModule _tournamentModule; // 0x18
	[Inject]
	private PlayerModule _playerModule; // 0x20
	[Inject]
	private AnalyticsModule _analyticsModule; // 0x28
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x30
	[Inject]
	private ISubscriber<PlayerProfileUpdateMessage> _playerProfileUpdateSub; // 0x38
	[Inject]
	private ISubscriber<LevelWinMessage> _levelWinSub; // 0x40
	[Inject]
	private ISubscriber<AccountSwitchedMessage> _accountSwitchedSub; // 0x48
	private readonly Dictionary<string, LeaderboardSnapshot> _snapshots; // 0x50
	private RankingConfig _rankingConfig; // 0x58
	private string _countryCode; // 0x60
	private const string DefaultCountryCode = "us";
	[CompilerGenerated]
	private TournamentInstance <TournamentInstance>k__BackingField; // 0x68
	[CompilerGenerated]
	private Action LeaderboardFetched; // 0xE8

	// Properties
	public string TournamentId { get; }
	public string LevelWorldId { get; }
	public string LevelCountryId { get; }
	public TournamentInstance TournamentInstance { get; set; }

	// Methods

	// RVA: 0x251CBE4 Offset: 0x2518BE4 VA: 0x251CBE4
	public string get_TournamentId() { }

	// RVA: 0x251CC24 Offset: 0x2518C24 VA: 0x251CC24
	public string get_LevelWorldId() { }

	// RVA: 0x251CC64 Offset: 0x2518C64 VA: 0x251CC64
	public string get_LevelCountryId() { }

	[CompilerGenerated]
	// RVA: 0x251CCB0 Offset: 0x2518CB0 VA: 0x251CCB0
	public TournamentInstance get_TournamentInstance() { }

	[CompilerGenerated]
	// RVA: 0x251CCC0 Offset: 0x2518CC0 VA: 0x251CCC0
	private void set_TournamentInstance(TournamentInstance value) { }

	[CompilerGenerated]
	// RVA: 0x251CCE4 Offset: 0x2518CE4 VA: 0x251CCE4
	public void add_LeaderboardFetched(Action value) { }

	[CompilerGenerated]
	// RVA: 0x251CD80 Offset: 0x2518D80 VA: 0x251CD80
	public void remove_LeaderboardFetched(Action value) { }

	// RVA: 0x251CE1C Offset: 0x2518E1C VA: 0x251CE1C Slot: 5
	public override void Initialize() { }

	// RVA: 0x251D1B0 Offset: 0x25191B0 VA: 0x251D1B0
	private void OnAccountSwitched(AccountSwitchedMessage message) { }

	// RVA: 0x251D224 Offset: 0x2519224 VA: 0x251D224 Slot: 6
	public override UniTask ApplyHomeAction(CancellationToken cancellationToken) { }

	// RVA: 0x251D2F4 Offset: 0x25192F4 VA: 0x251D2F4
	public bool IsActive() { }

	[AsyncStateMachine(typeof(Leaderboard.<CreateLeaderboard>d__29))]
	// RVA: 0x251D684 Offset: 0x2519684 VA: 0x251D684
	public UniTask<LeaderboardSnapshot> CreateLeaderboard(string leaderboardId, CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(Leaderboard.<FetchLeaderboard>d__30))]
	// RVA: 0x251D7D0 Offset: 0x25197D0 VA: 0x251D7D0
	public UniTask FetchLeaderboard(string leaderboardId, int limit, int offset, CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(Leaderboard.<SubmitLeaderboardEntries>d__31))]
	// RVA: 0x251D428 Offset: 0x2519428 VA: 0x251D428
	private UniTaskVoid SubmitLeaderboardEntries() { }

	[AsyncStateMachine(typeof(Leaderboard.<SubmitLeaderboardData>d__32))]
	// RVA: 0x251D8B8 Offset: 0x25198B8 VA: 0x251D8B8
	private UniTask<bool> SubmitLeaderboardData(string leaderboardId, int value) { }

	[AsyncStateMachine(typeof(Leaderboard.<FetchTournament>d__33))]
	// RVA: 0x251D9E0 Offset: 0x25199E0 VA: 0x251D9E0
	private UniTask<TournamentInstance> FetchTournament(bool cached = True, CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(Leaderboard.<EndTournament>d__34))]
	// RVA: 0x251DB24 Offset: 0x2519B24 VA: 0x251DB24
	public UniTask<TournamentEndOutcome> EndTournament(CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(Leaderboard.<SubmitTournamentEntry>d__35))]
	// RVA: 0x251D394 Offset: 0x2519394 VA: 0x251D394
	private UniTaskVoid SubmitTournamentEntry() { }

	[AsyncStateMachine(typeof(Leaderboard.<SubmitTournamentData>d__36))]
	// RVA: 0x251DC44 Offset: 0x2519C44 VA: 0x251DC44
	private UniTask<bool> SubmitTournamentData(int value) { }

	// RVA: 0x251D4B8 Offset: 0x25194B8 VA: 0x251D4B8
	private void ExpireSnapshots() { }

	// RVA: 0x251DD48 Offset: 0x2519D48 VA: 0x251DD48
	private static void SetLocalPlayer(LeaderboardSnapshot snapshot, LeaderboardEntry entry) { }

	// RVA: 0x251DDA8 Offset: 0x2519DA8 VA: 0x251DDA8
	private static void SetPlayer(LeaderboardSnapshot snapshot, LeaderboardEntry entry) { }

	// RVA: 0x251DE70 Offset: 0x2519E70 VA: 0x251DE70
	private void OnPlayerProfileUpdate(PlayerProfileUpdateMessage m) { }

	// RVA: 0x251E0D8 Offset: 0x251A0D8 VA: 0x251E0D8
	private void OnLevelWin(LevelWinMessage m) { }

	// RVA: 0x251E0FC Offset: 0x251A0FC VA: 0x251E0FC
	private void IncrementTournamentScore() { }

	// RVA: 0x251E19C Offset: 0x251A19C VA: 0x251E19C
	public void .ctor() { }
}

