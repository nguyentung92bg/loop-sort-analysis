// Namespace: 
public sealed class HomeSceneFog : HomeSceneFxRunner // TypeDefIndex: 5345
{
	// Fields
	private static readonly Vector2[] Mask; // 0x0
	[TupleElementNames(new[] { "quad", "texture", "tiles", "dur", "delay", "breath", "breathDelay" })]
	private readonly List<ValueTuple<HomeSceneQuad, Texture2D, float, float, float, float, float>> _bands; // 0x10
	private readonly Color _color; // 0x18
	private readonly float _opacity; // 0x28
	private readonly int _dir; // 0x2C

	// Methods

	// RVA: 0x242F6B0 Offset: 0x242B6B0 VA: 0x242F6B0
	public void .ctor(HomeSceneFx fx, RectTransform parent, Random random) { }

	// RVA: 0x242FACC Offset: 0x242BACC VA: 0x242FACC
	private static Texture2D Puffs(Random random, float tile, float height) { }

	// RVA: 0x242FE70 Offset: 0x242BE70 VA: 0x242FE70 Slot: 4
	public override void Tick(float t) { }

	// RVA: 0x2430178 Offset: 0x242C178 VA: 0x2430178 Slot: 5
	public override void Dispose() { }

	// RVA: 0x2430344 Offset: 0x242C344 VA: 0x2430344
	private static void .cctor() { }
}

