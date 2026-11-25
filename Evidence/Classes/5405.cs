// Namespace: 
public sealed class LiveOpsMonitor : MonitorBase // TypeDefIndex: 5405
{
	// Fields
	[Inject]
	private LiveOpsData _liveOpsData; // 0x98
	[Inject]
	private SkinModule _skinModule; // 0xA0
	private UniTimer _activateTimer; // 0xA8
	private LiveOps _currentType; // 0xB8
	private StatefulComponent _currentView; // 0xC0

	// Methods

	// RVA: 0x244D738 Offset: 0x2449738 VA: 0x244D738 Slot: 13
	public override void Setup() { }

	// RVA: 0x244D7D0 Offset: 0x24497D0 VA: 0x244D7D0 Slot: 15
	public override void OnActivated() { }

	// RVA: 0x244D814 Offset: 0x2449814 VA: 0x244D814 Slot: 16
	public override void OnDeactivated() { }

	[AsyncStateMachine(typeof(LiveOpsMonitor.<Show>d__8))]
	// RVA: 0x244D848 Offset: 0x2449848 VA: 0x244D848
	public UniTask<StatefulComponent> Show(LiveOps liveOps) { }

	// RVA: 0x244D968 Offset: 0x2449968 VA: 0x244D968
	private void OnCloseClicked() { }

	// RVA: 0x244D9A8 Offset: 0x24499A8 VA: 0x244D9A8
	public void .ctor() { }
}

