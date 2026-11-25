// Namespace: 
public interface IPlayerProvider // TypeDefIndex: 5026
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract bool CanUpdatePlayerProfile();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract UniTask<UpdatePlayerProfileResponse> UpdatePlayerProfile(PlayerProfile profile, CancellationToken cancellationToken);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract UniTask<PlayerInfo> GetLocalPlayer(CancellationToken cancellationToken);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract UniTask<Dictionary<string, PlayerInfo>> GetPlayers(IEnumerable<string> userIds, CancellationToken cancellationToken);
}

