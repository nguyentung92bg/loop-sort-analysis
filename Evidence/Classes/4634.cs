// Namespace: 
public sealed class TutorialSystem : SystemBase // TypeDefIndex: 4634
{
	// Fields
	[Inject]
	private TutorialModule _tutorialModule; // 0x30
	[Inject]
	private SheetContainer _sheetContainer; // 0x38
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x40
	[Inject]
	private PlaySessionModule _playSessionModule; // 0x48
	[Inject]
	private ISubscriber<LevelTransitionCompleteMessage> _levelTransitionCompleteSub; // 0x50
	[Inject]
	private ISubscriber<LevelAnimationEnterCompleteMessage> _levelAnimationEnterCompleteSub; // 0x58
	[Inject]
	private IPublisher<TutorialCompleteMessage> _tutorialCompletePub; // 0x60
	private LevelAnimationConfig _levelAnimationConfig; // 0x68

	// Methods

	// RVA: 0x24E11E8 Offset: 0x24DD1E8 VA: 0x24E11E8 Slot: 9
	public override void OnAwake() { }

	// RVA: 0x24E1254 Offset: 0x24DD254 VA: 0x24E1254 Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x24E1460 Offset: 0x24DD460 VA: 0x24E1460
	private void OnLevelTransitionComplete(LevelTransitionCompleteMessage m) { }

	// RVA: 0x24E1510 Offset: 0x24DD510 VA: 0x24E1510
	private void OnLevelAnimationEnterComplete(LevelAnimationEnterCompleteMessage m) { }

	[AsyncStateMachine(typeof(TutorialSystem.<HandleTutorial>d__12))]
	// RVA: 0x24E1480 Offset: 0x24DD480 VA: 0x24E1480
	private UniTaskVoid HandleTutorial() { }

	// RVA: 0x24E1530 Offset: 0x24DD530 VA: 0x24E1530
	public void .ctor() { }
}

