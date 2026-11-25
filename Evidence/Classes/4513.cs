// Namespace: 
public sealed class CarrierVisibilitySystem : SystemBase // TypeDefIndex: 4513
{
	// Fields
	[Inject]
	private LevelSheet.Level _level; // 0x30
	[Inject]
	private ISubscriber<LevelBuildCompleteMessage> _levelBuildCompleteSub; // 0x38
	private Stash<BehaviourView<Carrier>> _carriers; // 0x40

	// Methods

	// RVA: 0x240E180 Offset: 0x240A180 VA: 0x240E180 Slot: 9
	public override void OnAwake() { }

	// RVA: 0x240E1E4 Offset: 0x240A1E4 VA: 0x240E1E4 Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x240E304 Offset: 0x240A304 VA: 0x240E304
	private void OnLevelBuildComplete(LevelBuildCompleteMessage obj) { }

	// RVA: 0x240E308 Offset: 0x240A308 VA: 0x240E308
	private void UpdateCarrierVisibility() { }

	// RVA: 0x240E530 Offset: 0x240A530 VA: 0x240E530
	public void .ctor() { }
}

