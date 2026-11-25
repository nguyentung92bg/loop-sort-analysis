// Namespace: 
public sealed class HeadlightBlinkEffect : EffectBase // TypeDefIndex: 5249
{
	// Fields
	[SerializeField]
	private Graphic[] Glows; // 0x28
	[SerializeField]
	private Graphic[] Flares; // 0x30
	[SerializeField]
	private float IdleAlpha; // 0x38
	[SerializeField]
	private float FlashScale; // 0x3C
	[SerializeField]
	private float FlashDuration; // 0x40
	[SerializeField]
	private float Gap; // 0x44
	[SerializeField]
	private Vector2 Interval; // 0x48
	private float _start; // 0x50
	private float _next; // 0x54

	// Methods

	// RVA: 0x2571B78 Offset: 0x256DB78 VA: 0x2571B78
	private void OnDisable() { }

	// RVA: 0x2571CE8 Offset: 0x256DCE8 VA: 0x2571CE8
	private void Update() { }

	// RVA: 0x2571E00 Offset: 0x256DE00 VA: 0x2571E00
	private float Bump(float phase) { }

	// RVA: 0x2571B98 Offset: 0x256DB98 VA: 0x2571B98
	private void Apply(float level) { }

	// RVA: 0x2571E30 Offset: 0x256DE30 VA: 0x2571E30
	private static void SetAlpha(Graphic graphic, float alpha) { }

	// RVA: 0x2571E78 Offset: 0x256DE78 VA: 0x2571E78
	public void .ctor() { }
}

