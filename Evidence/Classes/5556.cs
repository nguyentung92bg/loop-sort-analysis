// Namespace: 
public sealed class WinStandartVariant : MonitorVariantBase // TypeDefIndex: 5556
{
	// Fields
	[Inject]
	private GameMachine _gameMachine; // 0x30
	[Inject]
	private AudioModule _audioModule; // 0x38
	[Inject]
	private WinMonitor _winMonitor; // 0x40
	[Inject]
	private EconomyModule _economyModule; // 0x48
	[Inject]
	private EconomyMonitor _economyMonitor; // 0x50
	[Inject]
	private SheetContainer _sheetContainer; // 0x58
	[Inject]
	private AdsModule _adsModule; // 0x60
	[Inject]
	private Shop _shop; // 0x68
	[Inject]
	private AnalyticsModule _analyticsModule; // 0x70
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x78
	[Inject]
	private CloudSaveModule _cloudSaveModule; // 0x80
	private CloudPrefsInt _level; // 0x88
	private SkeletonGraphic _wordArt; // 0xA8
	private SkeletonGraphic _wellDone; // 0xB0
	private VerticalLayoutGroup _resultVerticalLayout; // 0xB8
	private CancellationTokenSource _wordArtToken; // 0xC0
	private StatefulComponent _goldRewardView; // 0xC8
	private MainMenuOffsetConfig _mainMenuOffsetConfig; // 0xD0
	private RvMaxConfig _rvMaxConfig; // 0xD8
	private int _goldRewardAmount; // 0xE0

	// Methods

	// RVA: 0x24945EC Offset: 0x24905EC VA: 0x24945EC Slot: 8
	public override void Setup() { }

	// RVA: 0x24948BC Offset: 0x24908BC VA: 0x24948BC Slot: 10
	public override void OnActivated() { }

	// RVA: 0x2494978 Offset: 0x2490978 VA: 0x2494978 Slot: 9
	public override void Render() { }

	[AsyncStateMachine(typeof(WinStandartVariant.<OnActivatedAsync>d__23))]
	// RVA: 0x24948E0 Offset: 0x24908E0 VA: 0x24948E0
	private UniTaskVoid OnActivatedAsync() { }

	// RVA: 0x24949AC Offset: 0x24909AC VA: 0x24949AC
	private void FillRewardElements() { }

	// RVA: 0x2494B9C Offset: 0x2490B9C VA: 0x2494B9C
	private void CreateRewardElement(StatefulComponent view, RewardInfo data) { }

	[AsyncStateMachine(typeof(WinStandartVariant.<ApplyWordArtMotion>d__26))]
	// RVA: 0x2494C90 Offset: 0x2490C90 VA: 0x2494C90
	private UniTask ApplyWordArtMotion(GameObject confettiObject, GameObject wordArtObject, CancellationToken token) { }

	// RVA: 0x2494D78 Offset: 0x2490D78 VA: 0x2494D78
	private void OnContinueClicked() { }

	// RVA: 0x2494E2C Offset: 0x2490E2C VA: 0x2494E2C
	private void OnRVClicked() { }

	[AsyncStateMachine(typeof(WinStandartVariant.<HandleContinueClickAsync>d__29))]
	// RVA: 0x2494D9C Offset: 0x2490D9C VA: 0x2494D9C
	private UniTaskVoid HandleContinueClickAsync() { }

	// RVA: 0x2494ED4 Offset: 0x2490ED4 VA: 0x2494ED4
	private void ApplyGoldMotion() { }

	// RVA: 0x2494FC4 Offset: 0x2490FC4 VA: 0x2494FC4
	private void HandleEconomyUpdate() { }

	// RVA: 0x2495308 Offset: 0x2491308 VA: 0x2495308
	private void RebuildResultVerticalLayout() { }

	// RVA: 0x24953DC Offset: 0x24913DC VA: 0x24953DC
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2495454 Offset: 0x2491454 VA: 0x2495454
	private void <OnRVClicked>b__28_0(bool watched) { }
}

