// Namespace: 
public sealed class TunnelCarrier : GameBehaviourBase, IFeatureProcessor // TypeDefIndex: 4544
{
	// Fields
	[SerializeField]
	private StatefulComponent View; // 0xA0
	[SerializeField]
	private List<Transform> Covers; // 0xA8
	[Inject]
	private Conveyor _conveyor; // 0xB0
	private Carrier _carrier; // 0xB8

	// Methods

	// RVA: 0x24AD2EC Offset: 0x24A92EC VA: 0x24AD2EC Slot: 11
	public override void OnRent() { }

	// RVA: 0x24AD38C Offset: 0x24A938C VA: 0x24AD38C Slot: 14
	public void ProcessFeature(FeatureType featureType, string data) { }

	// RVA: 0x24AD5DC Offset: 0x24A95DC VA: 0x24AD5DC
	public void UpdateView() { }

	// RVA: 0x24AD674 Offset: 0x24A9674 VA: 0x24AD674
	public void ApplyCoverMotion() { }

	// RVA: 0x24AD93C Offset: 0x24A993C VA: 0x24AD93C
	public void OnLevelAnimationStart() { }

	// RVA: 0x24AD9A4 Offset: 0x24A99A4 VA: 0x24AD9A4
	public void OnLevelAnimationEnd() { }

	// RVA: 0x24ADAEC Offset: 0x24A9AEC VA: 0x24ADAEC
	public void .ctor() { }
}

