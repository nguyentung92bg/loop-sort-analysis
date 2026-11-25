// Namespace: 
public sealed class LavaQuestSubMonitor : SubMonitorBase // TypeDefIndex: 5503
{
	// Fields
	[SerializeField]
	private List<StatefulComponent> Stages; // 0x40
	[Inject]
	private LavaQuest _controller; // 0x48
	[Inject]
	private LiveOpsModule _liveOpsModule; // 0x50
	[Inject]
	private Avatars _avatars; // 0x58
	private StatefulComponent _infoView; // 0x60
	private StatefulComponent _gameView; // 0x68
	private StatefulComponent _searchView; // 0x70
	private StatefulComponent _joinView; // 0x78
	private StatefulComponent _failView; // 0x80
	private StatefulComponent _winView; // 0x88
	private CancellationTokenSource _infoCancellation; // 0x90
	private CancellationTokenSource _progressCancellation; // 0x98
	private StatefulComponent _mainPlayer; // 0xA0
	private bool _showProgress; // 0xA8
	private LavaQuestGame.EStatus _progressStatus; // 0xAC
	private readonly List<StatefulComponent> _players; // 0xB0
	private readonly List<Vector3> _eliminatePositions; // 0xB8

	// Methods

	// RVA: 0x2478D5C Offset: 0x2474D5C VA: 0x2478D5C Slot: 8
	public override void Setup() { }

	// RVA: 0x24794D0 Offset: 0x24754D0 VA: 0x24794D0 Slot: 9
	public override void Render() { }

	// RVA: 0x247966C Offset: 0x247566C VA: 0x247966C
	private void OnDestroy() { }

	// RVA: 0x2479450 Offset: 0x2475450 VA: 0x2479450
	private void SetGameState(LavaQuestGame game) { }

	// RVA: 0x2479A50 Offset: 0x2475A50 VA: 0x2479A50
	private void UpdateGameStateView(LavaQuestGame game) { }

	// RVA: 0x2479C64 Offset: 0x2475C64 VA: 0x2479C64
	private void FindClosestEliminatePoints(Vector3 from) { }

	// RVA: 0x2479680 Offset: 0x2475680 VA: 0x2479680
	private void CreatePlayers(LavaQuestGame game) { }

	// RVA: 0x247A1CC Offset: 0x24761CC VA: 0x247A1CC
	private void SetPlayerAvatars() { }

	// RVA: 0x247A640 Offset: 0x2476640 VA: 0x247A640
	private void UpdatePlayerRenderOrder() { }

	// RVA: 0x2479EEC Offset: 0x2475EEC VA: 0x2479EEC
	private static List<Vector3> BuildPlayerOffsets(int count) { }

	// RVA: 0x2479E80 Offset: 0x2475E80 VA: 0x2479E80
	private StatefulComponent GetCurrentStage(LavaQuestGame game) { }

	[AsyncStateMachine(typeof(LavaQuestSubMonitor.<ShowProgress>d__28))]
	// RVA: 0x247A8F0 Offset: 0x24768F0 VA: 0x247A8F0
	public UniTask ShowProgress(LavaQuestGame from, LavaQuestGame to) { }

	// RVA: 0x247A9C4 Offset: 0x24769C4 VA: 0x247A9C4
	private void ShowFail(LavaQuestGame game) { }

	// RVA: 0x247A9D4 Offset: 0x24769D4 VA: 0x247A9D4
	private void ShowWin(LavaQuestGame game) { }

	// RVA: 0x247ACDC Offset: 0x2476CDC VA: 0x247ACDC
	private void ShowSearch() { }

	[AsyncStateMachine(typeof(LavaQuestSubMonitor.<ApplyJumpMotion>d__32))]
	// RVA: 0x247B128 Offset: 0x2477128 VA: 0x247B128
	private UniTask ApplyJumpMotion(StatefulComponent view, Vector3 fromPosition, Vector3 toPosition, float rotation, float delay, Action onComplete) { }

	// RVA: 0x247B250 Offset: 0x2477250 VA: 0x247B250
	private void ApplySinkMotion(StatefulComponent view) { }

	// RVA: 0x2479170 Offset: 0x2475170 VA: 0x2479170
	private void SetupButtons() { }

	// RVA: 0x247B3E4 Offset: 0x24773E4 VA: 0x247B3E4
	private void OnCloseClicked() { }

	// RVA: 0x247B438 Offset: 0x2477438 VA: 0x247B438
	private void OnJoinClicked() { }

	// RVA: 0x247B484 Offset: 0x2477484 VA: 0x247B484
	private void OnInfoClicked() { }

	// RVA: 0x247B5E4 Offset: 0x24775E4 VA: 0x247B5E4
	private void OnGameContinueClicked() { }

	// RVA: 0x247B648 Offset: 0x2477648 VA: 0x247B648
	private void OnInfoContinueClicked() { }

	// RVA: 0x247B688 Offset: 0x2477688 VA: 0x247B688
	private void OnSearchContinueClicked() { }

	// RVA: 0x247B744 Offset: 0x2477744 VA: 0x247B744
	private void OnWinContinueClicked() { }

	// RVA: 0x247B798 Offset: 0x2477798 VA: 0x247B798
	public void .ctor() { }
}

