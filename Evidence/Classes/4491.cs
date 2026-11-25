// Namespace: 
public sealed class CarpetCarrierGroupControl : CarpetCarrierGroup // TypeDefIndex: 4491
{
	// Fields
	[SerializeField]
	private Transform Model; // 0xA0
	[SerializeField]
	private Transform Left; // 0xA8
	[SerializeField]
	private Transform Right; // 0xB0
	[SerializeField]
	private float WidthOffset; // 0xB8
	private Nullable<Vector3> _modelMoveDirection; // 0xBC
	private readonly List<Carrier> _carriers; // 0xD0

	// Methods

	// RVA: 0x2403000 Offset: 0x23FF000 VA: 0x2403000 Slot: 12
	public override void OnReturn() { }

	// RVA: 0x24030AC Offset: 0x23FF0AC VA: 0x24030AC Slot: 14
	public override void Initialize() { }

	// RVA: 0x24034A0 Offset: 0x23FF4A0 VA: 0x24034A0
	private void UpdateModel(bool withMotion) { }

	// RVA: 0x2403FE0 Offset: 0x23FFFE0 VA: 0x2403FE0 Slot: 15
	public override void AddCarrier(Carrier carrier) { }

	// RVA: 0x2404038 Offset: 0x2400038 VA: 0x2404038 Slot: 16
	public override void RevealNext() { }

	// RVA: 0x2404258 Offset: 0x2400258 VA: 0x2404258 Slot: 17
	public override void OnLevelAnimationStart() { }

	// RVA: 0x24042C0 Offset: 0x24002C0 VA: 0x24042C0 Slot: 18
	public override void OnLevelAnimationEnd() { }

	// RVA: 0x2404480 Offset: 0x2400480 VA: 0x2404480
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2404504 Offset: 0x2400504 VA: 0x2404504
	private void <UpdateModel>b__8_0() { }
}

