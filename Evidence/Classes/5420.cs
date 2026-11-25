// Namespace: 
public sealed class PlayingMonitor : MonitorBase // TypeDefIndex: 5420
{
	// Fields
	[Inject]
	private GameMachine _gameMachine; // 0x98
	[Inject]
	private SheetContainer _sheetContainer; // 0xA0
	[Inject]
	private SceneModule _sceneModule; // 0xA8
	[Inject]
	private EconomyMonitor _economyMonitor; // 0xB0
	[Inject]
	private AnalyticsModule _analyticsModule; // 0xB8
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0xC0
	[Inject]
	private HapticModule _hapticModule; // 0xC8
	[Inject]
	private EconomyModule _economyModule; // 0xD0
	[Inject]
	private AdsModule _adsModule; // 0xD8
	[Inject]
	private InteractionModule _interactionModule; // 0xE0
	[Inject]
	private PlaySessionModule _playSessionModule; // 0xE8
	[Inject]
	private IPublisher<ReviveMessage> _revivePub; // 0xF0
	[Inject]
	private ISubscriber<TutorialCompleteMessage> _tutorialCompleteSub; // 0xF8
	private IObjectResolver _sceneResolver; // 0x100
	private CapacityConfig _capacityConfig; // 0x108
	private CoinConfig _coinConfig; // 0x110
	private BoosterContainer _boosterContainer; // 0x118
	private StatefulComponent _giveUpView; // 0x120
	private RewardedAdsConfig _rewardedAdsConfig; // 0x128
	private ConveyorSpeedSystem _conveyorSpeedSystem; // 0x130
	private PaceConfig _paceConfig; // 0x138
	private EGPConfig _egpConfig; // 0x140
	private RvMaxConfig _rvMaxConfig; // 0x148
	private StatefulComponent _speedBoostView; // 0x150
	private int _speedBoostSecondsShown; // 0x158
	private StateRole _speedBoostState; // 0x15C
	private CloudPrefsInt _level; // 0x160
	private LoseSystem _loseSystem; // 0x180
	private int _timeShown; // 0x188
	private bool _isHolding; // 0x18C
	private CanvasGroup _holdTutorial; // 0x190
	private int _lastHoldLevel; // 0x198
	private bool _isHoldTutorialActive; // 0x19C
	private AutoResetUniTaskCompletionSource<bool> _giveUpFlowContinue; // 0x1A0
	private AutoResetUniTaskCompletionSource _themeCompletion; // 0x1A8
	private readonly CompositeMotionHandle _holdVignetteMotions; // 0x1B0
	private readonly CompositeMotionHandle _holdTutorialMotions; // 0x1B8
	[Inject]
	private IPublisher<ToggleDebuggerModeMessage> _toggleDebuggerModePub; // 0x1C0
	private StatefulComponent _debugView; // 0x1C8

	// Methods

	[AsyncStateMachine(typeof(PlayingMonitor.<ApplyLevelPreviewMotion>d__0))]
	// RVA: 0x244F144 Offset: 0x244B144 VA: 0x244F144
	private UniTask ApplyLevelPreviewMotion(StatefulComponent view) { }

	// RVA: 0x244F1DC Offset: 0x244B1DC VA: 0x244F1DC Slot: 13
	public override void Setup() { }

	// RVA: 0x244FB10 Offset: 0x244BB10 VA: 0x244FB10
	private void SetupGiveUp() { }

	// RVA: 0x244FC40 Offset: 0x244BC40 VA: 0x244FC40 Slot: 15
	public override void OnActivated() { }

	// RVA: 0x2450410 Offset: 0x244C410 VA: 0x2450410 Slot: 16
	public override void OnDeactivated() { }

	// RVA: 0x24504C8 Offset: 0x244C4C8 VA: 0x24504C8 Slot: 14
	public override void Render() { }

	// RVA: 0x2450124 Offset: 0x244C124 VA: 0x2450124
	private void RenderTimer() { }

	// RVA: 0x2450270 Offset: 0x244C270 VA: 0x2450270
	private void RenderSpeedBoost() { }

	// RVA: 0x2450898 Offset: 0x244C898 VA: 0x2450898
	private void OnSpeedBoostClicked() { }

	// RVA: 0x2450984 Offset: 0x244C984 VA: 0x2450984
	private void OnSettingsClicked() { }

	// RVA: 0x244F5D4 Offset: 0x244B5D4 VA: 0x244F5D4
	private void HandleRemoteConfig() { }

	[AsyncStateMachine(typeof(PlayingMonitor.<HandleTheme>d__48))]
	// RVA: 0x2450A08 Offset: 0x244CA08 VA: 0x2450A08
	private UniTaskVoid HandleTheme() { }

	[AsyncStateMachine(typeof(PlayingMonitor.<ApplyThemeMotion>d__49))]
	// RVA: 0x2450A98 Offset: 0x244CA98 VA: 0x2450A98
	private UniTaskVoid ApplyThemeMotion() { }

	[AsyncStateMachine(typeof(PlayingMonitor.<StartGiveUpFlow>d__50))]
	// RVA: 0x2450B28 Offset: 0x244CB28 VA: 0x2450B28
	public UniTask<bool> StartGiveUpFlow() { }

	// RVA: 0x2450C28 Offset: 0x244CC28 VA: 0x2450C28
	private void OnGiveUpClicked() { }

	// RVA: 0x2450C88 Offset: 0x244CC88 VA: 0x2450C88
	private void OnGiveUpContinueClicked() { }

	// RVA: 0x2451054 Offset: 0x244D054 VA: 0x2451054
	private void UpdateGiveUpBoosterView() { }

	// RVA: 0x2451354 Offset: 0x244D354 VA: 0x2451354
	private void OnGiveUpRVClicked() { }

	// RVA: 0x24504F4 Offset: 0x244C4F4 VA: 0x24504F4
	private void HandleHoldInput() { }

	// RVA: 0x2450444 Offset: 0x244C444 VA: 0x2450444
	private void ResetHoldInput() { }

	// RVA: 0x24513FC Offset: 0x244D3FC VA: 0x24513FC
	private void OnTutorialComplete(TutorialCompleteMessage m) { }

	// RVA: 0x244F7A0 Offset: 0x244B7A0 VA: 0x244F7A0
	private void SetupDebug() { }

	// RVA: 0x2451400 Offset: 0x244D400 VA: 0x2451400
	private void OnDebugClicked() { }

	// RVA: 0x2450044 Offset: 0x244C044 VA: 0x2450044
	private void ActivateDebug() { }

	// RVA: 0x2451490 Offset: 0x244D490 VA: 0x2451490
	private void OnDebugPreviousLevelClicked() { }

	// RVA: 0x24514B0 Offset: 0x244D4B0 VA: 0x24514B0
	private void OnDebugNextLevelClicked() { }

	// RVA: 0x24514D0 Offset: 0x244D4D0 VA: 0x24514D0
	private void OnDebugSheetReloadClicked() { }

	// RVA: 0x2451584 Offset: 0x244D584 VA: 0x2451584
	private void OnDebugTimeScaleClicked() { }

	// RVA: 0x245169C Offset: 0x244D69C VA: 0x245169C
	private void OnDebugConsoleClicked() { }

	// RVA: 0x2451740 Offset: 0x244D740 VA: 0x2451740
	private void OnDebugWinClicked() { }

	// RVA: 0x2451790 Offset: 0x244D790 VA: 0x2451790
	private void OnDebugLoseClicked() { }

	// RVA: 0x24517E0 Offset: 0x244D7E0 VA: 0x24517E0
	private void OnDebugLevelSubmit(string value) { }

	[AsyncStateMachine(typeof(PlayingMonitor.<ReloadSheetContainer>d__71))]
	// RVA: 0x24514F4 Offset: 0x244D4F4 VA: 0x24514F4
	private UniTaskVoid ReloadSheetContainer() { }

	// RVA: 0x24518B4 Offset: 0x244D8B4 VA: 0x24518B4
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2451984 Offset: 0x244D984 VA: 0x2451984
	private void <OnSpeedBoostClicked>b__45_0(int seconds) { }

	[CompilerGenerated]
	// RVA: 0x24519BC Offset: 0x244D9BC VA: 0x24519BC
	private void <OnGiveUpRVClicked>b__54_0(bool watched) { }
}

