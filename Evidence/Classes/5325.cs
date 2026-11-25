// Namespace: 
public abstract class HomeSceneFxRunner // TypeDefIndex: 5325
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void Tick(float t);

	// RVA: 0x2420254 Offset: 0x241C254 VA: 0x2420254 Slot: 5
	public virtual void Dispose() { }

	// RVA: 0x2420258 Offset: 0x241C258 VA: 0x2420258
	public static HomeSceneFxRunner Create(HomeSceneFx fx, RectTransform parent, int index) { }

	// RVA: 0x2422750 Offset: 0x241E750 VA: 0x2422750
	public static float Rand(Random random, float lo, float hi) { }

	// RVA: 0x2422790 Offset: 0x241E790 VA: 0x2422790
	public static float Rand(Random random, Vector2 range) { }

	// RVA: 0x24227D0 Offset: 0x241E7D0 VA: 0x24227D0
	protected static RectTransform Centred(RawImage image, float x, float y, float w, float h) { }

	// RVA: 0x2422878 Offset: 0x241E878 VA: 0x2422878
	protected static Color WithAlpha(Color c, float a) { }

	// RVA: 0x2422880 Offset: 0x241E880 VA: 0x2422880
	protected static float Track(float u, float[] times, float[] values, Func<float, float> ease) { }

	// RVA: 0x24229C4 Offset: 0x241E9C4 VA: 0x24229C4
	protected void .ctor() { }
}

