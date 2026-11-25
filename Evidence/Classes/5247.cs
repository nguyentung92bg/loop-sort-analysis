// Namespace: 
public sealed class FlickerEffect : EffectBase // TypeDefIndex: 5247
{
	// Fields
	[SerializeField]
	private FlickerEffect.FlickerMode Mode; // 0x24
	[SerializeField]
	private float MinAlpha; // 0x28
	[SerializeField]
	private float MaxAlpha; // 0x2C
	[SerializeField]
	private float Speed; // 0x30
	[SerializeField]
	private Vector2 BlinkInterval; // 0x34
	[SerializeField]
	private float BlinkFade; // 0x3C
	private Graphic _graphic; // 0x40
	private float _seed; // 0x48
	private float _alpha; // 0x4C
	private bool _on; // 0x50
	private float _nextToggle; // 0x54

	// Methods

	// RVA: 0x2571650 Offset: 0x256D650 VA: 0x2571650
	private void Awake() { }

	// RVA: 0x25716D4 Offset: 0x256D6D4 VA: 0x25716D4
	private void Update() { }

	// RVA: 0x2571864 Offset: 0x256D864 VA: 0x2571864
	public void .ctor() { }
}

