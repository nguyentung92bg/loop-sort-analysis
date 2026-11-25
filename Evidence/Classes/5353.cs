// Namespace: 
public sealed class AreaCompletedMonitor : MonitorBase // TypeDefIndex: 5353
{
	// Fields
	[Inject]
	private Areas _areas; // 0x98
	[Inject]
	private HomeMonitor _homeMonitor; // 0xA0
	[Inject]
	private SheetContainer _sheetContainer; // 0xA8
	[Inject]
	private AnalyticsModule _analyticsModule; // 0xB0
	private AreaSheet.Row _unlockedArea; // 0xB8
	private StatefulComponent _journey; // 0xC0
	private readonly CompositeMotionHandle _journeyMotions; // 0xC8

	// Methods

	// RVA: 0x2433198 Offset: 0x242F198 VA: 0x2433198 Slot: 13
	public override void Setup() { }

	// RVA: 0x24332A8 Offset: 0x242F2A8 VA: 0x24332A8 Slot: 16
	public override void OnDeactivated() { }

	// RVA: 0x24332D0 Offset: 0x242F2D0 VA: 0x24332D0
	private void OnUnlockClicked() { }

	[AsyncStateMachine(typeof(AreaCompletedMonitor.<Complete>d__10))]
	// RVA: 0x2433554 Offset: 0x242F554 VA: 0x2433554
	public UniTask Complete(AreaSheet.Row unlockedArea) { }

	// RVA: 0x2433608 Offset: 0x242F608 VA: 0x2433608
	private void ShowJourneyUnlock(AreaSheet.Row area) { }

	// RVA: 0x2433934 Offset: 0x242F934 VA: 0x2433934
	public void .ctor() { }
}

