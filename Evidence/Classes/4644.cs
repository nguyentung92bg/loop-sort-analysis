// Namespace: 
public sealed class BoosterSystem : SystemBase // TypeDefIndex: 4644
{
	// Fields
	[Inject]
	private Boosters _boosters; // 0x30
	[Inject]
	private SheetContainer _sheetContainer; // 0x38
	[Inject]
	private SceneScope _sceneScope; // 0x40
	[Inject]
	private InteractionModule _interactionModule; // 0x48
	[Inject]
	private AnalyticsModule _analyticsModule; // 0x50
	[Inject]
	private AudioModule _audioModule; // 0x58
	[Inject]
	private EconomyModule _economyModule; // 0x60
	[Inject]
	private IPublisher<BoosterSelectedMessage> _boosterSelected; // 0x68
	[Inject]
	private IPublisher<BoosterCanceledMessage> _boosterCanceled; // 0x70
	[Inject]
	private IPublisher<BoosterCompletedMessage> _boosterCompleted; // 0x78
	[Inject]
	private ISubscriber<GameStateExitMessage> _gameStateExitSub; // 0x80
	[CompilerGenerated]
	private BoosterBase <BoosterInstance>k__BackingField; // 0x88
	[CompilerGenerated]
	private BoosterType <SelectedType>k__BackingField; // 0x90

	// Properties
	public BoosterBase BoosterInstance { get; set; }
	public BoosterType SelectedType { get; set; }
	public bool Selected { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x24E55FC Offset: 0x24E15FC VA: 0x24E55FC
	public BoosterBase get_BoosterInstance() { }

	[CompilerGenerated]
	// RVA: 0x24E5604 Offset: 0x24E1604 VA: 0x24E5604
	private void set_BoosterInstance(BoosterBase value) { }

	[CompilerGenerated]
	// RVA: 0x24E560C Offset: 0x24E160C VA: 0x24E560C
	public BoosterType get_SelectedType() { }

	[CompilerGenerated]
	// RVA: 0x24E5614 Offset: 0x24E1614 VA: 0x24E5614
	private void set_SelectedType(BoosterType value) { }

	// RVA: 0x24E561C Offset: 0x24E161C VA: 0x24E561C
	public bool get_Selected() { }

	// RVA: 0x24E562C Offset: 0x24E162C VA: 0x24E562C Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x24E575C Offset: 0x24E175C VA: 0x24E575C Slot: 11
	public override void Dispose() { }

	// RVA: 0x24E5784 Offset: 0x24E1784 VA: 0x24E5784
	public void Select(BoosterType boosterType) { }

	// RVA: 0x24E5938 Offset: 0x24E1938 VA: 0x24E5938
	public bool TryCancel() { }

	// RVA: 0x24E5B58 Offset: 0x24E1B58 VA: 0x24E5B58
	public void Complete() { }

	// RVA: 0x24E5E90 Offset: 0x24E1E90 VA: 0x24E5E90
	public bool CanSelect(BoosterType boosterType) { }

	// RVA: 0x24E5EDC Offset: 0x24E1EDC VA: 0x24E5EDC
	private void OnGameStateExit(GameStateExitMessage m) { }

	// RVA: 0x24E5F44 Offset: 0x24E1F44 VA: 0x24E5F44
	public void .ctor() { }
}

