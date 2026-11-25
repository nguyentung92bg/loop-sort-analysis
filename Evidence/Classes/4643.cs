// Namespace: 
public abstract class BoosterBase : GameBehaviourBase, ITouchInterceptor // TypeDefIndex: 4643
{
	// Fields
	[Inject]
	protected BoosterSystem System; // 0xA0
	[Inject]
	protected HapticModule HapticModule; // 0xA8
	[CompilerGenerated]
	private CinemachineCamera <Cinemachine>k__BackingField; // 0xB0

	// Properties
	protected CinemachineCamera Cinemachine { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x24E4C94 Offset: 0x24E0C94 VA: 0x24E4C94
	protected CinemachineCamera get_Cinemachine() { }

	[CompilerGenerated]
	// RVA: 0x24E4C9C Offset: 0x24E0C9C VA: 0x24E4C9C
	private void set_Cinemachine(CinemachineCamera value) { }

	// RVA: 0x24E4CA4 Offset: 0x24E0CA4 VA: 0x24E4CA4 Slot: 6
	protected override void Awake() { }

	// RVA: 0x24E4D18 Offset: 0x24E0D18 VA: 0x24E4D18 Slot: 10
	protected override void OnDestroy() { }

	[AsyncStateMachine(typeof(BoosterBase.<HandleCameraBlend>d__8))]
	// RVA: 0x24E4D34 Offset: 0x24E0D34 VA: 0x24E4D34
	private UniTaskVoid HandleCameraBlend() { }

	// RVA: 0x24E4DC8 Offset: 0x24E0DC8 VA: 0x24E4DC8 Slot: 15
	public virtual bool CanSelect(IObjectResolver resolver) { }

	// RVA: 0x24E4DD0 Offset: 0x24E0DD0 VA: 0x24E4DD0 Slot: 16
	public virtual bool TryCancel() { }

	// RVA: 0x24E4DD8 Offset: 0x24E0DD8 VA: 0x24E4DD8 Slot: 17
	public virtual void Intercept(LeanFinger finger, RaycastHit hitInfo) { }

	// RVA: 0x24E4DDC Offset: 0x24E0DDC VA: 0x24E4DDC
	protected void .ctor() { }
}

