// Namespace: 
[Preserve]
public sealed class GameDebugger : CustomDebugger // TypeDefIndex: 14950
{
	// Fields
	[Inject]
	private GameMachine _gameMachine; // 0x10
	[Inject]
	private EconomyModule _economyModule; // 0x18
	[Inject]
	private Monitors _monitors; // 0x20
	[Inject]
	private IPublisher<LevelEnvironmentUpdateMessage> _levelEnvironmentUpdatePub; // 0x28
	private bool _uiAlphaVisibility; // 0x30
	private PlayerPrefsBool _isGreenLevel; // 0x38

	// Methods

	// RVA: 0x223FDE4 Offset: 0x223BDE4 VA: 0x223FDE4 Slot: 5
	public override string GetTitle() { }

	// RVA: 0x223FE24 Offset: 0x223BE24 VA: 0x223FE24 Slot: 6
	public override int GetOrderIndex() { }

	// RVA: 0x223FE2C Offset: 0x223BE2C VA: 0x223FE2C Slot: 7
	public override void SetupScreen(Screen screen) { }

	// RVA: 0x2240658 Offset: 0x223C658 VA: 0x2240658
	private string GetLevel() { }

	// RVA: 0x22406D0 Offset: 0x223C6D0 VA: 0x22406D0
	private void SetLevel(int level) { }

	// RVA: 0x22406E0 Offset: 0x223C6E0 VA: 0x22406E0
	private void SetEconomyItem(Item item, int value) { }

	// RVA: 0x2240730 Offset: 0x223C730 VA: 0x2240730
	private string GetEconomyItem(Item item) { }

	// RVA: 0x2240764 Offset: 0x223C764 VA: 0x2240764
	private void WinGame() { }

	// RVA: 0x22407B4 Offset: 0x223C7B4 VA: 0x22407B4
	private void LoseGame() { }

	// RVA: 0x2240804 Offset: 0x223C804 VA: 0x2240804
	private void SetGreenLevel(bool state) { }

	// RVA: 0x22408E8 Offset: 0x223C8E8 VA: 0x22408E8
	private bool GetGreenLevel() { }

	// RVA: 0x2240948 Offset: 0x223C948 VA: 0x2240948
	private void SetUIAlphaVisibility(bool state) { }

	// RVA: 0x2240A24 Offset: 0x223CA24 VA: 0x2240A24
	private bool GetUIAlphaVisibility() { }

	// RVA: 0x2240A2C Offset: 0x223CA2C VA: 0x2240A2C
	public void .ctor() { }
}

