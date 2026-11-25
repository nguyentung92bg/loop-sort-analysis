// Namespace: 
public sealed class StreakTournamentLeaderboardElement : LoopScrollPrefabSource, LoopScrollDataSource // TypeDefIndex: 5519
{
	// Fields
	[Inject]
	private StreakTournament _streakTournament; // 0x10
	[Inject]
	private SheetContainer _sheetContainer; // 0x18
	[Inject]
	private Avatars _avatars; // 0x20
	[Inject]
	private Shop _shop; // 0x28
	private StreakTournamentSubMonitor _subMonitor; // 0x30
	private StatefulComponent _view; // 0x38
	private StatefulComponent _previousPreviewItemTarget; // 0x40
	private StatefulComponent _mainPlayerView; // 0x48
	private StatefulComponent _mainPlayerTarget; // 0x50
	private List<StreakTournamentPlayer> _leaderboard; // 0x58

	// Methods

	// RVA: 0x24830D8 Offset: 0x247F0D8 VA: 0x24830D8
	public void Refill(StatefulComponent view, StreakTournamentSubMonitor subMonitor) { }

	[AsyncStateMachine(typeof(StreakTournamentLeaderboardElement.<UpdateMainPlayerElementDelay>d__11))]
	// RVA: 0x2485E94 Offset: 0x2481E94 VA: 0x2485E94
	private UniTaskVoid UpdateMainPlayerElementDelay() { }

	// RVA: 0x2485F20 Offset: 0x2481F20 VA: 0x2485F20
	private void UpdateMainPlayerElement() { }

	// RVA: 0x2486090 Offset: 0x2482090 VA: 0x2486090 Slot: 4
	public GameObject GetObject(int index) { }

	// RVA: 0x24860D0 Offset: 0x24820D0 VA: 0x24860D0 Slot: 5
	public void ReturnObject(Transform t) { }

	// RVA: 0x2486210 Offset: 0x2482210 VA: 0x2486210 Slot: 6
	public void ProvideData(Transform t, int idx) { }

	// RVA: 0x2485BFC Offset: 0x2481BFC VA: 0x2485BFC
	private void CreatePlayerElement(StatefulComponent view, StreakTournamentPlayer data, int idx) { }

	// RVA: 0x24863B8 Offset: 0x24823B8 VA: 0x24863B8
	private void OnPlayerElementRewardClicked(StatefulComponent view, List<RewardInfo> rewards) { }

	// RVA: 0x24838F4 Offset: 0x247F8F4 VA: 0x24838F4
	public void UpdateLeaderboardRewardView(StatefulComponent view, List<RewardInfo> rewards, int rank) { }

	// RVA: 0x2486840 Offset: 0x2482840 VA: 0x2486840
	private void OnScrollChanged(Vector2 value) { }

	// RVA: 0x2486858 Offset: 0x2482858 VA: 0x2486858
	private void ClearPreviewItemContainer() { }

	// RVA: 0x2483878 Offset: 0x247F878 VA: 0x2483878
	public List<RewardInfo> GetRewards(int rank) { }

	// RVA: 0x2482AD0 Offset: 0x247EAD0 VA: 0x2482AD0
	public void .ctor() { }
}

