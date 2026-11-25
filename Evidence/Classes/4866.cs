// Namespace: 
public sealed class VideoRewards : LiveOpsBase // TypeDefIndex: 4866
{
	// Fields
	[Inject]
	private FulfillModule _fulfillModule; // 0x10
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x18
	private VideoRewardsConfig _config; // 0x20

	// Properties
	public int Count { get; }

	// Methods

	// RVA: 0x2529AD8 Offset: 0x2525AD8 VA: 0x2529AD8
	public int get_Count() { }

	// RVA: 0x2529B00 Offset: 0x2525B00 VA: 0x2529B00 Slot: 5
	public override void Initialize() { }

	// RVA: 0x2529B60 Offset: 0x2525B60 VA: 0x2529B60 Slot: 12
	public override bool CanAutoJoin() { }

	// RVA: 0x2529B68 Offset: 0x2525B68 VA: 0x2529B68 Slot: 13
	public override bool CanShow() { }

	// RVA: 0x2529B78 Offset: 0x2525B78 VA: 0x2529B78 Slot: 14
	public override bool CanShowInHome() { }

	// RVA: 0x2529BB0 Offset: 0x2525BB0 VA: 0x2529BB0 Slot: 17
	public override string GetHomeText() { }

	// RVA: 0x2529FD8 Offset: 0x2525FD8 VA: 0x2529FD8
	public int GetReward(int index) { }

	// RVA: 0x2529CD0 Offset: 0x2525CD0 VA: 0x2529CD0
	public int GetWatchedCount() { }

	// RVA: 0x2529EDC Offset: 0x2525EDC VA: 0x2529EDC
	public TimeSpan GetTimeUntilReset() { }

	// RVA: 0x252A010 Offset: 0x2526010 VA: 0x252A010
	public FulfillPayout GetPayout(int index) { }

	// RVA: 0x252A030 Offset: 0x2526030 VA: 0x252A030
	public bool Claim(int index) { }

	// RVA: 0x252A184 Offset: 0x2526184 VA: 0x252A184
	public void .ctor() { }
}

