// Namespace: 
public sealed class ConveyorConfig : Data // TypeDefIndex: 4575
{
	// Fields
	[Header("General")]
	public float Speed; // 0x18
	public float ConveyorHeight; // 0x1C
	public GameObject EndPrefab; // 0x20
	public GameObject ShinePrefab; // 0x28
	public GameObject ColliderPrefab; // 0x30
	public GameObject GrowPrefab; // 0x38
	[Header("Arrow")]
	public GameObject ArrowPrefab; // 0x40
	public float ArrowPerDistance; // 0x48
	[Header("Slot")]
	public GameObject SlotPrefab; // 0x50
	public float SlotElementOffset; // 0x58
	public float SlotCollisionDistance; // 0x5C
	[Header("Conveyor")]
	public float CarrierTriggerOffset; // 0x60
	public float CarrierTriggerSize; // 0x64
	[Header("Color")]
	public Color SideRedColor; // 0x68
	public float RedRatio; // 0x78
	public float ColorPingPongModifier; // 0x7C
	public float ColorLerpModifier; // 0x80
	[Header("View")]
	public ConveyorView ViewPrefab; // 0x88

	// Methods

	// RVA: 0x24B68CC Offset: 0x24B28CC VA: 0x24B68CC
	public void .ctor() { }
}

