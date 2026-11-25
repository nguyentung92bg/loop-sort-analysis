// Namespace: 
public sealed class VaultCarrier : GameBehaviourBase, IFeatureProcessor // TypeDefIndex: 4547
{
	// Fields
	[SerializeField]
	private StatefulComponent View; // 0xA0
	[SerializeField]
	private Animator Animator; // 0xA8
	[Inject]
	private AudioModule _audioModule; // 0xB0
	private Carrier _carrier; // 0xB8
	private int _requiredCompleteCount; // 0xC0
	private static readonly int OpenHash; // 0x0
	private static readonly int DamageHash; // 0x4

	// Methods

	// RVA: 0x24AF9BC Offset: 0x24AB9BC VA: 0x24AF9BC Slot: 11
	public override void OnRent() { }

	// RVA: 0x24AFA5C Offset: 0x24ABA5C VA: 0x24AFA5C Slot: 12
	public override void OnReturn() { }

	// RVA: 0x24AFA9C Offset: 0x24ABA9C VA: 0x24AFA9C Slot: 14
	public void ProcessFeature(FeatureType featureType, string data) { }

	// RVA: 0x24AFB5C Offset: 0x24ABB5C VA: 0x24AFB5C
	public bool IsOpened() { }

	// RVA: 0x24AFB6C Offset: 0x24ABB6C VA: 0x24AFB6C
	public void OnComplete() { }

	// RVA: 0x24AFC18 Offset: 0x24ABC18 VA: 0x24AFC18
	private void ApplyDamage() { }

	// RVA: 0x24AFDB8 Offset: 0x24ABDB8 VA: 0x24AFDB8
	private void Open() { }

	// RVA: 0x24AFF08 Offset: 0x24ABF08 VA: 0x24AFF08
	public void .ctor() { }

	// RVA: 0x24AFF60 Offset: 0x24ABF60 VA: 0x24AFF60
	private static void .cctor() { }
}

