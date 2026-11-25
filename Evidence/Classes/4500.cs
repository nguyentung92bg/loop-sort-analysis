// Namespace: 
public sealed class Carrier : GameBehaviourBase, ITouchInteractable, IInteractable, IBlockContainer // TypeDefIndex: 4500
{
	// Fields
	private readonly CompositeMotionHandle _backMotions; // 0xA0
	private readonly CompositeMotionHandle _addBlockMotions; // 0xA8
	private readonly CompositeMotionHandle _transferMotions; // 0xB0
	[CompilerGenerated]
	[SerializeField]
	private GameObject <ModelParent>k__BackingField; // 0xB8
	[CompilerGenerated]
	[SerializeField]
	private Transform <BlockParent>k__BackingField; // 0xC0
	[CompilerGenerated]
	[SerializeField]
	private Transform <FrontPoint>k__BackingField; // 0xC8
	[CompilerGenerated]
	[SerializeField]
	private Renderer <HeadRenderer>k__BackingField; // 0xD0
	[CompilerGenerated]
	[SerializeField]
	private SkinnedMeshRenderer <BackTopRenderer>k__BackingField; // 0xD8
	[CompilerGenerated]
	[SerializeField]
	private SkinnedMeshRenderer <BackRearRenderer>k__BackingField; // 0xE0
	[CompilerGenerated]
	[SerializeField]
	private StatefulComponent <View>k__BackingField; // 0xE8
	[CompilerGenerated]
	[SerializeField]
	private GameObject <Highlight>k__BackingField; // 0xF0
	[CompilerGenerated]
	[SerializeField]
	private Transform <LeftTire>k__BackingField; // 0xF8
	[CompilerGenerated]
	[SerializeField]
	private Transform <RightTire>k__BackingField; // 0x100
	[CompilerGenerated]
	[SerializeField]
	private Transform <TransferProjectPoint>k__BackingField; // 0x108
	[CompilerGenerated]
	[SerializeField]
	private Transform <Pivot>k__BackingField; // 0x110
	[CompilerGenerated]
	[SerializeField]
	private Collider <Collider>k__BackingField; // 0x118
	[CompilerGenerated]
	[Header("Group Blocks")]
	[SerializeField]
	private List<MeshRenderer> <GroupBlocks>k__BackingField; // 0x120
	[CompilerGenerated]
	[SerializeField]
	private List<MeshFilter> <GroupBlockFilters>k__BackingField; // 0x128
	[CompilerGenerated]
	private CarrierSheet.CarrierType <Type>k__BackingField; // 0x130
	[Inject]
	private CarrierConfig _config; // 0x138
	[Inject]
	private AudioModule _audioModule; // 0x140
	[Inject]
	private HapticModule _hapticModule; // 0x148
	[Inject]
	private SandFlowSystem _sandFlowSystem; // 0x150
	[Inject]
	private BlockConfig _blockConfig; // 0x158
	[Inject]
	private Particles _particles; // 0x160
	[Inject]
	private Conveyor _conveyor; // 0x168
	[Inject]
	private CarrierConfig _carrierConfig; // 0x170
	[Inject]
	private IPublisher<CarrierSelectMessage> _carrierSelectPub; // 0x178
	[Inject]
	private IPublisher<CarrierCompleteMessage> _carrierCompletePub; // 0x180
	[Inject]
	private IPublisher<CarrierAddBlockMessage> _carrierAddBlockPub; // 0x188
	[Inject]
	private IPublisher<CarrierRemoveBlockMessage> _carrierRemoveBlockPub; // 0x190
	[Inject]
	private IPublisher<CarrierInteractUpdateMessage> _carrierInteractUpdatePub; // 0x198
	[Inject]
	private IPublisher<BlockCarrierMeshUpdateMessage> _blockCarrierMeshUpdatePub; // 0x1A0
	private Material _originalMaterial; // 0x1A8
	private bool _isTransferring; // 0x1B0
	private bool _isComplete; // 0x1B1
	private bool _isInteractionLocked; // 0x1B2
	private bool _isTransferEnterLocked; // 0x1B3
	private bool _isTransferExitLocked; // 0x1B4
	private bool _isGroupBlockDisabled; // 0x1B5
	private bool _isTransferMotionDisabled; // 0x1B6
	private int _customMaxBlockCount; // 0x1B8
	private int _capacityGroups; // 0x1BC
	private Nullable<Vector3> _originalPosition; // 0x1C0
	private Stash<BlockPhysicsActive> _blockPhysicsActives; // 0x1D0
	private Stash<BlockTransferBond> _blockTransferBonds; // 0x1D8
	private readonly List<Block> _blocks; // 0x1E0
	private readonly Dictionary<Block, int> _idxByBlock; // 0x1E8
	private readonly Dictionary<ColorType, UniTimer> _rejectedColorTimers; // 0x1F0
	private readonly HashSet<Block> _addingBlocks; // 0x1F8
	private readonly List<IBlockTransferHandler> _transferHandlers; // 0x200
	private readonly HashSet<GameObject> _interactionBlockers; // 0x208
	private readonly HashSet<object> _transferEnterBlockers; // 0x210
	private readonly HashSet<object> _transferExitBlockers; // 0x218

	// Properties
	public GameObject ModelParent { get; set; }
	public Transform BlockParent { get; set; }
	public Transform FrontPoint { get; set; }
	public Renderer HeadRenderer { get; set; }
	public SkinnedMeshRenderer BackTopRenderer { get; set; }
	public SkinnedMeshRenderer BackRearRenderer { get; set; }
	public StatefulComponent View { get; set; }
	public GameObject Highlight { get; set; }
	public Transform LeftTire { get; set; }
	public Transform RightTire { get; set; }
	public Transform TransferProjectPoint { get; set; }
	public Transform Pivot { get; set; }
	public Collider Collider { get; set; }
	public List<MeshRenderer> GroupBlocks { get; set; }
	public List<MeshFilter> GroupBlockFilters { get; set; }
	public CarrierSheet.CarrierType Type { get; set; }
	public Vector3Int BlockSize { get; }

	// Methods

	[AsyncStateMachine(typeof(Carrier.<ApplyOpenBackMotion>d__3))]
	// RVA: 0x24076B0 Offset: 0x24036B0 VA: 0x24076B0
	public UniTaskVoid ApplyOpenBackMotion(bool immediate = False) { }

	[AsyncStateMachine(typeof(Carrier.<ApplyCloseBackMotion>d__4))]
	// RVA: 0x2407754 Offset: 0x2403754 VA: 0x2407754
	public UniTaskVoid ApplyCloseBackMotion(bool immediate = False) { }

	// RVA: 0x24077F8 Offset: 0x24037F8 VA: 0x24077F8
	private void ApplyAddBlockMotion() { }

	// RVA: 0x24077FC Offset: 0x24037FC VA: 0x24077FC
	private void ApplyBeginTransferMotion() { }

	// RVA: 0x2407AC0 Offset: 0x2403AC0 VA: 0x2407AC0
	private void ApplyEndTransferMotion() { }

	// RVA: 0x2407CD4 Offset: 0x2403CD4 VA: 0x2407CD4
	private void ApplyCheckmarkMotion() { }

	// RVA: 0x2407E9C Offset: 0x2403E9C VA: 0x2407E9C
	public void ApplyGroupBlockJiggleMotion(Block block) { }

	[CompilerGenerated]
	// RVA: 0x240800C Offset: 0x240400C VA: 0x240800C
	public GameObject get_ModelParent() { }

	[CompilerGenerated]
	// RVA: 0x2408014 Offset: 0x2404014 VA: 0x2408014
	private void set_ModelParent(GameObject value) { }

	[CompilerGenerated]
	// RVA: 0x240801C Offset: 0x240401C VA: 0x240801C
	public Transform get_BlockParent() { }

	[CompilerGenerated]
	// RVA: 0x2408024 Offset: 0x2404024 VA: 0x2408024
	private void set_BlockParent(Transform value) { }

	[CompilerGenerated]
	// RVA: 0x240802C Offset: 0x240402C VA: 0x240802C
	public Transform get_FrontPoint() { }

	[CompilerGenerated]
	// RVA: 0x2408034 Offset: 0x2404034 VA: 0x2408034
	private void set_FrontPoint(Transform value) { }

	[CompilerGenerated]
	// RVA: 0x240803C Offset: 0x240403C VA: 0x240803C
	public Renderer get_HeadRenderer() { }

	[CompilerGenerated]
	// RVA: 0x2408044 Offset: 0x2404044 VA: 0x2408044
	private void set_HeadRenderer(Renderer value) { }

	[CompilerGenerated]
	// RVA: 0x240804C Offset: 0x240404C VA: 0x240804C
	public SkinnedMeshRenderer get_BackTopRenderer() { }

	[CompilerGenerated]
	// RVA: 0x2408054 Offset: 0x2404054 VA: 0x2408054
	private void set_BackTopRenderer(SkinnedMeshRenderer value) { }

	[CompilerGenerated]
	// RVA: 0x240805C Offset: 0x240405C VA: 0x240805C
	public SkinnedMeshRenderer get_BackRearRenderer() { }

	[CompilerGenerated]
	// RVA: 0x2408064 Offset: 0x2404064 VA: 0x2408064
	private void set_BackRearRenderer(SkinnedMeshRenderer value) { }

	[CompilerGenerated]
	// RVA: 0x240806C Offset: 0x240406C VA: 0x240806C
	public StatefulComponent get_View() { }

	[CompilerGenerated]
	// RVA: 0x2408074 Offset: 0x2404074 VA: 0x2408074
	private void set_View(StatefulComponent value) { }

	[CompilerGenerated]
	// RVA: 0x240807C Offset: 0x240407C VA: 0x240807C
	public GameObject get_Highlight() { }

	[CompilerGenerated]
	// RVA: 0x2408084 Offset: 0x2404084 VA: 0x2408084
	private void set_Highlight(GameObject value) { }

	[CompilerGenerated]
	// RVA: 0x240808C Offset: 0x240408C VA: 0x240808C
	public Transform get_LeftTire() { }

	[CompilerGenerated]
	// RVA: 0x2408094 Offset: 0x2404094 VA: 0x2408094
	private void set_LeftTire(Transform value) { }

	[CompilerGenerated]
	// RVA: 0x240809C Offset: 0x240409C VA: 0x240809C
	public Transform get_RightTire() { }

	[CompilerGenerated]
	// RVA: 0x24080A4 Offset: 0x24040A4 VA: 0x24080A4
	private void set_RightTire(Transform value) { }

	[CompilerGenerated]
	// RVA: 0x24080B4 Offset: 0x24040B4 VA: 0x24080B4
	public Transform get_TransferProjectPoint() { }

	[CompilerGenerated]
	// RVA: 0x24080BC Offset: 0x24040BC VA: 0x24080BC
	private void set_TransferProjectPoint(Transform value) { }

	[CompilerGenerated]
	// RVA: 0x24080CC Offset: 0x24040CC VA: 0x24080CC
	public Transform get_Pivot() { }

	[CompilerGenerated]
	// RVA: 0x24080D4 Offset: 0x24040D4 VA: 0x24080D4
	private void set_Pivot(Transform value) { }

	[CompilerGenerated]
	// RVA: 0x24080E4 Offset: 0x24040E4 VA: 0x24080E4
	public Collider get_Collider() { }

	[CompilerGenerated]
	// RVA: 0x24080EC Offset: 0x24040EC VA: 0x24080EC
	private void set_Collider(Collider value) { }

	[CompilerGenerated]
	// RVA: 0x24080FC Offset: 0x24040FC VA: 0x24080FC
	public List<MeshRenderer> get_GroupBlocks() { }

	[CompilerGenerated]
	// RVA: 0x2408104 Offset: 0x2404104 VA: 0x2408104
	private void set_GroupBlocks(List<MeshRenderer> value) { }

	[CompilerGenerated]
	// RVA: 0x2408114 Offset: 0x2404114 VA: 0x2408114
	public List<MeshFilter> get_GroupBlockFilters() { }

	[CompilerGenerated]
	// RVA: 0x240811C Offset: 0x240411C VA: 0x240811C
	private void set_GroupBlockFilters(List<MeshFilter> value) { }

	[CompilerGenerated]
	// RVA: 0x240812C Offset: 0x240412C VA: 0x240812C
	public CarrierSheet.CarrierType get_Type() { }

	[CompilerGenerated]
	// RVA: 0x2408134 Offset: 0x2404134 VA: 0x2408134
	private void set_Type(CarrierSheet.CarrierType value) { }

	// RVA: 0x240813C Offset: 0x240413C VA: 0x240813C
	public Vector3Int get_BlockSize() { }

	// RVA: 0x2408184 Offset: 0x2404184 VA: 0x2408184 Slot: 6
	protected override void Awake() { }

	// RVA: 0x2408210 Offset: 0x2404210 VA: 0x2408210 Slot: 11
	public override void OnRent() { }

	// RVA: 0x24084D4 Offset: 0x24044D4 VA: 0x24084D4 Slot: 12
	public override void OnReturn() { }

	// RVA: 0x240865C Offset: 0x240465C VA: 0x240865C Slot: 14
	public void Interact(LeanFinger finger, RaycastHit hitInfo) { }

	// RVA: 0x2408724 Offset: 0x2404724 VA: 0x2408724
	public void SetType(CarrierSheet.CarrierType carrierType) { }

	[AsyncStateMachine(typeof(Carrier.<AddBlock>d__116))]
	// RVA: 0x23FE404 Offset: 0x23FA404 VA: 0x23FE404 Slot: 15
	public UniTask AddBlock(Block block, float delay = 0, bool motion = True, int lateralIdx = 0) { }

	// RVA: 0x23FE2B8 Offset: 0x23FA2B8 VA: 0x23FE2B8 Slot: 16
	public void RemoveBlock(Block block) { }

	// RVA: 0x240872C Offset: 0x240472C VA: 0x240872C
	public bool CancelIntake(Block block) { }

	// RVA: 0x24087A4 Offset: 0x24047A4 VA: 0x24087A4
	public void AddRejectedColorType(ColorType colorType) { }

	// RVA: 0x240882C Offset: 0x240482C VA: 0x240882C
	private void SetComplete() { }

	[AsyncStateMachine(typeof(Carrier.<SetCompleteTransferDelay>d__121))]
	// RVA: 0x2408904 Offset: 0x2404904 VA: 0x2408904
	private UniTaskVoid SetCompleteTransferDelay() { }

	// RVA: 0x2404130 Offset: 0x2400130 VA: 0x2404130
	public void EnableInteraction(GameObject source) { }

	// RVA: 0x2403394 Offset: 0x23FF394 VA: 0x2403394
	public void DisableInteraction(GameObject source) { }

	// RVA: 0x23FE4DC Offset: 0x23FA4DC VA: 0x23FE4DC
	public void EnableTransfer(object source) { }

	// RVA: 0x23FE290 Offset: 0x23FA290 VA: 0x23FE290
	public void DisableTransfer(object source) { }

	// RVA: 0x24089A4 Offset: 0x24049A4 VA: 0x24089A4
	public void EnableTransferEnter(object source) { }

	// RVA: 0x2408AA4 Offset: 0x2404AA4 VA: 0x2408AA4
	public void DisableTransferEnter(object source) { }

	// RVA: 0x2408A24 Offset: 0x2404A24 VA: 0x2408A24
	public void EnableTransferExit(object source) { }

	// RVA: 0x2408B08 Offset: 0x2404B08 VA: 0x2408B08
	public void DisableTransferExit(object source) { }

	// RVA: 0x2408B6C Offset: 0x2404B6C VA: 0x2408B6C
	public void BeginTransfer() { }

	// RVA: 0x2408B78 Offset: 0x2404B78 VA: 0x2408B78
	public void EndTransfer() { }

	// RVA: 0x2408B80 Offset: 0x2404B80 VA: 0x2408B80
	private int CoordinateToIndex(Vector3Int coordinate) { }

	// RVA: 0x2408BC0 Offset: 0x2404BC0 VA: 0x2408BC0
	public Vector3Int GetBlockCoordinate(int index) { }

	// RVA: 0x2408C2C Offset: 0x2404C2C VA: 0x2408C2C
	public Vector3Int GetBlockCoordinate(Block block) { }

	// RVA: 0x2408CBC Offset: 0x2404CBC VA: 0x2408CBC
	public Vector3 CoordinateToLocalPosition(Vector3Int coordinate) { }

	// RVA: 0x2408DB8 Offset: 0x2404DB8 VA: 0x2408DB8
	private Vector3 GetContainerSize() { }

	// RVA: 0x2408E28 Offset: 0x2404E28 VA: 0x2408E28
	public bool IsBlockExists(Vector3Int coordinate) { }

	// RVA: 0x2408EE0 Offset: 0x2404EE0 VA: 0x2408EE0
	public Block GetBlockAt(Vector3Int coordinate) { }

	// RVA: 0x2408F98 Offset: 0x2404F98 VA: 0x2408F98
	public void GetNeighborBlocks(Vector3Int coordinate, List<Block> neighbors) { }

	// RVA: 0x24093AC Offset: 0x24053AC VA: 0x24093AC
	public void GetBlocksInLayer(int z, List<Block> blocks) { }

	// RVA: 0x24094F0 Offset: 0x24054F0 VA: 0x24094F0
	public void SetCustomMaxBlockCount(int count) { }

	// RVA: 0x24094F8 Offset: 0x24054F8 VA: 0x24094F8
	public void SetCapacityGroups(int groups) { }

	// RVA: 0x2409500 Offset: 0x2405500 VA: 0x2409500
	public bool IsFull() { }

	// RVA: 0x2409564 Offset: 0x2405564 VA: 0x2409564
	public bool HasReachedCompleteCount() { }

	// RVA: 0x2402F2C Offset: 0x23FEF2C VA: 0x2402F2C
	public int GetAvailableSpaceCount() { }

	// RVA: 0x24095F4 Offset: 0x24055F4 VA: 0x24095F4
	public ColorType GetNextColorType() { }

	// RVA: 0x24096A4 Offset: 0x24056A4 VA: 0x24096A4
	public void FindBlocksWithSameColor(ICollection<Block> blocks) { }

	// RVA: 0x23FB3D4 Offset: 0x23F73D4 VA: 0x23FB3D4
	public void FindNextTransferBlocks(ICollection<Block> blocks) { }

	// RVA: 0x23FB298 Offset: 0x23F7298 VA: 0x23FB298
	public void FindBlocksByColor(ICollection<Block> blocks, ColorType targetColorType) { }

	// RVA: 0x23FAD40 Offset: 0x23F6D40 VA: 0x23FAD40
	public bool AreAllBlocksSameColor() { }

	// RVA: 0x24097E8 Offset: 0x24057E8 VA: 0x24097E8
	public bool CanTransferBlock(Block block) { }

	// RVA: 0x2409A44 Offset: 0x2405A44 VA: 0x2409A44
	public bool IsBetterCarrier(Block block) { }

	// RVA: 0x23FF3B0 Offset: 0x23FB3B0 VA: 0x23FF3B0
	public bool TryGetGroupBlockOf(Block block, out MeshRenderer groupBlock) { }

	// RVA: 0x23FB7AC Offset: 0x23F77AC VA: 0x23FB7AC
	public void DisableGroupBlock() { }

	// RVA: 0x23FD170 Offset: 0x23F9170 VA: 0x23FD170
	public void EnableGroupBlock() { }

	// RVA: 0x2409CAC Offset: 0x2405CAC VA: 0x2409CAC
	public void RefreshGroupBlock() { }

	// RVA: 0x2409D68 Offset: 0x2405D68 VA: 0x2409D68
	public void EnableTransferMotion() { }

	// RVA: 0x2409D70 Offset: 0x2405D70 VA: 0x2409D70
	public void DisableTransferMotion() { }

	// RVA: 0x2409D7C Offset: 0x2405D7C VA: 0x2409D7C
	public bool IsColorRejected(Block block) { }

	// RVA: 0x2409E10 Offset: 0x2405E10 VA: 0x2409E10
	public List<Block> GetBlocks() { }

	// RVA: 0x2408C50 Offset: 0x2404C50 VA: 0x2408C50
	public int GetBlockIdx(Block block) { }

	// RVA: 0x23FACCC Offset: 0x23F6CCC VA: 0x23FACCC
	public bool IsEmpty() { }

	// RVA: 0x23FAF24 Offset: 0x23F6F24 VA: 0x23FAF24
	public int GetMaxBlockCount() { }

	// RVA: 0x24095BC Offset: 0x24055BC VA: 0x24095BC
	public int GetCompleteBlockCount() { }

	// RVA: 0x2409E18 Offset: 0x2405E18 VA: 0x2409E18
	public ColorType GetCompleteColorType() { }

	// RVA: 0x2409E1C Offset: 0x2405E1C VA: 0x2409E1C
	public Block GetNextFirstBlock() { }

	// RVA: 0x23FED40 Offset: 0x23FAD40 VA: 0x23FED40
	public bool AreAllBlocksGrouped() { }

	// RVA: 0x2409E98 Offset: 0x2405E98 VA: 0x2409E98
	public bool CanComplete() { }

	// RVA: 0x23FAD1C Offset: 0x23F6D1C VA: 0x23FAD1C
	public bool CanBeginTransferEnter() { }

	// RVA: 0x23FEC98 Offset: 0x23FAC98 VA: 0x23FEC98
	public bool CanBeginTransferExit() { }

	// RVA: 0x23FAD2C Offset: 0x23F6D2C VA: 0x23FAD2C
	public bool IsTransferringOrAddingBlocks() { }

	// RVA: 0x2409EC0 Offset: 0x2405EC0 VA: 0x2409EC0
	public bool IsAddingBlocks() { }

	// RVA: 0x2409F10 Offset: 0x2405F10 VA: 0x2409F10
	public bool IsTransferring() { }

	// RVA: 0x2408994 Offset: 0x2404994 VA: 0x2408994
	public bool CanInteract() { }

	// RVA: 0x2409F18 Offset: 0x2405F18 VA: 0x2409F18
	public bool IsComplete() { }

	// RVA: 0x2409F20 Offset: 0x2405F20 VA: 0x2409F20
	public bool IsGroupBlockEnabled() { }

	// RVA: 0x2409F30 Offset: 0x2405F30 VA: 0x2409F30
	public void .ctor() { }
}

