// Namespace: 
public sealed class SettingsPopupMonitor : MonitorBase // TypeDefIndex: 5452
{
	// Fields
	[Inject]
	private SettingsModule _settingsModule; // 0x98
	[Inject]
	private GameMachine _gameMachine; // 0xA0
	[Inject]
	private SceneModule _sceneModule; // 0xA8
	[Inject]
	private ShopMonitor _shopMonitor; // 0xB0
	[Inject]
	private PlaySessionModule _playSessionModule; // 0xB8
	private ToggleElement _soundElement; // 0xC0
	private ToggleElement _musicElement; // 0xC8
	private ToggleElement _hapticElement; // 0xD0
	private ToggleElement _colorBlindElement; // 0xD8

	// Methods

	// RVA: 0x245F558 Offset: 0x245B558 VA: 0x245F558 Slot: 13
	public override void Setup() { }

	// RVA: 0x245F8F8 Offset: 0x245B8F8 VA: 0x245F8F8 Slot: 15
	public override void OnActivated() { }

	// RVA: 0x245F9B8 Offset: 0x245B9B8 VA: 0x245F9B8
	private void OnCloseClicked() { }

	// RVA: 0x245FA54 Offset: 0x245BA54 VA: 0x245FA54
	private void OnSupportClicked() { }

	// RVA: 0x245FAF8 Offset: 0x245BAF8 VA: 0x245FAF8
	private void OnShopClicked() { }

	// RVA: 0x245FB48 Offset: 0x245BB48 VA: 0x245FB48
	private void OnExitClicked() { }

	// RVA: 0x245FC6C Offset: 0x245BC6C VA: 0x245FC6C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x245FC74 Offset: 0x245BC74 VA: 0x245FC74
	private void <Setup>b__9_0(bool isActive) { }

	[CompilerGenerated]
	// RVA: 0x245FC90 Offset: 0x245BC90 VA: 0x245FC90
	private void <Setup>b__9_1(bool isActive) { }

	[CompilerGenerated]
	// RVA: 0x245FCAC Offset: 0x245BCAC VA: 0x245FCAC
	private void <Setup>b__9_2(bool isActive) { }

	[CompilerGenerated]
	// RVA: 0x245FCC8 Offset: 0x245BCC8 VA: 0x245FCC8
	private void <Setup>b__9_3(bool isActive) { }
}

