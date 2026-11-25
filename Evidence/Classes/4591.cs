// Namespace: 
[BurstCompile(CompileSynchronously = True)]
private struct SandFlowRenderer.ReformJob : IJob // TypeDefIndex: 4591
{
	// Fields
	[ReadOnly]
	public NativeArray<SandFlowRenderer.PileGrain> Layout; // 0x0
	[ReadOnly]
	public NativeArray<float> Offsets; // 0x10
	public NativeArray<float> Marked; // 0x20
	public NativeArray<float> Result; // 0x30
	public bool HasSplit; // 0x40
	public bool Mark; // 0x41
	public float EaseIn; // 0x44
	public float HomeAlong; // 0x48
	public float Front; // 0x4C
	public float Width; // 0x50
	public float Speed; // 0x54
	public float Duration; // 0x58
	public float HoldTime; // 0x5C
	public float FallMin; // 0x60
	public float FallMax; // 0x64
	public float Bend; // 0x68
	public int Grains; // 0x6C
	public uint Birth; // 0x70
	public bool Farthest; // 0x74
	public float Elapsed; // 0x78
	public float Rewind; // 0x7C
	public float Age; // 0x80
	public float Window; // 0x84
	public float Jitter; // 0x88
	public float SpreadOut; // 0x8C
	public float Travel; // 0x90
	public float BirthDistance; // 0x94
	public float BirthTravel; // 0x98
	public float PourTravel; // 0x9C
	public float Line; // 0xA0
	public float Reach; // 0xA4
	public float Spread; // 0xA8
	public float DriftLimit; // 0xAC
	public float Length; // 0xB0
	public float Scatter; // 0xB4
	public bool Closed; // 0xB8

	// Methods

	// RVA: 0x24C4560 Offset: 0x24C0560 VA: 0x24C4560 Slot: 4
	public void Execute() { }

	// RVA: 0x24C4E18 Offset: 0x24C0E18 VA: 0x24C4E18
	private float Gap(int index, float elapsed, out float portal, out float nominal, out float offset) { }

	// RVA: 0x24C5158 Offset: 0x24C1158 VA: 0x24C5158
	private static float Repeat(float value, float length) { }

	// RVA: 0x24C5128 Offset: 0x24C1128 VA: 0x24C5128
	private static float Hash(uint value) { }
}

