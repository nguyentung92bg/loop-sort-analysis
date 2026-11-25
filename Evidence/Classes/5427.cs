// Namespace: 
public sealed class ProfileMonitor : MonitorBase // TypeDefIndex: 5427
{
	// Fields
	[Inject]
	private Avatars _avatars; // 0x98
	[Inject]
	private ProfileEditMonitor _profileEditMonitor; // 0xA0
	[Inject]
	private ISubscriber<PlayerProfileUpdateMessage> _playerProfileUpdateSub; // 0xA8
	private bool _currentLocalPlayer; // 0xB0
	private string _currentLevel; // 0xB8

	// Methods

	// RVA: 0x2455F34 Offset: 0x2451F34 VA: 0x2455F34 Slot: 13
	public override void Setup() { }

	// RVA: 0x24560FC Offset: 0x24520FC VA: 0x24560FC Slot: 16
	public override void OnDeactivated() { }

	// RVA: 0x2456134 Offset: 0x2452134 VA: 0x2456134
	public void ShowProfile(PlayerProfile profile, bool isLocalPlayer, string level) { }

	// RVA: 0x2456308 Offset: 0x2452308 VA: 0x2456308
	private void OnCloseClicked() { }

	// RVA: 0x2456328 Offset: 0x2452328 VA: 0x2456328
	private void OnEditClicked() { }

	// RVA: 0x245633C Offset: 0x245233C VA: 0x245633C
	private void OnPlayerProfileUpdate(PlayerProfileUpdateMessage m) { }

	// RVA: 0x2456378 Offset: 0x2452378 VA: 0x2456378
	public void .ctor() { }
}

