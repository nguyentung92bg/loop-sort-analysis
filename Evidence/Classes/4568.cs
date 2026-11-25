// Namespace: 
public sealed class BlockConfig : Data // TypeDefIndex: 4568
{
	// Fields
	[Header("Block Mesh")]
	public Mesh BeveledMesh; // 0x18
	public Mesh FlatMesh; // 0x20
	public Mesh CornerMesh; // 0x28
	public Mesh MiddleMesh; // 0x30
	[Header("Group Mesh")]
	public Mesh GroupBeveledMesh; // 0x38
	public Mesh GroupCornerMesh; // 0x40
	public Mesh GroupCenterMesh; // 0x48
	[Header("Prefab")]
	public ConveyorBlock ConveyorBlock; // 0x50
	public StatefulComponent BlockGroupShapePrefab; // 0x58
	[Header("Physics")]
	public float ConveyorForce; // 0x60
	public float Mass; // 0x64
	public float Drag; // 0x68
	public float AngularDrag; // 0x6C
	public float InitialImpulseForce; // 0x70
	public float MaxLinearVelocity; // 0x74
	[Header("Physics Force Direction")]
	public float ForceDirectionOffset; // 0x78
	public int BakeSampleCount; // 0x7C
	public float CellSize; // 0x80
	public int MaxSearchRadius; // 0x84

	// Methods

	// RVA: 0x24B670C Offset: 0x24B270C VA: 0x24B670C
	public void .ctor() { }
}

