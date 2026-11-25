// Namespace: 
public sealed class RefillLivesMonitor : MonitorBase // TypeDefIndex: 5441
{
	// Fields
	[Inject]
	private LifeModule _lifeModule; // 0x98
	[Inject]
	private EconomyModule _economyModule; // 0xA0
	[Inject]
	private HapticModule _hapticModule; // 0xA8
	[Inject]
	private AdsModule _adsModule; // 0xB0
	[Inject]
	private SheetContainer _sheetContainer; // 0xB8
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0xC0
	private Action _refillCallback; // 0xC8
	private Action _closeCallback; // 0xD0
	private RefillLivesConfig _refillLivesConfig; // 0xD8
	private EconomyModule.Transaction _refillTransaction; // 0xE0
	private CloudPrefsBool _freeLifeRefill; // 0x130

	// Methods

	// RVA: 0x245BCFC Offset: 0x2457CFC VA: 0x245BCFC Slot: 13
	public override void Setup() { }

	// RVA: 0x245BF5C Offset: 0x2457F5C VA: 0x245BF5C Slot: 15
	public override void OnActivated() { }

	// RVA: 0x245C080 Offset: 0x2458080 VA: 0x245C080 Slot: 16
	public override void OnDeactivated() { }

	// RVA: 0x245C0B4 Offset: 0x24580B4 VA: 0x245C0B4 Slot: 14
	public override void Render() { }

	// RVA: 0x245C1BC Offset: 0x24581BC VA: 0x245C1BC
	private void OnCloseClicked() { }

	// RVA: 0x245C1FC Offset: 0x24581FC VA: 0x245C1FC
	private void OnFreeClicked() { }

	// RVA: 0x245C26C Offset: 0x245826C VA: 0x245C26C
	private void OnGoldClicked() { }

	// RVA: 0x245C4E0 Offset: 0x24584E0 VA: 0x245C4E0
	private void OnRVClicked() { }

	// RVA: 0x245C588 Offset: 0x2458588 VA: 0x245C588
	public void SetRefillCallback(Action callback) { }

	// RVA: 0x245C590 Offset: 0x2458590 VA: 0x245C590
	public void SetCloseCallback(Action callback) { }

	// RVA: 0x245C598 Offset: 0x2458598 VA: 0x245C598
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x245C60C Offset: 0x245860C VA: 0x245C60C
	private void <OnRVClicked>b__18_0(bool rewarded) { }
}

