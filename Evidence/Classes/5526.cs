// Namespace: 
public sealed class StreakTowerSubMonitor : SubMonitorBase // TypeDefIndex: 5526
{
	// Fields
	[Inject]
	private SheetContainer _sheetContainer; // 0x40
	[Inject]
	private StreakTower _streakTower; // 0x48
	[Inject]
	private LiveOpsMonitor _liveOpsMonitor; // 0x50
	[Inject]
	private Shop _shop; // 0x58
	[Inject]
	private Payouts _payouts; // 0x60
	private StatefulComponent _infoView; // 0x68
	private Transform _playerT; // 0x70
	private ScrollRect _scroll; // 0x78
	private RectTransform _backgroundT; // 0x80
	private CancellationTokenSource _infoCancellation; // 0x88
	private StreakTowerSheet.Stage _claimableStage; // 0x90
	private readonly Dictionary<StreakTowerSheet.Stage, StatefulComponent> _viewByStage; // 0x98
	private readonly Dictionary<int, Transform> _milestoneTransforms; // 0xA0

	// Properties
	private static StreakTowerSave Save { get; }

	// Methods

	// RVA: 0x248736C Offset: 0x248336C VA: 0x248736C
	private static StreakTowerSave get_Save() { }

	// RVA: 0x24873F4 Offset: 0x24833F4 VA: 0x24873F4 Slot: 8
	public override void Setup() { }

	// RVA: 0x2487D48 Offset: 0x2483D48 VA: 0x2487D48 Slot: 9
	public override void Render() { }

	// RVA: 0x2487C58 Offset: 0x2483C58 VA: 0x2487C58
	private void UpdateBackground() { }

	// RVA: 0x2487664 Offset: 0x2483664 VA: 0x2487664
	private void CreateStageElements() { }

	// RVA: 0x2487D4C Offset: 0x2483D4C VA: 0x2487D4C
	private void FillStageElement(StatefulComponent view, StreakTowerSheet.Stage data) { }

	[AsyncStateMachine(typeof(StreakTowerSubMonitor.<UpdatePlayer>d__20))]
	// RVA: 0x2487988 Offset: 0x2483988 VA: 0x2487988
	private UniTaskVoid UpdatePlayer() { }

	// RVA: 0x2487A18 Offset: 0x2483A18 VA: 0x2487A18
	private void UpdateStages() { }

	[AsyncStateMachine(typeof(StreakTowerSubMonitor.<ApplyMoveMotion>d__22))]
	// RVA: 0x2488068 Offset: 0x2484068 VA: 0x2488068
	private UniTask ApplyMoveMotion() { }

	[AsyncStateMachine(typeof(StreakTowerSubMonitor.<ApplyChestClaimMotion>d__23))]
	// RVA: 0x2488100 Offset: 0x2484100 VA: 0x2488100
	private UniTask ApplyChestClaimMotion() { }

	// RVA: 0x248819C Offset: 0x248419C VA: 0x248819C
	private Vector2 GetContentPosition(Transform targetT) { }

	// RVA: 0x2488354 Offset: 0x2484354 VA: 0x2488354
	private void OnStageChestClicked(StatefulComponent view, StreakTowerSheet.Stage data) { }

	// RVA: 0x248876C Offset: 0x248476C VA: 0x248876C
	private void OnInfoClicked() { }

	// RVA: 0x2488824 Offset: 0x2484824 VA: 0x2488824
	private void OnInfoContinueClicked() { }

	// RVA: 0x2488864 Offset: 0x2484864 VA: 0x2488864
	public void SetClaimableStage(StreakTowerSheet.Stage stage) { }

	// RVA: 0x248886C Offset: 0x248486C VA: 0x248886C
	public void .ctor() { }
}

