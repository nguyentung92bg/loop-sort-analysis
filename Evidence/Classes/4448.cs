// Namespace: 
public sealed class KeyBlockGroup : GameBehaviourBase, IBlockFeature // TypeDefIndex: 4448
{
	// Fields
	[Inject]
	private IPublisher<KeyBlockCollectMessage> _keyBlockCollectPub; // 0xA0
	[CompilerGenerated]
	[SerializeField]
	private Transform <Model>k__BackingField; // 0xA8
	[CompilerGenerated]
	private ColorType <ColorType>k__BackingField; // 0xB0
	private bool _isCollected; // 0xB8
	private Block _firstBlock; // 0xC0
	private Vector3 _positionOffset; // 0xC8
	private readonly List<Block> _blocks; // 0xD8

	// Properties
	public Transform Model { get; set; }
	public ColorType ColorType { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x23EB550 Offset: 0x23E7550 VA: 0x23EB550
	public Transform get_Model() { }

	[CompilerGenerated]
	// RVA: 0x23EB558 Offset: 0x23E7558 VA: 0x23EB558
	private void set_Model(Transform value) { }

	[CompilerGenerated]
	// RVA: 0x23EB560 Offset: 0x23E7560 VA: 0x23EB560
	public ColorType get_ColorType() { }

	[CompilerGenerated]
	// RVA: 0x23EB568 Offset: 0x23E7568 VA: 0x23EB568
	private void set_ColorType(ColorType value) { }

	// RVA: 0x23EB570 Offset: 0x23E7570 VA: 0x23EB570
	private void Update() { }

	// RVA: 0x23EB5EC Offset: 0x23E75EC VA: 0x23EB5EC Slot: 12
	public override void OnReturn() { }

	// RVA: 0x23EB7E8 Offset: 0x23E77E8 VA: 0x23EB7E8
	public void Initialize() { }

	// RVA: 0x23EBA04 Offset: 0x23E7A04 VA: 0x23EBA04
	public void SetColorType(ColorType colorType) { }

	// RVA: 0x23EBA0C Offset: 0x23E7A0C VA: 0x23EBA0C
	public void AddBlock(Block block) { }

	// RVA: 0x23EBA78 Offset: 0x23E7A78 VA: 0x23EBA78
	public void Collect() { }

	// RVA: 0x23EB6EC Offset: 0x23E76EC VA: 0x23EB6EC
	public void ResetModel() { }

	// RVA: 0x23EBB48 Offset: 0x23E7B48 VA: 0x23EBB48 Slot: 14
	public bool IsCompatibleWith(Block block) { }

	// RVA: 0x23EBB50 Offset: 0x23E7B50 VA: 0x23EBB50 Slot: 15
	public bool CanBlockToLoseSystem() { }

	// RVA: 0x23EBB60 Offset: 0x23E7B60 VA: 0x23EBB60
	public void .ctor() { }
}

