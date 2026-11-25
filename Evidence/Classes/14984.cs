// Namespace: 
public sealed class NakamaLeaderboardProvider : ILeaderboardProvider // TypeDefIndex: 14984
{
	// Methods

	[AsyncStateMachine(typeof(NakamaLeaderboardProvider.<Submit>d__0))]
	// RVA: 0x224B400 Offset: 0x2247400 VA: 0x224B400 Slot: 4
	public UniTask<LeaderboardEntry> Submit(string leaderboardId, long value, CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(NakamaLeaderboardProvider.<FetchEntry>d__1))]
	// RVA: 0x224B540 Offset: 0x2247540 VA: 0x224B540 Slot: 5
	public UniTask<LeaderboardPage> FetchEntry(string leaderboardId, string ownerId, CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(NakamaLeaderboardProvider.<FetchPage>d__2))]
	// RVA: 0x224B678 Offset: 0x2247678 VA: 0x224B678 Slot: 6
	public UniTask<LeaderboardPage> FetchPage(string leaderboardId, int limit, int offset, CancellationToken cancellationToken) { }

	// RVA: 0x224B7B0 Offset: 0x22477B0 VA: 0x224B7B0
	private static LeaderboardEntry CreateLeaderboardEntry(LeaderboardPlayerDataRecord record, string localPlayerId) { }

	// RVA: 0x224B8CC Offset: 0x22478CC VA: 0x224B8CC
	public void .ctor() { }
}

