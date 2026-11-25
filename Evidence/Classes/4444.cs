// Namespace: 
public sealed class HiddenBlock : GameBehaviourBase, IBlockFeature, IFeatureProcessor // TypeDefIndex: 4444
{
	// Fields
	[SerializeField]
	private MeshRenderer MeshRenderer; // 0xA0
	[SerializeField]
	private Material HiddenMaterial; // 0xA8
	[CompilerGenerated]
	private Block <Block>k__BackingField; // 0xB0
	private bool _revealed; // 0xB8

	// Properties
	public Block Block { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x23E9B1C Offset: 0x23E5B1C VA: 0x23E9B1C
	public Block get_Block() { }

	[CompilerGenerated]
	// RVA: 0x23E9B24 Offset: 0x23E5B24 VA: 0x23E9B24
	private void set_Block(Block value) { }

	// RVA: 0x23E9B2C Offset: 0x23E5B2C VA: 0x23E9B2C Slot: 6
	protected override void Awake() { }

	// RVA: 0x23E9BA0 Offset: 0x23E5BA0 VA: 0x23E9BA0 Slot: 11
	public override void OnRent() { }

	// RVA: 0x23E9BF8 Offset: 0x23E5BF8 VA: 0x23E9BF8
	public void Reveal() { }

	// RVA: 0x23E9C18 Offset: 0x23E5C18 VA: 0x23E9C18
	public void Open() { }

	// RVA: 0x23E9C44 Offset: 0x23E5C44 VA: 0x23E9C44
	public bool IsRevealed() { }

	// RVA: 0x23E9C4C Offset: 0x23E5C4C VA: 0x23E9C4C Slot: 14
	public bool IsCompatibleWith(Block block) { }

	// RVA: 0x23E9C5C Offset: 0x23E5C5C VA: 0x23E9C5C Slot: 15
	public bool CanBlockToLoseSystem() { }

	// RVA: 0x23E9C64 Offset: 0x23E5C64 VA: 0x23E9C64 Slot: 16
	public void ProcessFeature(FeatureType featureType, string data) { }

	// RVA: 0x23E9C9C Offset: 0x23E5C9C VA: 0x23E9C9C
	public void .ctor() { }
}

