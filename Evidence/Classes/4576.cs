// Namespace: 
public sealed class RocketConfig : Data // TypeDefIndex: 4576
{
	// Fields
	[Header("Prefabs")]
	public Rocket RocketPrefab; // 0x18
	public GameObject ExplosionParticlePrefab; // 0x20
	[Header("Spawn")]
	public float SpawnCornerOffset; // 0x28
	public float SpawnDepth; // 0x2C
	public float SpawnScale; // 0x30
	[Header("Pace")]
	public float FlightSpeed; // 0x34
	public float ApexDepthRatio; // 0x38
	public AnimationCurve Pacing; // 0x40
	[Header("Camera")]
	public CinemachineImpulseDefinition ExplosionImpulse; // 0x48
	public float ExplosionShakeForce; // 0x50

	// Methods

	// RVA: 0x24B68D4 Offset: 0x24B28D4 VA: 0x24B68D4
	public void .ctor() { }
}

