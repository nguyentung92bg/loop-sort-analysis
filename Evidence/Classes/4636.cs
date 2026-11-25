// Namespace: 
public sealed class WinSystem : SystemBase // TypeDefIndex: 4636
{
	// Fields
	[Inject]
	private GameMachine _gameMachine; // 0x30
	[Inject]
	private Conveyor _conveyor; // 0x38
	[Inject]
	private ISubscriber<LevelBuildCompleteMessage> _levelBuildCompleteSub; // 0x40
	private Stash<BehaviourView<Carrier>> _carriers; // 0x48
	private Stash<BehaviourView<ConveyorSlot>> _conveyorSlots; // 0x50
	private bool _isLevelBuilt; // 0x58

	// Methods

	// RVA: 0x24E1D8C Offset: 0x24DDD8C VA: 0x24E1D8C Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x24E1EAC Offset: 0x24DDEAC VA: 0x24E1EAC Slot: 9
	public override void OnAwake() { }

	// RVA: 0x24E1F48 Offset: 0x24DDF48 VA: 0x24E1F48 Slot: 10
	public override void OnUpdate(float deltaTime) { }

	// RVA: 0x24E1FF4 Offset: 0x24DDFF4 VA: 0x24E1FF4
	private void CheckCarrierBlockColors() { }

	// RVA: 0x24E22A4 Offset: 0x24DE2A4 VA: 0x24E22A4
	private void OnLevelBuildComplete(LevelBuildCompleteMessage obj) { }

	// RVA: 0x24E22B0 Offset: 0x24DE2B0 VA: 0x24E22B0
	public int RemainingCarrierCount() { }

	// RVA: 0x24E26EC Offset: 0x24DE6EC VA: 0x24E26EC
	public void .ctor() { }
}

