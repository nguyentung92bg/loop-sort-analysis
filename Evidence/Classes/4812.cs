// Namespace: 
public sealed class DailyRewards : LiveOpsBase // TypeDefIndex: 4812
{
	// Fields
	[Inject]
	private SheetContainer _sheetContainer; // 0x10
	[Inject]
	private Monitors _monitors; // 0x18
	[Inject]
	private FulfillModule _fulfillModule; // 0x20
	[Inject]
	private AnalyticsModule _analyticsModule; // 0x28
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x30
	[Inject]
	private LiveOpsModule _liveOpsModule; // 0x38
	private DailyRewardsConfig _config; // 0x40
	private bool _isShown; // 0x48

	// Methods

	// RVA: 0x25176D4 Offset: 0x25136D4 VA: 0x25176D4 Slot: 5
	public override void Initialize() { }

	// RVA: 0x2517740 Offset: 0x2513740 VA: 0x2517740 Slot: 6
	public override UniTask ApplyHomeAction(CancellationToken cancellationToken) { }

	// RVA: 0x25179F8 Offset: 0x25139F8 VA: 0x25179F8 Slot: 12
	public override bool CanAutoJoin() { }

	// RVA: 0x2517A00 Offset: 0x2513A00 VA: 0x2517A00 Slot: 17
	public override string GetHomeText() { }

	// RVA: 0x2517A08 Offset: 0x2513A08 VA: 0x2517A08 Slot: 14
	public override bool CanShowInHome() { }

	// RVA: 0x25177A8 Offset: 0x25137A8 VA: 0x25177A8
	private static bool IsRewardAvailable() { }

	// RVA: 0x2517A2C Offset: 0x2513A2C VA: 0x2517A2C
	public RewardInfo GetRandomReward() { }

	// RVA: 0x2517BE4 Offset: 0x2513BE4 VA: 0x2517BE4
	public void ClaimReward(RewardInfo reward, bool isDoubled = False) { }

	// RVA: 0x2517D50 Offset: 0x2513D50 VA: 0x2517D50
	public void .ctor() { }
}

