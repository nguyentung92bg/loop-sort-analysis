// Namespace: 
public sealed class VaultCarrierSystem : SystemBase // TypeDefIndex: 4548
{
	// Fields
	[Inject]
	private ISubscriber<CarrierCompleteMessage> _carrierCompleteSub; // 0x30
	private Stash<BehaviourView<VaultCarrier>> _vaultCarriers; // 0x38

	// Methods

	// RVA: 0x24B0000 Offset: 0x24AC000 VA: 0x24B0000 Slot: 9
	public override void OnAwake() { }

	// RVA: 0x24B0064 Offset: 0x24AC064 VA: 0x24B0064 Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x24B0184 Offset: 0x24AC184 VA: 0x24B0184
	private void OnCarrierComplete(CarrierCompleteMessage m) { }

	// RVA: 0x24B0188 Offset: 0x24AC188 VA: 0x24B0188
	private void HandleComplete() { }

	// RVA: 0x24B02DC Offset: 0x24AC2DC VA: 0x24B02DC
	public void .ctor() { }
}

