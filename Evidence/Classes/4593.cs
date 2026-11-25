// Namespace: 
[BurstCompile(3, 3, CompileSynchronously = True)]
private struct SandFlowRenderer.DepositJob : IJob // TypeDefIndex: 4593
{
	// Fields
	[ReadOnly]
	public NativeArray<SandFlowRenderer.DepositPacket> Packets; // 0x0
	public int PacketCount; // 0x10
	[ReadOnly]
	public NativeArray<SandFlowRenderer.PileGrain> Layouts; // 0x18
	public int Grains; // 0x28
	public float Time; // 0x2C
	public float Travel; // 0x30
	public float DriftLimit; // 0x34
	public float VolumeScale; // 0x38
	public int Rows; // 0x3C
	public float Length; // 0x40
	public float HalfWidth; // 0x44
	public float InverseArea; // 0x48
	[ReadOnly]
	public NativeArray<float2> Flow; // 0x50
	[ReadOnly]
	public NativeArray<float> Split; // 0x60
	public int FlowCount; // 0x70
	public float FlowReach; // 0x74
	public NativeArray<float> Mass; // 0x78

	// Methods

	// RVA: 0x24C51EC Offset: 0x24C11EC VA: 0x24C51EC Slot: 4
	public void Execute() { }

	// RVA: 0x24C5674 Offset: 0x24C1674 VA: 0x24C5674
	private void ApplyFlow(ref float distance, ref float lateral, float wall) { }

	// RVA: 0x24C5994 Offset: 0x24C1994 VA: 0x24C5994
	private float2 SampleFlow(float distance, out float slope) { }

	// RVA: 0x24C57B0 Offset: 0x24C17B0 VA: 0x24C57B0
	private void Add(float distance, float lateral, float volume) { }
}

