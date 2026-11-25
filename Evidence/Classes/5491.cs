// Namespace: 
public sealed class DailyRewardsSubMonitor : SubMonitorBase // TypeDefIndex: 5491
{
	// Fields
	[Inject]
	private DailyRewards _dailyRewards; // 0x40
	[Inject]
	private Shop _shop; // 0x48
	[Inject]
	private AdsModule _adsModule; // 0x50
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x58
	private readonly List<StatefulComponent> _itemViews; // 0x60
	private readonly Dictionary<StatefulComponent, RewardInfo> _rewards; // 0x68
	private RvMaxConfig _rvMaxConfig; // 0x70
	private Nullable<RewardInfo> _earnedReward; // 0x78
	private bool _isReshuffleUsed; // 0x84

	// Methods

	// RVA: 0x2474070 Offset: 0x2470070 VA: 0x2474070 Slot: 8
	public override void Setup() { }

	// RVA: 0x24741F4 Offset: 0x24701F4 VA: 0x24741F4
	private void FindItemViews() { }

	// RVA: 0x24745C8 Offset: 0x24705C8 VA: 0x24745C8
	private void SetRewards() { }

	// RVA: 0x24747F0 Offset: 0x24707F0 VA: 0x24747F0
	private void CreateItemView(StatefulComponent view, RewardInfo reward) { }

	// RVA: 0x24748DC Offset: 0x24708DC VA: 0x24748DC
	private void OnItemSelectClicked(StatefulComponent view) { }

	// RVA: 0x24748E0 Offset: 0x24708E0 VA: 0x24748E0
	private void Select(StatefulComponent selectedView) { }

	[AsyncStateMachine(typeof(DailyRewardsSubMonitor.<RevealView>d__15))]
	// RVA: 0x2474A00 Offset: 0x2470A00 VA: 0x2474A00
	private UniTaskVoid RevealView(StatefulComponent view) { }

	[AsyncStateMachine(typeof(DailyRewardsSubMonitor.<HandleMotions>d__16))]
	// RVA: 0x2474AAC Offset: 0x2470AAC VA: 0x2474AAC
	private UniTaskVoid HandleMotions(StatefulComponent selectedView) { }

	// RVA: 0x2474B5C Offset: 0x2470B5C VA: 0x2474B5C
	private void OnCloseClicked() { }

	// RVA: 0x2474C94 Offset: 0x2470C94 VA: 0x2474C94
	private void OnMultiplierClicked() { }

	// RVA: 0x2474D3C Offset: 0x2470D3C VA: 0x2474D3C
	private void OnReshuffleClicked() { }

	// RVA: 0x2474DE4 Offset: 0x2470DE4 VA: 0x2474DE4
	private static void ResetItemView(StatefulComponent view) { }

	[AsyncStateMachine(typeof(DailyRewardsSubMonitor.<ApplyRevealMotion>d__21))]
	// RVA: 0x2474F98 Offset: 0x2470F98 VA: 0x2474F98
	private UniTask ApplyRevealMotion(StatefulComponent view) { }

	// RVA: 0x2475034 Offset: 0x2471034 VA: 0x2475034
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2475110 Offset: 0x2471110 VA: 0x2475110
	private void <OnMultiplierClicked>b__18_0(bool watched) { }

	[CompilerGenerated]
	// RVA: 0x2475280 Offset: 0x2471280 VA: 0x2475280
	private void <OnReshuffleClicked>b__19_0(bool watched) { }
}

