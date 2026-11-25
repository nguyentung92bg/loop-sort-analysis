// Namespace: 
public sealed class EconomyModule : ModuleBase, IInitializable // TypeDefIndex: 4890
{
	// Fields
	[Inject]
	private AnalyticsModule _analyticsModule; // 0x10
	[Inject]
	private SheetContainer _sheetContainer; // 0x18
	[Inject]
	private CloudSaveModule _cloudSaveModule; // 0x20
	[Inject]
	private IPublisher<EconomyAddMessage> _addPub; // 0x28
	[Inject]
	private IPublisher<EconomyConsumeMessage> _consumePub; // 0x30
	[Inject]
	private IPublisher<EconomyUpdateMessage> _updatePub; // 0x38
	[Inject]
	private IPublisher<EconomyConsumeFailMessage> _consumeFailPub; // 0x40
	private bool _updateInterceptorActive; // 0x48
	private readonly Dictionary<Item, CloudPrefsInt> _items; // 0x50
	private readonly CloudPrefsInt _level; // 0x58
	private readonly Dictionary<Item, AutoResetUniTaskCompletionSource> _updateCompletionByItem; // 0x78
	private readonly Dictionary<Item, int> _interceptedAmountSnapshot; // 0x80

	// Methods

	// RVA: 0x2532D7C Offset: 0x252ED7C VA: 0x2532D7C Slot: 4
	public void Initialize() { }

	// RVA: 0x2524E30 Offset: 0x2520E30 VA: 0x2524E30
	public void Set(EconomyModule.Transaction transaction) { }

	// RVA: 0x25332A4 Offset: 0x252F2A4 VA: 0x25332A4
	public void Add(EconomyModule.Transaction transaction) { }

	// RVA: 0x2533778 Offset: 0x252F778 VA: 0x2533778
	public bool TryConsume(EconomyModule.Transaction transaction) { }

	// RVA: 0x2533D68 Offset: 0x252FD68 VA: 0x2533D68
	public bool CanConsume(EconomyModule.Transaction transaction) { }

	// RVA: 0x2523ED0 Offset: 0x251FED0 VA: 0x2523ED0
	public int GetAmount(Item item) { }

	// RVA: 0x2533E00 Offset: 0x252FE00 VA: 0x2533E00
	public int GetInterceptedAmount(Item item) { }

	[AsyncStateMachine(typeof(EconomyModule.<PublishEconomyUpdate>d__20))]
	// RVA: 0x25331E4 Offset: 0x252F1E4 VA: 0x25331E4
	private UniTaskVoid PublishEconomyUpdate(EconomyUpdateMessage m) { }

	// RVA: 0x2533E88 Offset: 0x252FE88 VA: 0x2533E88
	public void EnableUpdateInterceptor(Item item) { }

	// RVA: 0x2533F40 Offset: 0x252FF40 VA: 0x2533F40
	public void EnableUpdateInterceptor(List<Item> items) { }

	// RVA: 0x2534190 Offset: 0x2530190 VA: 0x2534190
	public void DisableUpdateInterceptor() { }

	// RVA: 0x25343AC Offset: 0x25303AC VA: 0x25343AC
	public void ContinueUpdateFor(Item item) { }

	// RVA: 0x2534488 Offset: 0x2530488 VA: 0x2534488
	public bool IsUpdateIntercepted(Item item) { }

	// RVA: 0x25344F4 Offset: 0x25304F4 VA: 0x25344F4
	public void .ctor() { }
}

