// Namespace: 
public sealed class SandFlowSystem : SystemBase // TypeDefIndex: 4602
{
	// Fields
	private static readonly ProfilerMarker UpdateMarker; // 0x0
	private static readonly int BaseColorId; // 0x8
	private static readonly int ColorId; // 0xC
	private const float TravelSpeedTime = 0.3;
	private const float ReformEnd = 0.9;
	private const float BatchShare = 0.5;
	private const float TriggerMargin = 0.25;
	private const float IntakeRefreshInterval = 0.25;
	private const float RewindHold = 0.12;
	private const float RewindFallMin = 0.2;
	private const float RewindFallMax = 0.38;
	private const float JellySettle = 0.08;
	private const float RejoinEase = 0.5;
	private const float JellyPieceTolerance = 0.02;
	private const float NeckFrequency = 3.5;
	private const float NeckDamping = 0.35;
	private const int PathSamples = 256;
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x30
	[Inject]
	private PlaySessionModule _playSessionModule; // 0x38
	[Inject]
	private Conveyor _conveyor; // 0x40
	[Inject]
	private ConveyorConfig _conveyorConfig; // 0x48
	[Inject]
	private CarrierConfig _carrierConfig; // 0x50
	[Inject]
	private BlockConfig _blockConfig; // 0x58
	[Inject]
	private SplineComputer _splineComputer; // 0x60
	[Inject]
	private Camera _camera; // 0x68
	[Inject]
	private SettingsModule _settingsModule; // 0x70
	[Inject]
	private Colors _palette; // 0x78
	[Inject]
	private BlockTransferSystem _blockTransferSystem; // 0x80
	[Inject]
	private HapticModule _hapticModule; // 0x88
	[Inject]
	private ISubscriber<BlockTakeOffMessage> _blockTakeOffSub; // 0x90
	[Inject]
	private ISubscriber<GameBehaviourReturnedMessage> _gameBehaviourReturnedSub; // 0x98
	[Inject]
	private ISubscriber<LevelBuildCompleteMessage> _levelBuildCompleteSub; // 0xA0
	[Inject]
	private ISubscriber<BoosterCompletedMessage> _boosterCompletedSub; // 0xA8
	private static readonly Predicate<Block> OutsideCarrier; // 0x10
	private static readonly Comparison<Block> CarrierOrder; // 0x18
	private readonly SandFlowPacket[] _packets; // 0xB0
	private readonly Block[] _owners; // 0xB8
	private readonly float[] _shifts; // 0xC0
	private readonly float[] _order; // 0xC8
	private readonly int[] _orderIndices; // 0xD0
	private readonly List<Block> _solids; // 0xD8
	private readonly HashSet<Block> _solidBlocks; // 0xE0
	private readonly List<float> _solidOffsets; // 0xE8
	private readonly Dictionary<Block, int> _indices; // 0xF0
	private readonly Dictionary<MeshRenderer, bool> _hidden; // 0xF8
	private readonly Dictionary<Material, Color> _colors; // 0x100
	private readonly HashSet<Block> _rewinds; // 0x108
	private readonly List<SandFlowSystem.Pour> _takeOffs; // 0x110
	private readonly List<Material> _materials; // 0x118
	private readonly List<Block> _batch; // 0x120
	private readonly HashSet<Block> _undoBlocks; // 0x128
	private readonly HashSet<Carrier> _readyCarriers; // 0x130
	private readonly HashSet<Carrier> _pendingCarriers; // 0x138
	private readonly HashSet<Carrier> _refreshedCarriers; // 0x140
	private readonly List<Carrier> _idleCarriers; // 0x148
	private HashSet<MeshRenderer> _jellied; // 0x150
	private HashSet<MeshRenderer> _jelliedNext; // 0x158
	private SandConfig _config; // 0x160
	private SandFlowRenderer _renderer; // 0x168
	private Filter _filter; // 0x170
	private Stash<BehaviourView<Block>> _blocks; // 0x178
	private Stash<BehaviourView<Carrier>> _carriers; // 0x180
	private int _count; // 0x188
	private int _layer; // 0x18C
	private uint _seed; // 0x190
	private int _travelFrame; // 0x194
	private float _spread; // 0x198
	private float _spacingScale; // 0x19C
	private float _travelSpeed; // 0x1A0
	private float _grainRadius; // 0x1A4
	private float _beltHalfWidth; // 0x1A8
	private float _jumpMultiplier; // 0x1AC
	private AudioSource _pourSound; // 0x1B0
	private AudioSource _reformSound; // 0x1B8
	private bool _reformFlying; // 0x1C0
	private bool _liquid; // 0x1C1
	private bool _jelly; // 0x1C2
	private SandJellyRenderer _jellyRenderer; // 0x1C8
	[TupleElementNames(new[] { "Min", "Max" })]
	private readonly Dictionary<Carrier, ValueTuple<Vector3, Vector3>> _trays; // 0x1D0
	private readonly Dictionary<Carrier, SandFlowSystem.JellyState> _jellyStates; // 0x1D8
	private readonly Dictionary<Carrier, float> _jellyExtra; // 0x1E0
	private readonly Dictionary<Carrier, float> _jellyNecks; // 0x1E8
	private readonly Dictionary<Block, float> _rejoins; // 0x1F0
	private readonly HashSet<Block> _lifted; // 0x1F8
	private readonly Vector4[] _jellyPieceColors; // 0x200
	private readonly List<Block> _jellyBlocks; // 0x208
	private readonly List<Vector3> _jellyOffsets; // 0x210
	private readonly Dictionary<Block, float> _jellyShares; // 0x218
	private readonly Dictionary<Block, Carrier> _jellyTargets; // 0x220
	private HashSet<Block> _hiddenShown; // 0x228
	private HashSet<Block> _hiddenNext; // 0x230
	private readonly Dictionary<Block, float> _reveals; // 0x238
	private Shader _hiddenShader; // 0x240
	private Material _hiddenMaterial; // 0x248
	private static readonly Comparison<SandFlowSystem.CarrierTrigger> NearestTrigger; // 0x20
	private readonly Dictionary<Block, float> _driven; // 0x250
	private readonly Dictionary<Block, SandFlowSystem.Landing> _landings; // 0x258
	private readonly List<SandFlowSystem.CarrierTrigger> _triggers; // 0x260
	private readonly List<SandFlowSystem.CarrierTrigger> _crossed; // 0x268
	private readonly List<Block> _offered; // 0x270
	private static readonly Comparison<SandFlowSystem.Approach> Closest; // 0x28
	private readonly List<SandFlowSystem.Approach> _approaches; // 0x278
	private HashSet<ValueTuple<Block, Carrier>> _approaching; // 0x280
	private HashSet<ValueTuple<Block, Carrier>> _approachingNext; // 0x288
	private int _intakeSignature; // 0x290
	private float _intakeRefresh; // 0x294
	private readonly HashSet<ValueTuple<Block, Carrier>> _sourcePasses; // 0x298
	private Predicate<ValueTuple<Block, Carrier>> _leftWindow; // 0x2A0
	private Stash<BlockTransferCarrier> _transferCarriers; // 0x2A8
	private bool _configDirty; // 0x2B0
	private int _cameraWidth; // 0x2B4
	private int _cameraHeight; // 0x2B8
	private float _cameraSize; // 0x2BC
	private bool _enabled; // 0x2C0

	// Properties
	private float IntakeReach { get; }
	public bool IsActive { get; }
	public float PourDelayScale { get; }
	public float ConveyorSpeedScale { get; }
	public float OverlayLift { get; }

	// Methods

	// RVA: 0x24C5A70 Offset: 0x24C1A70 VA: 0x24C5A70 Slot: 9
	public override void OnAwake() { }

	// RVA: 0x24C5C40 Offset: 0x24C1C40 VA: 0x24C5C40 Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x24C6418 Offset: 0x24C2418 VA: 0x24C6418
	private void OnLevelBuildComplete(LevelBuildCompleteMessage m) { }

	// RVA: 0x24C70E4 Offset: 0x24C30E4 VA: 0x24C70E4
	private void OnBlockTakeOff(BlockTakeOffMessage m) { }

	// RVA: 0x24C728C Offset: 0x24C328C VA: 0x24C728C
	private void BeginPour(SandFlowSystem.Pour pour) { }

	// RVA: 0x24C7624 Offset: 0x24C3624 VA: 0x24C7624
	private void StartPour(Block block, Vector3 destination, float duration) { }

	// RVA: 0x24C7D1C Offset: 0x24C3D1C VA: 0x24C7D1C
	private void ShowCube(Block block, float share) { }

	// RVA: 0x24C7DE8 Offset: 0x24C3DE8 VA: 0x24C7DE8
	private void OnBoosterCompleted(BoosterCompletedMessage m) { }

	// RVA: 0x24C7F70 Offset: 0x24C3F70 VA: 0x24C7F70
	private void OnGameBehaviourReturned(GameBehaviourReturnedMessage m) { }

	// RVA: 0x24C80EC Offset: 0x24C40EC VA: 0x24C80EC Slot: 10
	public override void OnUpdate(float deltaTime) { }

	// RVA: 0x24C81D4 Offset: 0x24C41D4 VA: 0x24C81D4
	private void Step(float deltaTime) { }

	// RVA: 0x24CBEFC Offset: 0x24C7EFC VA: 0x24CBEFC
	private void ApplyConfig() { }

	// RVA: 0x24C9B18 Offset: 0x24C5B18 VA: 0x24C9B18
	private void AdvanceTravel() { }

	// RVA: 0x24CB668 Offset: 0x24C7668 VA: 0x24CB668
	private void ArrangePackets(float deltaTime) { }

	// RVA: 0x24CBC08 Offset: 0x24C7C08 VA: 0x24CBC08
	private void UpdateTravelSpeed(float deltaTime) { }

	// RVA: 0x24CBC80 Offset: 0x24C7C80 VA: 0x24CBC80
	private void DriveBlocks() { }

	// RVA: 0x24CD970 Offset: 0x24C9970 VA: 0x24CD970
	private float get_IntakeReach() { }

	// RVA: 0x24CD890 Offset: 0x24C9890 VA: 0x24CD890
	private void OfferIntake() { }

	// RVA: 0x24CD998 Offset: 0x24C9998 VA: 0x24CD998
	private void CollectIntake(float length) { }

	// RVA: 0x24CE488 Offset: 0x24CA488 VA: 0x24CE488
	private void Offer(Block block, Carrier carrier) { }

	// RVA: 0x24CE244 Offset: 0x24CA244 VA: 0x24CE244
	private int IntakeSignature() { }

	// RVA: 0x24CE56C Offset: 0x24CA56C VA: 0x24CE56C
	public bool DrivesIntake(Block block) { }

	// RVA: 0x24CE5DC Offset: 0x24CA5DC VA: 0x24CE5DC
	public bool get_IsActive() { }

	// RVA: 0x24CE5E4 Offset: 0x24CA5E4 VA: 0x24CE5E4
	public float get_PourDelayScale() { }

	// RVA: 0x24CE5FC Offset: 0x24CA5FC VA: 0x24CE5FC
	public float get_ConveyorSpeedScale() { }

	// RVA: 0x24CE614 Offset: 0x24CA614 VA: 0x24CE614
	public float get_OverlayLift() { }

	// RVA: 0x24CD0DC Offset: 0x24C90DC VA: 0x24CD0DC
	private bool Sweep(Block block, float distance) { }

	// RVA: 0x24CD748 Offset: 0x24C9748 VA: 0x24CD748
	private void Drive(Block block, float distance) { }

	// RVA: 0x24C9B8C Offset: 0x24C5B8C VA: 0x24C9B8C
	private void AddSolid(Block block) { }

	// RVA: 0x24CD06C Offset: 0x24C906C VA: 0x24CD06C
	private float GetCenter(in SandFlowPacket packet) { }

	// RVA: 0x24CE62C Offset: 0x24CA62C VA: 0x24CE62C
	private bool IsBehindLine(in SandFlowPacket packet) { }

	// RVA: 0x24CA954 Offset: 0x24C6954 VA: 0x24CA954
	private void BeginReform(int index, ref SandFlowPacket packet, Block block, Carrier carrier) { }

	// RVA: 0x24CB068 Offset: 0x24C7068 VA: 0x24CB068
	private void RefreshFilledCarriers() { }

	// RVA: 0x24CE6B8 Offset: 0x24CA6B8 VA: 0x24CE6B8
	private bool HasBlockInFlight(Carrier carrier) { }

	// RVA: 0x24CAD1C Offset: 0x24C6D1C VA: 0x24CAD1C
	private void StaggerBatch() { }

	// RVA: 0x24CA368 Offset: 0x24C6368 VA: 0x24CA368
	private Vector3 HomeOf(Block block) { }

	// RVA: 0x24CE9DC Offset: 0x24CA9DC VA: 0x24CE9DC
	private static Vector3 JellyHome(Carrier carrier, in SandFlowSystem.JellyShape shape, Vector3Int coordinate) { }

	// RVA: 0x24CA4C8 Offset: 0x24C64C8 VA: 0x24CA4C8
	private void DrawLanding(Block block, float share, bool undo) { }

	// RVA: 0x24CA0D8 Offset: 0x24C60D8 VA: 0x24CA0D8
	private void DrawCube(Block block, Mesh mesh, Matrix4x4 frame, float share) { }

	// RVA: 0x24C7240 Offset: 0x24C3240 VA: 0x24C7240
	private float JumpPace() { }

	// RVA: 0x24C726C Offset: 0x24C326C VA: 0x24C726C
	private static float JumpDuration(Block block) { }

	// RVA: 0x24C7750 Offset: 0x24C3750 VA: 0x24C7750
	private bool TryAdd(Block block, Vector3 destination, out int index) { }

	// RVA: 0x24C9E5C Offset: 0x24C5E5C VA: 0x24C9E5C
	private void AddJelly(Carrier carrier, float amount) { }

	// RVA: 0x24C9FD0 Offset: 0x24C5FD0 VA: 0x24C9FD0
	private void AddNeck(Carrier carrier, float strength) { }

	// RVA: 0x24CACA8 Offset: 0x24C6CA8 VA: 0x24CACA8
	private static float LeaveNeck(float age) { }

	// RVA: 0x24C9F60 Offset: 0x24C5F60 VA: 0x24C9F60
	private static float EnterNeck(float share) { }

	// RVA: 0x24CEC04 Offset: 0x24CAC04 VA: 0x24CEC04
	private static float Pulse(float value, float rise, float hold, float fall) { }

	// RVA: 0x24CC384 Offset: 0x24C8384 VA: 0x24CC384
	private void UpdateJelly() { }

	// RVA: 0x24CF08C Offset: 0x24CB08C VA: 0x24CF08C
	private bool IsJellyMoving(Carrier carrier, List<Block> blocks) { }

	// RVA: 0x24CF588 Offset: 0x24CB588 VA: 0x24CF588
	private void DrawJellyPieces(Carrier carrier, SandFlowSystem.JellyState state, float fill, int groupSize) { }

	// RVA: 0x24CFA20 Offset: 0x24CBA20 VA: 0x24CFA20
	private void DrawJelly(Carrier carrier, SandFlowSystem.JellyState state, float fill, int groupSize) { }

	// RVA: 0x24CFFD4 Offset: 0x24CBFD4 VA: 0x24CFFD4
	private static void UpdateNeck(SandFlowSystem.JellyState state, float target) { }

	// RVA: 0x24CEC6C Offset: 0x24CAC6C VA: 0x24CEC6C
	private bool IsHiddenJelly(Carrier carrier, Block block) { }

	// RVA: 0x24CEFB0 Offset: 0x24CAFB0 VA: 0x24CEFB0
	private float Revealed(Block block) { }

	// RVA: 0x24CEE3C Offset: 0x24CAE3C VA: 0x24CEE3C
	private void Jelly(MeshRenderer meshRenderer) { }

	// RVA: 0x24C9CC8 Offset: 0x24C5CC8 VA: 0x24C9CC8
	private bool IsJelly(Block block) { }

	// RVA: 0x24CEEF8 Offset: 0x24CAEF8 VA: 0x24CEEF8
	private static bool IsShown(Carrier carrier, Block block) { }

	// RVA: 0x24CE8C4 Offset: 0x24CA8C4 VA: 0x24CE8C4
	private SandFlowSystem.JellyShape Shape(Carrier carrier) { }

	// RVA: 0x24D00EC Offset: 0x24CC0EC VA: 0x24D00EC
	private ValueTuple<Vector3, Vector3> Tray(Carrier carrier) { }

	// RVA: 0x24D06C8 Offset: 0x24CC6C8 VA: 0x24D06C8
	private void RestoreJelly() { }

	// RVA: 0x24CEA34 Offset: 0x24CAA34 VA: 0x24CEA34
	private Color GetColor(Material material) { }

	// RVA: 0x24C7BC4 Offset: 0x24C3BC4 VA: 0x24C7BC4
	private void Restore(Block block) { }

	// RVA: 0x24C73AC Offset: 0x24C33AC VA: 0x24C73AC
	private void RemoveAt(int index) { }

	// RVA: 0x24C638C Offset: 0x24C238C VA: 0x24C638C
	private static AudioSource CreateLoop(GameObject owner) { }

	// RVA: 0x24CCF54 Offset: 0x24C8F54 VA: 0x24CCF54
	private void UpdateSounds() { }

	// RVA: 0x24D0AEC Offset: 0x24CCAEC VA: 0x24D0AEC
	private void FadeLoop(AudioSource source, AudioClip clip, float volume, bool mute) { }

	// RVA: 0x24D0CC4 Offset: 0x24CCCC4 VA: 0x24D0CC4 Slot: 11
	public override void Dispose() { }

	// RVA: 0x24C6900 Offset: 0x24C2900 VA: 0x24C6900
	private void Shutdown() { }

	// RVA: 0x24D0D74 Offset: 0x24CCD74 VA: 0x24D0D74
	private void Release(Block block) { }

	// RVA: 0x24D0EF8 Offset: 0x24CCEF8 VA: 0x24D0EF8
	public void .ctor() { }

	// RVA: 0x24D1960 Offset: 0x24CD960 VA: 0x24D1960
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x24D1C08 Offset: 0x24CDC08 VA: 0x24D1C08
	private bool <OnAwake>b__114_0(ValueTuple<Block, Carrier> pair) { }
}

