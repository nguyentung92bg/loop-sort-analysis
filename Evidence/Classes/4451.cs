// Namespace: 
public sealed class MetalBlock : GameBehaviourBase, IBlockFeature, IFeatureProcessor // TypeDefIndex: 4451
{
	// Fields
	[SerializeField]
	private MeshRenderer MeshRenderer; // 0xA0
	[SerializeField]
	private Material MetalMaterial; // 0xA8
	[SerializeField]
	private Mesh MetalMesh; // 0xB0
	[SerializeField]
	private Mesh MetalGroupMesh; // 0xB8
	[SerializeField]
	private GameObject MagnetPrefab; // 0xC0
	[CompilerGenerated]
	private Block <Block>k__BackingField; // 0xC8

	// Properties
	public Block Block { get; set; }
	public GameObject Magnet { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x23EC4BC Offset: 0x23E84BC VA: 0x23EC4BC
	public Block get_Block() { }

	[CompilerGenerated]
	// RVA: 0x23EC4C4 Offset: 0x23E84C4 VA: 0x23EC4C4
	private void set_Block(Block value) { }

	// RVA: 0x23EC4CC Offset: 0x23E84CC VA: 0x23EC4CC
	public GameObject get_Magnet() { }

	// RVA: 0x23EC4D4 Offset: 0x23E84D4 VA: 0x23EC4D4 Slot: 6
	protected override void Awake() { }

	// RVA: 0x23EC548 Offset: 0x23E8548 VA: 0x23EC548 Slot: 11
	public override void OnRent() { }

	// RVA: 0x23EC59C Offset: 0x23E859C VA: 0x23EC59C Slot: 14
	public bool IsCompatibleWith(Block block) { }

	// RVA: 0x23EC5A4 Offset: 0x23E85A4 VA: 0x23EC5A4 Slot: 15
	public bool CanBlockToLoseSystem() { }

	// RVA: 0x23EC5AC Offset: 0x23E85AC VA: 0x23EC5AC Slot: 16
	public void ProcessFeature(FeatureType featureType, string data) { }

	// RVA: 0x23EC748 Offset: 0x23E8748 VA: 0x23EC748
	public void .ctor() { }
}

