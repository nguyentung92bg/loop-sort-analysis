// Namespace: 
public sealed class HomeSceneSpawnerRunner // TypeDefIndex: 5338
{
	// Fields
	private readonly HomeSceneSpawner _data; // 0x10
	private readonly bool _isLane; // 0x18
	private readonly float _span; // 0x1C
	private readonly List<HomeSceneSpawnerRunner.Actor> _actors; // 0x20
	private readonly Dictionary<int, HomeSceneSpawnerRunner.DirState> _states; // 0x28
	private readonly Random _random; // 0x30
	private readonly List<HomeSceneSpawnerRunner.Actor> _free; // 0x38
	private readonly List<HomeSceneSpawnerRunner.Actor> _choices; // 0x40

	// Methods

	// RVA: 0x242A0F8 Offset: 0x24260F8 VA: 0x242A0F8
	public void .ctor(HomeSceneSpawner data, bool isLane, RectTransform parent, Random random, Func<HomeSceneSprite, Material> gradeOf) { }

	// RVA: 0x242B088 Offset: 0x2427088 VA: 0x242B088
	public void Tick(float clock) { }

	// RVA: 0x242B334 Offset: 0x2427334 VA: 0x242B334
	private void LaneStep(float clock) { }

	// RVA: 0x242BB48 Offset: 0x2427B48 VA: 0x242BB48
	private void FlockStep(float clock) { }

	// RVA: 0x242C80C Offset: 0x242880C VA: 0x242C80C
	private void Begin(HomeSceneSpawnerRunner.Actor actor, float t, float rate, float dy, float clock) { }

	// RVA: 0x242AF70 Offset: 0x2426F70 VA: 0x242AF70
	private static RectTransform CreateLayer(RectTransform parent, string name) { }

	// RVA: 0x242C4A8 Offset: 0x24284A8 VA: 0x242C4A8
	private HomeSceneSpawnerRunner.Actor Choose(List<HomeSceneSpawnerRunner.Actor> choices) { }

	// RVA: 0x242B044 Offset: 0x2427044 VA: 0x242B044
	private float Range(Vector2 range) { }

	// RVA: 0x242B000 Offset: 0x2427000 VA: 0x242B000
	private static HomeScenePathKey Key(float t, float x, float y, float rotate) { }
}

