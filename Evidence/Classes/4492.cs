// Namespace: 
public sealed class CarpetCarrierGroupSystem : SystemBase // TypeDefIndex: 4492
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
	private readonly List<CarpetCarrierGroup> _groups; // 0x70

	// Methods

	// RVA: 0x240462C Offset: 0x240062C VA: 0x240462C Slot: 9
	public override void OnAwake() { }

	// RVA: 0x2404690 Offset: 0x2400690 VA: 0x2404690 Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x2404A64 Offset: 0x2400A64 VA: 0x2404A64
	private void OnLevelBuildComplete(LevelBuildCompleteMessage m) { }

	// RVA: 0x240504C Offset: 0x240104C VA: 0x240504C
	private void OnCarrierComplete(CarrierCompleteMessage m) { }

	// RVA: 0x24051F8 Offset: 0x24011F8 VA: 0x24051F8
	private void OnLevelAnimationEnterStart(LevelAnimationEnterStartMessage m) { }

	// RVA: 0x24053A4 Offset: 0x24013A4 VA: 0x24053A4
	private void OnLevelAnimationCarrierComplete(LevelAnimationCarrierCompleteMessage m) { }

	// RVA: 0x2404A68 Offset: 0x2400A68 VA: 0x2404A68
	private void Create() { }

	// RVA: 0x2405550 Offset: 0x2401550 VA: 0x2405550
	private Carrier FindCarrier(CarrierSheet.CarrierType carrierType) { }

	// RVA: 0x24056B0 Offset: 0x24016B0 VA: 0x24056B0
	public void .ctor() { }
}

