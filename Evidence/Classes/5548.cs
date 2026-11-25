// Namespace: 
public sealed class ReviveMultiplePageVariant : MonitorVariantBase // TypeDefIndex: 5548
{
	// Fields
	[Inject]
	private EconomyModule _economyModule; // 0x30
	[Inject]
	private EconomyMonitor _economyMonitor; // 0x38
	[Inject]
	private HapticModule _hapticModule; // 0x40
	[Inject]
	private GameMachine _gameMachine; // 0x48
	[Inject]
	private SheetContainer _sheetContainer; // 0x50
	[Inject]
	private SceneModule _sceneModule; // 0x58
	[Inject]
	private AdsModule _adsModule; // 0x60
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x68
	[Inject]
	private NonPayerOffer _nonPayerOffer; // 0x70
	[Inject]
	private LiveOpsModule _liveOpsModule; // 0x78
	[Inject]
	private PurchasingModule _purchasingModule; // 0x80
	[Inject]
	private DataFlags _dataFlags; // 0x88
	[Inject]
	private IPublisher<ReviveMessage> _revivePub; // 0x90
	[Inject]
	private IPublisher<ReviveContinueResultUpdateMessage> _reviveContinueResultUpdatePub; // 0x98
	private StatefulComponent _reasonView; // 0xA0
	private StatefulComponent _continueView; // 0xA8
	private StatefulComponent _failOfferView; // 0xB0
	private StatefulComponent _bonusTripOfferView; // 0xB8
	private RewardedAdsConfig _rewardedAdsConfig; // 0xC0
	private LoseReason _loseReason; // 0xC8
	private ReviveSheet.Revive _revive; // 0xD0
	private int _nextContinueResultIdx; // 0xD8
	private readonly List<StatefulComponent> _continueResultInstances; // 0xE0

	// Methods

	// RVA: 0x2492178 Offset: 0x248E178 VA: 0x2492178 Slot: 8
	public override void Setup() { }

	// RVA: 0x24924C0 Offset: 0x248E4C0 VA: 0x24924C0 Slot: 10
	public override void OnActivated() { }

	// RVA: 0x2492BE8 Offset: 0x248EBE8 VA: 0x2492BE8 Slot: 11
	public override void OnDeactivated() { }

	// RVA: 0x2492C90 Offset: 0x248EC90 VA: 0x2492C90
	private void OnReviveClicked() { }

	// RVA: 0x2492E70 Offset: 0x248EE70 VA: 0x2492E70
	private void OnRVClicked() { }

	// RVA: 0x2492F18 Offset: 0x248EF18 VA: 0x2492F18
	private void OnFailOfferPurchase(FulfillPurchaseMessage m) { }

	// RVA: 0x249305C Offset: 0x248F05C VA: 0x249305C
	private void OnReasonGiveUpClicked() { }

	// RVA: 0x2493080 Offset: 0x248F080 VA: 0x2493080
	private void OnContinueGiveUpClicked() { }

	// RVA: 0x2492608 Offset: 0x248E608 VA: 0x2492608
	private void SetReasonState() { }

	// RVA: 0x24927D4 Offset: 0x248E7D4 VA: 0x24927D4
	private void UpdateContinueResultView() { }

	// RVA: 0x2493104 Offset: 0x248F104 VA: 0x2493104
	private void ShowNextContinueResult() { }

	// RVA: 0x24932B4 Offset: 0x248F2B4 VA: 0x24932B4
	private bool AreRVConditionsMet() { }

	// RVA: 0x249335C Offset: 0x248F35C VA: 0x249335C
	private void UpdateOfferView() { }

	// RVA: 0x24926B8 Offset: 0x248E6B8 VA: 0x24926B8
	private void SetRevivePriceTexts() { }

	// RVA: 0x2493464 Offset: 0x248F464 VA: 0x2493464
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x24934EC Offset: 0x248F4EC VA: 0x24934EC
	private void <OnRVClicked>b__27_0(bool watched) { }
}

