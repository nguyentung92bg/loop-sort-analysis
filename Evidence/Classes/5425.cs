// Namespace: 
public sealed class ProfileEditMonitor : MonitorBase // TypeDefIndex: 5425
{
	// Fields
	[SerializeField]
	private Sprite DisabledSaveSprite; // 0x98
	[Inject]
	private Avatars _avatars; // 0xA0
	[Inject]
	private PlayerModule _playerModule; // 0xA8
	[Inject]
	private SlidingTextMonitor _slidingTextMonitor; // 0xB0
	private PlayerProfile _profile; // 0xB8
	private bool _isStateDirty; // 0xD0
	private bool _canSaveProfile; // 0xD1
	private bool _isSlidingTextActive; // 0xD2
	private string _saveFailReasonText; // 0xD8
	private TMP_InputField _playerNameInput; // 0xE0
	private readonly Dictionary<string, StatefulComponent> _avatarViews; // 0xE8

	// Methods

	// RVA: 0x24542CC Offset: 0x24502CC VA: 0x24542CC Slot: 13
	public override void Setup() { }

	// RVA: 0x2454818 Offset: 0x2450818 VA: 0x2454818 Slot: 15
	public override void OnActivated() { }

	// RVA: 0x2454958 Offset: 0x2450958 VA: 0x2454958
	public void ShowEditProfile() { }

	// RVA: 0x2454A10 Offset: 0x2450A10 VA: 0x2454A10
	public void ShowCreateProfile() { }

	[AsyncStateMachine(typeof(ProfileEditMonitor.<SaveProfileAsync>d__15))]
	// RVA: 0x2454AD8 Offset: 0x2450AD8 VA: 0x2454AD8
	private UniTaskVoid SaveProfileAsync() { }

	[AsyncStateMachine(typeof(ProfileEditMonitor.<SaveProfile>d__16))]
	// RVA: 0x2454B68 Offset: 0x2450B68 VA: 0x2454B68
	private UniTask SaveProfile() { }

	// RVA: 0x2454C04 Offset: 0x2450C04 VA: 0x2454C04
	private void OnCloseClicked() { }

	// RVA: 0x2454C24 Offset: 0x2450C24 VA: 0x2454C24
	private void OnSaveClicked() { }

	// RVA: 0x2454C28 Offset: 0x2450C28 VA: 0x2454C28
	private void OnEditClicked() { }

	// RVA: 0x2454C40 Offset: 0x2450C40 VA: 0x2454C40
	private void OnPlayerNameInputValueChanged(string playerName) { }

	// RVA: 0x24548D4 Offset: 0x24508D4 VA: 0x24548D4
	private void UpdateProfileView(StateRole state) { }

	// RVA: 0x2454528 Offset: 0x2450528 VA: 0x2454528
	private void FillAvatarElements() { }

	// RVA: 0x2455084 Offset: 0x2451084 VA: 0x2455084
	private void CreateAvatarElement(StatefulComponent view, string id) { }

	// RVA: 0x2454E58 Offset: 0x2450E58 VA: 0x2454E58
	private void RefreshAvatarElements() { }

	// RVA: 0x2455200 Offset: 0x2451200 VA: 0x2455200
	private void OnAvatarClicked(string avatarId) { }

	// RVA: 0x2454CD0 Offset: 0x2450CD0 VA: 0x2454CD0
	private void UpdateSaveButtonState() { }

	// RVA: 0x245522C Offset: 0x245122C VA: 0x245522C
	public void .ctor() { }
}

