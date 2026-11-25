// Namespace: 
public sealed class NakamaPlayerProvider : IPlayerProvider // TypeDefIndex: 14993
{
	// Methods

	// RVA: 0x224F270 Offset: 0x224B270 VA: 0x224F270 Slot: 4
	public bool CanUpdatePlayerProfile() { }

	[AsyncStateMachine(typeof(NakamaPlayerProvider.<UpdatePlayerProfile>d__1))]
	// RVA: 0x224F288 Offset: 0x224B288 VA: 0x224F288 Slot: 5
	public UniTask<UpdatePlayerProfileResponse> UpdatePlayerProfile(PlayerProfile profile, CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(NakamaPlayerProvider.<GetLocalPlayer>d__2))]
	// RVA: 0x224F3C0 Offset: 0x224B3C0 VA: 0x224F3C0 Slot: 6
	public UniTask<PlayerInfo> GetLocalPlayer(CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(NakamaPlayerProvider.<GetPlayers>d__3))]
	// RVA: 0x224F4DC Offset: 0x224B4DC VA: 0x224F4DC Slot: 7
	public UniTask<Dictionary<string, PlayerInfo>> GetPlayers(IEnumerable<string> userIds, CancellationToken cancellationToken) { }

	// RVA: 0x224F608 Offset: 0x224B608 VA: 0x224F608
	public void .ctor() { }
}

