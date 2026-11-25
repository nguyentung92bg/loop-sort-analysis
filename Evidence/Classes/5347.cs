// Namespace: 
public sealed class HomeSceneSnow : HomeSceneFxRunner // TypeDefIndex: 5347
{
	// Fields
	[TupleElementNames(new[] { "w", "h", "n", "radius", "speed" })]
	private static readonly ValueTuple<int, int, int, Vector2, float>[] Layers; // 0x0
	[TupleElementNames(new[] { "quad", "texture", "uv", "dur", "delay", "drift" })]
	private readonly List<ValueTuple<HomeSceneQuad, Texture2D, Rect, float, float, float>> _layers; // 0x10

	// Methods

	// RVA: 0x243163C Offset: 0x242D63C VA: 0x243163C
	public void .ctor(HomeSceneFx fx, RectTransform parent, Random random) { }

	// RVA: 0x2431AD8 Offset: 0x242DAD8 VA: 0x2431AD8
	private static Texture2D Flakes(Random random, int w, int h, int n, Vector2 radius) { }

	// RVA: 0x2431F9C Offset: 0x242DF9C VA: 0x2431F9C Slot: 4
	public override void Tick(float t) { }

	// RVA: 0x24321FC Offset: 0x242E1FC VA: 0x24321FC Slot: 5
	public override void Dispose() { }

	// RVA: 0x24323C4 Offset: 0x242E3C4 VA: 0x24323C4
	private static void .cctor() { }
}

