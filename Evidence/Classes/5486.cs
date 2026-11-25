// Namespace: 
public sealed class DailyChallengeSubMonitor : SubMonitorBase // TypeDefIndex: 5486
{
	// Fields
	[Inject]
	private DailyChallenge _dailyChallenge; // 0x40
	[Inject]
	private SheetContainer _sheetContainer; // 0x48
	[Inject]
	private Shop _shop; // 0x50
	[Inject]
	private FulfillItemsMonitor _fulfillItemsMonitor; // 0x58
	private const float LastRewardProgress = 0.925;
	private const float MinFillProgress = 0.05;
	private const float MaxFillProgress = 0.96;
	[TupleElementNames(new[] { "Data", "View" })]
	private readonly List<ValueTuple<DailyChallengeRewardSheet.Day, StatefulComponent>> _rewardViews; // 0x60

	// Methods

	// RVA: 0x2472378 Offset: 0x246E378 VA: 0x2472378 Slot: 8
	public override void Setup() { }

	// RVA: 0x2472C58 Offset: 0x246EC58 VA: 0x2472C58
	private void OnPlayClicked() { }

	// RVA: 0x2472CBC Offset: 0x246ECBC VA: 0x2472CBC Slot: 9
	public override void Render() { }

	// RVA: 0x247271C Offset: 0x246E71C VA: 0x247271C
	private void FillDayElements(DateTimeOffset now) { }

	// RVA: 0x24728FC Offset: 0x246E8FC VA: 0x24728FC
	private void FillRewardElements() { }

	// RVA: 0x2472E24 Offset: 0x246EE24 VA: 0x2472E24
	private void CreateRewardElement(StatefulComponent view, DailyChallengeRewardSheet.Day data, float progress01) { }

	[AsyncStateMachine(typeof(DailyChallengeSubMonitor.<ApplyProgress>d__14))]
	// RVA: 0x2472BB0 Offset: 0x246EBB0 VA: 0x2472BB0
	private UniTaskVoid ApplyProgress(int from, int to) { }

	// RVA: 0x2473030 Offset: 0x246F030 VA: 0x2473030
	private void SetProgress(int completedDayCount) { }

	// RVA: 0x24730B8 Offset: 0x246F0B8 VA: 0x24730B8
	private float GetFillProgress(int completedDayCount) { }

	// RVA: 0x2473474 Offset: 0x246F474 VA: 0x2473474
	public void .ctor() { }
}

