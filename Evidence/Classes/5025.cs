// Namespace: 
public sealed class PlayerModule : ModuleBase // TypeDefIndex: 5025
{
	// Fields
	[Inject]
	private IPlayerProvider _provider; // 0x10
	[Inject]
	private IPublisher<PlayerProfileUpdateMessage> _playerProfileUpdatePub; // 0x18
	private const int MinPlayerNameLength = 3;
	private const int MaxPlayerNameLength = 14;

	// Methods

	// RVA: 0x2551A3C Offset: 0x254DA3C VA: 0x2551A3C
	public bool CanUpdatePlayerProfile() { }

	[AsyncStateMachine(typeof(PlayerModule.<UpdatePlayerProfile>d__5))]
	// RVA: 0x2551B84 Offset: 0x254DB84 VA: 0x2551B84
	public UniTask<UpdatePlayerProfileResponse> UpdatePlayerProfile(PlayerProfile profile, CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(PlayerModule.<GetLocalPlayer>d__6))]
	// RVA: 0x2551CDC Offset: 0x254DCDC VA: 0x2551CDC
	public UniTask<PlayerInfo> GetLocalPlayer(CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(PlayerModule.<GetPlayers>d__7))]
	// RVA: 0x2551E1C Offset: 0x254DE1C VA: 0x2551E1C
	public UniTask<Dictionary<string, PlayerInfo>> GetPlayers(IEnumerable<string> userIds, CancellationToken cancellationToken) { }

	// RVA: 0x2551F5C Offset: 0x254DF5C VA: 0x2551F5C
	public bool IsPlayerNameValid(string playerName) { }

	// RVA: 0x2551FD0 Offset: 0x254DFD0 VA: 0x2551FD0
	public string CleanPlayerName(string playerName) { }

	// RVA: 0x2552048 Offset: 0x254E048 VA: 0x2552048
	public void .ctor() { }
}

