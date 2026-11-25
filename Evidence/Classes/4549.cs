// Namespace: 
public sealed class Conveyor : GameBehaviourBase // TypeDefIndex: 4549
{
	// Fields
	[Inject]
	private ConveyorConfig _conveyorConfig; // 0xA0
	[Inject]
	private CarrierConfig _carrierConfig; // 0xA8
	[Inject]
	private MaterialPropertyBlock _propertyBlock; // 0xB0
	[Inject]
	private SplineComputer _splineComputer; // 0xB8
	[Inject]
	private SplineMesh _splineMesh; // 0xC0
	private RendererPropertyRegistry _propertyRegistry; // 0xC8
	private SplineMeshAutoCount _splineMeshAutoCount; // 0xD0
	private SplineMesh _growMesh; // 0xD8
	private Renderer _growRenderer; // 0xE0
	private Nullable<Color> _sideColor; // 0xE8
	private Filter _conveyorSlotFilter; // 0x100
	private Stash<BehaviourView<ConveyorSlot>> _conveyorSlots; // 0x108
	private int _slotCacheFrame; // 0x110
	private int _slotOccupiedCount; // 0x114
	private int _slotNoSpaceCount; // 0x118
	private int _slotTotalCount; // 0x11C
	private readonly HashSet<SplineFollower> _followers; // 0x120
	private readonly Dictionary<SplineFollower, float> _speedBySlot; // 0x128
	private readonly Dictionary<SplineFollower, MotionHandle> _speedMotionBySlot; // 0x130
	[CompilerGenerated]
	private float <SlotCollisionDistance>k__BackingField; // 0x138
	[CompilerGenerated]
	private float <UnscaledSpeed>k__BackingField; // 0x13C
	[CompilerGenerated]
	private float <Speed>k__BackingField; // 0x140
	[CompilerGenerated]
	private float <SpeedScale>k__BackingField; // 0x144
	[CompilerGenerated]
	private Vector3Int <BlockSize>k__BackingField; // 0x148
	[CompilerGenerated]
	private int <GroupBlockCount>k__BackingField; // 0x154
	[CompilerGenerated]
	private int <GroupSlotCount>k__BackingField; // 0x158
	[CompilerGenerated]
	private int <MaxBlockCount>k__BackingField; // 0x15C
	[CompilerGenerated]
	private int <SlotCount>k__BackingField; // 0x160
	[CompilerGenerated]
	private double <EndPercent>k__BackingField; // 0x168
	[CompilerGenerated]
	private double <MeshEndPercent>k__BackingField; // 0x170

	// Properties
	public float SlotCollisionDistance { get; set; }
	public float UnscaledSpeed { get; set; }
	public float Speed { get; set; }
	public float SpeedScale { get; set; }
	public Vector3Int BlockSize { get; set; }
	public int GroupBlockCount { get; set; }
	public int GroupSlotCount { get; set; }
	public int MaxBlockCount { get; set; }
	public int SlotCount { get; set; }
	public double EndPercent { get; set; }
	public double MeshEndPercent { get; set; }
	public float ActiveLength { get; }
	private SplineMeshAutoCount AutoCount { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x24B02E4 Offset: 0x24AC2E4 VA: 0x24B02E4
	public float get_SlotCollisionDistance() { }

	[CompilerGenerated]
	// RVA: 0x24B02EC Offset: 0x24AC2EC VA: 0x24B02EC
	private void set_SlotCollisionDistance(float value) { }

	[CompilerGenerated]
	// RVA: 0x24B02F4 Offset: 0x24AC2F4 VA: 0x24B02F4
	public float get_UnscaledSpeed() { }

	[CompilerGenerated]
	// RVA: 0x24B02FC Offset: 0x24AC2FC VA: 0x24B02FC
	private void set_UnscaledSpeed(float value) { }

	[CompilerGenerated]
	// RVA: 0x24B0304 Offset: 0x24AC304 VA: 0x24B0304
	public float get_Speed() { }

	[CompilerGenerated]
	// RVA: 0x24B030C Offset: 0x24AC30C VA: 0x24B030C
	private void set_Speed(float value) { }

	[CompilerGenerated]
	// RVA: 0x24B0314 Offset: 0x24AC314 VA: 0x24B0314
	public float get_SpeedScale() { }

	[CompilerGenerated]
	// RVA: 0x24B031C Offset: 0x24AC31C VA: 0x24B031C
	private void set_SpeedScale(float value) { }

	[CompilerGenerated]
	// RVA: 0x24B0324 Offset: 0x24AC324 VA: 0x24B0324
	public Vector3Int get_BlockSize() { }

	[CompilerGenerated]
	// RVA: 0x24B0334 Offset: 0x24AC334 VA: 0x24B0334
	private void set_BlockSize(Vector3Int value) { }

	[CompilerGenerated]
	// RVA: 0x24B0340 Offset: 0x24AC340 VA: 0x24B0340
	public int get_GroupBlockCount() { }

	[CompilerGenerated]
	// RVA: 0x24B0348 Offset: 0x24AC348 VA: 0x24B0348
	private void set_GroupBlockCount(int value) { }

	[CompilerGenerated]
	// RVA: 0x24B0350 Offset: 0x24AC350 VA: 0x24B0350
	public int get_GroupSlotCount() { }

	[CompilerGenerated]
	// RVA: 0x24B0358 Offset: 0x24AC358 VA: 0x24B0358
	private void set_GroupSlotCount(int value) { }

	[CompilerGenerated]
	// RVA: 0x24B0360 Offset: 0x24AC360 VA: 0x24B0360
	public int get_MaxBlockCount() { }

	[CompilerGenerated]
	// RVA: 0x24B0368 Offset: 0x24AC368 VA: 0x24B0368
	private void set_MaxBlockCount(int value) { }

	[CompilerGenerated]
	// RVA: 0x24B0370 Offset: 0x24AC370 VA: 0x24B0370
	public int get_SlotCount() { }

	[CompilerGenerated]
	// RVA: 0x24B0378 Offset: 0x24AC378 VA: 0x24B0378
	private void set_SlotCount(int value) { }

	[CompilerGenerated]
	// RVA: 0x24B0380 Offset: 0x24AC380 VA: 0x24B0380
	public double get_EndPercent() { }

	[CompilerGenerated]
	// RVA: 0x24B0388 Offset: 0x24AC388 VA: 0x24B0388
	private void set_EndPercent(double value) { }

	[CompilerGenerated]
	// RVA: 0x24B0390 Offset: 0x24AC390 VA: 0x24B0390
	public double get_MeshEndPercent() { }

	[CompilerGenerated]
	// RVA: 0x24B0398 Offset: 0x24AC398 VA: 0x24B0398
	private void set_MeshEndPercent(double value) { }

	// RVA: 0x24B03A0 Offset: 0x24AC3A0 VA: 0x24B03A0
	public float get_ActiveLength() { }

	// RVA: 0x24B03C4 Offset: 0x24AC3C4 VA: 0x24B03C4
	public bool IsOnBelt(double percent) { }

	// RVA: 0x24B03DC Offset: 0x24AC3DC VA: 0x24B03DC
	public void SetEndPercent(double percent) { }

	// RVA: 0x24B03E4 Offset: 0x24AC3E4 VA: 0x24B03E4
	private SplineMeshAutoCount get_AutoCount() { }

	// RVA: 0x24B0468 Offset: 0x24AC468 VA: 0x24B0468
	public void ClipMesh(double percent) { }

	// RVA: 0x24B04AC Offset: 0x24AC4AC VA: 0x24B04AC
	public void GrowMesh(double percent) { }

	// RVA: 0x24B0774 Offset: 0x24AC774 VA: 0x24B0774
	public void MergeGrowMesh() { }

	// RVA: 0x24B0588 Offset: 0x24AC588 VA: 0x24B0588
	private SplineMesh GetGrowMesh() { }

	// RVA: 0x24B0C68 Offset: 0x24ACC68 VA: 0x24B0C68 Slot: 6
	protected override void Awake() { }

	// RVA: 0x24B0D98 Offset: 0x24ACD98 VA: 0x24B0D98
	public float GetOccupiedSlotRatio01() { }

	// RVA: 0x24B0DFC Offset: 0x24ACDFC VA: 0x24B0DFC
	public int GetOccupiedSlotCount() { }

	// RVA: 0x24B0E24 Offset: 0x24ACE24 VA: 0x24B0E24
	public int GetTotalSlotCount() { }

	// RVA: 0x24B0E4C Offset: 0x24ACE4C VA: 0x24B0E4C
	public bool AreAllSlotsOccupied() { }

	// RVA: 0x24B0DE8 Offset: 0x24ACDE8 VA: 0x24B0DE8
	private void EnsureSlotCountsCached() { }

	// RVA: 0x24B0E80 Offset: 0x24ACE80 VA: 0x24B0E80
	private void ComputeSlotCounts(Filter filter, out int occupied, out int noSpace, out int total) { }

	// RVA: 0x24B0834 Offset: 0x24AC834 VA: 0x24B0834
	public void SetSideColor(Color color) { }

	// RVA: 0x24B10BC Offset: 0x24AD0BC VA: 0x24B10BC
	public void SetCollisionDistance(float slotCollisionDistance) { }

	// RVA: 0x24B10C4 Offset: 0x24AD0C4 VA: 0x24B10C4
	public bool SetSpeed(float speed) { }

	// RVA: 0x24B10F0 Offset: 0x24AD0F0 VA: 0x24B10F0
	public bool SetSpeedScale(float speedScale) { }

	// RVA: 0x24B10E8 Offset: 0x24AD0E8 VA: 0x24B10E8
	private void ApplySpeed(float speed) { }

	// RVA: 0x24B1114 Offset: 0x24AD114 VA: 0x24B1114
	private void UpdateSpeed() { }

	// RVA: 0x24B12BC Offset: 0x24AD2BC VA: 0x24B12BC
	private void UpdateFollower(SplineFollower follower, float newSpeed) { }

	// RVA: 0x24B1440 Offset: 0x24AD440 VA: 0x24B1440
	public void AddFollower(SplineFollower splineFollower) { }

	// RVA: 0x24B14A4 Offset: 0x24AD4A4 VA: 0x24B14A4
	public void UpdateFollower(SplineFollower splineFollower) { }

	// RVA: 0x24B14E4 Offset: 0x24AD4E4 VA: 0x24B14E4
	public void SetCarrierBlockArgs(CarrierBlockArgs args) { }

	// RVA: 0x24B1528 Offset: 0x24AD528 VA: 0x24B1528
	public void .ctor() { }
}

