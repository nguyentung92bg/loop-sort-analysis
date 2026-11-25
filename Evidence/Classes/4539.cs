// Namespace: 
public sealed class LongCarrier : GameBehaviourBase, IFeatureProcessor, IBlockTransferHandler // TypeDefIndex: 4539
{
	// Fields
	private const int MinCapacityGroups = 5;
	private const int MaxCapacityGroups = 12;
	private const int AuthoredCapacityGroups = 12;
	[SerializeField]
	private List<Transform> FrontParts; // 0xA0
	[SerializeField]
	private List<Transform> MiddleParts; // 0xA8
	[SerializeField]
	private List<Renderer> StretchParts; // 0xB0
	[Inject]
	private Level _level; // 0xB8
	private Carrier _carrier; // 0x100
	private BoxCollider _collider; // 0x108
	private ColorType _targetColorType; // 0x110
	private bool _hasTargetColor; // 0x118
	private readonly List<Vector3> _frontPartPositions; // 0x120
	private readonly List<Vector3> _middlePartPositions; // 0x128
	private readonly List<Vector3> _stretchPartPositions; // 0x130
	private readonly List<Vector3> _stretchPartScales; // 0x138
	private readonly List<Bounds> _stretchPartBounds; // 0x140
	private Vector3 _colliderCenter; // 0x148
	private Vector3 _colliderSize; // 0x154

	// Methods

	// RVA: 0x24AA698 Offset: 0x24A6698 VA: 0x24AA698 Slot: 6
	protected override void Awake() { }

	// RVA: 0x24AAF3C Offset: 0x24A6F3C VA: 0x24AAF3C Slot: 11
	public override void OnRent() { }

	// RVA: 0x24AAF58 Offset: 0x24A6F58 VA: 0x24AAF58 Slot: 14
	public void ProcessFeature(FeatureType featureType, string data) { }

	// RVA: 0x24ABBA8 Offset: 0x24A7BA8 VA: 0x24ABBA8 Slot: 15
	public bool CanTransferBlock(Block block) { }

	// RVA: 0x24ABBD8 Offset: 0x24A7BD8 VA: 0x24ABBD8 Slot: 16
	public bool IsBetterCarrier(Block block) { }

	// RVA: 0x24AB4A8 Offset: 0x24A74A8 VA: 0x24AB4A8
	private static void ShiftParts(List<Transform> parts, List<Vector3> positions, Vector3 shift) { }

	// RVA: 0x24AB2E8 Offset: 0x24A72E8 VA: 0x24AB2E8
	private void PlaceGroupBlocks(int capacityGroups) { }

	// RVA: 0x24AB3D4 Offset: 0x24A73D4 VA: 0x24AB3D4
	private Vector3 GetGroupCenter(int group, int capacityGroups) { }

	// RVA: 0x24AB5E8 Offset: 0x24A75E8 VA: 0x24AB5E8
	private void StretchPart(Transform partT, Bounds bounds, Vector3 basePosition, Vector3 baseScale, float delta) { }

	// RVA: 0x24AADA8 Offset: 0x24A6DA8 VA: 0x24AADA8
	private static Bounds GetLocalBounds(Renderer renderer) { }

	// RVA: 0x24AB9AC Offset: 0x24A79AC VA: 0x24AB9AC
	private void StretchCollider(Vector3 shift) { }

	// RVA: 0x24ABC08 Offset: 0x24A7C08 VA: 0x24ABC08
	private static int GetMainAxis(Vector3 direction) { }

	// RVA: 0x24ABC30 Offset: 0x24A7C30 VA: 0x24ABC30
	public void .ctor() { }
}

