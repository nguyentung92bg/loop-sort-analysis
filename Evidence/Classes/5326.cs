// Namespace: 
public sealed class HomeSceneMover // TypeDefIndex: 5326
{
	// Fields
	private static readonly Color ContactColor; // 0x0
	private readonly HomeSceneSprite _data; // 0x10
	private readonly RectTransform _outer; // 0x18
	private readonly RectTransform _mid; // 0x20
	private readonly RectTransform _inner; // 0x28
	private readonly RectTransform _spin; // 0x30
	private readonly RawImage _image; // 0x38
	private readonly CanvasGroup _group; // 0x40
	private readonly RectTransform[] _wheels; // 0x48
	private readonly float[] _wheelRadius; // 0x50
	private readonly Rect _uv; // 0x58
	private readonly bool _flip; // 0x68
	private readonly Vector2 _pivot; // 0x6C
	private readonly HomeSceneQuad _reflect; // 0x78
	private readonly RectTransform _ground; // 0x80
	private readonly List<HomeSceneMoverPart> _parts; // 0x88
	private HomeScenePathKey[] _path; // 0x90
	private float[] _distance; // 0x98
	private int _frame; // 0xA0
	private float _frameDelay; // 0xA4
	private float _offsetY; // 0xA8

	// Properties
	public GameObject GameObject { get; }
	public bool IsActive { get; }

	// Methods

	// RVA: 0x242448C Offset: 0x242048C VA: 0x242448C
	public GameObject get_GameObject() { }

	// RVA: 0x24244A4 Offset: 0x24204A4 VA: 0x24244A4
	public bool get_IsActive() { }

	// RVA: 0x24244CC Offset: 0x24204CC VA: 0x24244CC
	public void .ctor(HomeSceneSprite data, RectTransform parent, bool flip, HomeScenePathKey[] path, bool needsGroup, float speed = -1, RectTransform ground, Material grade) { }

	// RVA: 0x242599C Offset: 0x242199C VA: 0x242599C
	public void SetPath(HomeScenePathKey[] path) { }

	// RVA: 0x2425ACC Offset: 0x2421ACC VA: 0x2425ACC
	public void EvaluatePath(float u) { }

	// RVA: 0x2425F54 Offset: 0x2421F54 VA: 0x2425F54
	public void Evaluate(float t) { }

	// RVA: 0x2426000 Offset: 0x2422000 VA: 0x2426000
	public void EvaluateLocal(float t) { }

	// RVA: 0x242645C Offset: 0x242245C VA: 0x242645C
	public void SetActive(bool active) { }

	// RVA: 0x2426514 Offset: 0x2422514 VA: 0x2426514
	public void SetFrameDelay(float delay) { }

	// RVA: 0x242651C Offset: 0x242251C VA: 0x242651C
	public void SetOffset(float y) { }

	// RVA: 0x242583C Offset: 0x242183C VA: 0x242583C
	private void SetFrame(int frame) { }

	// RVA: 0x2425D8C Offset: 0x2421D8C VA: 0x2425D8C
	private HomeScenePathKey Static(out float distance) { }

	// RVA: 0x2425DBC Offset: 0x2421DBC VA: 0x2425DBC
	private HomeScenePathKey Sample(float u, out float distance) { }

	// RVA: 0x2426524 Offset: 0x2422524 VA: 0x2426524
	private static void .cctor() { }
}

