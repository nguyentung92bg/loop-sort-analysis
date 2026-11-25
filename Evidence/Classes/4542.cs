// Namespace: 
public sealed class TagCarrier : GameBehaviourBase, IFeatureProcessor, IBlockTransferHandler // TypeDefIndex: 4542
{
	// Fields
	[SerializeField]
	private GameObject Model; // 0xA0
	[Inject]
	private Level _level; // 0xA8
	private Carrier _carrier; // 0xF0
	private ColorType _requiredColorType; // 0xF8
	private Quaternion _activeRotation; // 0x100
	private Quaternion _inactiveRotation; // 0x110
	private bool _isActive; // 0x120

	// Methods

	// RVA: 0x24AC398 Offset: 0x24A8398 VA: 0x24AC398 Slot: 11
	public override void OnRent() { }

	// RVA: 0x24AC438 Offset: 0x24A8438 VA: 0x24AC438 Slot: 14
	public void ProcessFeature(FeatureType featureType, string data) { }

	// RVA: 0x24AC528 Offset: 0x24A8528 VA: 0x24AC528 Slot: 15
	public bool CanTransferBlock(Block block) { }

	// RVA: 0x24AC548 Offset: 0x24A8548 VA: 0x24AC548 Slot: 16
	public bool IsBetterCarrier(Block block) { }

	// RVA: 0x24AC568 Offset: 0x24A8568 VA: 0x24AC568
	public void AdjustRotation() { }

	// RVA: 0x24AC86C Offset: 0x24A886C VA: 0x24AC86C
	public void SetFlagModel(bool isActive) { }

	// RVA: 0x24AC888 Offset: 0x24A8888 VA: 0x24AC888
	public void SetModelUp() { }

	// RVA: 0x24AC990 Offset: 0x24A8990 VA: 0x24AC990
	public void SetModelDown() { }

	// RVA: 0x24AC9E0 Offset: 0x24A89E0 VA: 0x24AC9E0
	public void ApplyCompleteMotion() { }

	// RVA: 0x24ACB8C Offset: 0x24A8B8C VA: 0x24ACB8C
	public void .ctor() { }
}

