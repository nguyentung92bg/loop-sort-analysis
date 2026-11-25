// Namespace: 
public sealed class ElevatorHoleSystem : SystemBase // TypeDefIndex: 4524
{
	// Fields
	[Inject]
	private LevelSheet.Level _level; // 0x30
	[Inject]
	private Features _features; // 0x38
	[Inject]
	private PrefabModule _prefabModule; // 0x40
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x48
	[Inject]
	private ISubscriber<LevelBuildCompleteMessage> _levelBuildCompleteSub; // 0x50
	[Inject]
	private ISubscriber<CarrierCompleteMessage> _carrierCompleteSub; // 0x58
	[Inject]
	private ISubscriber<LevelAnimationEnterStartMessage> _levelAnimationEnterStartSub; // 0x60
	[Inject]
	private ISubscriber<LevelAnimationCarrierCompleteMessage> _levelAnimationCarrierCompleteSub; // 0x68
	[Inject]
	private ISubscriber<LevelWinMessage> _levelWinSub; // 0x70
	private Stash<BehaviourView<Carrier>> _carriers; // 0x78
	private Stash<ElevatorMember> _elevatorMembers; // 0x80
	private LevelAnimationConfig _levelAnimationConfig; // 0x88
	private int _movingCount; // 0x90
	private readonly List<ElevatorHole> _holes; // 0x98
	private readonly Dictionary<Carrier, ElevatorHole> _holeByCarrier; // 0xA0

	// Methods

	// RVA: 0x24A2B54 Offset: 0x249EB54 VA: 0x24A2B54 Slot: 9
	public override void OnAwake() { }

	// RVA: 0x24A2C2C Offset: 0x249EC2C VA: 0x24A2C2C Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x24A30F4 Offset: 0x249F0F4 VA: 0x24A30F4
	public bool IsMoving() { }

	// RVA: 0x24A3104 Offset: 0x249F104 VA: 0x24A3104
	private void OnLevelBuildComplete(LevelBuildCompleteMessage m) { }

	// RVA: 0x24A3AC8 Offset: 0x249FAC8 VA: 0x24A3AC8
	private void OnCarrierComplete(CarrierCompleteMessage m) { }

	// RVA: 0x24A3C8C Offset: 0x249FC8C VA: 0x24A3C8C
	private void OnLevelAnimationEnterStart(LevelAnimationEnterStartMessage m) { }

	// RVA: 0x24A3E30 Offset: 0x249FE30 VA: 0x24A3E30
	private void OnLevelAnimationCarrierComplete(LevelAnimationCarrierCompleteMessage m) { }

	// RVA: 0x24A4014 Offset: 0x24A0014 VA: 0x24A4014
	private void OnLevelWin(LevelWinMessage m) { }

	[AsyncStateMachine(typeof(ElevatorHoleSystem.<Move>d__23))]
	// RVA: 0x24A3BD8 Offset: 0x249FBD8 VA: 0x24A3BD8
	private UniTaskVoid Move(UniTask motion) { }

	// RVA: 0x24A3108 Offset: 0x249F108 VA: 0x24A3108
	private void Create() { }

	// RVA: 0x24A41E0 Offset: 0x24A01E0 VA: 0x24A41E0
	private Carrier FindCarrier(CarrierSheet.CarrierType carrierType) { }

	// RVA: 0x24A4340 Offset: 0x24A0340 VA: 0x24A4340
	public void .ctor() { }
}

