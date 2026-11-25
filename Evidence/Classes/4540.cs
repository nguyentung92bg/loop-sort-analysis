// Namespace: 
public sealed class RockCarrier : GameBehaviourBase, IFeatureProcessor, ILevelAnimationListener, IBlockTransferHandler // TypeDefIndex: 4540
{
	// Fields
	[SerializeField]
	private Transform Barrier; // 0xA0
	[SerializeField]
	private Transform Model; // 0xA8
	private Carrier _carrier; // 0xB0
	private float _originalLocalPositionY; // 0xB8

	// Methods

	// RVA: 0x24ABD9C Offset: 0x24A7D9C VA: 0x24ABD9C Slot: 6
	protected override void Awake() { }

	// RVA: 0x24ABE2C Offset: 0x24A7E2C VA: 0x24ABE2C Slot: 14
	public void ProcessFeature(FeatureType featureType, string data) { }

	// RVA: 0x24ABF18 Offset: 0x24A7F18 VA: 0x24ABF18
	public void ApplyCompleteMotion() { }

	// RVA: 0x24ABFCC Offset: 0x24A7FCC VA: 0x24ABFCC Slot: 15
	public void OnLevelAnimationStart() { }

	// RVA: 0x24AC070 Offset: 0x24A8070 VA: 0x24AC070 Slot: 16
	public void OnLevelAnimationComplete() { }

	// RVA: 0x24AC114 Offset: 0x24A8114 VA: 0x24AC114 Slot: 17
	public bool CanTransferBlock(Block block) { }

	// RVA: 0x24AC11C Offset: 0x24A811C VA: 0x24AC11C Slot: 18
	public bool IsBetterCarrier(Block block) { }

	// RVA: 0x24AC1A8 Offset: 0x24A81A8 VA: 0x24AC1A8
	public void .ctor() { }
}

