// Namespace: 
public sealed class MockLeaderboardProvider : ILeaderboardProvider // TypeDefIndex: 14957
{
	// Fields
	[Inject]
	private NicknameGenerator _nicknameGenerator; // 0x10
	[Inject]
	private Avatars _avatars; // 0x18
	private readonly Dictionary<string, LeaderboardPage> _pages; // 0x20
	private const int EntryCount = 3000;
	private const int MinLevel = 100;
	private const int MaxLevel = 25000;
	private const int MinDelayInMilliseconds = 100;
	private const int MaxDelayInMilliseconds = 1000;

	// Methods

	// RVA: 0x2241A40 Offset: 0x223DA40 VA: 0x2241A40 Slot: 4
	public UniTask<LeaderboardEntry> Submit(string leaderboardId, long value, CancellationToken cancellationToken) { }

	// RVA: 0x2241A54 Offset: 0x223DA54 VA: 0x2241A54 Slot: 5
	public UniTask<LeaderboardPage> FetchEntry(string leaderboardId, string ownerId, CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(MockLeaderboardProvider.<FetchPage>d__10))]
	// RVA: 0x22420E4 Offset: 0x223E0E4 VA: 0x22420E4 Slot: 6
	public UniTask<LeaderboardPage> FetchPage(string leaderboardId, int limit, int offset, CancellationToken cancellationToken) { }

	// RVA: 0x2241DC0 Offset: 0x223DDC0 VA: 0x2241DC0
	private LeaderboardPage CreateLeaderboard(string leaderboardId) { }

	// RVA: 0x22426EC Offset: 0x223E6EC VA: 0x22426EC
	private LeaderboardEntry GetLocalPlayerEntry(string leaderboardId) { }

	// RVA: 0x2242234 Offset: 0x223E234 VA: 0x2242234
	private List<LeaderboardEntry> CreateRandomPlayerEntries(string leaderboardId) { }

	// RVA: 0x2242880 Offset: 0x223E880 VA: 0x2242880
	public void .ctor() { }
}

