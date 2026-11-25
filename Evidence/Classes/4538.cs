// Namespace: 
public sealed class LockCarrierGroupSystem : SystemBase // TypeDefIndex: 4538
{
	// Fields
	[Inject]
	private LevelSheet.Level _level; // 0x30
	[Inject]
	private Features _features; // 0x38
	[Inject]
	private PrefabModule _prefabModule; // 0x40
	[Inject]
	private Level _levelData; // 0x48
	[Inject]
	private ISubscriber<LevelBuildCompleteMessage> _levelBuildCompleteSub; // 0x90
	[Inject]
	private ISubscriber<KeyBlockCollectMessage> _keyBlockCollectSub; // 0x98
	[Inject]
	private ISubscriber<LevelAnimationEnterStartMessage> _levelAnimationEnterStartSub; // 0xA0
	[Inject]
	private ISubscriber<LevelAnimationCarrierCompleteMessage> _levelAnimationCarrierCompleteSub; // 0xA8
	private Stash<BehaviourView<Carrier>> _carriers; // 0xB0
	private readonly Dictionary<ColorType, LockCarrierGroup> _groupByColor; // 0xB8

	// Methods

	// RVA: 0x24A959C Offset: 0x24A559C VA: 0x24A959C Slot: 9
	public override void OnAwake() { }

	// RVA: 0x24A9600 Offset: 0x24A5600 VA: 0x24A9600 Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x24A99D4 Offset: 0x24A59D4 VA: 0x24A99D4
	private void OnLevelBuildComplete(LevelBuildCompleteMessage m) { }

	// RVA: 0x24AA0A0 Offset: 0x24A60A0 VA: 0x24AA0A0
	private void OnKeyBlockCollect(KeyBlockCollectMessage m) { }

	// RVA: 0x24AA12C Offset: 0x24A612C VA: 0x24AA12C
	private void OnLevelAnimationEnterStart(LevelAnimationEnterStartMessage m) { }

	// RVA: 0x24AA2EC Offset: 0x24A62EC VA: 0x24AA2EC
	private void OnLevelAnimationCarrierComplete(LevelAnimationCarrierCompleteMessage m) { }

	// RVA: 0x24A99D8 Offset: 0x24A59D8 VA: 0x24A99D8
	private void Create() { }

	// RVA: 0x24AA4B0 Offset: 0x24A64B0 VA: 0x24AA4B0
	private Carrier FindCarrier(CarrierSheet.CarrierType carrierType) { }

	// RVA: 0x24AA610 Offset: 0x24A6610 VA: 0x24AA610
	public void .ctor() { }
}

