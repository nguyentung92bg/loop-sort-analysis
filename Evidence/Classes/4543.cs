// Namespace: 
public sealed class TagCarrierSystem : SystemBase // TypeDefIndex: 4543
{
	// Fields
	[Inject]
	private ISubscriber<LevelBuildCompleteMessage> _levelBuildCompleteSub; // 0x30
	[Inject]
	private ISubscriber<CarrierInteractUpdateMessage> _carrierInteractUpdateSub; // 0x38
	[Inject]
	private ISubscriber<CarrierCompleteMessage> _carrierCompleteSub; // 0x40
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x48
	private Stash<BehaviourView<TagCarrier>> _tagCarriers; // 0x50

	// Methods

	// RVA: 0x24ACBE4 Offset: 0x24A8BE4 VA: 0x24ACBE4 Slot: 9
	public override void OnAwake() { }

	// RVA: 0x24ACC48 Offset: 0x24A8C48 VA: 0x24ACC48 Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x24ACF48 Offset: 0x24A8F48 VA: 0x24ACF48
	private void OnLevelBuildComplete(LevelBuildCompleteMessage m) { }

	// RVA: 0x24AD0E0 Offset: 0x24A90E0 VA: 0x24AD0E0
	private void OnCarrierInteractUpdate(CarrierInteractUpdateMessage m) { }

	// RVA: 0x24AD1F0 Offset: 0x24A91F0 VA: 0x24AD1F0
	private void OnCarrierComplete(CarrierCompleteMessage m) { }

	// RVA: 0x24AD2E4 Offset: 0x24A92E4 VA: 0x24AD2E4
	public void .ctor() { }
}

