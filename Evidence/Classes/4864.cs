// Namespace: 
public sealed class StreakTower : LiveOpsBase, ITickable // TypeDefIndex: 4864
{
	// Fields
	[Inject]
	private ISubscriber<LevelWinMessage> _levelWinSub; // 0x10
	[Inject]
	private ISubscriber<LevelLoseMessage> _levelLoseSub; // 0x18
	[Inject]
	private ISubscriber<ReviveContinueResultUpdateMessage> _reviveContinueResultUpdateSub; // 0x20
	[Inject]
	private LiveOpsModule _liveOpsModule; // 0x28
	[Inject]
	private SheetContainer _sheetContainer; // 0x30
	[Inject]
	private FulfillModule _fulfillModule; // 0x38
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x40
	[Inject]
	private AnalyticsModule _analyticsModule; // 0x48
	private StreakTowerConfig _config; // 0x50

	// Properties
	private static StreakTowerSave Save { get; }

	// Methods

	// RVA: 0x2527C1C Offset: 0x2523C1C VA: 0x2527C1C
	private static StreakTowerSave get_Save() { }

	// RVA: 0x2527CA4 Offset: 0x2523CA4 VA: 0x2527CA4 Slot: 5
	public override void Initialize() { }

	// RVA: 0x2527F9C Offset: 0x2523F9C VA: 0x2527F9C Slot: 15
	public override Dictionary<string, object> GetAnalyticsData() { }

	// RVA: 0x252813C Offset: 0x252413C VA: 0x252813C Slot: 16
	public override LiveOpsEventCompletedArgs GetEventCompletedData() { }

	// RVA: 0x25281E0 Offset: 0x25241E0 VA: 0x25281E0 Slot: 11
	public override bool CanJoin() { }

	// RVA: 0x25281F8 Offset: 0x25241F8 VA: 0x25281F8 Slot: 13
	public override bool CanShow() { }

	// RVA: 0x2528210 Offset: 0x2524210 VA: 0x2528210 Slot: 14
	public override bool CanShowInHome() { }

	// RVA: 0x2528228 Offset: 0x2524228 VA: 0x2528228 Slot: 8
	public override void Complete() { }

	[AsyncStateMachine(typeof(StreakTower.<ApplyHomeAction>d__18))]
	// RVA: 0x25283D8 Offset: 0x25243D8 VA: 0x25283D8 Slot: 6
	public override UniTask ApplyHomeAction(CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(StreakTower.<HandleClaimableStage>d__19))]
	// RVA: 0x2528474 Offset: 0x2524474 VA: 0x2528474
	private UniTask HandleClaimableStage(StreakTowerSheet.Stage stage) { }

	// RVA: 0x2528528 Offset: 0x2524528 VA: 0x2528528
	public void Sync() { }

	// RVA: 0x25285E8 Offset: 0x25245E8 VA: 0x25285E8
	public bool TryGetClaimableStage(out StreakTowerSheet.Stage claimableStage) { }

	// RVA: 0x25287E0 Offset: 0x25247E0 VA: 0x25287E0
	public StreakTowerSheet.Stage GetCheckpointStage() { }

	// RVA: 0x25280B8 Offset: 0x25240B8 VA: 0x25280B8
	private int GetMilestoneLevel() { }

	// RVA: 0x2528954 Offset: 0x2524954 VA: 0x2528954
	private void OnLevelWin(LevelWinMessage m) { }

	// RVA: 0x2528A60 Offset: 0x2524A60 VA: 0x2528A60
	private void OnLevelLose(LevelLoseMessage m) { }

	// RVA: 0x2528B58 Offset: 0x2524B58 VA: 0x2528B58
	private void OnReviveContinueResultUpdate(ReviveContinueResultUpdateMessage m) { }

	// RVA: 0x2528D08 Offset: 0x2524D08 VA: 0x2528D08 Slot: 19
	public void Tick() { }

	// RVA: 0x2528D0C Offset: 0x2524D0C VA: 0x2528D0C
	public void .ctor() { }
}

