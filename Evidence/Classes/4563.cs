// Namespace: 
public sealed class ConveyorSlotCreateSystem : SystemBase // TypeDefIndex: 4563
{
	// Fields
	[Inject]
	private Conveyor _conveyor; // 0x30
	[Inject]
	private ConveyorConfig _config; // 0x38
	[Inject]
	private SplineComputer _splineComputer; // 0x40
	[Inject]
	private PrefabModule _prefabModule; // 0x48
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x50
	[Inject]
	private IObjectResolver _resolver; // 0x58
	[Inject]
	private ISubscriber<LevelBuildCompleteMessage> _levelBuildCompleteSub; // 0x60
	[Inject]
	private IPublisher<SlotCreateCompleteMessage> _slotCreateCompletePub; // 0x68
	private readonly List<ConveyorSlot> _slots; // 0x70

	// Methods

	// RVA: 0x24B4AF0 Offset: 0x24B0AF0 VA: 0x24B4AF0 Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x24B4C10 Offset: 0x24B0C10 VA: 0x24B4C10
	private void OnLevelBuildComplete(LevelBuildCompleteMessage m) { }

	[AsyncStateMachine(typeof(ConveyorSlotCreateSystem.<CreateSlots>d__11))]
	// RVA: 0x24B4C34 Offset: 0x24B0C34 VA: 0x24B4C34
	private UniTaskVoid CreateSlots() { }

	// RVA: 0x24B4CC4 Offset: 0x24B0CC4 VA: 0x24B4CC4
	private ConveyorSlot CreateConveyorSlot(Transform parent) { }

	// RVA: 0x24B4D74 Offset: 0x24B0D74 VA: 0x24B4D74
	public void AddConveyorSlot() { }

	// RVA: 0x24B4E5C Offset: 0x24B0E5C VA: 0x24B4E5C
	private int NormalizeSlotCount(int count) { }

	// RVA: 0x24B4E8C Offset: 0x24B0E8C VA: 0x24B4E8C
	public void .ctor() { }
}

