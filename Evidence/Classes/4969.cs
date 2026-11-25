// Namespace: 
public interface ILeaderboardProvider // TypeDefIndex: 4969
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract UniTask<LeaderboardEntry> Submit(string leaderboardId, long value, CancellationToken cancellationToken);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract UniTask<LeaderboardPage> FetchEntry(string leaderboardId, string ownerId, CancellationToken cancellationToken);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract UniTask<LeaderboardPage> FetchPage(string leaderboardId, int limit, int offset, CancellationToken cancellationToken);
}

