// Namespace: 
public sealed class StreakTournamentPersonalRewardsElement : LoopScrollPrefabSource, LoopScrollDataSource // TypeDefIndex: 5521
{
	// Fields
	[Inject]
	private StreakTournament _streakTournament; // 0x10
	[Inject]
	private SheetContainer _sheetContainer; // 0x18
	[Inject]
	private Shop _shop; // 0x20
	private StatefulComponent _view; // 0x28
	private StreakTournamentSubMonitor _subMonitor; // 0x30
	private StatefulComponent _previousPreviewItemTarget; // 0x38

	// Methods

	// RVA: 0x2484084 Offset: 0x2480084 VA: 0x2484084
	public void Refill(StatefulComponent view, StreakTournamentSubMonitor subMonitor) { }

	// RVA: 0x2486A98 Offset: 0x2482A98 VA: 0x2486A98 Slot: 4
	public GameObject GetObject(int index) { }

	// RVA: 0x2486AD8 Offset: 0x2482AD8 VA: 0x2486AD8 Slot: 5
	public void ReturnObject(Transform t) { }

	// RVA: 0x2486B44 Offset: 0x2482B44 VA: 0x2486B44 Slot: 6
	public void ProvideData(Transform t, int idx) { }

	// RVA: 0x2486C38 Offset: 0x2482C38 VA: 0x2486C38
	private void CreateMilestoneElement(StatefulComponent view, StreakTournamentPersonalRewardSheet.Row data, int milestone) { }

	// RVA: 0x2486E7C Offset: 0x2482E7C VA: 0x2486E7C
	private void OnMilestoneElementRewardClicked(StatefulComponent view, List<RewardInfo> rewards) { }

	// RVA: 0x2487304 Offset: 0x2483304 VA: 0x2487304
	private void OnScrollChanged(Vector2 value) { }

	// RVA: 0x2487308 Offset: 0x2483308 VA: 0x2487308
	private void ClearPreviewItemContainer() { }

	// RVA: 0x2482AD8 Offset: 0x247EAD8 VA: 0x2482AD8
	public void .ctor() { }
}

