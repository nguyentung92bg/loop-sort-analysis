// Namespace: 
public sealed class WeeklyMissionsSubMonitor : SubMonitorBase // TypeDefIndex: 5537
{
	// Fields
	[Inject]
	private SheetContainer _sheetContainer; // 0x40
	[Inject]
	private Shop _shop; // 0x48
	[Inject]
	private WeeklyMissionsData _weeklyMissionsData; // 0x50
	[Inject]
	private WeeklyMissions _controller; // 0x58
	[Inject]
	private FulfillModule _fulfillModule; // 0x60
	[Inject]
	private AnalyticsModule _analyticsModule; // 0x68
	[Inject]
	private FulfillItemsMonitor _fulfillItemsMonitor; // 0x70
	[Inject]
	private LiveOpsModule _liveOpsModule; // 0x78
	[Inject]
	private IPublisher<WeeklyMissionsMilestoneCreateMessage> _weeklyMissionsMilestoneCreatePub; // 0x80
	[SerializeField]
	private List<RectTransform> ItemPoints; // 0x88
	[SerializeField]
	private List<Sprite> ProgressSprites; // 0x90
	[SerializeField]
	private GenericDictionary<Sprite, StateRole> ColorStateByProgressSprite; // 0x98
	private GiftBoxElement _giftBox; // 0xA0
	private StatefulComponent _infoView; // 0xA8
	private CancellationTokenSource _infoCancellation; // 0xB0
	private StatefulComponent _previousGiftItemsTarget; // 0xB8
	private int _selectedDay; // 0xC0
	private readonly Dictionary<int, StatefulComponent> _progressViewById; // 0xC8

	// Methods

	// RVA: 0x248BCFC Offset: 0x2487CFC VA: 0x248BCFC Slot: 8
	public override void Setup() { }

	// RVA: 0x248C430 Offset: 0x2488430 VA: 0x248C430 Slot: 9
	public override void Render() { }

	// RVA: 0x248BEF0 Offset: 0x2487EF0 VA: 0x248BEF0
	private void FillProgressElements() { }

	// RVA: 0x248C5BC Offset: 0x24885BC VA: 0x248C5BC
	private void CreateProgressElement(int idx, StatefulComponent view, WeeklyMissionProgressSheet.Row data) { }

	// RVA: 0x248C828 Offset: 0x2488828 VA: 0x248C828
	private void OnGiftItemsClicked(StatefulComponent view, WeeklyMissionProgressSheet.Row data, float progress01) { }

	// RVA: 0x248C388 Offset: 0x2488388 VA: 0x248C388
	private void UpdateProgressView(bool withMotion) { }

	// RVA: 0x248CD2C Offset: 0x2488D2C VA: 0x248CD2C
	private void ApplyProgressBarMotion(bool withMotion) { }

	// RVA: 0x248C02C Offset: 0x248802C VA: 0x248C02C
	private void FillDayElements() { }

	// RVA: 0x248CE20 Offset: 0x2488E20 VA: 0x248CE20
	private void RefreshDayElements() { }

	// RVA: 0x248C1FC Offset: 0x24881FC VA: 0x248C1FC
	public void FillMissionElements(int day) { }

	// RVA: 0x248D534 Offset: 0x2489534 VA: 0x248D534
	public int GetSelectedDay() { }

	// RVA: 0x248CFDC Offset: 0x2488FDC VA: 0x248CFDC
	private void CreateMissionElement(StatefulComponent view, WeeklyMissionSheet.Elem data, int idx) { }

	// RVA: 0x248D618 Offset: 0x2489618 VA: 0x248D618
	private void OnMissionClaimClicked(StatefulComponent view, WeeklyMissionSheet.Elem data, int milestoneLevel) { }

	// RVA: 0x248D544 Offset: 0x2489544 VA: 0x248D544
	private void FillRewardElements(StatefulComponent view, WeeklyMissionSheet.Elem data) { }

	// RVA: 0x248DB04 Offset: 0x2489B04 VA: 0x248DB04
	private void CreateRewardElement(StatefulComponent view, RewardInfo data) { }

	[AsyncStateMachine(typeof(WeeklyMissionsSubMonitor.<HandleGiftBox>d__33))]
	// RVA: 0x248DA74 Offset: 0x2489A74 VA: 0x248DA74
	private UniTaskVoid HandleGiftBox() { }

	[AsyncStateMachine(typeof(WeeklyMissionsSubMonitor.<ApplyGiftBoxMoveMotion>d__34))]
	// RVA: 0x248DBCC Offset: 0x2489BCC VA: 0x248DBCC
	private UniTask ApplyGiftBoxMoveMotion(StatefulComponent progressView) { }

	// RVA: 0x248DC88 Offset: 0x2489C88 VA: 0x248DC88
	private void OnClaimClicked() { }

	// RVA: 0x248DC98 Offset: 0x2489C98 VA: 0x248DC98
	private void OnInfoClicked() { }

	// RVA: 0x248DD50 Offset: 0x2489D50 VA: 0x248DD50
	private void OnInfoContinueClicked() { }

	// RVA: 0x248DD90 Offset: 0x2489D90 VA: 0x248DD90
	public void .ctor() { }
}

