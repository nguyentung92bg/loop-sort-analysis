// Namespace: 
public sealed class LoadingMonitor : MonitorBase // TypeDefIndex: 5408
{
	// Fields
	[Inject]
	private HomeNavigationMonitor _homeNavigationMonitor; // 0x98
	private int _loadingCount; // 0xA0

	// Methods

	// RVA: 0x244E204 Offset: 0x244A204 VA: 0x244E204
	private void Activate(LoadingMonitor.LoadingScope scope) { }

	// RVA: 0x244E270 Offset: 0x244A270 VA: 0x244E270
	private void Deactivate(LoadingMonitor.LoadingScope scope) { }

	// RVA: 0x244E364 Offset: 0x244A364 VA: 0x244E364
	public IDisposable Begin() { }

	// RVA: 0x244E410 Offset: 0x244A410 VA: 0x244E410
	public void .ctor() { }
}

