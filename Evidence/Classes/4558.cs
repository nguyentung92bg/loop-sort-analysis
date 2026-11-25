// Namespace: 
public sealed class ConveyorSlot : GameBehaviourBase, IBlockContainer // TypeDefIndex: 4558
{
	// Fields
	[Inject]
	private ConveyorConfig _config; // 0xA0
	[Inject]
	private AudioModule _audioModule; // 0xA8
	[Inject]
	private HapticModule _hapticModule; // 0xB0
	[Inject]
	private BlockConfig _blockConfig; // 0xB8
	[Inject]
	private CarrierConfig _carrierConfig; // 0xC0
	[Inject]
	private SplineComputer _splineComputer; // 0xC8
	[Inject]
	private IPublisher<ConveyorSlotAddBlockMessage> _conveyorSlotAddBlockPub; // 0xD0
	[Inject]
	private IPublisher<ConveyorSlotRemoveBlockMessage> _conveyorSlotRemoveBlockPub; // 0xD8
	[Inject]
	private IPublisher<BlockTakeOffMessage> _blockTakeOffPub; // 0xE0
	private int _addingElementCount; // 0xE8
	private Stash<BlockPhysicsActive> _blockPhysicsActives; // 0xF0
	private readonly List<Block> _blocks; // 0xF8
	private double _percent; // 0x100

	// Methods

	// RVA: 0x24B36A4 Offset: 0x24AF6A4 VA: 0x24B36A4
	public double GetPercent() { }

	// RVA: 0x24B36AC Offset: 0x24AF6AC VA: 0x24B36AC
	public void SetPercent(double percent) { }

	// RVA: 0x24B376C Offset: 0x24AF76C VA: 0x24B376C Slot: 11
	public override void OnRent() { }

	// RVA: 0x24B37F8 Offset: 0x24AF7F8 VA: 0x24B37F8 Slot: 12
	public override void OnReturn() { }

	[AsyncStateMachine(typeof(ConveyorSlot.<AddBlock>d__17))]
	// RVA: 0x24B38A4 Offset: 0x24AF8A4 VA: 0x24B38A4 Slot: 14
	public UniTask AddBlock(Block block, float delay = 0, bool motion = True, int lateralIdx = 0) { }

	// RVA: 0x24B398C Offset: 0x24AF98C VA: 0x24B398C Slot: 15
	public void RemoveBlock(Block block) { }

	// RVA: 0x24B3AB0 Offset: 0x24AFAB0 VA: 0x24B3AB0
	public int GetIndexOf(Block block) { }

	// RVA: 0x24B3B08 Offset: 0x24AFB08 VA: 0x24B3B08
	public Block GetFirstBlock() { }

	// RVA: 0x24B3B88 Offset: 0x24AFB88 VA: 0x24B3B88
	public List<Block> GetElements() { }

	// RVA: 0x24B105C Offset: 0x24AD05C VA: 0x24B105C
	public bool HasSpace() { }

	// RVA: 0x24B100C Offset: 0x24AD00C VA: 0x24B100C
	public bool HasElement() { }

	// RVA: 0x24B10AC Offset: 0x24AD0AC VA: 0x24B10AC
	public bool IsElementBeingAdded() { }

	// RVA: 0x24B3B90 Offset: 0x24AFB90 VA: 0x24B3B90
	public bool IsCompatibleWith(ConveyorSlot slot) { }

	// RVA: 0x24B3C60 Offset: 0x24AFC60 VA: 0x24B3C60
	public void .ctor() { }
}

