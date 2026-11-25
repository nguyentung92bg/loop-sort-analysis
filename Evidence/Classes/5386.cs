// Namespace: 
public sealed class FulfillRewardMonitor : MonitorBase // TypeDefIndex: 5386
{
	// Fields
	[Inject]
	private Shop _shop; // 0x98
	[Inject]
	private Payouts _payouts; // 0xA0
	[Inject]
	private GameMachine _gameMachine; // 0xA8
	[Inject]
	private HomeMonitor _homeMonitor; // 0xB0
	[Inject]
	private PlayingMonitor _playingMonitor; // 0xB8
	[Inject]
	private EconomyModule _economyModule; // 0xC0
	[Inject]
	private HomeNavigationMonitor _homeNavigationMonitor; // 0xC8
	private CanvasGroup _mainGroup; // 0xD0
	private CanvasGroup _backgroundGroup; // 0xD8
	private LayoutGroup _elementGroup; // 0xE0
	private bool _isElementMoveStarted; // 0xE8
	private bool _isFulfillActive; // 0xE9
	private readonly CompositeMotionHandle _motions; // 0xF0
	[TupleElementNames(new[] { "view", "payout" })]
	private readonly List<ValueTuple<StatefulComponent, FulfillPayout>> _itemElements; // 0xF8
	private readonly Dictionary<Item, FulfillPayout> _fulfillPayouts; // 0x100

	// Properties
	public bool IsFulfillActive { get; }

	// Methods

	// RVA: 0x243FF90 Offset: 0x243BF90 VA: 0x243FF90
	public bool get_IsFulfillActive() { }

	// RVA: 0x243FF98 Offset: 0x243BF98 VA: 0x243FF98 Slot: 13
	public override void Setup() { }

	// RVA: 0x24400EC Offset: 0x243C0EC VA: 0x24400EC
	public void Enqueue(FulfillPayout fulfillPayout) { }

	// RVA: 0x24401C4 Offset: 0x243C1C4 VA: 0x24401C4
	public bool HasPending(Item item) { }

	// RVA: 0x2440230 Offset: 0x243C230 VA: 0x2440230
	public void ClearPending() { }

	// RVA: 0x24402C4 Offset: 0x243C2C4 VA: 0x24402C4
	public void Discard() { }

	[AsyncStateMachine(typeof(FulfillRewardMonitor.<AwaitFulfillCompletion>d__22))]
	// RVA: 0x244036C Offset: 0x243C36C VA: 0x244036C
	public UniTask AwaitFulfillCompletion() { }

	[AsyncStateMachine(typeof(FulfillRewardMonitor.<StartFulfillAsync>d__23))]
	// RVA: 0x2440404 Offset: 0x243C404 VA: 0x2440404
	public UniTaskVoid StartFulfillAsync() { }

	// RVA: 0x2440490 Offset: 0x243C490 VA: 0x2440490
	private void ShowFulfill() { }

	// RVA: 0x2440BC4 Offset: 0x243CBC4 VA: 0x2440BC4
	private List<FulfillPayout> GetCustomFulfillPayouts(Dictionary<Item, FulfillPayout> fulfillPayouts) { }

	[AsyncStateMachine(typeof(FulfillRewardMonitor.<CreateItemElement>d__26))]
	// RVA: 0x244101C Offset: 0x243D01C VA: 0x244101C
	private UniTaskVoid CreateItemElement(StatefulComponent view, FulfillPayout data, int delayIdx) { }

	// RVA: 0x2441100 Offset: 0x243D100 VA: 0x2441100
	private void OnClaimClicked() { }

	[AsyncStateMachine(typeof(FulfillRewardMonitor.<HandleClaim>d__28))]
	// RVA: 0x2441144 Offset: 0x243D144 VA: 0x2441144
	private UniTaskVoid HandleClaim() { }

	// RVA: 0x24411D4 Offset: 0x243D1D4 VA: 0x24411D4
	private void ApplyClaimMotion() { }

	// RVA: 0x2441544 Offset: 0x243D544 VA: 0x2441544
	private void ApplyElementMoveMotion(int idx, int delayIdx) { }

	// RVA: 0x2441A5C Offset: 0x243DA5C VA: 0x2441A5C
	private Transform GetItemTarget(Item item) { }

	// RVA: 0x24410E8 Offset: 0x243D0E8 VA: 0x24410E8
	private int GetCustomItemIdx(Item item) { }

	// RVA: 0x2441CB4 Offset: 0x243DCB4 VA: 0x2441CB4
	public void .ctor() { }
}

