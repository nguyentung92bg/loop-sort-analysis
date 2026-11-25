// Namespace: 
public sealed class HomeSceneRain : HomeSceneFxRunner // TypeDefIndex: 5346
{
	// Fields
	private static readonly Vector2[] Mask; // 0x0
	[TupleElementNames(new[] { "w", "h", "n", "length", "width", "speed" })]
	private static readonly ValueTuple<int, int, int, Vector2, Vector2, float>[] Layers; // 0x8
	[TupleElementNames(new[] { "quad", "texture", "uv", "dur", "delay", "gust", "gustDelay", "hi", "lo", null, null })]
	private readonly List<ValueTuple<HomeSceneQuad, Texture2D, Rect, float, float, float, float, ValueTuple<float, float>>> _layers; // 0x10
	private readonly Color _color; // 0x18

	// Methods

	// RVA: 0x2430574 Offset: 0x242C574 VA: 0x2430574
	public void .ctor(HomeSceneFx fx, RectTransform parent, Random random) { }

	// RVA: 0x2430A74 Offset: 0x242CA74 VA: 0x2430A74
	private static Texture2D Streaks(Random random, int w, int h, int n, Vector2 length, Vector2 width) { }

	// RVA: 0x2430EFC Offset: 0x242CEFC VA: 0x2430EFC Slot: 4
	public override void Tick(float t) { }

	// RVA: 0x24311F4 Offset: 0x242D1F4 VA: 0x24311F4 Slot: 5
	public override void Dispose() { }

	// RVA: 0x24313C0 Offset: 0x242D3C0 VA: 0x24313C0
	private static void .cctor() { }
}

