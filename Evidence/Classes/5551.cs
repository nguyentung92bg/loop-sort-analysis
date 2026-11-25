// Namespace: 
public sealed class WinFireworkVariant : MonitorVariantBase // TypeDefIndex: 5551
{
	// Fields
	[Inject]
	private GameMachine _gameMachine; // 0x30
	[Inject]
	private AudioModule _audioModule; // 0x38
	[Inject]
	private WinMonitor _winMonitor; // 0x40

	// Methods

	// RVA: 0x24935F0 Offset: 0x248F5F0 VA: 0x24935F0 Slot: 8
	public override void Setup() { }

	// RVA: 0x2493690 Offset: 0x248F690 VA: 0x2493690 Slot: 10
	public override void OnActivated() { }

	// RVA: 0x2493864 Offset: 0x248F864 VA: 0x2493864
	private void OnNextClicked() { }

	[AsyncStateMachine(typeof(WinFireworkVariant.<HandleMotion>d__6))]
	// RVA: 0x24937D4 Offset: 0x248F7D4 VA: 0x24937D4
	private UniTaskVoid HandleMotion() { }

	// RVA: 0x24938D4 Offset: 0x248F8D4 VA: 0x24938D4
	public void .ctor() { }
}

