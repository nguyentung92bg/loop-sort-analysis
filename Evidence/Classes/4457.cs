// Namespace: 
[CompilerGenerated]
private sealed class MetalBlockSystem.<>c__DisplayClass61_0 // TypeDefIndex: 4457
{
	// Fields
	public float fieldAlpha; // 0x10
	public float tremble; // 0x14
	public int contactCount; // 0x18
	public float flash; // 0x1C
	public List<MetalBlockSystem.MagnetPiece> pieces; // 0x20
	public float squash; // 0x28
	public MetalBlockSystem <>4__this; // 0x30
	public float lastContactSoundTime; // 0x38
	public Transform magnetT; // 0x40
	public Vector3 baseScale; // 0x48
	public int poleMaterialIndex; // 0x54
	public MaterialPropertyBlock propertyBlock; // 0x58
	public Color poleBaseColor; // 0x60
	public MeshRenderer magnetRenderer; // 0x70
	public LineRenderer[] fieldLines; // 0x78
	public bool isAlive; // 0x80
	public GameObject magnet; // 0x88

	// Methods

	// RVA: 0x23EF4A8 Offset: 0x23EB4A8 VA: 0x23EF4A8
	public void .ctor() { }

	// RVA: 0x23EF4B0 Offset: 0x23EB4B0 VA: 0x23EF4B0
	internal void <ApplyMagnetMotion>b__2(float v) { }

	// RVA: 0x23EF4B8 Offset: 0x23EB4B8 VA: 0x23EF4B8
	internal void <ApplyMagnetMotion>g__OnContact|0() { }

	[AsyncStateMachine(typeof(MetalBlockSystem.<>c__DisplayClass61_0.<<ApplyMagnetMotion>g__UpdatePose|1>d))]
	// RVA: 0x23EF720 Offset: 0x23EB720 VA: 0x23EF720
	internal UniTaskVoid <ApplyMagnetMotion>g__UpdatePose|1() { }
}

