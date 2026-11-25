// Namespace: 
public sealed class ConveyorEndMeshSystem : SystemBase // TypeDefIndex: 4555
{
	// Fields
	[Inject]
	private ConveyorConfig _conveyorConfig; // 0x30
	[Inject]
	private PrefabModule _prefabModule; // 0x38
	[Inject]
	private SplineComputer _splineComputer; // 0x40
	[Inject]
	private Conveyor _conveyor; // 0x48
	[Inject]
	private ISubscriber<LevelBuildCompleteMessage> _levelBuildCompleteSub; // 0x50
	public readonly List<GameObject> EndMeshes; // 0x58
	private Transform _endMeshT; // 0x60

	// Methods

	// RVA: 0x24B2A68 Offset: 0x24AEA68 VA: 0x24B2A68 Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x24B2B88 Offset: 0x24AEB88 VA: 0x24B2B88
	private void OnLevelBuildComplete(LevelBuildCompleteMessage m) { }

	// RVA: 0x24B2EB0 Offset: 0x24AEEB0 VA: 0x24B2EB0
	public void MoveEnd(double percent) { }

	// RVA: 0x24B3014 Offset: 0x24AF014 VA: 0x24B3014
	public void .ctor() { }
}

