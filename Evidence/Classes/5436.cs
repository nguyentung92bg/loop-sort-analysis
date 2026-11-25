// Namespace: 
public sealed class RankingMonitor : PageMonitorBase, LoopScrollPrefabSource, LoopScrollDataSource // TypeDefIndex: 5436
{
	// Fields
	[Inject]
	private Avatars _avatars; // 0x98
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0xA0
	[Inject]
	private Leaderboard _leaderboard; // 0xA8
	[Inject]
	private ProfileMonitor _profileMonitor; // 0xB0
	[Inject]
	private SheetContainer _sheetContainer; // 0xB8
	[Inject]
	private Shop _shop; // 0xC0
	[Inject]
	private FulfillModule _fulfillModule; // 0xC8
	[Inject]
	private HomeNavigationMonitor _homeNavigationMonitor; // 0xD0
	[Inject]
	private SlidingTextMonitor _slidingTextMonitor; // 0xD8
	[Inject]
	private LeaderboardModule _leaderboardModule; // 0xE0
	[Inject]
	private LoadingMonitor _loadingMonitor; // 0xE8
	[Inject]
	private ISubscriber<PlayerProfileUpdateMessage> _playerProfileUpdateSub; // 0xF0
	private const int FetchBatchSize = 40;
	private const int InstantJumpThreshold = 30;
	private const int ShowTopBottomMinPlayerCount = 30;
	private LeaderboardSnapshot _snapshot; // 0xF8
	private StatefulComponent _localPlayerView; // 0x100
	private StatefulComponent _localPlayerTarget; // 0x108
	private int _lastProvidedIdx; // 0x110
	private CanvasGroup _topBottomGroup; // 0x118
	private UniTimer _topBottomTimer; // 0x120
	private MotionHandle _topBottomMotion; // 0x130
	private RankingConfig _rankingConfig; // 0x140
	private GameObject _loading; // 0x148
	private StateRole _lastSelectedStateRole; // 0x150
	private string _lastSelectedLeaderboardId; // 0x158
	private CancellationTokenSource _populateCancellation; // 0x160

	// Methods

	// RVA: 0x2456B60 Offset: 0x2452B60 VA: 0x2456B60 Slot: 13
	public override void Setup() { }

	// RVA: 0x2457058 Offset: 0x2453058 VA: 0x2457058 Slot: 17
	public override void OnTransition() { }

	// RVA: 0x245710C Offset: 0x245310C VA: 0x245710C Slot: 14
	public override void Render() { }

	// RVA: 0x245734C Offset: 0x245334C VA: 0x245734C
	private void SelectLeaderboard(string leaderboardId, StateRole stateRole) { }

	[AsyncStateMachine(typeof(RankingMonitor.<PopulateLeaderboard>d__31))]
	// RVA: 0x2457440 Offset: 0x2453440 VA: 0x2457440
	private UniTaskVoid PopulateLeaderboard(CancellationToken cancellationToken) { }

	// RVA: 0x24574F0 Offset: 0x24534F0 VA: 0x24574F0
	private void FetchLeaderboard(int idx, CancellationToken cancellationToken) { }

	// RVA: 0x24575DC Offset: 0x24535DC VA: 0x24575DC
	private void OnLeaderboardFetched() { }

	// RVA: 0x2457654 Offset: 0x2453654 VA: 0x2457654
	private void CreatePlayerElement(StatefulComponent view, LeaderboardEntry data, int idx) { }

	[AsyncStateMachine(typeof(RankingMonitor.<ShowPlayerProfile>d__35))]
	// RVA: 0x2457BF0 Offset: 0x2453BF0 VA: 0x2457BF0
	private UniTaskVoid ShowPlayerProfile(string ownerId) { }

	// RVA: 0x2457958 Offset: 0x2453958 VA: 0x2457958
	private void CreatePlayerProfileElement(StatefulComponent view, PlayerProfile profile, bool isLoading) { }

	// RVA: 0x24579F4 Offset: 0x24539F4 VA: 0x24579F4
	private void CreatePlayerRewardElement(StatefulComponent view, int rank) { }

	// RVA: 0x2457CA0 Offset: 0x2453CA0 VA: 0x2457CA0
	private void UpdateTournamentElement() { }

	// RVA: 0x2457EB8 Offset: 0x2453EB8 VA: 0x2457EB8
	private void UpdateLocalPlayerElement() { }

	// RVA: 0x2458084 Offset: 0x2454084 VA: 0x2458084
	private bool IsLocalPlayerAbove() { }

	// RVA: 0x24580C4 Offset: 0x24540C4 VA: 0x24580C4
	private void UpdatePodiumElements() { }

	// RVA: 0x245826C Offset: 0x245426C VA: 0x245826C
	private void SetPodiumElement(LeaderboardEntry entry, TextRole textRole, ImageRole imageRole) { }

	// RVA: 0x2457128 Offset: 0x2453128 VA: 0x2457128
	private void UpdateTournamentTime() { }

	// RVA: 0x24583BC Offset: 0x24543BC VA: 0x24583BC
	private void ScrollToIndex(int idx, float offset, LoopScrollRectBase.ScrollMode scrollMode) { }

	[AsyncStateMachine(typeof(RankingMonitor.<ShowTopBottom>d__45))]
	// RVA: 0x245856C Offset: 0x245456C VA: 0x245856C
	private UniTaskVoid ShowTopBottom() { }

	// RVA: 0x24585F8 Offset: 0x24545F8 VA: 0x24585F8
	private void UpdateLocalPlayerTarget(Transform t) { }

	// RVA: 0x24586E0 Offset: 0x24546E0 VA: 0x24586E0
	private void OnPlayerProfileUpdate(PlayerProfileUpdateMessage m) { }

	// RVA: 0x2458714 Offset: 0x2454714 VA: 0x2458714
	private void SetupScrollRect(int localPlayerRank) { }

	// RVA: 0x245889C Offset: 0x245489C VA: 0x245889C
	private void OnScrollChanged(Vector2 value) { }

	// RVA: 0x24588B4 Offset: 0x24548B4 VA: 0x24588B4 Slot: 18
	public GameObject GetObject(int index) { }

	// RVA: 0x24588E8 Offset: 0x24548E8 VA: 0x24588E8 Slot: 19
	public void ReturnObject(Transform t) { }

	// RVA: 0x2458960 Offset: 0x2454960 VA: 0x2458960 Slot: 20
	public void ProvideData(Transform t, int idx) { }

	// RVA: 0x2457074 Offset: 0x2453074 VA: 0x2457074
	public void RefreshLeaderboardView() { }

	// RVA: 0x2456E54 Offset: 0x2452E54 VA: 0x2456E54
	private void SetupButtons() { }

	// RVA: 0x245836C Offset: 0x245436C VA: 0x245836C
	private void OnWeeklyClicked() { }

	// RVA: 0x2458B54 Offset: 0x2454B54 VA: 0x2458B54
	private void OnWorldClicked() { }

	// RVA: 0x2458BA4 Offset: 0x2454BA4 VA: 0x2458BA4
	private void OnCountryClicked() { }

	// RVA: 0x2458BF4 Offset: 0x2454BF4 VA: 0x2458BF4
	private void OnTopClicked() { }

	// RVA: 0x2458C04 Offset: 0x2454C04 VA: 0x2458C04
	private void OnBottomClicked() { }

	// RVA: 0x2458C64 Offset: 0x2454C64 VA: 0x2458C64
	private void OnClaimClicked() { }

	[AsyncStateMachine(typeof(RankingMonitor.<HandleClaim>d__61))]
	// RVA: 0x2458C68 Offset: 0x2454C68 VA: 0x2458C68
	private UniTaskVoid HandleClaim() { }

	// RVA: 0x2458CFC Offset: 0x2454CFC VA: 0x2458CFC
	public void .ctor() { }
}

