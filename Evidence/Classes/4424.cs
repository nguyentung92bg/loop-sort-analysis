// Namespace: 
public sealed class BlockGroupShapeSystem : SystemBase // TypeDefIndex: 4424
{
	// Fields
	[Inject]
	private ISubscriber<CarrierBlockGroupUpdateMessage> _carrierBlockGroupUpdateSub; // 0x30
	[Inject]
	private ISubscriber<ColorBlindUpdateMessage> _colorBlindUpdateSub; // 0x38
	[Inject]
	private BlockConfig _blockConfig; // 0x40
	[Inject]
	private PrefabModule _prefabModule; // 0x48
	[Inject]
	private Colors _colors; // 0x50
	[Inject]
	private SettingsModule _settingsModule; // 0x58
	[Inject]
	private Camera _camera; // 0x60
	private Canvas _canvas; // 0x68
	private readonly Dictionary<MeshRenderer, StatefulComponent> _viewByGroup; // 0x70
	private readonly Dictionary<StatefulComponent, CompositeMotionHandle> _motionsByView; // 0x78

	// Methods

	// RVA: 0x23E0678 Offset: 0x23DC678 VA: 0x23E0678 Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x23E0894 Offset: 0x23DC894 VA: 0x23E0894 Slot: 9
	public override void OnAwake() { }

	// RVA: 0x23E09AC Offset: 0x23DC9AC VA: 0x23E09AC Slot: 10
	public override void OnUpdate(float deltaTime) { }

	// RVA: 0x23E0E08 Offset: 0x23DCE08 VA: 0x23E0E08
	private void OnCarrierBlockGroupUpdate(CarrierBlockGroupUpdateMessage m) { }

	// RVA: 0x23E1468 Offset: 0x23DD468 VA: 0x23E1468
	private void OnColorBlindUpdate(ColorBlindUpdateMessage m) { }

	// RVA: 0x23E08B0 Offset: 0x23DC8B0 VA: 0x23E08B0
	private void CreateCanvas() { }

	// RVA: 0x23E1024 Offset: 0x23DD024 VA: 0x23E1024
	private void CreateShape(Carrier carrier, MeshRenderer groupBlock) { }

	[AsyncStateMachine(typeof(BlockGroupShapeSystem.<RemoveShape>d__17))]
	// RVA: 0x23E13A8 Offset: 0x23DD3A8 VA: 0x23E13A8
	private UniTaskVoid RemoveShape(Carrier carrier, MeshRenderer groupBlock) { }

	// RVA: 0x23E1484 Offset: 0x23DD484 VA: 0x23E1484
	private CompositeMotionHandle CancelAndGetMotions(StatefulComponent view) { }

	// RVA: 0x23E1564 Offset: 0x23DD564 VA: 0x23E1564
	public void .ctor() { }
}

