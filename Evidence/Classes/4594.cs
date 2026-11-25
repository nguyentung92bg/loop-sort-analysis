// Namespace: 
public sealed class SandFlowRenderer : IDisposable // TypeDefIndex: 4594
{
	// Fields
	public const int Capacity = 1024;
	public const int DefaultGrainsPerBlock = 640;
	public const float DefaultGrainRadius = 0.052;
	public const int MinGrainsPerBlock = 32;
	private const int PathCapacity = 512;
	private const int PileBufferOffset = 1024;
	private const int FlowBufferOffset = 7168;
	private const float MinimumGrainSpeed = 0.75;
	private const float MaximumGrainSpeed = 1.25;
	public const float DefaultGrainDriftLimit = 0.8;
	public const float DefaultGrainShear = 0.75;
	private static readonly int PileGridId; // 0x0
	private static readonly int PacketsId; // 0x4
	private static readonly int TimeId; // 0x8
	private static readonly int TravelId; // 0xC
	private static readonly int GrainCountId; // 0x10
	private static readonly int PathId; // 0x14
	private static readonly int PathCountId; // 0x18
	private static readonly int PathLengthId; // 0x1C
	private static readonly int PathClosedId; // 0x20
	private static readonly int PourArcId; // 0x24
	private static readonly int PourLandingId; // 0x28
	private static readonly int PourAirId; // 0x2C
	private static readonly int ReformId; // 0x30
	private static readonly int UndoArcId; // 0x34
	private static readonly int RewindId; // 0x38
	private static readonly int ViewLightId; // 0x3C
	private static readonly int ShadingId; // 0x40
	private static readonly int DriftId; // 0x44
	private static readonly int FlowId; // 0x48
	private static readonly int DrawsId; // 0x4C
	private static readonly int DrawsRwId; // 0x50
	private static readonly int SolveCountId; // 0x54
	private static readonly int ChunkQuadsId; // 0x58
	private static readonly int DrawCountId; // 0x5C
	private const string LiquidKeyword = "SAND_LIQUID";
	private static readonly int LiquidId; // 0x60
	private static readonly int LiquidLightId; // 0x64
	private static readonly int LiquidTextureId; // 0x68
	private static readonly int LiquidDensityTextureId; // 0x6C
	private static readonly int LiquidMaskId; // 0x70
	private static readonly int LiquidMaskSizeId; // 0x74
	private static readonly int LiquidMaskMarginId; // 0x78
	private static readonly int LiquidBlendId; // 0x7C
	private static readonly int LiquidAirShrinkId; // 0x80
	private static readonly int ColorMaskId; // 0x84
	private static readonly int StencilWriteId; // 0x88
	private static readonly int SplitId; // 0x8C
	private static readonly int SplitSlotsId; // 0x90
	private const int SplitSlots = 256;
	private const float RewindWidth = 0.7;
	private static readonly int LiquidTexelId; // 0x94
	private static readonly int LiquidToneId; // 0x98
	private static readonly int LiquidViewId; // 0x9C
	private static readonly int LiquidProjectionId; // 0xA0
	private const int QuadsPerChunk = 1024;
	private const int DrawStride = 32;
	private Light _sun; // 0x10
	private Material _liquidMaterial; // 0x18
	private CommandBuffer _liquidCommands; // 0x20
	private CommandBuffer _compositeCommands; // 0x28
	private RenderTexture _liquidTexture; // 0x30
	private RenderTexture _liquidDensityTexture; // 0x38
	private RenderTexture _liquidMask; // 0x40
	private RenderTargetIdentifier[] _liquidTargets; // 0x48
	private Camera _liquidCamera; // 0x50
	private float _nextSunSearch; // 0x58
	private Vector3 _lightDirection; // 0x5C
	private SandPourStyle _pourStyle; // 0x68
	private static readonly ProfilerMarker UploadMarker; // 0xA8
	private static readonly ProfilerMarker DrawMarker; // 0xB0
	private static readonly ProfilerMarker PileMarker; // 0xB8
	private readonly SandPileField _pile; // 0xA0
	private readonly SandFlowPacket[] _uploadedPackets; // 0xA8
	private int _uploadedPacketCount; // 0xB0
	private bool _pileUploadPending; // 0xB4
	private readonly ComputeShader _compute; // 0xB8
	private readonly int _solveKernel; // 0xC0
	private ComputeBuffer _drawBuffer; // 0xC8
	private int _solveFrame; // 0xD0
	private float _pourArcValue; // 0xD4
	private Vector4 _pourLandingValue; // 0xD8
	private Vector4 _pourAirValue; // 0xE8
	private Vector4 _reformValue; // 0xF8
	private Vector4 _rewindValue; // 0x108
	private Vector4 _shadingValue; // 0x118
	private Vector4 _pileGridValue; // 0x128
	private float _liquidAirShrink; // 0x138
	private float _undoArc; // 0x13C
	private float _timeValue; // 0x140
	private readonly float[] _pathCurvature; // 0x148
	private readonly float[] _pathDrift; // 0x150
	private Vector3 _swing; // 0x158
	private Vector3 _cornerFlow; // 0x164
	private readonly Vector4[] _pathFlow; // 0x170
	private readonly float[] _pathTurn; // 0x178
	private NativeArray<float2> _nativeFlow; // 0x180
	private Vector4 _flowValue; // 0x190
	private bool _driftDirty; // 0x1A0
	private readonly SandFlowRenderer.PileGrain[][] _pileGrains; // 0x1A8
	private NativeArray<SandFlowRenderer.PileGrain> _nativeLayouts; // 0x1B0
	private int _nativeLayoutGrains; // 0x1C0
	private readonly bool[] _nativeLayoutCurrent; // 0x1C8
	private NativeArray<SandFlowRenderer.DepositPacket> _depositPackets; // 0x1D0
	private NativeArray<float> _depositMass; // 0x1E0
	private readonly SandFlowPacket[] _pileSources; // 0x1F0
	private readonly int[] _pileStyleVersions; // 0x1F8
	private int _pileStyleVersion; // 0x200
	private float _pileDepositTime; // 0x204
	private float _pileHeightScale; // 0x208
	private int _pileDepositGrains; // 0x20C
	private int _pileDepositStyle; // 0x210
	private const int PileSlices = 2;
	private float _pileSliceTime; // 0x214
	private int _nextPileSlice; // 0x218
	private JobHandle _depositHandle; // 0x220
	private int _depositSlice; // 0x230
	private NativeArray<SandFlowRenderer.PileGrain> _reformLayout; // 0x238
	private NativeArray<float> _reformResult; // 0x248
	private NativeArray<float> _reformOffsets; // 0x258
	private NativeArray<float> _reformMarked; // 0x268
	private readonly int[] _splitOwners; // 0x278
	private readonly bool[] _splitDirty; // 0x280
	private readonly bool[] _splitLive; // 0x288
	private NativeArray<float> _splitNative; // 0x290
	private ComputeBuffer _splitBuffer; // 0x2A0
	private int _splitGrains; // 0x2A8
	private readonly ComputeBuffer _buffer; // 0x2B0
	private readonly ComputeBuffer _pathBuffer; // 0x2B8
	private readonly GraphicsBuffer _quadIndices; // 0x2C0
	private readonly Vector4[] _pathSamples; // 0x2C8
	private readonly Material _material; // 0x2D0
	private readonly MaterialPropertyBlock _properties; // 0x2D8
	private Bounds _bounds; // 0x2E0
	private int _packetCount; // 0x2F8
	private int _pathCount; // 0x2FC
	private Bounds _pathBounds; // 0x300
	[CompilerGenerated]
	private float <PathLength>k__BackingField; // 0x318
	[CompilerGenerated]
	private bool <PathClosed>k__BackingField; // 0x31C
	[CompilerGenerated]
	private float <Travel>k__BackingField; // 0x320
	[CompilerGenerated]
	private int <GrainsPerBlock>k__BackingField; // 0x324
	[CompilerGenerated]
	private float <GrainDriftLimit>k__BackingField; // 0x328
	[CompilerGenerated]
	private float <GrainEdge>k__BackingField; // 0x32C
	[CompilerGenerated]
	private float <GrainShearAmount>k__BackingField; // 0x330

	// Properties
	public float PathLength { get; set; }
	public bool PathClosed { get; set; }
	public float Travel { get; set; }
	public int GrainsPerBlock { get; set; }
	public float GrainDriftLimit { get; set; }
	public float GrainEdge { get; set; }
	public float GrainShearAmount { get; set; }
	private int GrainCount { get; }
	private int BeltVertexGrainCount { get; }
	public bool LiquidActive { get; }
	private int DrawCount { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x24BBF70 Offset: 0x24B7F70 VA: 0x24BBF70
	public float get_PathLength() { }

	[CompilerGenerated]
	// RVA: 0x24BBF78 Offset: 0x24B7F78 VA: 0x24BBF78
	private void set_PathLength(float value) { }

	[CompilerGenerated]
	// RVA: 0x24BBF80 Offset: 0x24B7F80 VA: 0x24BBF80
	public bool get_PathClosed() { }

	[CompilerGenerated]
	// RVA: 0x24BBF88 Offset: 0x24B7F88 VA: 0x24BBF88
	private void set_PathClosed(bool value) { }

	[CompilerGenerated]
	// RVA: 0x24BBF90 Offset: 0x24B7F90 VA: 0x24BBF90
	public float get_Travel() { }

	[CompilerGenerated]
	// RVA: 0x24BBF98 Offset: 0x24B7F98 VA: 0x24BBF98
	public void set_Travel(float value) { }

	[CompilerGenerated]
	// RVA: 0x24BBFA0 Offset: 0x24B7FA0 VA: 0x24BBFA0
	public int get_GrainsPerBlock() { }

	[CompilerGenerated]
	// RVA: 0x24BBFA8 Offset: 0x24B7FA8 VA: 0x24BBFA8
	public void set_GrainsPerBlock(int value) { }

	[CompilerGenerated]
	// RVA: 0x24BBFB0 Offset: 0x24B7FB0 VA: 0x24BBFB0
	public float get_GrainDriftLimit() { }

	[CompilerGenerated]
	// RVA: 0x24BBFB8 Offset: 0x24B7FB8 VA: 0x24BBFB8
	private void set_GrainDriftLimit(float value) { }

	// RVA: 0x24BBFC0 Offset: 0x24B7FC0 VA: 0x24BBFC0
	public void SetSwing(float amount, float length, float overshoot) { }

	// RVA: 0x24BC038 Offset: 0x24B8038 VA: 0x24BC038
	public void SetCornerFlow(float evenness, float smoothing, float reach) { }

	// RVA: 0x24BC0C4 Offset: 0x24B80C4 VA: 0x24BC0C4
	public void SetGrainDrift(float limit, float shear, float edge) { }

	[CompilerGenerated]
	// RVA: 0x24BC1CC Offset: 0x24B81CC VA: 0x24BC1CC
	public float get_GrainEdge() { }

	[CompilerGenerated]
	// RVA: 0x24BC1D4 Offset: 0x24B81D4 VA: 0x24BC1D4
	private void set_GrainEdge(float value) { }

	[CompilerGenerated]
	// RVA: 0x24BC1DC Offset: 0x24B81DC VA: 0x24BC1DC
	public float get_GrainShearAmount() { }

	[CompilerGenerated]
	// RVA: 0x24BC1E4 Offset: 0x24B81E4 VA: 0x24BC1E4
	private void set_GrainShearAmount(float value) { }

	// RVA: 0x24BC1EC Offset: 0x24B81EC VA: 0x24BC1EC
	private int get_GrainCount() { }

	// RVA: 0x24BC200 Offset: 0x24B8200 VA: 0x24BC200
	private int get_BeltVertexGrainCount() { }

	// RVA: 0x24BC21C Offset: 0x24B821C VA: 0x24BC21C
	public bool get_LiquidActive() { }

	// RVA: 0x24BC27C Offset: 0x24B827C VA: 0x24BC27C
	private int get_DrawCount() { }

	// RVA: 0x24BC298 Offset: 0x24B8298 VA: 0x24BC298
	private void .ctor(Shader shader, ComputeShader compute) { }

	// RVA: 0x24BCE78 Offset: 0x24B8E78 VA: 0x24BCE78
	public void SetLiquid(Shader shader, Camera camera, float resolution, float maskResolution, float texelsPerRadius, float kernelRadius, float jellySize, float blend, float airSize, Vector4 shape, Vector4 light, Vector4 tone) { }

	// RVA: 0x24BE008 Offset: 0x24BA008 VA: 0x24BE008
	private void RenderLiquid(Camera camera) { }

	// RVA: 0x24BDE24 Offset: 0x24B9E24 VA: 0x24BDE24
	private static RenderTexture CreateLiquidTexture(int width, int height, RenderTextureFormat format, string name, bool mips) { }

	// RVA: 0x24BDF1C Offset: 0x24B9F1C VA: 0x24BDF1C
	private static RenderTexture CreateMaskTexture(int width, int height) { }

	// RVA: 0x24BD9C0 Offset: 0x24B99C0 VA: 0x24BD9C0
	private void DisableLiquid() { }

	// RVA: 0x24BDC28 Offset: 0x24B9C28 VA: 0x24BDC28
	private void SetLiquidState(bool liquid) { }

	// RVA: 0x24BDCF4 Offset: 0x24B9CF4 VA: 0x24BDCF4
	private void ReleaseLiquidTexture() { }

	// RVA: 0x24BE4C4 Offset: 0x24BA4C4 VA: 0x24BE4C4
	private static void DestroyObject(Object target) { }

	// RVA: 0x24BCB60 Offset: 0x24B8B60 VA: 0x24BCB60
	public void UpdateShading(float brightness, float shade, float toneContrast) { }

	// RVA: 0x24BE56C Offset: 0x24BA56C VA: 0x24BE56C
	public void SetPileDynamics(in SandPileDynamics dynamics) { }

	// RVA: 0x24BC9D8 Offset: 0x24B89D8 VA: 0x24BC9D8
	public void SetPourStyle(in SandPourStyle style) { }

	// RVA: 0x24BE584 Offset: 0x24BA584 VA: 0x24BE584
	public void SetRewind(float speed, float hold, float fallMin, float fallMax) { }

	// RVA: 0x24BE640 Offset: 0x24BA640 VA: 0x24BE640
	public static bool TryCreate(Shader shader, ComputeShader compute, out SandFlowRenderer renderer) { }

	// RVA: 0x24BE7C4 Offset: 0x24BA7C4 VA: 0x24BE7C4
	public void SetPath(Vector3[] positions, Vector3[] ups, bool closed) { }

	// RVA: 0x24BF87C Offset: 0x24BB87C VA: 0x24BF87C
	private float DistanceAt(int index, Vector3 position) { }

	// RVA: 0x24BFB4C Offset: 0x24BBB4C VA: 0x24BFB4C
	public float FindNearestDistance(Vector3 position) { }

	// RVA: 0x24BFC7C Offset: 0x24BBC7C VA: 0x24BFC7C
	public void SampleFrame(float distance, out Vector3 surface, out Vector3 forward, out Vector3 up) { }

	// RVA: 0x24BFA94 Offset: 0x24BBA94 VA: 0x24BFA94
	private int PathIndex(int index) { }

	// RVA: 0x24BFC24 Offset: 0x24BBC24 VA: 0x24BFC24
	private float SampleDistanceSqr(int index, Vector3 position) { }

	// RVA: 0x24BFACC Offset: 0x24BBACC VA: 0x24BFACC
	private static float SegmentProgress(Vector3 from, Vector3 to, Vector3 position) { }

	// RVA: 0x24BEFF4 Offset: 0x24BAFF4 VA: 0x24BEFF4
	private void BuildDriftProfile() { }

	// RVA: 0x24BFF64 Offset: 0x24BBF64 VA: 0x24BFF64
	private void BuildFlowProfile(float spacing) { }

	// RVA: 0x24C04B4 Offset: 0x24BC4B4 VA: 0x24C04B4
	private float LandingAge(uint seed) { }

	// RVA: 0x24C05C4 Offset: 0x24BC5C4 VA: 0x24C05C4
	public float ArrivedShare(int index, in SandFlowPacket packet, float time, out bool flying) { }

	// RVA: 0x24C0A60 Offset: 0x24BCA60 VA: 0x24C0A60
	public float FarthestReformGap(int index, in SandFlowPacket packet) { }

	// RVA: 0x24C0B48 Offset: 0x24BCB48 VA: 0x24C0B48
	public float MarkSplit(int index, in SandFlowPacket packet, float time, float front, out float previous) { }

	// RVA: 0x24C0FC8 Offset: 0x24BCFC8 VA: 0x24C0FC8
	public void RebaseSplit(ref SandFlowPacket packet) { }

	// RVA: 0x24C0F28 Offset: 0x24BCF28 VA: 0x24C0F28
	private int SplitSlotOf(in SandFlowPacket packet) { }

	// RVA: 0x24C10A0 Offset: 0x24BD0A0 VA: 0x24C10A0
	private int PreviousSlotOf(in SandFlowPacket packet) { }

	// RVA: 0x24C1140 Offset: 0x24BD140 VA: 0x24C1140
	private void EnsureSplit() { }

	// RVA: 0x24C1360 Offset: 0x24BD360 VA: 0x24C1360
	private void RefreshSplit(SandFlowPacket[] packets, int count) { }

	// RVA: 0x24C0754 Offset: 0x24BC754 VA: 0x24C0754
	private SandFlowRenderer.ReformJob CreateReformJob(int index, in SandFlowPacket packet) { }

	// RVA: 0x24C1B50 Offset: 0x24BDB50 VA: 0x24C1B50
	public void UpdatePile(SandFlowPacket[] packets, int count, float time, float deltaTime, float heightScale, float settleSpeed) { }

	// RVA: 0x24BEF9C Offset: 0x24BAF9C VA: 0x24BEF9C
	private void CompleteDeposit(bool apply) { }

	// RVA: 0x24C2074 Offset: 0x24BE074 VA: 0x24C2074
	private void DepositSlice(SandFlowPacket[] packets, int count, int grains, float time, float heightScale, int slice, int slices, bool schedule) { }

	// RVA: 0x24C25E0 Offset: 0x24BE5E0 VA: 0x24C25E0
	private void EnsureDepositBuffers(int count, int grains, int cells) { }

	// RVA: 0x24C1528 Offset: 0x24BD528 VA: 0x24C1528
	private SandFlowRenderer.PileGrain[] GetPileLayout(int index, in SandFlowPacket packet, int grains) { }

	// RVA: 0x24C0594 Offset: 0x24BC594 VA: 0x24C0594
	internal static float GrainRandom(uint value) { }

	// RVA: 0x24C27FC Offset: 0x24BE7FC VA: 0x24C27FC
	private static bool Same(in SandFlowPacket a, in SandFlowPacket b) { }

	// RVA: 0x24C2970 Offset: 0x24BE970 VA: 0x24C2970
	public void Upload(SandFlowPacket[] packets, int count, float time) { }

	// RVA: 0x24C3134 Offset: 0x24BF134 VA: 0x24C3134
	private void SolveGrains() { }

	// RVA: 0x24C363C Offset: 0x24BF63C VA: 0x24C363C
	public void Draw(Camera camera, int layer = 0) { }

	// RVA: 0x24BE418 Offset: 0x24BA418 VA: 0x24BE418
	private int PrepareChunks() { }

	// RVA: 0x24C3844 Offset: 0x24BF844 VA: 0x24C3844
	private void SetViewLight(Camera camera) { }

	// RVA: 0x24C3A14 Offset: 0x24BFA14 VA: 0x24C3A14 Slot: 4
	public void Dispose() { }

	// RVA: 0x24C3CA4 Offset: 0x24BFCA4 VA: 0x24C3CA4
	private static void .cctor() { }
}

