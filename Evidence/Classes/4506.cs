// Namespace: 
public sealed class CarrierBlockCreateSystem : SystemBase // TypeDefIndex: 4506
{
	// Fields
	[Inject]
	private LevelSheet.Level _level; // 0x30
	[Inject]
	private PrefabModule _prefabModule; // 0x38
	[Inject]
	private CarrierConfig _config; // 0x40
	[Inject]
	private Blocks _blocks; // 0x48
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x50
	[Inject]
	private Level _levelData; // 0x58
	[Inject]
	private Conveyor _conveyor; // 0xA0
	[Inject]
	private ISubscriber<LevelBuildCompleteMessage> _levelBuildCompleteSub; // 0xA8
	[Inject]
	private IPublisher<CarrierBlockCreateMessage> _carrierBlockCreatePub; // 0xB0
	[Inject]
	private IPublisher<CarrierBlockCreateCompleteMessage> _carrierBlockCreateCompletePub; // 0xB8
	private Filter _filter; // 0xC0
	private Stash<BehaviourView<Carrier>> _carriers; // 0xC8
	private PaceConfig _paceConfig; // 0xD0

	// Methods

	// RVA: 0x240CD70 Offset: 0x2408D70 VA: 0x240CD70 Slot: 9
	public override void OnAwake() { }

	// RVA: 0x240CEF4 Offset: 0x2408EF4 VA: 0x240CEF4 Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x240D014 Offset: 0x2409014 VA: 0x240D014
	private void OnLevelBuildComplete(LevelBuildCompleteMessage obj) { }

	// RVA: 0x240D018 Offset: 0x2409018 VA: 0x240D018
	private void CreateBlocks() { }

	// RVA: 0x240D918 Offset: 0x2409918 VA: 0x240D918
	public void .ctor() { }
}

