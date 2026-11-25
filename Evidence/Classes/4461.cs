// Namespace: 
public sealed class MetalBlockSystem : SystemBase // TypeDefIndex: 4461
{
	// Fields
	private const float MagnetHeight = 5;
	private const float MagnetScreenRaise = 2.6;
	private const float MagnetScale = 1.9;
	private const float MagnetPoleX = 0.58;
	private const float MagnetPoleY = -0.83;
	private const float MagnetEnterDistance = 12;
	private const float MagnetEnterDuration = 0.35;
	private const float MagnetPassDuration = 1.6;
	private const float MagnetPassMargin = 0.5;
	private const float MagnetExitDistance = 25;
	private const float MagnetExitDuration = 0.35;
	private const float FieldLineWidth = 0.07;
	private const float PullLead = 0.08;
	private const float RattleReach = 3.5;
	private const float RattleAmplitude = 0.025;
	private const float RattleNearAmplitude = 0.06;
	private const float RattleLift = 0.4;
	private const float RattleFrequency = 45;
	private const float RattleTilt = 60;
	private const float BlockFlightDuration = 0.35;
	private const float BlockFlightArc = 1.5;
	private const float BlockFlightSwirl = 0.6;
	private const float PoleClusterRadius = 0.3;
	private const float PoleFlashStrength = 0.5;
	private const float ContactSquash = 0.04;
	private const float LastContactSquash = 0.18;
	private const float ContactSoundInterval = 0.045;
	private const float ContactMinPitch = 0.9;
	private const float ContactMaxPitch = 1.7;
	private const float LastContactPitch = 0.8;
	private const float PileMinHeight = 0.3;
	private const float PileBurstScale = 0.18;
	private const float PileBurstDuration = 0.3;
	private const float PileSinkDuration = 0.08;
	private const float PileVanishDuration = 0.12;
	private static readonly int BaseColorId; // 0x0
	[Inject]
	private Camera _camera; // 0x30
	[Inject]
	private Conveyor _conveyor; // 0x38
	[Inject]
	private PrefabModule _prefabModule; // 0x40
	[Inject]
	private AudioModule _audioModule; // 0x48
	[Inject]
	private HapticModule _hapticModule; // 0x50
	[Inject]
	private ISubscriber<CarrierBlockCreateMessage> _carrierBlockCreateSub; // 0x58
	[Inject]
	private ISubscriber<BlockTransferCompleteMessage> _blockTransferCompleteSub; // 0x60
	[Inject]
	private ISubscriber<BlockTransferStartMessage> _blockTransferStartSub; // 0x68
	[Inject]
	private ISubscriber<BlockTakeOffMessage> _blockTakeOffSub; // 0x70
	private readonly List<Block> _metalBlocks; // 0x78
	private readonly Dictionary<Block, MetalBlockSystem.MetalPile> _pileByBlock; // 0x80
	private readonly List<MetalBlockSystem.MetalPile> _piles; // 0x88
	private int _transferredMetalBlockCount; // 0x90

	// Methods

	// RVA: 0x23EC7A0 Offset: 0x23E87A0 VA: 0x23EC7A0 Slot: 9
	public override void OnAwake() { }

	// RVA: 0x23EC870 Offset: 0x23E8870 VA: 0x23EC870 Slot: 11
	public override void Dispose() { }

	// RVA: 0x23ECB54 Offset: 0x23E8B54 VA: 0x23ECB54 Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x23ECF38 Offset: 0x23E8F38 VA: 0x23ECF38
	private void OnCarrierBlockCreate(CarrierBlockCreateMessage m) { }

	// RVA: 0x23ED070 Offset: 0x23E9070 VA: 0x23ED070
	private void OnBlockTransferComplete(BlockTransferCompleteMessage m) { }

	// RVA: 0x23ED678 Offset: 0x23E9678 VA: 0x23ED678
	private void OnBlockTransferStart(BlockTransferStartMessage m) { }

	// RVA: 0x23EE010 Offset: 0x23EA010 VA: 0x23EE010
	private void OnBlockTakeOff(BlockTakeOffMessage m) { }

	// RVA: 0x23ED980 Offset: 0x23E9980 VA: 0x23ED980
	private static MeshRenderer FindNearestGroupBlock(Carrier carrier, Vector3 position) { }

	// RVA: 0x23EDBBC Offset: 0x23E9BBC VA: 0x23EDBBC
	private MetalBlockSystem.MetalPile CreatePile(MeshRenderer groupBlock, Block block, float fill) { }

	// RVA: 0x23EC88C Offset: 0x23E888C VA: 0x23EC88C
	private void DestroyPiles() { }

	// RVA: 0x23ECF3C Offset: 0x23E8F3C VA: 0x23ECF3C
	private void FindMetalBlocks(Carrier carrier) { }

	// RVA: 0x23ED078 Offset: 0x23E9078 VA: 0x23ED078
	private void TryComplete(List<Block> blocks) { }

	[AsyncStateMachine(typeof(MetalBlockSystem.<ApplyMagnetMotion>d__61))]
	// RVA: 0x23EE4A8 Offset: 0x23EA4A8 VA: 0x23EE4A8
	private UniTaskVoid ApplyMagnetMotion(List<MetalBlockSystem.MagnetPiece> pieces, Vector3 center) { }

	// RVA: 0x23EE57C Offset: 0x23EA57C VA: 0x23EE57C
	private static void GetPassLine(List<MetalBlockSystem.MagnetPiece> pieces, Vector3 center, Vector3 screenUp, out Vector3 from, out Vector3 to) { }

	// RVA: 0x23EE988 Offset: 0x23EA988 VA: 0x23EE988
	private static void RattlePieces(List<MetalBlockSystem.MagnetPiece> pieces, Vector3 magnetPosition, float tremble, float time) { }

	// RVA: 0x23EEE08 Offset: 0x23EAE08 VA: 0x23EEE08
	private static Vector3 GetClusterTarget(bool isLeft, float fill) { }

	[AsyncStateMachine(typeof(MetalBlockSystem.<PullPieceToMagnet>d__65))]
	// RVA: 0x23EEE94 Offset: 0x23EAE94 VA: 0x23EEE94
	private UniTask PullPieceToMagnet(MetalBlockSystem.MagnetPiece piece, Transform magnetT, Vector3 targetLocal, Vector3 screenRight, Action onContact) { }

	// RVA: 0x23EEFBC Offset: 0x23EAFBC VA: 0x23EEFBC
	private static void SetFieldLines(LineRenderer[] lines, float alpha, float time) { }

	// RVA: 0x23EF1B0 Offset: 0x23EB1B0 VA: 0x23EF1B0
	public void .ctor() { }

	// RVA: 0x23EF2E0 Offset: 0x23EB2E0 VA: 0x23EF2E0
	private static void .cctor() { }
}

