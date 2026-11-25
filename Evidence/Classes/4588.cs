// Namespace: 
public struct SandFlowPacket // TypeDefIndex: 4588
{
	// Fields
	public Vector4 SourceAndStart; // 0x0
	public Vector4 TargetAndDuration; // 0x10
	public Vector4 CenterAndPhase; // 0x20
	public Vector4 ForwardAndSpread; // 0x30
	public Vector4 RightAndWidth; // 0x40
	public Vector4 UpAndHeight; // 0x50
	public Vector4 Color; // 0x60
	public Vector4 SurfaceAndRadius; // 0x70
	public Vector4 SeedAndSourceSize; // 0x80
	public const int Stride = 144;

	// Methods

	// RVA: 0x24BBD98 Offset: 0x24B7D98 VA: 0x24BBD98
	public void SetFrame(Vector3 center, Vector3 surface, Vector3 forward, Vector3 up, float halfWidth, float spread, float radius) { }
}

