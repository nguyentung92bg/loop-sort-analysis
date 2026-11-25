// Namespace: 
public sealed class CameraTransitionSystem : SystemBase // TypeDefIndex: 4612
{
	// Fields
	[Inject]
	private GameMachine _gameMachine; // 0x30
	[Inject]
	private CinemachineGroupFraming _groupFraming; // 0x38
	[Inject]
	private LevelTransitionData _levelTransitionData; // 0x40
	[Inject]
	private InteractionModule _interactionModule; // 0x48
	[Inject]
	private ISubscriber<CameraUpdateCompleteMessage> _cameraUpdateCompleteSub; // 0x50
	[Inject]
	private ISubscriber<LevelWinMessage> _levelWinSub; // 0x58
	[Inject]
	private IPublisher<LevelTransitionCompleteMessage> _levelTransitionCompletePub; // 0x60
	private bool _levelEnter; // 0x68
	private bool _levelExit; // 0x69

	// Methods

	// RVA: 0x24D6538 Offset: 0x24D2538 VA: 0x24D6538 Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x24D6744 Offset: 0x24D2744 VA: 0x24D6744
	private void OnCameraUpdateComplete(CameraUpdateCompleteMessage m) { }

	// RVA: 0x24D67D8 Offset: 0x24D27D8 VA: 0x24D67D8
	private void OnLevelWin(LevelWinMessage m) { }

	[AsyncStateMachine(typeof(CameraTransitionSystem.<HandleLevelEnter>d__12))]
	// RVA: 0x24D6748 Offset: 0x24D2748 VA: 0x24D6748
	private UniTaskVoid HandleLevelEnter() { }

	[AsyncStateMachine(typeof(CameraTransitionSystem.<HandleLevelExit>d__13))]
	// RVA: 0x24D67DC Offset: 0x24D27DC VA: 0x24D67DC
	private UniTaskVoid HandleLevelExit() { }

	// RVA: 0x24D686C Offset: 0x24D286C VA: 0x24D686C
	public void .ctor() { }
}

