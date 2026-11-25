// Namespace: 
public sealed class CreatePlayerProfileOffer : LiveOpsBase // TypeDefIndex: 4806
{
	// Fields
	[Inject]
	private Monitors _monitors; // 0x10
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x18
	[Inject]
	private PlayerModule _playerModule; // 0x20
	[Inject]
	private Avatars _avatars; // 0x28
	private bool _isFirstActionSkipped; // 0x30
	private bool _isThisSessionShowed; // 0x31
	private CreatePlayerProfileConfig _config; // 0x38
	private const string RandomNicknameFormat = "Player_{0}";
	private const int RandomNicknameSuffixLength = 7;
	private const string RandomNicknameAlphabet = "abcdefghijklmnopqrstuvwxyz0123456789";

	// Methods

	// RVA: 0x25148A4 Offset: 0x25108A4 VA: 0x25148A4 Slot: 5
	public override void Initialize() { }

	[AsyncStateMachine(typeof(CreatePlayerProfileOffer.<ApplyHomeAction>d__11))]
	// RVA: 0x2514910 Offset: 0x2510910 VA: 0x2514910 Slot: 6
	public override UniTask ApplyHomeAction(CancellationToken cancellationToken) { }

	// RVA: 0x25149A8 Offset: 0x25109A8 VA: 0x25149A8
	private PlayerProfile CreateRandomProfile() { }

	// RVA: 0x2514BAC Offset: 0x2510BAC VA: 0x2514BAC
	public void .ctor() { }
}

