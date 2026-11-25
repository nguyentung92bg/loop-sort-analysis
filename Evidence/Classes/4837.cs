// Namespace: 
[Serializable]
public class LeaderboardSnapshot // TypeDefIndex: 4837
{
	// Fields
	public UniTimer Expiration; // 0x10
	public LeaderboardEntry LocalPlayer; // 0x20
	public List<LeaderboardEntry> Players; // 0x60
	public HashSet<int> FetchedIdx; // 0x68
	private const int LeaderboardMaxSize = 1000;
	private const float LeaderboardCacheDurationSeconds = 600;
	private static readonly LeaderboardEntry EmptyEntry; // 0x0

	// Methods

	// RVA: 0x252188C Offset: 0x251D88C VA: 0x252188C
	public static LeaderboardSnapshot CreateSnapshot(int leaderboardSize) { }

	// RVA: 0x2521A70 Offset: 0x251DA70 VA: 0x2521A70
	public void ResetSnapshot(int leaderboardSize) { }

	// RVA: 0x2521A68 Offset: 0x251DA68 VA: 0x2521A68
	public void .ctor() { }

	// RVA: 0x2521BC4 Offset: 0x251DBC4 VA: 0x2521BC4
	private static void .cctor() { }
}

