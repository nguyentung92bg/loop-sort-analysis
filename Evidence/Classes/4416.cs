// Namespace: 
public sealed class Block : GameBehaviourBase // TypeDefIndex: 4416
{
	// Fields
	private MotionHandle _localMoveMotion; // 0xA0
	private Vector3 _jumpFromPosition; // 0xAC
	private Vector3 _jumpToPosition; // 0xB8
	private Quaternion _jumpFromRotation; // 0xC4
	private Quaternion _jumpToRotation; // 0xD4
	[CompilerGenerated]
	private ColorType <ColorType>k__BackingField; // 0xE4
	[CompilerGenerated]
	private List<FeatureContainer> <Features>k__BackingField; // 0xF0
	[CompilerGenerated]
	private float <MotionDurationMultiplier>k__BackingField; // 0xF8
	[CompilerGenerated]
	private IBlockContainer <Container>k__BackingField; // 0x100
	[CompilerGenerated]
	private MeshFilter <MeshFilter>k__BackingField; // 0x108
	[CompilerGenerated]
	private Mesh <OverrideMesh>k__BackingField; // 0x110
	[CompilerGenerated]
	private Mesh <OverrideGroupMesh>k__BackingField; // 0x118
	[CompilerGenerated]
	private Nullable<Quaternion> <OverrideRotation>k__BackingField; // 0x120
	[CompilerGenerated]
	private MeshRenderer <MeshRenderer>k__BackingField; // 0x138
	[CompilerGenerated]
	private Rigidbody <Rigidbody>k__BackingField; // 0x140
	[CompilerGenerated]
	private SphereCollider <Collider>k__BackingField; // 0x148
	private IBlockFeature _blockFeature; // 0x150
	private bool _isContainerChanged; // 0x158
	private bool _isTransferEnterLocked; // 0x159
	private bool _isTransferExitLocked; // 0x15A
	private readonly HashSet<object> _transferEnterBlockers; // 0x160
	private readonly HashSet<object> _transferExitBlockers; // 0x168
	private readonly List<FeatureType> _removedFeatures; // 0x170

	// Properties
	public ColorType ColorType { get; set; }
	public List<FeatureContainer> Features { get; set; }
	public float MotionDurationMultiplier { get; set; }
	public IBlockContainer Container { get; set; }
	public MeshFilter MeshFilter { get; set; }
	public Mesh OverrideMesh { get; set; }
	public Mesh OverrideGroupMesh { get; set; }
	public Nullable<Quaternion> OverrideRotation { get; set; }
	public MeshRenderer MeshRenderer { get; set; }
	public Rigidbody Rigidbody { get; set; }
	public SphereCollider Collider { get; set; }

	// Methods

	// RVA: 0x23DBB54 Offset: 0x23D7B54 VA: 0x23DBB54
	public void CancelMoveMotion() { }

	// RVA: 0x23DBB90 Offset: 0x23D7B90 VA: 0x23DBB90
	public UniTask ApplyMoveToCarrierMotion(Vector3 position, Quaternion rotation) { }

	// RVA: 0x23DBE84 Offset: 0x23D7E84 VA: 0x23DBE84
	public UniTask ApplyMoveToSlotMotion(Vector3 position, Quaternion rotation) { }

	// RVA: 0x23DBC6C Offset: 0x23D7C6C VA: 0x23DBC6C
	private MotionHandle ApplyJumpMotion(Vector3 fromPosition, Vector3 toPosition, Quaternion fromRotation, Quaternion toRotation) { }

	// RVA: 0x23DBF60 Offset: 0x23D7F60 VA: 0x23DBF60
	private void UpdateJumpMotion(float t) { }

	[CompilerGenerated]
	// RVA: 0x23DC080 Offset: 0x23D8080 VA: 0x23DC080
	public ColorType get_ColorType() { }

	[CompilerGenerated]
	// RVA: 0x23DC088 Offset: 0x23D8088 VA: 0x23DC088
	private void set_ColorType(ColorType value) { }

	[CompilerGenerated]
	// RVA: 0x23DC090 Offset: 0x23D8090 VA: 0x23DC090
	public List<FeatureContainer> get_Features() { }

	[CompilerGenerated]
	// RVA: 0x23DC098 Offset: 0x23D8098 VA: 0x23DC098
	private void set_Features(List<FeatureContainer> value) { }

	[CompilerGenerated]
	// RVA: 0x23DC0A0 Offset: 0x23D80A0 VA: 0x23DC0A0
	public float get_MotionDurationMultiplier() { }

	[CompilerGenerated]
	// RVA: 0x23DC0A8 Offset: 0x23D80A8 VA: 0x23DC0A8
	private void set_MotionDurationMultiplier(float value) { }

	[CompilerGenerated]
	// RVA: 0x23DC0B0 Offset: 0x23D80B0 VA: 0x23DC0B0
	public IBlockContainer get_Container() { }

	[CompilerGenerated]
	// RVA: 0x23DC0B8 Offset: 0x23D80B8 VA: 0x23DC0B8
	private void set_Container(IBlockContainer value) { }

	[CompilerGenerated]
	// RVA: 0x23DC0C8 Offset: 0x23D80C8 VA: 0x23DC0C8
	public MeshFilter get_MeshFilter() { }

	[CompilerGenerated]
	// RVA: 0x23DC0D0 Offset: 0x23D80D0 VA: 0x23DC0D0
	private void set_MeshFilter(MeshFilter value) { }

	[CompilerGenerated]
	// RVA: 0x23DC0E0 Offset: 0x23D80E0 VA: 0x23DC0E0
	public Mesh get_OverrideMesh() { }

	[CompilerGenerated]
	// RVA: 0x23DC0E8 Offset: 0x23D80E8 VA: 0x23DC0E8
	private void set_OverrideMesh(Mesh value) { }

	[CompilerGenerated]
	// RVA: 0x23DC0F8 Offset: 0x23D80F8 VA: 0x23DC0F8
	public Mesh get_OverrideGroupMesh() { }

	[CompilerGenerated]
	// RVA: 0x23DC100 Offset: 0x23D8100 VA: 0x23DC100
	private void set_OverrideGroupMesh(Mesh value) { }

	[CompilerGenerated]
	// RVA: 0x23DC110 Offset: 0x23D8110 VA: 0x23DC110
	public Nullable<Quaternion> get_OverrideRotation() { }

	[CompilerGenerated]
	// RVA: 0x23DC124 Offset: 0x23D8124 VA: 0x23DC124
	public void set_OverrideRotation(Nullable<Quaternion> value) { }

	[CompilerGenerated]
	// RVA: 0x23DC138 Offset: 0x23D8138 VA: 0x23DC138
	public MeshRenderer get_MeshRenderer() { }

	[CompilerGenerated]
	// RVA: 0x23DC140 Offset: 0x23D8140 VA: 0x23DC140
	private void set_MeshRenderer(MeshRenderer value) { }

	[CompilerGenerated]
	// RVA: 0x23DC150 Offset: 0x23D8150 VA: 0x23DC150
	public Rigidbody get_Rigidbody() { }

	[CompilerGenerated]
	// RVA: 0x23DC158 Offset: 0x23D8158 VA: 0x23DC158
	private void set_Rigidbody(Rigidbody value) { }

	[CompilerGenerated]
	// RVA: 0x23DC168 Offset: 0x23D8168 VA: 0x23DC168
	public SphereCollider get_Collider() { }

	[CompilerGenerated]
	// RVA: 0x23DC170 Offset: 0x23D8170 VA: 0x23DC170
	private void set_Collider(SphereCollider value) { }

	// RVA: 0x23DC180 Offset: 0x23D8180 VA: 0x23DC180 Slot: 6
	protected override void Awake() { }

	// RVA: 0x23DC298 Offset: 0x23D8298 VA: 0x23DC298 Slot: 11
	public override void OnRent() { }

	// RVA: 0x23DC32C Offset: 0x23D832C VA: 0x23DC32C Slot: 12
	public override void OnReturn() { }

	// RVA: 0x23DC3FC Offset: 0x23D83FC VA: 0x23DC3FC
	public void SetColorType(ColorType colorType) { }

	// RVA: 0x23DC418 Offset: 0x23D8418 VA: 0x23DC418
	public void SetNormalColor() { }

	// RVA: 0x23DC434 Offset: 0x23D8434 VA: 0x23DC434
	public void SetDarkColor() { }

	// RVA: 0x23DC46C Offset: 0x23D846C VA: 0x23DC46C
	public void SetFeatures(List<FeatureContainer> features) { }

	// RVA: 0x23DC51C Offset: 0x23D851C VA: 0x23DC51C
	public void RemoveFeature(FeatureType feature) { }

	// RVA: 0x23DC584 Offset: 0x23D8584 VA: 0x23DC584
	public void SetMesh(Mesh mesh) { }

	// RVA: 0x23DC610 Offset: 0x23D8610 VA: 0x23DC610
	public void SetMeshOverrides(Mesh mesh, Mesh groupMesh) { }

	// RVA: 0x23DC644 Offset: 0x23D8644 VA: 0x23DC644
	public void SetMotionDurationMultiplier(float durationMultiplier) { }

	// RVA: 0x23DC64C Offset: 0x23D864C VA: 0x23DC64C
	public void SetContainer(IBlockContainer container) { }

	// RVA: 0x23DC710 Offset: 0x23D8710 VA: 0x23DC710
	public void SetFeature(IBlockFeature feature) { }

	// RVA: 0x23DC720 Offset: 0x23D8720 VA: 0x23DC720
	public bool HasAnyFeature() { }

	// RVA: 0x23DC908 Offset: 0x23D8908 VA: 0x23DC908
	public bool TryGetFeature(FeatureType feature, out FeatureContainer container) { }

	// RVA: 0x23DC3E8 Offset: 0x23D83E8 VA: 0x23DC3E8
	public void ClearContainer() { }

	// RVA: 0x23DCB18 Offset: 0x23D8B18 VA: 0x23DCB18
	public void CompleteContainer() { }

	// RVA: 0x23DCB20 Offset: 0x23D8B20 VA: 0x23DCB20
	public bool IsCompatibleWith(Carrier carrier) { }

	// RVA: 0x23DCB80 Offset: 0x23D8B80 VA: 0x23DCB80
	public bool IsCompatibleWith(Block block) { }

	// RVA: 0x23DCE28 Offset: 0x23D8E28 VA: 0x23DCE28
	public void EnableTransferEnter(object source) { }

	// RVA: 0x23DCEA8 Offset: 0x23D8EA8 VA: 0x23DCEA8
	public void DisableTransferEnter(object source) { }

	// RVA: 0x23DCF0C Offset: 0x23D8F0C VA: 0x23DCF0C
	public void EnableTransferExit(object source) { }

	// RVA: 0x23DCF8C Offset: 0x23D8F8C VA: 0x23DCF8C
	public void DisableTransferExit(object source) { }

	// RVA: 0x23DCFF0 Offset: 0x23D8FF0 VA: 0x23DCFF0
	public bool IsContainerModified() { }

	// RVA: 0x23DCFF8 Offset: 0x23D8FF8 VA: 0x23DCFF8
	public bool CanBeginTransferEnter() { }

	// RVA: 0x23DD008 Offset: 0x23D9008 VA: 0x23DD008
	public bool CanBeginTransferExit() { }

	// RVA: 0x23DD018 Offset: 0x23D9018 VA: 0x23DD018
	public bool CanBlockToLoseSystem() { }

	// RVA: 0x23DD0C8 Offset: 0x23D90C8 VA: 0x23DD0C8
	public void .ctor() { }
}

