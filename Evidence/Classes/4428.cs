// Namespace: 
public sealed class BlockOutlineSystem : SystemBase // TypeDefIndex: 4428
{
	// Fields
	[Inject]
	private PrefabModule _prefabModule; // 0x30
	[Inject]
	private BlockConfig _blockConfig; // 0x38
	[Inject]
	private Conveyor _conveyor; // 0x40
	[Inject]
	private OutlineModule _outlineModule; // 0x48
	[Inject]
	private ISubscriber<BlockNextTransferUpdateMessage> _blockNextTransferUpdateSub; // 0x50
	private readonly Dictionary<GameObject, OutlineEntity> _outlines; // 0x58

	// Methods

	// RVA: 0x23E2DA4 Offset: 0x23DEDA4 VA: 0x23E2DA4 Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x23E2EC4 Offset: 0x23DEEC4 VA: 0x23E2EC4
	private void OnBlockNextTransferUpdate(BlockNextTransferUpdateMessage m) { }

	// RVA: 0x23E3200 Offset: 0x23DF200 VA: 0x23E3200
	private void CreateOutlineInstance(GameObject target, Mesh mesh) { }

	// RVA: 0x23E3134 Offset: 0x23DF134 VA: 0x23E3134
	private void RemoveOutlineInstance(GameObject target) { }

	// RVA: 0x23E32EC Offset: 0x23DF2EC VA: 0x23E32EC
	public void .ctor() { }
}

