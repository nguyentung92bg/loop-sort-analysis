// Namespace: 
public sealed class CollectionBarHomeElement : ElementBase // TypeDefIndex: 5278
{
	// Fields
	[SerializeField]
	private AnimationCurve CustomOutBackEase; // 0x28
	[SerializeField]
	private AnimationCurve CustomMultiplierBarEase; // 0x30
	[SerializeField]
	private Sprite ChestSprite; // 0x38
	[Inject]
	private CollectionBar _controller; // 0x40
	[Inject]
	private LiveOpsModule _liveOpsModule; // 0x48
	[Inject]
	private SheetContainer _sheetContainer; // 0x50
	[Inject]
	private Shop _shop; // 0x58
	[Inject]
	private EconomyModule _economyModule; // 0x60
	[Inject]
	private FulfillModule _fulfillModule; // 0x68
	[Inject]
	private Monitors _monitors; // 0x70
	[Inject]
	private AnalyticsModule _analyticsModule; // 0x78
	[Inject]
	private FulfillRewardMonitor _fulfillRewardMonitor; // 0x80
	[Inject]
	private ISubscriber<LevelWinMessage> _levelWinSub; // 0x88
	[Inject]
	private ISubscriber<LevelLoseMessage> _levelLoseSub; // 0x90
	[Inject]
	private IAsyncSubscriber<CollectionBarUpdateMessage> _collectionBarUpdateSub; // 0x98
	private StatefulComponent _claimView; // 0xA0
	private CollectionBarSheet.Row _currentProgressData; // 0xA8
	private int _currentTokenCount; // 0xB0
	private int _currentTotalReward; // 0xB4
	private int _currentMultiplier; // 0xB8
	private bool _isUpdateRequired; // 0xBC
	private bool _isInClaim; // 0xBD
	private readonly List<CollectionBarSheet.Row> _claimableProgresses; // 0xC0

	// Methods

	// RVA: 0x2413DFC Offset: 0x240FDFC VA: 0x2413DFC Slot: 10
	public override void OnActivated() { }

	// RVA: 0x2413E10 Offset: 0x240FE10 VA: 0x2413E10 Slot: 8
	public override void Setup() { }

	// RVA: 0x24142B4 Offset: 0x24102B4 VA: 0x24142B4 Slot: 9
	public override void Render() { }

	// RVA: 0x2414444 Offset: 0x2410444 VA: 0x2414444
	private void OnSelectClicked() { }

	// RVA: 0x2414480 Offset: 0x2410480 VA: 0x2414480
	private void OnLevelWin(LevelWinMessage m) { }

	// RVA: 0x24145F4 Offset: 0x24105F4 VA: 0x24145F4
	private void OnLevelLose(LevelLoseMessage m) { }

	// RVA: 0x2414628 Offset: 0x2410628 VA: 0x2414628
	private void HandleRewardPayouts() { }

	// RVA: 0x241415C Offset: 0x241015C VA: 0x241415C
	private void SetupBar() { }

	// RVA: 0x2414C58 Offset: 0x2410C58 VA: 0x2414C58
	private void UpdateBarReward(CollectionBarSheet.Row progressData) { }

	[AsyncStateMachine(typeof(CollectionBarHomeElement.<OnCollectionBarUpdate>d__32))]
	// RVA: 0x2414DF4 Offset: 0x2410DF4 VA: 0x2414DF4
	private UniTask OnCollectionBarUpdate(CollectionBarUpdateMessage m, CancellationToken token) { }

	[AsyncStateMachine(typeof(CollectionBarHomeElement.<HandleFlow>d__33))]
	// RVA: 0x2414EA8 Offset: 0x2410EA8 VA: 0x2414EA8
	public UniTask HandleFlow(CancellationToken token) { }

	[AsyncStateMachine(typeof(CollectionBarHomeElement.<ApplyClaimMotions>d__34))]
	// RVA: 0x2414F60 Offset: 0x2410F60 VA: 0x2414F60
	private UniTask ApplyClaimMotions(bool canSkip, CancellationToken token) { }

	// RVA: 0x2415024 Offset: 0x2411024 VA: 0x2415024
	public void .ctor() { }
}

