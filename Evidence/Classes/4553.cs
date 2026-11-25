// Namespace: 
public sealed class ConveyorColliderSystem : SystemBase // TypeDefIndex: 4553
{
	// Fields
	[Inject]
	private ISubscriber<LevelBuildCompleteMessage> _levelBuildCompleteSub; // 0x30
	[Inject]
	private ConveyorConfig _conveyorConfig; // 0x38
	[Inject]
	private SplineComputer _splineComputer; // 0x40
	[Inject]
	private SplineMesh _splineMesh; // 0x48
	[Inject]
	private Conveyor _conveyor; // 0x50

	// Methods

	// RVA: 0x24B277C Offset: 0x24AE77C VA: 0x24B277C Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x24B28AC Offset: 0x24AE8AC VA: 0x24B28AC
	private void OnLevelBuildComplete(LevelBuildCompleteMessage m) { }

	// RVA: 0x24B2A60 Offset: 0x24AEA60 VA: 0x24B2A60
	public void .ctor() { }
}

