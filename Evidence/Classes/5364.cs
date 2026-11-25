// Namespace: 
public sealed class BoosterBuyMonitor : MonitorBase // TypeDefIndex: 5364
{
	// Fields
	[Inject]
	private Payouts _payouts; // 0x98
	[Inject]
	private EconomyModule _economyModule; // 0xA0
	[Inject]
	private HapticModule _hapticModule; // 0xA8
	[Inject]
	private AdsModule _adsModule; // 0xB0
	private BoosterBuyMonitor.ShowPopupArgs _showArgs; // 0xB8

	// Methods

	// RVA: 0x243AB2C Offset: 0x2436B2C VA: 0x243AB2C Slot: 13
	public override void Setup() { }

	// RVA: 0x243AC5C Offset: 0x2436C5C VA: 0x243AC5C
	public void ShowPopup(BoosterBuyMonitor.ShowPopupArgs args) { }

	// RVA: 0x243AEA8 Offset: 0x2436EA8 VA: 0x243AEA8
	private void OnCloseClicked() { }

	// RVA: 0x243AEC8 Offset: 0x2436EC8 VA: 0x243AEC8
	private void OnBuyClicked() { }

	// RVA: 0x243B04C Offset: 0x243704C VA: 0x243B04C
	private void OnRVClicked() { }

	// RVA: 0x243B0F4 Offset: 0x24370F4 VA: 0x243B0F4
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x243B0FC Offset: 0x24370FC VA: 0x243B0FC
	private void <OnRVClicked>b__10_0(bool watched) { }
}

