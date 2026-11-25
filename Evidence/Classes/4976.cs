// Namespace: 
public sealed class LiveOpsModule : ModuleBase, IInitializable // TypeDefIndex: 4976
{
	// Fields
	[Inject]
	private AnalyticsModule _analyticsModule; // 0x10
	[Inject]
	private SheetContainer _sheetContainer; // 0x18
	[Inject]
	private Monitors _monitors; // 0x20
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x28
	private readonly List<LiveOps> _sortedLiveOps; // 0x30
	private HomeActionsConfig _homeActionsConfig; // 0x38
	private readonly Dictionary<LiveOps, int> _liveOpsPriority; // 0x40

	// Methods

	// RVA: 0x2546638 Offset: 0x2542638 VA: 0x2546638 Slot: 4
	public void Initialize() { }

	// RVA: 0x254688C Offset: 0x254288C VA: 0x254688C
	public void Update() { }

	// RVA: 0x253E230 Offset: 0x253A230 VA: 0x253E230
	public UniTask<StatefulComponent> Show(LiveOps liveOps, LiveOpsImpressionTrigger trigger) { }

	// RVA: 0x2546DB8 Offset: 0x2542DB8 VA: 0x2546DB8
	public bool CanShow(LiveOps liveOps) { }

	// RVA: 0x2547858 Offset: 0x2543858 VA: 0x2547858
	public bool CanShowPopup(LiveOps liveOps) { }

	// RVA: 0x25479C8 Offset: 0x25439C8 VA: 0x25479C8
	public UniTask ApplyHomeActions(CancellationToken cancellationToken) { }

	// RVA: 0x2547A9C Offset: 0x2543A9C VA: 0x2547A9C
	public UniTask ApplySkippableHomeActions(CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(LiveOpsModule.<ApplyHomeActions>d__14))]
	// RVA: 0x25479D4 Offset: 0x25439D4 VA: 0x25479D4
	private UniTask ApplyHomeActions(bool skippable, CancellationToken cancellationToken) { }

	// RVA: 0x25475E0 Offset: 0x25435E0 VA: 0x25475E0
	public void Join(LiveOps liveOps) { }

	// RVA: 0x2546CC0 Offset: 0x2542CC0 VA: 0x2546CC0
	public bool IsJoined(LiveOps liveOps) { }

	// RVA: 0x2547318 Offset: 0x2543318 VA: 0x2547318
	public bool CanJoin(LiveOps liveOps) { }

	// RVA: 0x2547574 Offset: 0x2543574 VA: 0x2547574
	private bool CanAutoJoin(LiveOps liveOps) { }

	// RVA: 0x2546F00 Offset: 0x2542F00 VA: 0x2546F00
	public void Complete(LiveOps liveOps) { }

	// RVA: 0x2546E28 Offset: 0x2542E28 VA: 0x2546E28
	public bool CanComplete(LiveOps liveOps) { }

	// RVA: 0x2547C5C Offset: 0x2543C5C VA: 0x2547C5C
	public bool CanShowInHome(LiveOps liveOps) { }

	// RVA: 0x2547160 Offset: 0x2543160 VA: 0x2547160
	private void UpdateSchedule(LiveOps liveOps) { }

	// RVA: 0x2547AA8 Offset: 0x2543AA8 VA: 0x2547AA8
	public bool IsRefreshTimeElapsed(LiveOps liveOps) { }

	// RVA: 0x2547E38 Offset: 0x2543E38 VA: 0x2547E38
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2548090 Offset: 0x2544090 VA: 0x2548090
	private int <Initialize>b__7_1(LiveOps a, LiveOps b) { }
}

