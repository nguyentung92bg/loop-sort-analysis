// Namespace: 
public sealed class ConveyorCapacityBoosterSystem : SystemBase // TypeDefIndex: 4473
{
	// Fields
	[Inject]
	private ConveyorSlotCreateSystem _conveyorSlotCreateSystem; // 0x30
	[Inject]
	private PrefabModule _prefabModule; // 0x38
	[Inject]
	private Particles _particles; // 0x40
	[Inject]
	private SplineComputer _splineComputer; // 0x48
	[Inject]
	private SandFlowSystem _sandFlowSystem; // 0x50
	[Inject]
	private Conveyor _conveyor; // 0x58

	// Methods

	// RVA: 0x23F8638 Offset: 0x23F4638 VA: 0x23F8638
	public void IncreaseCapacity(int units = 1) { }

	// RVA: 0x23F9100 Offset: 0x23F5100 VA: 0x23F9100
	private void PlayConveyorParticle() { }

	// RVA: 0x23F92D0 Offset: 0x23F52D0 VA: 0x23F92D0
	public void .ctor() { }
}

