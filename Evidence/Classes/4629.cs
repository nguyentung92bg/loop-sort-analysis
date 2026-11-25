// Namespace: 
public sealed class LoseSystem : SystemBase // TypeDefIndex: 4629
{
	// Fields
	[Inject]
	private GameMachine _gameMachine; // 0x30
	[Inject]
	private Level _level; // 0x38
	[Inject]
	private Conveyor _conveyor; // 0x80
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x88
	[Inject]
	private PlaySessionModule _playSessionModule; // 0x90
	[Inject]
	private ElevatorHoleSystem _elevatorHoleSystem; // 0x98
	[Inject]
	private ISubscriber<CarrierBlockCreateCompleteMessage> _carrierBlockCreateCompleteSub; // 0xA0
	[Inject]
	private ISubscriber<LevelLoseMessage> _levelLoseSub; // 0xA8
	private Filter _enabledCarriers; // 0xB0
	private Filter _conveyorSlotFilter; // 0xB8
	private Stash<BehaviourView<ConveyorSlot>> _conveyorSlots; // 0xC0
	private Stash<BehaviourView<Carrier>> _carriers; // 0xC8
	private Stash<BlockLoop> _blockLoops; // 0xD0
	private Stash<BehaviourView<IceCarrier>> _iceCarriers; // 0xD8
	private bool _canUpdate; // 0xE0
	private bool _wasPlaying; // 0xE1
	private UniTimer _canCompleteCarrierTimer; // 0xE4
	private UniTimer _updateTimer; // 0xF4
	private UniTimer _timeLimitTimer; // 0x104
	private float _timeLimit; // 0x114
	private LoseReason _loseReason; // 0x118
	private LoseConfig _loseConfig; // 0x120
	private IceBreakConfig _iceBreakConfig; // 0x128
	private const float UpdateIntervalSeconds = 0.2;
	private const float CanCompleteCarrierSeconds = 3;

	// Properties
	public float TimeLeft { get; }

	// Methods

	// RVA: 0x24DF11C Offset: 0x24DB11C VA: 0x24DF11C
	public float get_TimeLeft() { }

	// RVA: 0x24DF150 Offset: 0x24DB150 VA: 0x24DF150 Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x24DF35C Offset: 0x24DB35C VA: 0x24DF35C Slot: 9
	public override void OnAwake() { }

	// RVA: 0x24DF648 Offset: 0x24DB648 VA: 0x24DF648 Slot: 10
	public override void OnUpdate(float deltaTime) { }

	// RVA: 0x24DF8B4 Offset: 0x24DB8B4 VA: 0x24DF8B4
	public bool IsConveyorFull() { }

	// RVA: 0x24E0824 Offset: 0x24DC824 VA: 0x24E0824
	private bool CanTransferBlockTo(Carrier carrier, Block element) { }

	// RVA: 0x24E0020 Offset: 0x24DC020 VA: 0x24E0020
	private bool CanCompleteCarrier() { }

	// RVA: 0x24E08AC Offset: 0x24DC8AC VA: 0x24E08AC
	private int GetMinCompleteBlockCount() { }

	// RVA: 0x24E0AF0 Offset: 0x24DCAF0 VA: 0x24E0AF0
	public LoseReason GetLoseReason() { }

	// RVA: 0x24E0AF8 Offset: 0x24DCAF8 VA: 0x24E0AF8
	private void OnCarrierBlockCreateComplete(CarrierBlockCreateCompleteMessage m) { }

	// RVA: 0x24E0B20 Offset: 0x24DCB20 VA: 0x24E0B20
	private void OnLevelLose(LevelLoseMessage m) { }

	// RVA: 0x24E0A1C Offset: 0x24DCA1C VA: 0x24E0A1C
	private static void IncrementColorCount(Dictionary<ColorType, int> colors, Block block) { }

	// RVA: 0x24E0B4C Offset: 0x24DCB4C VA: 0x24E0B4C
	public void .ctor() { }
}

