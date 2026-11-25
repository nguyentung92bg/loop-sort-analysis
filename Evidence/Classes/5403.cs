// Namespace: 
public sealed class LevelExitMonitor : MonitorBase // TypeDefIndex: 5403
{
	// Fields
	[Inject]
	private GameMachine _gameMachine; // 0x98
	[Inject]
	private IPublisher<ReviveContinueResultUpdateMessage> _reviveContinueResultUpdatePub; // 0xA0
	private int _nextExitResultIdx; // 0xA8
	private readonly List<StatefulComponent> _exitResultInstances; // 0xB0

	// Methods

	// RVA: 0x244CF60 Offset: 0x2448F60 VA: 0x244CF60 Slot: 13
	public override void Setup() { }

	// RVA: 0x244D040 Offset: 0x2449040 VA: 0x244D040 Slot: 15
	public override void OnActivated() { }

	// RVA: 0x244D42C Offset: 0x244942C VA: 0x244D42C
	private void OnCloseClicked() { }

	// RVA: 0x244D47C Offset: 0x244947C VA: 0x244D47C
	private void OnExitClicked() { }

	// RVA: 0x244D05C Offset: 0x244905C VA: 0x244D05C
	private void UpdateExitResultView() { }

	// RVA: 0x244D500 Offset: 0x2449500 VA: 0x244D500
	private void ShowNextExitResult() { }

	// RVA: 0x244D6B0 Offset: 0x24496B0 VA: 0x244D6B0
	public void .ctor() { }
}

