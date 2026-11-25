// Namespace: 
public sealed class LockCarrierGroup : GameBehaviourBase // TypeDefIndex: 4537
{
	// Fields
	[SerializeField]
	private Transform Lock; // 0xA0
	[SerializeField]
	private Transform UnlockPoint; // 0xA8
	[SerializeField]
	private float ForwardOffset; // 0xB0
	[Header("Skinned Mesh")]
	[SerializeField]
	private SkinnedMeshRenderer FrontDoor; // 0xB8
	[SerializeField]
	private SkinnedMeshRenderer TopDoor; // 0xC0
	[Header("Modular")]
	[SerializeField]
	private Transform Left; // 0xC8
	[SerializeField]
	private Transform Right; // 0xD0
	[SerializeField]
	private Transform Center; // 0xD8
	[SerializeField]
	private float CenterScaleOffset; // 0xE0
	[SerializeField]
	private Transform Door; // 0xE8
	[SerializeField]
	private float DoorScaleOffset; // 0xF0
	private ColorType _colorType; // 0xF4
	private readonly List<Carrier> _carriers; // 0x100

	// Methods

	// RVA: 0x24A65AC Offset: 0x24A25AC VA: 0x24A65AC Slot: 12
	public override void OnReturn() { }

	// RVA: 0x24A6734 Offset: 0x24A2734 VA: 0x24A6734
	public void Initialize() { }

	// RVA: 0x24A7018 Offset: 0x24A3018 VA: 0x24A7018
	public void SetColorType(ColorType colorType) { }

	// RVA: 0x24A7020 Offset: 0x24A3020 VA: 0x24A7020
	public void AddCarrier(Carrier carrier) { }

	[AsyncStateMachine(typeof(LockCarrierGroup.<Unlock>d__17))]
	// RVA: 0x24A7078 Offset: 0x24A3078 VA: 0x24A7078
	public UniTaskVoid Unlock(KeyBlockGroup keyBlockGroup) { }

	// RVA: 0x24A7128 Offset: 0x24A3128 VA: 0x24A7128
	public void OnLevelAnimationStart() { }

	[AsyncStateMachine(typeof(LockCarrierGroup.<OnLevelAnimationEnd>d__19))]
	// RVA: 0x24A7228 Offset: 0x24A3228 VA: 0x24A7228
	public UniTaskVoid OnLevelAnimationEnd() { }

	// RVA: 0x24A72BC Offset: 0x24A32BC VA: 0x24A72BC
	public void .ctor() { }
}

