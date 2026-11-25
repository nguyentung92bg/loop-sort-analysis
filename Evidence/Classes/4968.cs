// Namespace: 
public sealed class LeaderboardModule : ModuleBase // TypeDefIndex: 4968
{
	// Fields
	[Inject]
	private ILeaderboardProvider _provider; // 0x10
	[Inject]
	private AntiCheatModule _antiCheatModule; // 0x18

	// Methods

	[AsyncStateMachine(typeof(LeaderboardModule.<Submit>d__2))]
	// RVA: 0x25448B4 Offset: 0x25408B4 VA: 0x25448B4
	public UniTask<LeaderboardEntry> Submit(string leaderboardId, long value, CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(LeaderboardModule.<FetchEntry>d__3))]
	// RVA: 0x2544A0C Offset: 0x2540A0C VA: 0x2544A0C
	public UniTask<LeaderboardPage> FetchEntry(string leaderboardId, string ownerId, CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(LeaderboardModule.<FetchPage>d__4))]
	// RVA: 0x2544B64 Offset: 0x2540B64 VA: 0x2544B64
	public UniTask<LeaderboardPage> FetchPage(string leaderboardId, int limit, int offset = 0, CancellationToken cancellationToken) { }

	// RVA: 0x2544CB4 Offset: 0x2540CB4 VA: 0x2544CB4
	public void .ctor() { }
}

