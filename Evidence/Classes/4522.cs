// Namespace: 
public sealed class ElevatorHole : GameBehaviourBase // TypeDefIndex: 4522
{
	// Fields
	[SerializeField]
	private Renderer HoleRenderer; // 0xA0
	[SerializeField]
	private Transform Platform; // 0xA8
	[SerializeField]
	private StatefulComponent View; // 0xB0
	[SerializeField]
	private float SwapDepth; // 0xB8
	[SerializeField]
	private float SwapScale; // 0xBC
	[SerializeField]
	private float CompleteDelay; // 0xC0
	[SerializeField]
	private float LowerDuration; // 0xC4
	[SerializeField]
	private float RiseDuration; // 0xC8
	[SerializeField]
	private float VanishDuration; // 0xCC
	[SerializeField]
	private float EmptyDelay; // 0xD0
	[SerializeField]
	private float ArrivePunch; // 0xD4
	[SerializeField]
	private float ArrivePunchDuration; // 0xD8
	[Inject]
	private PrefabModule _prefabModule; // 0xE0
	[Inject]
	private Particles _particles; // 0xE8
	private const float ParkExtraDepth = 5;
	private static readonly int PlatformDepthId; // 0x0
	private static readonly int BottomOffsetId; // 0x4
	private static readonly int BottomScaleId; // 0x8
	private readonly List<Carrier> _carriers; // 0xF0
	private int _currentIdx; // 0xF8
	private Vector3 _restPosition; // 0xFC
	private Vector3 _platformRestPosition; // 0x108
	private Vector3 _platformRestScale; // 0x114

	// Properties
	public Carrier Current { get; }
	public bool HasNext { get; }

	// Methods

	// RVA: 0x2410518 Offset: 0x240C518 VA: 0x2410518
	public Carrier get_Current() { }

	// RVA: 0x2410578 Offset: 0x240C578 VA: 0x2410578
	public bool get_HasNext() { }

	// RVA: 0x24105D0 Offset: 0x240C5D0 VA: 0x24105D0 Slot: 6
	protected override void Awake() { }

	// RVA: 0x2410624 Offset: 0x240C624 VA: 0x2410624 Slot: 12
	public override void OnReturn() { }

	// RVA: 0x24109C8 Offset: 0x240C9C8 VA: 0x24109C8
	public void Initialize(List<Carrier> carriers) { }

	// RVA: 0x2410E84 Offset: 0x240CE84 VA: 0x2410E84
	public void OnLevelAnimationStart() { }

	[AsyncStateMachine(typeof(ElevatorHole.<Rise>d__31))]
	// RVA: 0x24111D4 Offset: 0x240D1D4 VA: 0x24111D4
	public UniTask Rise() { }

	[AsyncStateMachine(typeof(ElevatorHole.<Lower>d__32))]
	// RVA: 0x2411270 Offset: 0x240D270 VA: 0x2411270
	public UniTask Lower() { }

	[AsyncStateMachine(typeof(ElevatorHole.<Swap>d__33))]
	// RVA: 0x241130C Offset: 0x240D30C VA: 0x241130C
	public UniTask Swap() { }

	// RVA: 0x24113A8 Offset: 0x240D3A8 VA: 0x24113A8
	private UniTask Travel(Carrier carrier, float from, float to, float duration) { }

	// RVA: 0x241154C Offset: 0x240D54C VA: 0x241154C
	private UniTask Fade(Carrier carrier, float from, float to) { }

	// RVA: 0x24116E4 Offset: 0x240D6E4 VA: 0x24116E4
	private void Arrive(Carrier carrier) { }

	// RVA: 0x2410EBC Offset: 0x240CEBC VA: 0x2410EBC
	private void SetPose(Carrier carrier, float progress, float visibility) { }

	// RVA: 0x24118E4 Offset: 0x240D8E4 VA: 0x24118E4
	private Vector3 ScaleAroundShaft(Vector3 position, Vector3 scale) { }

	// RVA: 0x24119F4 Offset: 0x240D9F4 VA: 0x24119F4
	private Vector3 ScaleInPlatformAxes(Vector3 scale) { }

	// RVA: 0x2410BAC Offset: 0x240CBAC VA: 0x2410BAC
	private void Park(Carrier carrier) { }

	// RVA: 0x2410B50 Offset: 0x240CB50 VA: 0x2410B50
	private void Lock(Carrier carrier) { }

	// RVA: 0x2411D1C Offset: 0x240DD1C VA: 0x2411D1C
	private void Unlock(Carrier carrier) { }

	// RVA: 0x2410C8C Offset: 0x240CC8C VA: 0x2410C8C
	private void UpdateCount(bool animate) { }

	// RVA: 0x2411D78 Offset: 0x240DD78 VA: 0x2411D78
	public void .ctor() { }

	// RVA: 0x2411E48 Offset: 0x240DE48 VA: 0x2411E48
	private static void .cctor() { }
}

