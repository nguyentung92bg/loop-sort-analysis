// Namespace: 
public static class HomeSceneShapes // TypeDefIndex: 5332
{
	// Fields
	private static Texture2D _softDisc; // 0x0
	private static Texture2D _flash; // 0x8
	private static Texture2D _foam; // 0x10
	private static Texture2D _bowWave; // 0x18
	private static Material _screen; // 0x20

	// Properties
	public static Material Screen { get; }
	public static Texture2D SoftDisc { get; }
	public static Texture2D Flash { get; }
	public static Texture2D BowWave { get; }
	public static Texture2D Foam { get; }

	// Methods

	// RVA: 0x2428A54 Offset: 0x2424A54 VA: 0x2428A54
	public static Material get_Screen() { }

	// RVA: 0x242699C Offset: 0x242299C VA: 0x242699C
	public static Texture2D get_SoftDisc() { }

	// RVA: 0x2428D94 Offset: 0x2424D94 VA: 0x2428D94
	public static Texture2D get_Flash() { }

	// RVA: 0x242781C Offset: 0x242381C VA: 0x242781C
	public static Texture2D get_BowWave() { }

	// RVA: 0x2426EA0 Offset: 0x2422EA0 VA: 0x2426EA0
	public static Texture2D get_Foam() { }

	// RVA: 0x2428B8C Offset: 0x2424B8C VA: 0x2428B8C
	public static Texture2D Make(int w, int h, Func<float, float, float> alpha, TextureWrapMode wrap) { }

	// RVA: 0x2426ACC Offset: 0x2422ACC VA: 0x2426ACC
	public static RawImage Add(RectTransform parent, string name, Texture2D texture, Color color) { }

	[CompilerGenerated]
	// RVA: 0x2428EC0 Offset: 0x2424EC0 VA: 0x2428EC0
	internal static float <get_Foam>g__Dash|14_1(float cx, float cy, float rx, float ry, ref HomeSceneShapes.<>c__DisplayClass14_0 ) { }
}

