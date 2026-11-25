// Namespace: 
public sealed class DailyChallengeLoseMonitor : MonitorBase // TypeDefIndex: 5367
{
	// Fields
	[Inject]
	private GameMachine _gameMachine; // 0x98
	[Inject]
	private PlaySessionModule _playSessionModule; // 0xA0
	[Inject]
	private DailyChallenge _dailyChallenge; // 0xA8
	[Inject]
	private SceneModule _sceneModule; // 0xB0

	// Methods

	// RVA: 0x243B874 Offset: 0x2437874 VA: 0x243B874 Slot: 13
	public override void Setup() { }

	// RVA: 0x243B954 Offset: 0x2437954 VA: 0x243B954 Slot: 15
	public override void OnActivated() { }

	// RVA: 0x243BA84 Offset: 0x2437A84 VA: 0x243BA84
	private void OnTryAgainClicked() { }

	// RVA: 0x243BAD4 Offset: 0x2437AD4 VA: 0x243BAD4
	private void OnCloseClicked() { }

	// RVA: 0x243BB24 Offset: 0x2437B24 VA: 0x243BB24
	public void .ctor() { }
}

