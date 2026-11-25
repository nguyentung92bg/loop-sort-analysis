// Namespace: 
public sealed class ReviveSystem : SystemBase // TypeDefIndex: 4631
{
	// Fields
	[Inject]
	private CapacityBoosterSystem _capacityBoosterSystem; // 0x30
	[Inject]
	private ConveyorCapacityBoosterSystem _conveyorCapacityBoosterSystem; // 0x38
	[Inject]
	private LoseSystem _loseSystem; // 0x40
	[Inject]
	private AnalyticsModule _analyticsModule; // 0x48
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x50
	[Inject]
	private SheetContainer _sheetContainer; // 0x58
	[Inject]
	private ISubscriber<ReviveMessage> _reviveSub; // 0x60
	private Stash<BehaviourView<IceCarrier>> _iceCarriers; // 0x68
	private RvMaxConfig _rvMaxConfig; // 0x70
	private int _reviveIdx; // 0x78

	// Methods

	// RVA: 0x24E0B54 Offset: 0x24DCB54 VA: 0x24E0B54 Slot: 9
	public override void OnAwake() { }

	// RVA: 0x24E0BF4 Offset: 0x24DCBF4 VA: 0x24E0BF4 Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x24E0D14 Offset: 0x24DCD14 VA: 0x24E0D14
	private void OnRevive(ReviveMessage m) { }

	// RVA: 0x24E0F1C Offset: 0x24DCF1C VA: 0x24E0F1C
	public ReviveSheet.Revive GetRevive() { }

	// RVA: 0x24E0F48 Offset: 0x24DCF48 VA: 0x24E0F48
	public bool CanRevive() { }

	// RVA: 0x24E10E0 Offset: 0x24DD0E0 VA: 0x24E10E0
	public BoosterType GetContinueBoosterType() { }

	// RVA: 0x24E0EB4 Offset: 0x24DCEB4 VA: 0x24E0EB4
	private void IncreaseCapacity(BoosterType type) { }

	// RVA: 0x24E11E0 Offset: 0x24DD1E0 VA: 0x24E11E0
	public void .ctor() { }
}

