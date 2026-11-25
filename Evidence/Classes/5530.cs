// Namespace: 
public sealed class VideoRewardsSubMonitor : SubMonitorBase // TypeDefIndex: 5530
{
	// Fields
	private const float LastMilestoneProgress = 0.91;
	private const float FillOvershootProgress = 0.03;
	[SerializeField]
	private List<Sprite> MilestoneSprites; // 0x40
	[SerializeField]
	private VideoRewardsScene Scene; // 0x48
	[Inject]
	private VideoRewards _videoRewards; // 0x50
	[Inject]
	private AdsModule _adsModule; // 0x58
	[Inject]
	private FulfillItemsMonitor _fulfillItemsMonitor; // 0x60
	private readonly List<StatefulComponent> _milestoneViews; // 0x68
	private int _watchedCountShown; // 0x70
	private int _resetSecondsShown; // 0x74
	private bool _rewardPlaying; // 0x78

	// Methods

	// RVA: 0x248ACD8 Offset: 0x2486CD8 VA: 0x248ACD8 Slot: 8
	public override void Setup() { }

	// RVA: 0x248B058 Offset: 0x2487058 VA: 0x248B058 Slot: 9
	public override void Render() { }

	// RVA: 0x248B190 Offset: 0x2487190 VA: 0x248B190
	private void ApplyProgress(int watchedCount, bool animate) { }

	// RVA: 0x248AFC0 Offset: 0x2486FC0 VA: 0x248AFC0
	private float GetMilestoneProgress(int watchedCount) { }

	// RVA: 0x248B49C Offset: 0x248749C VA: 0x248B49C
	private void OnWatchClicked() { }

	[AsyncStateMachine(typeof(VideoRewardsSubMonitor.<PlayReward>d__16))]
	// RVA: 0x248B5C0 Offset: 0x24875C0 VA: 0x248B5C0
	private UniTaskVoid PlayReward(int index) { }

	// RVA: 0x248B660 Offset: 0x2487660 VA: 0x248B660
	public void .ctor() { }
}

