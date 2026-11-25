// Namespace: 
public sealed class SettingsModule : ModuleBase, IInitializable // TypeDefIndex: 4922
{
	// Fields
	[Inject]
	private AudioModule _audioModule; // 0x10
	[Inject]
	private HapticModule _hapticModule; // 0x18
	[Inject]
	private NotificationModule _notificationModule; // 0x20
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x28
	[Inject]
	private IPublisher<ColorBlindUpdateMessage> _colorBlindUpdatePub; // 0x30
	private PlayerPrefsBool _sound; // 0x38
	private PlayerPrefsBool _music; // 0x48
	private PlayerPrefsBool _haptic; // 0x58
	private PlayerPrefsBool _notification; // 0x68
	private PlayerPrefsBool _colorBlind; // 0x78

	// Methods

	// RVA: 0x2539A4C Offset: 0x2535A4C VA: 0x2539A4C Slot: 4
	public void Initialize() { }

	// RVA: 0x2539C7C Offset: 0x2535C7C VA: 0x2539C7C
	public bool IsSoundActive() { }

	// RVA: 0x2539CD4 Offset: 0x2535CD4 VA: 0x2539CD4
	public bool IsMusicActive() { }

	// RVA: 0x2539D2C Offset: 0x2535D2C VA: 0x2539D2C
	public bool IsHapticActive() { }

	// RVA: 0x2539D84 Offset: 0x2535D84 VA: 0x2539D84
	public bool IsNotificationActive() { }

	// RVA: 0x2539DDC Offset: 0x2535DDC VA: 0x2539DDC
	public bool IsColorBlindActive() { }

	// RVA: 0x2539AEC Offset: 0x2535AEC VA: 0x2539AEC
	public void SetSound(bool isActive) { }

	// RVA: 0x2539B6C Offset: 0x2535B6C VA: 0x2539B6C
	public void SetMusic(bool isActive) { }

	// RVA: 0x2539BF8 Offset: 0x2535BF8 VA: 0x2539BF8
	public void SetHaptic(bool isActive) { }

	// RVA: 0x2539E34 Offset: 0x2535E34 VA: 0x2539E34
	public void SetNotification(bool isActive) { }

	// RVA: 0x2539EB4 Offset: 0x2535EB4 VA: 0x2539EB4
	public void SetColorBlind(bool isActive) { }

	// RVA: 0x2539F98 Offset: 0x2535F98 VA: 0x2539F98
	public void .ctor() { }
}

