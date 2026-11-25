// Namespace: 
public sealed class ConveyorBlock : GameBehaviourBase // TypeDefIndex: 4552
{
	// Fields
	[SerializeField]
	private Transform BoneParent; // 0xA0
	[Inject]
	private Conveyor _conveyor; // 0xA8
	private readonly List<Transform> _bones; // 0xB0

	// Methods

	// RVA: 0x24B23F0 Offset: 0x24AE3F0 VA: 0x24B23F0 Slot: 6
	protected override void Awake() { }

	// RVA: 0x24B2450 Offset: 0x24AE450 VA: 0x24B2450
	public void Set(SplineComputer spline, ConveyorSlot first, ConveyorSlot last) { }

	// RVA: 0x24B261C Offset: 0x24AE61C VA: 0x24B261C
	private void HandleClosedSpline(SplineComputer spline, ref double from, ref double to) { }

	// RVA: 0x24B26D0 Offset: 0x24AE6D0 VA: 0x24B26D0
	public void .ctor() { }
}

