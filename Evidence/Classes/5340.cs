// Namespace: 
public sealed class HomeSceneView : MonoBehaviour // TypeDefIndex: 5340
{
	// Fields
	private const float PhoneAreaHeight = 2486.41;
	private const float CarWheelLine = 1890;
	private const float CarBreathDur = 1.6;
	private const float CarBreathRise = 3;
	private readonly List<HomeSceneMover> _movers; // 0x20
	private readonly List<HomeSceneSpawnerRunner> _spawners; // 0x28
	private readonly List<HomeSceneFxRunner> _fx; // 0x30
	private readonly Random _random; // 0x38
	private static readonly int GradeR; // 0x0
	private static readonly int GradeG; // 0x4
	private static readonly int GradeB; // 0x8
	private static readonly int GradeOffset; // 0xC
	private HomeSceneAsset _asset; // 0x40
	private RectTransform _root; // 0x48
	private RectTransform _carBody; // 0x50
	private Image _carShadow; // 0x58
	private float _carRise; // 0x60
	private float _clock; // 0x64
	private Vector2 _lastParentSize; // 0x68
	private Material[] _grades; // 0x70
	[CompilerGenerated]
	private bool <Paused>k__BackingField; // 0x78
	public static readonly Func<float, float> EaseInOut; // 0x10
	public static readonly Func<float, float> CarEase; // 0x18
	public static readonly Func<float, float> EaseOut; // 0x20

	// Properties
	public bool Paused { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x242C850 Offset: 0x2428850 VA: 0x242C850
	public bool get_Paused() { }

	[CompilerGenerated]
	// RVA: 0x242C858 Offset: 0x2428858 VA: 0x242C858
	public void set_Paused(bool value) { }

	// RVA: 0x242C860 Offset: 0x2428860 VA: 0x242C860
	public static HomeSceneView Create(HomeSceneAsset asset, RectTransform parent) { }

	// RVA: 0x242C9CC Offset: 0x24289CC VA: 0x242C9CC
	private void Build(HomeSceneAsset asset, RectTransform root) { }

	// RVA: 0x242CF84 Offset: 0x2428F84 VA: 0x242CF84
	private RectTransform CreateGroup(bool screen) { }

	// RVA: 0x242D098 Offset: 0x2429098 VA: 0x242D098
	private RectTransform CreateClip(RectTransform group, Rect clip) { }

	// RVA: 0x242D210 Offset: 0x2429210 VA: 0x242D210
	private void AddSprite(HomeSceneLayer layer, RectTransform parent) { }

	// RVA: 0x242D534 Offset: 0x2429534 VA: 0x242D534
	private void AddCar(HomeSceneCar car) { }

	// RVA: 0x242CDFC Offset: 0x2428DFC VA: 0x242CDFC
	private static Material CreateGrade(HomeSceneGrade grade) { }

	// RVA: 0x242DD08 Offset: 0x2429D08 VA: 0x242DD08
	private Material GradeOf(HomeSceneSprite sprite) { }

	// RVA: 0x242DD48 Offset: 0x2429D48 VA: 0x242DD48
	private static Image AddCarImage(RectTransform parent, string name, Sprite sprite) { }

	// RVA: 0x242DE64 Offset: 0x2429E64 VA: 0x242DE64
	private void OnDestroy() { }

	// RVA: 0x242E094 Offset: 0x242A094 VA: 0x242E094
	private void Update() { }

	// RVA: 0x242D740 Offset: 0x2429740 VA: 0x242D740
	private void Tick() { }

	// RVA: 0x242E0DC Offset: 0x242A0DC VA: 0x242E0DC
	private void LateUpdate() { }

	// RVA: 0x2426D00 Offset: 0x2422D00 VA: 0x2426D00
	public static RectTransform CreateNode(string name, Transform parent) { }

	// RVA: 0x2427788 Offset: 0x2423788 VA: 0x2427788
	public static void Place(RectTransform rt, float x, float y, float w, float h) { }

	// RVA: 0x242881C Offset: 0x242481C VA: 0x242881C
	public static void Stretch(RectTransform rt) { }

	// RVA: 0x242D4C4 Offset: 0x24294C4 VA: 0x242D4C4
	private static void StretchTopLeft(RectTransform rt) { }

	// RVA: 0x24280B4 Offset: 0x24240B4 VA: 0x24280B4
	public static float Phase(float t, float delay, float dur) { }

	// RVA: 0x24280F0 Offset: 0x24240F0 VA: 0x24280F0
	public static float Alternate(float t, float delay, float dur, Func<float, float> ease) { }

	// RVA: 0x242E20C Offset: 0x242A20C VA: 0x242E20C
	private static float CubicBezier(float x1, float y1, float x2, float y2, float x) { }

	// RVA: 0x242E3B8 Offset: 0x242A3B8 VA: 0x242E3B8
	private static float Bezier(float p1, float p2, float t) { }

	// RVA: 0x242E3F4 Offset: 0x242A3F4 VA: 0x242E3F4
	private static float BezierSlope(float p1, float p2, float t) { }

	// RVA: 0x242E43C Offset: 0x242A43C VA: 0x242E43C
	public void .ctor() { }

	// RVA: 0x242E624 Offset: 0x242A624 VA: 0x242E624
	private static void .cctor() { }
}

