// Namespace: 
public sealed class SelectBoosterSystem : SystemBase // TypeDefIndex: 4478
{
	// Fields
	[Inject]
	private Conveyor _conveyor; // 0x30
	[Inject]
	private BlockTransferSystem _blockTransferSystem; // 0x38
	[Inject]
	private Monitors _monitors; // 0x40
	[Inject]
	private OutlineModule _outlineModule; // 0x48
	[Inject]
	private HighlightModule _highlightModule; // 0x50
	[Inject]
	private IPublisher<SelectBoosterUseMessage> _selectBoosterUsePub; // 0x58
	private Filter _enabledCarriers; // 0x60
	private Stash<BehaviourView<Carrier>> _carriers; // 0x68
	private readonly Dictionary<Carrier, List<Block>> _selectables; // 0x70
	private readonly Dictionary<Transform, MotionHandle> _motions; // 0x78
	private readonly Dictionary<Transform, Vector3> _originalPositions; // 0x80
	private readonly List<HighlightEntity> _highlights; // 0x88
	private static readonly Vector3 LiftOffset; // 0x0

	// Properties
	private static float MinSelectDistance { get; }

	// Methods

	// RVA: 0x23FAAE4 Offset: 0x23F6AE4 VA: 0x23FAAE4
	private static float get_MinSelectDistance() { }

	// RVA: 0x23FAAF0 Offset: 0x23F6AF0 VA: 0x23FAAF0 Slot: 9
	public override void OnAwake() { }

	// RVA: 0x23FA468 Offset: 0x23F6468 VA: 0x23FA468
	public bool CanSelect() { }

	// RVA: 0x23FAC3C Offset: 0x23F6C3C VA: 0x23FAC3C
	private bool CanSelect(Carrier carrier) { }

	// RVA: 0x23FA70C Offset: 0x23F670C VA: 0x23FA70C
	public bool TrySelect(Carrier carrier, RaycastHit hitInfo) { }

	[AsyncStateMachine(typeof(SelectBoosterSystem.<Select>d__19))]
	// RVA: 0x23FAF3C Offset: 0x23F6F3C VA: 0x23FAF3C
	private UniTaskVoid Select(Carrier carrier, Block closestBlock) { }

	// RVA: 0x23FB004 Offset: 0x23F7004 VA: 0x23FB004
	private List<Block> GetTransferBlocks(Carrier carrier, Block closestBlock) { }

	// RVA: 0x23F9328 Offset: 0x23F5328 VA: 0x23F9328
	public void OnActivated() { }

	// RVA: 0x23F9CFC Offset: 0x23F5CFC VA: 0x23F9CFC
	public void OnDeactivated() { }

	[AsyncStateMachine(typeof(SelectBoosterSystem.<ClearSelectables>d__23))]
	// RVA: 0x23FBCF8 Offset: 0x23F7CF8 VA: 0x23FBCF8
	private UniTaskVoid ClearSelectables() { }

	// RVA: 0x23FB870 Offset: 0x23F7870 VA: 0x23FB870
	private void ApplyBlockUpMotion(Carrier carrier, Block block) { }

	// RVA: 0x23FBAB0 Offset: 0x23F7AB0 VA: 0x23FBAB0
	private void ApplyBlockDownMotion(Carrier carrier, Block block) { }

	// RVA: 0x23FBD88 Offset: 0x23F7D88 VA: 0x23FBD88
	private UniTask ApplyAddBlockMotion(Block block, Vector3 fromPosition, Vector3 toPosition) { }

	[AsyncStateMachine(typeof(SelectBoosterSystem.<ApplySelectOutlineEffect>d__27))]
	// RVA: 0x23FBF80 Offset: 0x23F7F80 VA: 0x23FBF80
	private UniTaskVoid ApplySelectOutlineEffect(List<Block> blocks) { }

	// RVA: 0x23FC030 Offset: 0x23F8030 VA: 0x23FC030
	public void .ctor() { }

	// RVA: 0x23FC1B4 Offset: 0x23F81B4 VA: 0x23FC1B4
	private static void .cctor() { }
}

