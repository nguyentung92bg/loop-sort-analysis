// Namespace: 
public sealed class ShuffleBoosterSystem : SystemBase // TypeDefIndex: 4485
{
	// Fields
	[Inject]
	private Monitors _monitors; // 0x30
	[Inject]
	private OutlineModule _outlineModule; // 0x38
	[Inject]
	private Conveyor _conveyor; // 0x40
	[Inject]
	private IPublisher<ShuffleCarrierMessage> _shuffleCarrierPub; // 0x48
	private Filter _enabledCarriers; // 0x50
	private Stash<BehaviourView<Carrier>> _carriers; // 0x58
	private Stash<BlockTransferBond> _blockTransferBonds; // 0x60

	// Methods

	// RVA: 0x23FEA70 Offset: 0x23FAA70 VA: 0x23FEA70 Slot: 9
	public override void OnAwake() { }

	// RVA: 0x23FE90C Offset: 0x23FA90C VA: 0x23FE90C
	public bool CanShuffle() { }

	// RVA: 0x23FEBF4 Offset: 0x23FABF4 VA: 0x23FEBF4
	public bool CanShuffle(Carrier carrier) { }

	// RVA: 0x23FEDA4 Offset: 0x23FADA4 VA: 0x23FEDA4
	private bool IsUnitBoundary(List<Block> blocks, int i) { }

	// RVA: 0x23FECA8 Offset: 0x23FACA8 VA: 0x23FECA8
	private int CountShuffleUnits(Carrier carrier) { }

	// RVA: 0x23FEF04 Offset: 0x23FAF04 VA: 0x23FEF04
	private void FindTopShuffleUnit(Carrier carrier, List<Block> blocks) { }

	// RVA: 0x23FEA30 Offset: 0x23FAA30 VA: 0x23FEA30
	public bool TryShuffle(Carrier carrier) { }

	[AsyncStateMachine(typeof(ShuffleBoosterSystem.<Shuffle>d__14))]
	// RVA: 0x23FEFDC Offset: 0x23FAFDC VA: 0x23FEFDC
	private UniTask Shuffle(Carrier carrier) { }

	// RVA: 0x23FF094 Offset: 0x23FB094 VA: 0x23FF094
	private void CreateGroupMeshProxies(Carrier carrier, List<GameObject> proxies) { }

	// RVA: 0x23FF4AC Offset: 0x23FB4AC VA: 0x23FF4AC
	private void HideGroupMeshBlocks(Carrier carrier) { }

	[AsyncStateMachine(typeof(ShuffleBoosterSystem.<ShuffleBlocks>d__17))]
	// RVA: 0x23FF6C8 Offset: 0x23FB6C8 VA: 0x23FF6C8
	private UniTask ShuffleBlocks(Carrier carrier) { }

	[AsyncStateMachine(typeof(ShuffleBoosterSystem.<ApplyShuffleGroupBlockMotion>d__18))]
	// RVA: 0x23FF784 Offset: 0x23FB784 VA: 0x23FF784
	private UniTask ApplyShuffleGroupBlockMotion(Carrier carrier, Block block, Vector3 fromPosition, Vector3 toPosition) { }

	[AsyncStateMachine(typeof(ShuffleBoosterSystem.<ApplyShuffleSphereMotion>d__19))]
	// RVA: 0x23FF87C Offset: 0x23FB87C VA: 0x23FF87C
	private UniTask ApplyShuffleSphereMotion(Carrier carrier, Block block, Vector3 fromPosition, Vector3 toPosition) { }

	// RVA: 0x23FE560 Offset: 0x23FA560 VA: 0x23FE560
	public void ShowHighlight() { }

	// RVA: 0x23FE71C Offset: 0x23FA71C VA: 0x23FE71C
	public void HideHighlight() { }

	// RVA: 0x23FF978 Offset: 0x23FB978 VA: 0x23FF978
	public void .ctor() { }
}

