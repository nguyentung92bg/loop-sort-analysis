// Namespace: 
public sealed class CarpetCarrierGroupV2 : CarpetCarrierGroup // TypeDefIndex: 4495
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
	[SerializeField]
	private MeshRenderer Carpet; // 0xC0
	[SerializeField]
	private float ForwardOffset; // 0xC8
	[SerializeField]
	private float BackOffset; // 0xCC
	[SerializeField]
	private GameObject DividerPrefab; // 0xD0
	[SerializeField]
	private Transform Roll; // 0xD8
	private float _previousCarrierCount; // 0xE0
	private readonly List<Carrier> _carriers; // 0xE8
	private readonly List<GameObject> _dividers; // 0xF0
	private static readonly int BaseMapSt; // 0x0

	// Methods

	// RVA: 0x2405738 Offset: 0x2401738 VA: 0x2405738 Slot: 12
	public override void OnReturn() { }

	// RVA: 0x2405848 Offset: 0x2401848 VA: 0x2405848 Slot: 14
	public override void Initialize() { }

	// RVA: 0x2406560 Offset: 0x2402560 VA: 0x2406560 Slot: 15
	public override void AddCarrier(Carrier carrier) { }

	// RVA: 0x24065B8 Offset: 0x24025B8 VA: 0x24065B8 Slot: 16
	public override void RevealNext() { }

	// RVA: 0x2405CC8 Offset: 0x2401CC8 VA: 0x2405CC8
	private void CreateModel() { }

	// RVA: 0x2406704 Offset: 0x2402704 VA: 0x2406704
	private void UpdateModel(Carrier firstTarget, Carrier lastTarget) { }

	// RVA: 0x2406D9C Offset: 0x2402D9C VA: 0x2406D9C
	private void RemoveDividers() { }

	[AsyncStateMachine(typeof(CarpetCarrierGroupV2.<ApplyRemoveDividerMotion>d__20))]
	// RVA: 0x2407030 Offset: 0x2403030 VA: 0x2407030
	private UniTaskVoid ApplyRemoveDividerMotion(GameObject divider) { }

	// RVA: 0x2406E94 Offset: 0x2402E94 VA: 0x2406E94
	private void ApplyRemoveRollMotion(float delay) { }

	// RVA: 0x24070DC Offset: 0x24030DC VA: 0x24070DC
	public void .ctor() { }

	// RVA: 0x24071B4 Offset: 0x24031B4 VA: 0x24071B4
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x240721C Offset: 0x240321C VA: 0x240721C
	private void <UpdateModel>b__18_0(float x) { }
}

