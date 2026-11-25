// Namespace: 
public sealed class HomeMonitor : PageMonitorBase // TypeDefIndex: 5397
{
	// Fields
	[Inject]
	private IObjectResolver _objectResolver; // 0x98
	[Inject]
	private GameMachine _gameMachine; // 0xA0
	[Inject]
	private SceneModule _sceneModule; // 0xA8
	[Inject]
	private LifeModule _lifeModule; // 0xB0
	[Inject]
	private RefillLivesMonitor _refillLivesMonitor; // 0xB8
	[Inject]
	private EconomyModule _economyModule; // 0xC0
	[Inject]
	private LiveOpsData _liveOpsData; // 0xC8
	[Inject]
	private LiveOpsModule _liveOpsModule; // 0xD0
	[Inject]
	private HomeNavigationMonitor _homeNavigationMonitor; // 0xD8
	[Inject]
	private Areas _areas; // 0xE0
	[Inject]
	private SheetContainer _sheetContainer; // 0xE8
	[Inject]
	private AnalyticsModule _analyticsModule; // 0xF0
	[Inject]
	private Avatars _avatars; // 0xF8
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x100
	[Inject]
	private SkinModule _skinModule; // 0x108
	[Inject]
	private ProfileMonitor _profileMonitor; // 0x110
	[Inject]
	private ISubscriber<EconomyUpdateMessage> _economyUpdateSub; // 0x118
	[Inject]
	private ISubscriber<PlayerProfileUpdateMessage> _playerProfileUpdateSub; // 0x120
	private Action _updateLiveOpsElements; // 0x128
	private Action _renderLiveOpsElements; // 0x130
	private StatefulComponent _collectionBarView; // 0x138
	private StatefulComponent _coreStreakView; // 0x140
	private StatefulComponent _dailyChallengeView; // 0x148
	private int _currentAreaIdx; // 0x150
	private GameObject _currentAreaSceneInstance; // 0x158
	private AsyncOperationHandle<HomeSceneAsset> _homeSceneHandle; // 0x160
	private HomeSceneView _homeSceneView; // 0x178
	private int _homeSceneLoadId; // 0x180
	private bool _isActivated; // 0x184
	private UniTimer _renderCooldownTimer; // 0x188
	private bool _isGameStarting; // 0x198
	private HomeAnimationConfig _homeAnimationConfig; // 0x1A0
	private HomeActionsConfig _homeActionsConfig; // 0x1A8
	private readonly HashSet<AssetReferenceGameObject> _requiredAssetRefs; // 0x1B0
	private readonly HashSet<AsyncOperationHandle> _requiredAssetHandles; // 0x1B8
	private readonly List<HomeLiveOpsSlot> _homeLiveOpsSlots; // 0x1C0
	private float _debugTimeMultiplier; // 0x1C8
	private MotionHandle _debugTimeMultiplierMotion; // 0x1CC

	// Methods

	// RVA: 0x24442B8 Offset: 0x24402B8 VA: 0x24442B8 Slot: 15
	public override void OnActivated() { }

	// RVA: 0x2445120 Offset: 0x2441120 VA: 0x2445120 Slot: 16
	public override void OnDeactivated() { }

	// RVA: 0x24453A8 Offset: 0x24413A8 VA: 0x24453A8
	private void OnDestroy() { }

	// RVA: 0x24454B4 Offset: 0x24414B4 VA: 0x24454B4 Slot: 13
	public override void Setup() { }

	// RVA: 0x2445C84 Offset: 0x2441C84 VA: 0x2445C84 Slot: 14
	public override void Render() { }

	// RVA: 0x2445D00 Offset: 0x2441D00 VA: 0x2445D00
	private void RenderLife() { }

	// RVA: 0x2445E74 Offset: 0x2441E74 VA: 0x2445E74
	private void UpdateLife() { }

	// RVA: 0x2445C20 Offset: 0x2441C20 VA: 0x2445C20
	private void ForceUpdateEconomyTexts() { }

	// RVA: 0x2446068 Offset: 0x2442068 VA: 0x2446068
	private void OnEconomyUpdate(EconomyUpdateMessage m) { }

	// RVA: 0x24460A8 Offset: 0x24420A8 VA: 0x24460A8
	private void OnPlayerProfileUpdate(PlayerProfileUpdateMessage m) { }

	// RVA: 0x2444D3C Offset: 0x2440D3C VA: 0x2444D3C
	private void UpdatePlayerProfileView(PlayerProfile profile) { }

	// RVA: 0x2444F30 Offset: 0x2440F30 VA: 0x2444F30
	private void UpdateLevelMultiplier() { }

	[AsyncStateMachine(typeof(HomeMonitor.<UpdateView>d__48))]
	// RVA: 0x24449E4 Offset: 0x24409E4 VA: 0x24449E4
	private UniTaskVoid UpdateView() { }

	// RVA: 0x24460D4 Offset: 0x24420D4 VA: 0x24460D4
	private void OnPlayClicked() { }

	[AsyncStateMachine(typeof(HomeMonitor.<StartGame>d__50))]
	// RVA: 0x2446224 Offset: 0x2442224 VA: 0x2446224
	private UniTaskVoid StartGame() { }

	// RVA: 0x24462B4 Offset: 0x24422B4 VA: 0x24462B4
	public void DisableRaycasterExceptPlay(object owner) { }

	// RVA: 0x244638C Offset: 0x244238C VA: 0x244638C
	private void OnRefillClicked() { }

	// RVA: 0x2446430 Offset: 0x2442430 VA: 0x2446430
	private void OnShopClicked() { }

	// RVA: 0x2446480 Offset: 0x2442480 VA: 0x2446480
	private void OnSettingsClicked() { }

	// RVA: 0x2446524 Offset: 0x2442524 VA: 0x2446524
	private void OnAvatarClicked() { }

	// RVA: 0x2446628 Offset: 0x2442628 VA: 0x2446628
	private void OnAreaClicked() { }

	// RVA: 0x2444434 Offset: 0x2440434 VA: 0x2444434
	private void FillLiveOpsSlotElements() { }

	// RVA: 0x244669C Offset: 0x244269C VA: 0x244669C
	private void CreateLiveOpsSlotElement(StatefulComponent view, HomeLiveOpsSheet.Slot slot, LiveOpsSheet.Row liveOpsSheet) { }

	// RVA: 0x2446F30 Offset: 0x2442F30 VA: 0x2446F30
	private void OnLiveOpsElementClicked(LiveOps liveOps) { }

	// RVA: 0x2446F9C Offset: 0x2442F9C VA: 0x2446F9C
	private void RenderLiveOpsElement(StatefulComponent view, LiveOpsSheet.Row data, LiveOps liveOps, LiveOpsBase instance) { }

	// RVA: 0x2447404 Offset: 0x2443404 VA: 0x2447404
	public bool TryGetLiveOpsSlot(LiveOps liveOps, out HomeLiveOpsSlot slot) { }

	// RVA: 0x24472B8 Offset: 0x24432B8 VA: 0x24472B8
	private void HandleNotificationPopup(StatefulComponent view, LiveOps liveOps, LiveOpsBase instance) { }

	// RVA: 0x2446DD8 Offset: 0x2442DD8 VA: 0x2446DD8
	private void HandleHomeViewItem(StatefulComponent view, LiveOpsData.Data data) { }

	// RVA: 0x2444A70 Offset: 0x2440A70 VA: 0x2444A70
	private void LoadAssets() { }

	// RVA: 0x24451B0 Offset: 0x24411B0 VA: 0x24451B0
	private void UnloadAssets() { }

	// RVA: 0x2447670 Offset: 0x2443670 VA: 0x2447670
	public void UpdateArea() { }

	// RVA: 0x2447A3C Offset: 0x2443A3C VA: 0x2447A3C
	public void UpdateLiveOpsIcons() { }

	// RVA: 0x24476A4 Offset: 0x24436A4 VA: 0x24476A4
	public void SetArea(AreaSheet.Row area) { }

	// RVA: 0x2447E50 Offset: 0x2443E50 VA: 0x2447E50
	private void SetAreaBackground(AreaType type) { }

	// RVA: 0x2447CBC Offset: 0x2443CBC VA: 0x2447CBC
	private bool HasHomeScene(int sceneIdx) { }

	[AsyncStateMachine(typeof(HomeMonitor.<LoadHomeScene>d__71))]
	// RVA: 0x2447DA8 Offset: 0x2443DA8 VA: 0x2447DA8
	private UniTaskVoid LoadHomeScene(int sceneIdx, AreaType type) { }

	// RVA: 0x24453AC Offset: 0x24413AC VA: 0x24453AC
	private void ReleaseHomeScene() { }

	// RVA: 0x2447EB4 Offset: 0x2443EB4 VA: 0x2447EB4
	private void RefreshAreaAnimation() { }

	// RVA: 0x2447FE0 Offset: 0x2443FE0 VA: 0x2447FE0
	public void PlayAreaAnimation() { }

	[AsyncStateMachine(typeof(HomeMonitor.<ApplyAreaStartAnimation>d__75))]
	// RVA: 0x24480A0 Offset: 0x24440A0 VA: 0x24480A0
	private UniTask ApplyAreaStartAnimation() { }

	// RVA: 0x2445964 Offset: 0x2441964 VA: 0x2445964
	private void SetupDebug() { }

	// RVA: 0x2445D38 Offset: 0x2441D38 VA: 0x2445D38
	private void RenderDebug() { }

	// RVA: 0x2448138 Offset: 0x2444138 VA: 0x2448138
	private void OnDebugClicked() { }

	[ConsoleMethod("homearea", "Show an area's Home background (NewYork, Paris, ...)", new[] { "area" })]
	// RVA: 0x24481C8 Offset: 0x24441C8 VA: 0x24481C8
	public static void ShowArea(string area) { }

	// RVA: 0x2448520 Offset: 0x2444520 VA: 0x2448520
	private void OnDebugTimeHoldStart() { }

	// RVA: 0x2448604 Offset: 0x2444604 VA: 0x2448604
	private void IncrementTime(TimeSpan increment) { }

	// RVA: 0x244873C Offset: 0x244473C VA: 0x244873C
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2448874 Offset: 0x2444874 VA: 0x2448874
	private void <OnPlayClicked>b__49_0() { }

	[CompilerGenerated]
	// RVA: 0x2448878 Offset: 0x2444878 VA: 0x2448878
	private void <SetupDebug>b__78_0() { }

	[CompilerGenerated]
	// RVA: 0x24488DC Offset: 0x24448DC VA: 0x24488DC
	private void <SetupDebug>b__78_1() { }

	[CompilerGenerated]
	// RVA: 0x2448940 Offset: 0x2444940 VA: 0x2448940
	private void <SetupDebug>b__78_2() { }

	[CompilerGenerated]
	// RVA: 0x24489A4 Offset: 0x24449A4 VA: 0x24489A4
	private void <OnDebugTimeHoldStart>b__82_0(float v) { }
}

