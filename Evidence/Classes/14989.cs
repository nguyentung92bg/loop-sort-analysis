// Namespace: 
public sealed class NakamaPeriodicLeaderboardProvider : ITournamentProvider // TypeDefIndex: 14989
{
	// Methods

	[AsyncStateMachine(typeof(NakamaPeriodicLeaderboardProvider.<GetInstance>d__0))]
	// RVA: 0x224CD10 Offset: 0x2248D10 VA: 0x224CD10 Slot: 4
	public UniTask<TournamentInstance> GetInstance(bool cached = True, CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(NakamaPeriodicLeaderboardProvider.<Submit>d__1))]
	// RVA: 0x224CE40 Offset: 0x2248E40 VA: 0x224CE40 Slot: 5
	public UniTask<TournamentOperationResult> Submit(long score, CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(NakamaPeriodicLeaderboardProvider.<End>d__2))]
	// RVA: 0x224CF6C Offset: 0x2248F6C VA: 0x224CF6C Slot: 6
	public UniTask<TournamentOperationResult> End(CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(NakamaPeriodicLeaderboardProvider.<CreateTournamentInstance>d__3))]
	// RVA: 0x224D08C Offset: 0x224908C VA: 0x224D08C
	private static UniTask<TournamentInstance> CreateTournamentInstance(string instanceId, FeatureState featureState, CancellationToken cancellationToken) { }

	// RVA: 0x224D1CC Offset: 0x22491CC VA: 0x224D1CC
	private static LeaderboardPage CreateLeaderboardPage(string instanceId, PeriodicLeaderboardBoard leaderboard) { }

	// RVA: 0x224D51C Offset: 0x224951C VA: 0x224D51C
	private static LeaderboardEntry CreateLeaderboardEntry(PeriodicLeaderboardPlayer player, string localPlayerId, string instanceId) { }

	// RVA: 0x224D640 Offset: 0x2249640 VA: 0x224D640
	public void .ctor() { }
}

