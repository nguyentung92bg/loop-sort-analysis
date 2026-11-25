// Namespace: 
[BurstCompile(CompileSynchronously = True)]
private struct SandPileField.StepJob : IJob // TypeDefIndex: 4605
{
	// Fields
	[ReadOnly]
	public NativeArray<float> Mass; // 0x0
	[ReadOnly]
	public NativeArray<float> Drift; // 0x10
	public NativeArray<float> Relaxed; // 0x20
	public NativeArray<float> Banked; // 0x30
	public NativeArray<float> Changes; // 0x40
	public NativeArray<float> LateralOffset; // 0x50
	public NativeArray<float4> Samples; // 0x60
	public NativeArray<float> Result; // 0x70
	public bool Relax; // 0x80
	public int Rows; // 0x84
	public int DriftCount; // 0x88
	public int Iterations; // 0x8C
	public float Length; // 0x90
	public float HalfWidth; // 0x94
	public float RowSize; // 0x98
	public float ColumnSize; // 0x9C
	public float Travel; // 0xA0
	public float Response; // 0xA4
	public float ReposeSlope; // 0xA8
	public float ReposeTransfer; // 0xAC
	public float AcrossFlow; // 0xB0
	public float SlopeOffsetLimit; // 0xB4
	public float AlongFlow; // 0xB8
	public float AlongLimit; // 0xBC
	public float HeightLimit; // 0xC0

	// Methods

	// RVA: 0x24D4850 Offset: 0x24D0850 VA: 0x24D4850 Slot: 4
	public void Execute() { }

	// RVA: 0x24D4C6C Offset: 0x24D0C6C VA: 0x24D4C6C
	private float DriftAt(float distance) { }

	// RVA: 0x24D4D84 Offset: 0x24D0D84 VA: 0x24D4D84
	private void BuildBankedTarget() { }

	// RVA: 0x24D4B28 Offset: 0x24D0B28 VA: 0x24D4B28
	private void RelaxDeposit() { }

	// RVA: 0x24D5080 Offset: 0x24D1080 VA: 0x24D5080
	private void Transfer(int first, int second, float spacing) { }

	// RVA: 0x24D4FD4 Offset: 0x24D0FD4 VA: 0x24D4FD4
	private static float BendLateral(float lateral, float swing, float halfWidth) { }

	// RVA: 0x24D4F38 Offset: 0x24D0F38 VA: 0x24D4F38
	private static float CapHeight(float height, float limit) { }
}

