// Namespace: 
public sealed class LevelBuildSystem : SystemBase // TypeDefIndex: 4624
{
	// Fields
	[Inject]
	private PrefabModule _prefabModule; // 0x30
	[Inject]
	private SplineComputer _splineComputer; // 0x38
	[Inject]
	private LevelSheet.Level _level; // 0x40
	[Inject]
	private Conveyor _conveyor; // 0x48
	[Inject]
	private ConveyorConfig _conveyorConfig; // 0x50
	[Inject]
	private CarrierConfig _carrierConfig; // 0x58
	[Inject]
	private Carriers _carriers; // 0x60
	[Inject]
	private BlockConfig _blockConfig; // 0x68
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x70
	[Inject]
	private IPublisher<LevelBuildCompleteMessage> _levelBuildCompletePub; // 0x78
	[Inject]
	private IPublisher<CameraUpdateBoundsMessage> _cameraUpdateBoundsPub; // 0x80
	private Transform _parent; // 0x88
	private SplineSheet.Layout _splineRef; // 0x90
	private LoseConfig _loseConfig; // 0x98

	// Methods

	// RVA: 0x24DBE8C Offset: 0x24D7E8C VA: 0x24DBE8C Slot: 9
	public override void OnAwake() { }

	[AsyncStateMachine(typeof(LevelBuildSystem.<Build>d__15))]
	// RVA: 0x24DBF18 Offset: 0x24D7F18 VA: 0x24DBF18
	private UniTaskVoid Build() { }

	// RVA: 0x24DBFA8 Offset: 0x24D7FA8 VA: 0x24DBFA8
	private void CreateSplinePoints(List<SplineSheet.Cell> cells) { }

	// RVA: 0x24DC434 Offset: 0x24D8434 VA: 0x24DC434
	private void CreateCarriers(List<SplineSheet.Cell> cells) { }

	// RVA: 0x24DCF04 Offset: 0x24D8F04 VA: 0x24DCF04
	private void CreateElevatorCarriers(CarrierSheet.CarrierType hostType, Transform hostT) { }

	// RVA: 0x24DC368 Offset: 0x24D8368 VA: 0x24DC368
	private void CreateSplinePoint(int idx, int x, int y, float height) { }

	// RVA: 0x24DCA7C Offset: 0x24D8A7C VA: 0x24DCA7C
	private Carrier CreateCarrier(CarrierSheet.CarrierType carrierType) { }

	// RVA: 0x24DD2B4 Offset: 0x24D92B4 VA: 0x24DD2B4
	private ConveyorView CreateConveyorView() { }

	// RVA: 0x24DD310 Offset: 0x24D9310 VA: 0x24DD310
	private void ApplySplineSubdivide() { }

	// RVA: 0x24DD598 Offset: 0x24D9598 VA: 0x24DD598
	private void ApplyCameraRotation() { }

	// RVA: 0x24DC950 Offset: 0x24D8950 VA: 0x24DC950
	private Vector3 ParseWorldOffset(string[] s1, int x, int y, Quaternion rotation) { }

	// RVA: 0x24DC928 Offset: 0x24D8928 VA: 0x24DC928
	private float ParseAngle(string[] s1) { }

	// RVA: 0x24DC300 Offset: 0x24D8300 VA: 0x24DC300
	private float ParseFloat(string s) { }

	// RVA: 0x24DD644 Offset: 0x24D9644 VA: 0x24DD644
	private void ApplyBeltLength() { }

	// RVA: 0x24DD6BC Offset: 0x24D96BC VA: 0x24DD6BC
	private void SetCarrierBlockArgs() { }

	// RVA: 0x24DDBE8 Offset: 0x24D9BE8 VA: 0x24DDBE8
	public void .ctor() { }
}

