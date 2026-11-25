// Namespace: 
public sealed class SandPileField : IDisposable // TypeDefIndex: 4606
{
	// Fields
	public const int MaxRows = 512;
	public const int Columns = 12;
	private const float CellLength = 0.18;
	private SandPileDynamics _dynamics; // 0x10
	private NativeArray<float> _mass; // 0x30
	private NativeArray<float>[] _slices; // 0x40
	private NativeArray<float> _relaxed; // 0x48
	private NativeArray<float> _banked; // 0x58
	private NativeArray<float> _changes; // 0x68
	private NativeArray<float> _lateralOffset; // 0x78
	private NativeArray<float> _drift; // 0x88
	private NativeArray<float> _result; // 0x98
	private NativeArray<float4> _samples; // 0xA8
	private int _driftCount; // 0xB8
	private float _length; // 0xBC
	private float _rowSize; // 0xC0
	private float _columnSize; // 0xC4
	private bool _depositChanged; // 0xC8
	[CompilerGenerated]
	private bool <SamplesChanged>k__BackingField; // 0xC9
	[CompilerGenerated]
	private int <Rows>k__BackingField; // 0xCC
	[CompilerGenerated]
	private float <HalfWidth>k__BackingField; // 0xD0
	[CompilerGenerated]
	private float <MaxHeight>k__BackingField; // 0xD4

	// Properties
	public NativeArray<float4> Samples { get; }
	public bool SamplesChanged { get; set; }
	public int Rows { get; set; }
	public float HalfWidth { get; set; }
	public float MaxHeight { get; set; }
	public int SliceCount { get; }

	// Methods

	// RVA: 0x24D3A88 Offset: 0x24CFA88 VA: 0x24D3A88
	public NativeArray<float4> get_Samples() { }

	[CompilerGenerated]
	// RVA: 0x24D3A94 Offset: 0x24CFA94 VA: 0x24D3A94
	public bool get_SamplesChanged() { }

	[CompilerGenerated]
	// RVA: 0x24D3A9C Offset: 0x24CFA9C VA: 0x24D3A9C
	private void set_SamplesChanged(bool value) { }

	[CompilerGenerated]
	// RVA: 0x24D3AA4 Offset: 0x24CFAA4 VA: 0x24D3AA4
	public int get_Rows() { }

	[CompilerGenerated]
	// RVA: 0x24D3AAC Offset: 0x24CFAAC VA: 0x24D3AAC
	private void set_Rows(int value) { }

	[CompilerGenerated]
	// RVA: 0x24D3AB4 Offset: 0x24CFAB4 VA: 0x24D3AB4
	public float get_HalfWidth() { }

	[CompilerGenerated]
	// RVA: 0x24D3ABC Offset: 0x24CFABC VA: 0x24D3ABC
	private void set_HalfWidth(float value) { }

	[CompilerGenerated]
	// RVA: 0x24D3AC4 Offset: 0x24CFAC4 VA: 0x24D3AC4
	public float get_MaxHeight() { }

	[CompilerGenerated]
	// RVA: 0x24D3ACC Offset: 0x24CFACC VA: 0x24D3ACC
	private void set_MaxHeight(float value) { }

	// RVA: 0x24D3AD4 Offset: 0x24CFAD4 VA: 0x24D3AD4
	public void Configure(float length, float halfWidth) { }

	// RVA: 0x24D3D5C Offset: 0x24CFD5C VA: 0x24D3D5C
	private static void Allocate(ref NativeArray<float> array, int length) { }

	// RVA: 0x24D3E00 Offset: 0x24CFE00 VA: 0x24D3E00
	public void SetDynamics(in SandPileDynamics dynamics) { }

	// RVA: 0x24D3E58 Offset: 0x24CFE58 VA: 0x24D3E58
	public void SetDrift(float[] drift, int count) { }

	// RVA: 0x24D3F5C Offset: 0x24CFF5C VA: 0x24D3F5C
	public void Clear() { }

	// RVA: 0x24D40FC Offset: 0x24D00FC VA: 0x24D40FC
	public int get_SliceCount() { }

	// RVA: 0x24D4114 Offset: 0x24D0114 VA: 0x24D4114
	public void SetSliceCount(int count) { }

	// RVA: 0x24D401C Offset: 0x24D001C VA: 0x24D401C
	public void BeginDeposit() { }

	// RVA: 0x24D4290 Offset: 0x24D0290 VA: 0x24D4290
	public void SetSlice(int slice, NativeArray<float> mass) { }

	// RVA: 0x24D43E0 Offset: 0x24D03E0 VA: 0x24D43E0
	public void Step(float deltaTime, float settleSpeed, float travel) { }

	// RVA: 0x24D4648 Offset: 0x24D0648 VA: 0x24D4648 Slot: 4
	public void Dispose() { }

	// RVA: -1 Offset: -1
	private static void Fill<T>(NativeArray<T> array, T value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x26B5BAC Offset: 0x26B1BAC VA: 0x26B5BAC
	|-SandPileField.Fill<__Il2CppFullySharedGenericStructType>
	*/

	// RVA: 0x24D47C4 Offset: 0x24D07C4 VA: 0x24D47C4
	public void .ctor() { }
}

