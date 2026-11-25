// Namespace: 
public sealed class StickyBlockGroup : GameBehaviourBase // TypeDefIndex: 4462
{
	// Fields
	[SerializeField]
	private Animator Animator; // 0xA0
	private bool _isCompleted; // 0xA8
	private Block _firstBlock; // 0xB0
	private Vector3 _positionOffset; // 0xB8
	private Vector3 _baseEulerAngles; // 0xC4
	private MotionHandle _jiggleHandle; // 0xD0
	private readonly List<Block> _blocks; // 0xE0
	private static readonly int CompleteHash; // 0x0
	private static readonly Vector3 JiggleStrength; // 0x4

	// Methods

	// RVA: 0x23F2308 Offset: 0x23EE308 VA: 0x23F2308
	private void Update() { }

	// RVA: 0x23F2384 Offset: 0x23EE384 VA: 0x23F2384 Slot: 12
	public override void OnReturn() { }

	// RVA: 0x23F24C0 Offset: 0x23EE4C0 VA: 0x23F24C0
	public void Initialize() { }

	// RVA: 0x23F2698 Offset: 0x23EE698 VA: 0x23F2698
	public void AddBlock(Block block) { }

	// RVA: 0x23F26F0 Offset: 0x23EE6F0 VA: 0x23F26F0
	public void TryComplete() { }

	// RVA: 0x23F27C4 Offset: 0x23EE7C4 VA: 0x23F27C4
	public void ApplyJiggleMotion() { }

	// RVA: 0x23F296C Offset: 0x23EE96C VA: 0x23F296C
	public void .ctor() { }

	// RVA: 0x23F2A18 Offset: 0x23EEA18 VA: 0x23F2A18
	private static void .cctor() { }
}

