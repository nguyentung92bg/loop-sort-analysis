// Namespace: 
public sealed class SurpriseBlock : GameBehaviourBase, IBlockFeature, IFeatureProcessor // TypeDefIndex: 4464
{
	// Fields
	[SerializeField]
	private MeshRenderer MeshRenderer; // 0xA0
	[SerializeField]
	private Material SurpriseMaterial; // 0xA8

	// Methods

	// RVA: 0x23F39C8 Offset: 0x23EF9C8 VA: 0x23F39C8 Slot: 11
	public override void OnRent() { }

	// RVA: 0x23F3A1C Offset: 0x23EFA1C VA: 0x23F3A1C Slot: 14
	public bool IsCompatibleWith(Block block) { }

	// RVA: 0x23F3A24 Offset: 0x23EFA24 VA: 0x23F3A24 Slot: 15
	public bool CanBlockToLoseSystem() { }

	// RVA: 0x23F3A2C Offset: 0x23EFA2C VA: 0x23F3A2C Slot: 16
	public void ProcessFeature(FeatureType featureType, string data) { }

	// RVA: 0x23F3A58 Offset: 0x23EFA58 VA: 0x23F3A58
	public void .ctor() { }
}

