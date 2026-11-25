// Namespace: 
[Serializable]
public struct PlayerProfile : IEquatable<PlayerProfile> // TypeDefIndex: 5030
{
	// Fields
	public bool Created; // 0x0
	public string Nickname; // 0x8
	public string AvatarId; // 0x10
	public static readonly PlayerProfile Default; // 0x0

	// Methods

	// RVA: 0x2552FBC Offset: 0x254EFBC VA: 0x2552FBC Slot: 3
	public override string ToString() { }

	// RVA: 0x2553028 Offset: 0x254F028 VA: 0x2553028
	public static bool op_Equality(PlayerProfile x, PlayerProfile y) { }

	// RVA: 0x25530CC Offset: 0x254F0CC VA: 0x25530CC
	public static bool op_Inequality(PlayerProfile x, PlayerProfile y) { }

	// RVA: 0x2553164 Offset: 0x254F164 VA: 0x2553164 Slot: 4
	public bool Equals(PlayerProfile other) { }

	// RVA: 0x25531B0 Offset: 0x254F1B0 VA: 0x25531B0 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x2553254 Offset: 0x254F254 VA: 0x2553254 Slot: 2
	public override int GetHashCode() { }

	// RVA: 0x25532A8 Offset: 0x254F2A8 VA: 0x25532A8
	private static void .cctor() { }
}

