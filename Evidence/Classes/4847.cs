// Namespace: 
public sealed class NonPayerOffer : LiveOpsBase // TypeDefIndex: 4847
{
	// Fields
	[Inject]
	private LiveOpsModule _liveOpsModule; // 0x10
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x18
	[Inject]
	private PurchasingModule _purchasingModule; // 0x20
	private NonPayerConfig _nonPayerConfig; // 0x28
	private ProductMetadata _productMetadata; // 0x30

	// Methods

	// RVA: 0x2522FAC Offset: 0x251EFAC VA: 0x2522FAC Slot: 5
	public override void Initialize() { }

	// RVA: 0x2523094 Offset: 0x251F094 VA: 0x2523094 Slot: 10
	public override void Join() { }

	[AsyncStateMachine(typeof(NonPayerOffer.<ApplyHomeAction>d__7))]
	// RVA: 0x25230F4 Offset: 0x251F0F4 VA: 0x25230F4 Slot: 6
	public override UniTask ApplyHomeAction(CancellationToken cancellationToken) { }

	// RVA: 0x2523190 Offset: 0x251F190 VA: 0x2523190 Slot: 14
	public override bool CanShowInHome() { }

	// RVA: 0x252327C Offset: 0x251F27C VA: 0x252327C
	public void .ctor() { }
}

