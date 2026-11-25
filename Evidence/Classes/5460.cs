// Namespace: 
public sealed class SpeedBoostBuyMonitor : MonitorBase // TypeDefIndex: 5460
{
	// Fields
	[Inject]
	private EconomyModule _economyModule; // 0x98
	[Inject]
	private HapticModule _hapticModule; // 0xA0
	[Inject]
	private AdsModule _adsModule; // 0xA8
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0xB0
	private RvMaxConfig _rvMaxConfig; // 0xB8
	private Action<int> _onBought; // 0xC0

	// Methods

	// RVA: 0x2463514 Offset: 0x245F514 VA: 0x2463514 Slot: 13
	public override void Setup() { }

	// RVA: 0x2463674 Offset: 0x245F674 VA: 0x2463674
	public void ShowPopup(Action<int> onBought) { }

	// RVA: 0x24638FC Offset: 0x245F8FC VA: 0x24638FC
	private void OnCloseClicked() { }

	// RVA: 0x246391C Offset: 0x245F91C VA: 0x246391C
	private void OnBuyClicked() { }

	// RVA: 0x2463AA0 Offset: 0x245FAA0 VA: 0x2463AA0
	private void OnRVClicked() { }

	// RVA: 0x2463A24 Offset: 0x245FA24 VA: 0x2463A24
	private void Complete(int seconds) { }

	// RVA: 0x2463B48 Offset: 0x245FB48 VA: 0x2463B48
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2463B50 Offset: 0x245FB50 VA: 0x2463B50
	private void <OnRVClicked>b__10_0(bool watched) { }
}

