// Namespace: 
public sealed class HomeSceneSplash : HomeSceneMoverPart // TypeDefIndex: 5328
{
	// Fields
	private const float FoamTile = 66;
	private static readonly Vector2[] HullStops; // 0x0
	private static readonly Vector2[] TrailStops; // 0x8
	private readonly RawImage _hull; // 0x10
	private readonly float _hullTiles; // 0x18
	private readonly RawImage _bow; // 0x20
	private readonly RawImage _churn; // 0x28
	[TupleElementNames(new[] { "image", "start", "d", "delay" })]
	private readonly List<ValueTuple<RawImage, Vector2, Vector2, float>> _spray; // 0x30
	private readonly RawImage[] _trail; // 0x38
	private readonly float _trailTiles; // 0x40
	private readonly float _heading; // 0x44
	private readonly float _flow; // 0x48

	// Methods

	// RVA: 0x2426FD4 Offset: 0x2422FD4 VA: 0x2426FD4
	public void .ctor(RectTransform parent, RectTransform wakeParent, HomeSceneSprite data, bool flip, float heading, float speed) { }

	// RVA: 0x2427948 Offset: 0x2423948 VA: 0x2427948 Slot: 4
	public override void Tick(float t) { }

	// RVA: 0x2427F94 Offset: 0x2423F94 VA: 0x2427F94
	private static void Pulse(RawImage image, float t, float dur, float alpha) { }

	// RVA: 0x24281D8 Offset: 0x24241D8 VA: 0x24281D8
	private static void .cctor() { }
}

