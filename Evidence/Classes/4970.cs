// Namespace: 
public struct LeaderboardEntry // TypeDefIndex: 4970
{
	// Fields
	public string LeaderboardId; // 0x0
	public string OwnerId; // 0x8
	public int Rank; // 0x10
	public long Value; // 0x18
	public bool LocalPlayer; // 0x20
	public PlayerProfile Profile; // 0x28

	// Properties
	public int Idx { get; }
	public bool HasEntry { get; }

	// Methods

	// RVA: 0x2545AA0 Offset: 0x2541AA0 VA: 0x2545AA0
	public int get_Idx() { }

	// RVA: 0x2545AAC Offset: 0x2541AAC VA: 0x2545AAC
	public bool get_HasEntry() { }
}

