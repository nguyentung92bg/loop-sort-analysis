// Namespace: 
public sealed class ConnectedCarrierGroupSystem : SystemBase // TypeDefIndex: 4516
{
	// Fields
	[Inject]
	private LevelSheet.Level _level; // 0x30
	[Inject]
	private Features _features; // 0x38
	[Inject]
	private PrefabModule _prefabModule; // 0x40
	[Inject]
	private ISubscriber<LevelBuildCompleteMessage> _levelBuildCompleteSub; // 0x48
	[Inject]
	private ISubscriber<CarrierCompleteMessage> _carrierCompleteSub; // 0x50
	[Inject]
	private ISubscriber<LevelAnimationEnterStartMessage> _levelAnimationEnterStartSub; // 0x58
	[Inject]
	private ISubscriber<LevelAnimationCarrierCompleteMessage> _levelAnimationCarrierCompleteSub; // 0x60
	private Stash<BehaviourView<Carrier>> _carriers; // 0x68
	private readonly Dictionary<Carrier, ConnectedCarrierGroup> _groupByCarrier; // 0x70

	// Methods

	// RVA: 0x240F524 Offset: 0x240B524 VA: 0x240F524 Slot: 9
	public override void OnAwake() { }

	// RVA: 0x240F588 Offset: 0x240B588 VA: 0x240F588 Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x240F95C Offset: 0x240B95C VA: 0x240F95C
	private void OnLevelBuildComplete(LevelBuildCompleteMessage m) { }

	// RVA: 0x240FF34 Offset: 0x240BF34 VA: 0x240FF34
	private void OnCarrierComplete(CarrierCompleteMessage m) { }

	// RVA: 0x240FFB0 Offset: 0x240BFB0 VA: 0x240FFB0
	private void OnLevelAnimationEnterStart(LevelAnimationEnterStartMessage m) { }

	// RVA: 0x2410170 Offset: 0x240C170 VA: 0x2410170
	private void OnLevelAnimationCarrierComplete(LevelAnimationCarrierCompleteMessage m) { }

	// RVA: 0x240F960 Offset: 0x240B960 VA: 0x240F960
	private void Create() { }

	// RVA: 0x2410330 Offset: 0x240C330 VA: 0x2410330
	private Carrier FindCarrier(CarrierSheet.CarrierType carrierType) { }

	// RVA: 0x2410490 Offset: 0x240C490 VA: 0x2410490
	public void .ctor() { }
}

