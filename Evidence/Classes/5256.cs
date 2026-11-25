// Namespace: 
public sealed class RisingMotesEffect : EffectBase // TypeDefIndex: 5256
{
	// Fields
	[SerializeField]
	private float Speed; // 0x24
	[SerializeField]
	private Vector2 Lifetime; // 0x28
	[SerializeField]
	private float Wobble; // 0x30
	[SerializeField]
	private float MaxAlpha; // 0x34
	[SerializeField]
	private Vector2 Size; // 0x38
	private RectTransform _rectTransform; // 0x40
	private Graphic[] _motes; // 0x48
	private float[] _born; // 0x50
	private float[] _lifetimes; // 0x58
	private Vector2[] _origins; // 0x60

	// Methods

	// RVA: 0x25729E8 Offset: 0x256E9E8 VA: 0x25729E8
	private void Awake() { }

	// RVA: 0x2572BC4 Offset: 0x256EBC4 VA: 0x2572BC4
	private void Spawn(int index, float bornTime) { }

	// RVA: 0x2572D3C Offset: 0x256ED3C VA: 0x2572D3C
	private void Update() { }

	// RVA: 0x2572F30 Offset: 0x256EF30 VA: 0x2572F30
	public void .ctor() { }
}

