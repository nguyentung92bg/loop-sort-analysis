// Namespace: 
private sealed class HomeSceneFxRunner.Motes : HomeSceneFxRunner // TypeDefIndex: 5320
{
	// Fields
	private static readonly float[] Times; // 0x0
	private static readonly float[] Alpha; // 0x8
	private static readonly float[] Fx; // 0x10
	private static readonly float[] Fy; // 0x18
	[TupleElementNames(new[] { "image", "at", "d", "dur", "delay" })]
	private readonly List<ValueTuple<RawImage, Vector2, Vector2, float, float>> _motes; // 0x10
	private readonly Color _color; // 0x18

	// Methods

	// RVA: 0x2421854 Offset: 0x241D854 VA: 0x2421854
	public void .ctor(HomeSceneFx fx, RectTransform parent, Random random) { }

	// RVA: 0x2423590 Offset: 0x241F590 VA: 0x2423590 Slot: 4
	public override void Tick(float t) { }

	// RVA: 0x24238D4 Offset: 0x241F8D4 VA: 0x24238D4
	private static void .cctor() { }
}

