// Namespace: 
public sealed class MainMenuCarrier : GameBehaviourBase // TypeDefIndex: 4579
{
	// Fields
	[SerializeField]
	private Transform BlockParent; // 0xA0
	[SerializeField]
	private Transform BlockPoint; // 0xA8
	[SerializeField]
	private StatefulComponent View; // 0xB0
	[Inject]
	private GameMachine _gameMachine; // 0xB8
	[Inject]
	private AudioModule _audioModule; // 0xC0
	[Inject]
	private HapticModule _hapticModule; // 0xC8
	private readonly List<Transform> _blocks; // 0xD0

	// Methods

	// RVA: 0x24B68F4 Offset: 0x24B28F4 VA: 0x24B68F4 Slot: 6
	protected override void Awake() { }

	[AsyncStateMachine(typeof(MainMenuCarrier.<HandleAnimation>d__8))]
	// RVA: 0x24B6930 Offset: 0x24B2930 VA: 0x24B6930
	private UniTaskVoid HandleAnimation() { }

	// RVA: 0x24B69C0 Offset: 0x24B29C0 VA: 0x24B69C0
	public void ApplyBlockMotion(Transform blockT, Vector3 from, Vector3 to) { }

	// RVA: 0x24B6B54 Offset: 0x24B2B54 VA: 0x24B6B54
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x24B6C00 Offset: 0x24B2C00 VA: 0x24B6C00
	private bool <HandleAnimation>b__8_0() { }
}

