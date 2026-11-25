// Namespace: 
[Serializable]
public sealed class HomeSceneFx // TypeDefIndex: 5310
{
	// Fields
	public string Type; // 0x10
	public int Seed; // 0x18
	public Vector2 At; // 0x1C
	public float R; // 0x24
	public bool HasColor; // 0x28
	public Color Color; // 0x2C
	public Vector2 Pulse; // 0x3C
	public float Dur; // 0x44
	public Vector2 DurRange; // 0x48
	public float Delay; // 0x50
	public int Count; // 0x54
	public float Opacity; // 0x58
	public Vector2 Size; // 0x5C
	public Vector2 Period; // 0x64
	public Vector3[] Points; // 0x70
	public float On; // 0x78
	public HomeSceneStar[] Stars; // 0x80
	public bool HasRect; // 0x88
	public Rect Rect; // 0x8C
	public float Travel; // 0x9C
	public float W; // 0xA0
	public float H; // 0xA4
	public float A; // 0xA8
	public float B; // 0xAC
	public float Rho; // 0xB0
	public float Phase; // 0xB4
	public bool HasSquash; // 0xB8
	public float Squash; // 0xBC
	public float Cycle; // 0xC0
	public Vector2 From; // 0xC4
	public Vector2 To; // 0xCC
	public float Scale; // 0xD4
	public Vector2 Freq; // 0xD8
	public bool HasPlate; // 0xE0
	public Rect Plate; // 0xE4
	public float Tile; // 0xF4
	public int Bands; // 0xF8
	public int Dir; // 0xFC
	public float Slant; // 0x100
	public float Wind; // 0x104
	public Sprite[] Sprites; // 0x108
	[TextArea]
	public string Json; // 0x110

	// Methods

	// RVA: 0x241F50C Offset: 0x241B50C VA: 0x241F50C
	public float DurOr(float fallback) { }

	// RVA: 0x241F51C Offset: 0x241B51C VA: 0x241F51C
	public Vector2 DurRangeOr(Vector2 fallback) { }

	// RVA: 0x241F53C Offset: 0x241B53C VA: 0x241F53C
	public float OpacityOr(float fallback) { }

	// RVA: 0x241F54C Offset: 0x241B54C VA: 0x241F54C
	public int CountOr(int fallback) { }

	// RVA: 0x241F55C Offset: 0x241B55C VA: 0x241F55C
	public Vector2 SizeOr(Vector2 fallback) { }

	// RVA: 0x241F57C Offset: 0x241B57C VA: 0x241F57C
	public Color ColorOr(Color fallback) { }

	// RVA: 0x241F590 Offset: 0x241B590 VA: 0x241F590
	public void .ctor() { }
}

