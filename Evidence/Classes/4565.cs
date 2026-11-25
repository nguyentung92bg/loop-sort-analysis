// Namespace: 
public sealed class ConveyorSpeedSystem : SystemBase // TypeDefIndex: 4565
{
	// Fields
	[Inject]
	private Conveyor _conveyor; // 0x30
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x38
	[Inject]
	private GameMachine _gameMachine; // 0x40
	[Inject]
	private PlaySessionModule _playSessionModule; // 0x48
	private Filter _filter; // 0x50
	private Stash<BehaviourView<Carrier>> _carriers; // 0x58
	private PaceConfig _paceConfig; // 0x60
	private RvMaxConfig _rvMaxConfig; // 0x68
	private float _speedBoostRemainingSeconds; // 0x70

	// Properties
	public float SpeedBoostRemainingSeconds { get; }

	// Methods

	// RVA: 0x24B567C Offset: 0x24B167C VA: 0x24B567C Slot: 9
	public override void OnAwake() { }

	// RVA: 0x24B58A8 Offset: 0x24B18A8 VA: 0x24B58A8 Slot: 10
	public override void OnUpdate(float deltaTime) { }

	// RVA: 0x24B5B40 Offset: 0x24B1B40 VA: 0x24B5B40
	public bool IsLastCarrier() { }

	// RVA: 0x24B6098 Offset: 0x24B2098 VA: 0x24B6098
	public float get_SpeedBoostRemainingSeconds() { }

	// RVA: 0x24B5DDC Offset: 0x24B1DDC VA: 0x24B5DDC
	public bool IsSpeedBoostActive() { }

	// RVA: 0x24B60A0 Offset: 0x24B20A0 VA: 0x24B60A0
	public void SetSpeedBoostActive(bool isActive) { }

	// RVA: 0x24B6128 Offset: 0x24B2128 VA: 0x24B6128
	public void AddSpeedBoost(float seconds) { }

	// RVA: 0x24B6134 Offset: 0x24B2134 VA: 0x24B6134
	public void SetSpeedBoostRemainingSeconds(float seconds) { }

	// RVA: 0x24B5EBC Offset: 0x24B1EBC VA: 0x24B5EBC
	private void ConsumeSpeedBoost(float deltaTime) { }

	// RVA: 0x24B5CF8 Offset: 0x24B1CF8 VA: 0x24B5CF8
	public bool IsHoldInputActive() { }

	// RVA: 0x24B61DC Offset: 0x24B21DC VA: 0x24B61DC
	public void .ctor() { }
}

