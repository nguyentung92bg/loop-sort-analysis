// Namespace: 
public sealed class IceCarrier : GameBehaviourBase, IFeatureProcessor, ILevelAnimationListener // TypeDefIndex: 4531
{
	// Fields
	[SerializeField]
	private GameObject Model; // 0xA0
	[SerializeField]
	private Transform BreakParticlePoint; // 0xA8
	[Inject]
	private Particles _particles; // 0xB0
	private Carrier _carrier; // 0xB8
	private bool _isBroken; // 0xC0
	private Vector3 _originalModelLocalPosition; // 0xC4
	private readonly List<CarrierSheet.CarrierType> _requiredCarrierTypes; // 0xD0

	// Methods

	// RVA: 0x24A57D0 Offset: 0x24A17D0 VA: 0x24A57D0 Slot: 6
	protected override void Awake() { }

	// RVA: 0x24A5870 Offset: 0x24A1870 VA: 0x24A5870 Slot: 11
	public override void OnRent() { }

	// RVA: 0x24A5950 Offset: 0x24A1950 VA: 0x24A5950 Slot: 14
	public void ProcessFeature(FeatureType featureType, string data) { }

	// RVA: 0x24A5A58 Offset: 0x24A1A58 VA: 0x24A5A58
	public bool IsBroken() { }

	// RVA: 0x24A5A60 Offset: 0x24A1A60 VA: 0x24A5A60
	public void Break() { }

	[AsyncStateMachine(typeof(IceCarrier.<BreakDelay>d__12))]
	// RVA: 0x24A5A84 Offset: 0x24A1A84 VA: 0x24A5A84
	private UniTaskVoid BreakDelay() { }

	// RVA: 0x24A5B14 Offset: 0x24A1B14 VA: 0x24A5B14
	public bool MatchesRequiredCarrierType(Carrier carrier) { }

	// RVA: 0x24A5B88 Offset: 0x24A1B88 VA: 0x24A5B88 Slot: 15
	public void OnLevelAnimationStart() { }

	// RVA: 0x24A5C30 Offset: 0x24A1C30 VA: 0x24A5C30 Slot: 16
	public void OnLevelAnimationComplete() { }

	// RVA: 0x24A5D1C Offset: 0x24A1D1C VA: 0x24A5D1C
	public void .ctor() { }
}

