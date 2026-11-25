// Namespace: 
public sealed class SandJellyRenderer : IDisposable // TypeDefIndex: 4603
{
	// Fields
	public const int MaxGroups = 16;
	private const int Segments = 12;
	private static readonly int MinId; // 0x0
	private static readonly int MaxId; // 0x4
	private static readonly int SpanId; // 0x8
	private static readonly int ColorsId; // 0xC
	private static readonly int WobbleId; // 0x10
	private static readonly int NeckId; // 0x14
	private static readonly int ShapeId; // 0x18
	private static readonly int LightId; // 0x1C
	private static readonly int ToneId; // 0x20
	private static readonly int HiddenTexId; // 0x24
	private static readonly int HiddenColorId; // 0x28
	private static readonly int HiddenQuestionId; // 0x2C
	private static readonly int HiddenShadowId; // 0x30
	private static readonly int HiddenParamsId; // 0x34
	private static readonly int HiddenMotionId; // 0x38
	private readonly Material _material; // 0x10
	private readonly Mesh _mesh; // 0x18
	private readonly MaterialPropertyBlock _properties; // 0x20

	// Methods

	// RVA: 0x24D2098 Offset: 0x24CE098 VA: 0x24D2098
	private void .ctor(Shader shader) { }

	// RVA: 0x24D2974 Offset: 0x24CE974 VA: 0x24D2974
	public static bool TryCreate(Shader shader, out SandJellyRenderer renderer) { }

	// RVA: 0x24D2A48 Offset: 0x24CEA48 VA: 0x24D2A48
	public void SetStyle(float bevel, float blend, float neck, float side, float gloss, float specular, float rim, float saturation, float value) { }

	// RVA: 0x24D2BB4 Offset: 0x24CEBB4 VA: 0x24D2BB4
	public void SetHidden(Material material) { }

	// RVA: 0x24D301C Offset: 0x24CF01C VA: 0x24D301C
	private static float HiddenFloat(Material material, string name, float fallback) { }

	// RVA: 0x24D2F9C Offset: 0x24CEF9C VA: 0x24D2F9C
	private static Vector4 HiddenColor(Material material, string name, Color fallback) { }

	// RVA: 0x24D3078 Offset: 0x24CF078 VA: 0x24D3078
	public void Draw(Matrix4x4 matrix, Vector3 min, Vector3 max, float start, float front, float groupLength, Vector4[] colors, int groups, float wobble, Vector4 neck, int layer, Camera camera) { }

	// RVA: 0x24D21C0 Offset: 0x24CE1C0 VA: 0x24D21C0
	private static Mesh BuildMesh() { }

	// RVA: 0x24D32D0 Offset: 0x24CF2D0 VA: 0x24D32D0
	private static float[] Grid(bool fine) { }

	// RVA: 0x24D34B0 Offset: 0x24CF4B0 VA: 0x24D34B0
	private static void AddTriangle(List<int> indices, List<Vector3> shape, Vector3 face, int a, int b, int c) { }

	// RVA: 0x24D3678 Offset: 0x24CF678 VA: 0x24D3678 Slot: 4
	public void Dispose() { }

	// RVA: 0x24D373C Offset: 0x24CF73C VA: 0x24D373C
	private static void .cctor() { }
}

