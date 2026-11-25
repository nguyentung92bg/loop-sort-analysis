// Namespace: 
public sealed class ConveyorViewElement : ElementBase // TypeDefIndex: 4637
{
	// Fields
	[Inject]
	private Camera _camera; // 0x28
	[Inject]
	private SceneModule _sceneModule; // 0x30
	[Inject]
	private ConveyorConfig _config; // 0x38
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x40
	[Inject]
	private ISubscriber<ConveyorSlotAddBlockMessage> _conveyorSlotAddBlockSub; // 0x48
	[Inject]
	private ISubscriber<ConveyorSlotRemoveBlockMessage> _conveyorSlotRemoveBlockSub; // 0x50
	[Inject]
	private ISubscriber<SlotCreateCompleteMessage> _slotCreateCompleteSub; // 0x58
	[Inject]
	private ISubscriber<LevelBuildCompleteMessage> _levelBuildCompleteSub; // 0x60
	private Image _red; // 0x68
	private Color _originalColor; // 0x70
	private Color _targetColor; // 0x80
	private ConveyorViewConfig _conveyorViewConfig; // 0x90

	// Methods

	// RVA: 0x24E26F4 Offset: 0x24DE6F4 VA: 0x24E26F4
	private void Awake() { }

	// RVA: 0x24E2784 Offset: 0x24DE784 VA: 0x24E2784
	private void Update() { }

	// RVA: 0x24E2828 Offset: 0x24DE828 VA: 0x24E2828 Slot: 8
	public override void Setup() { }

	// RVA: 0x24E2C04 Offset: 0x24DEC04 VA: 0x24E2C04
	private void UpdateView() { }

	// RVA: 0x24E2DE4 Offset: 0x24DEDE4 VA: 0x24E2DE4
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x24E2DEC Offset: 0x24DEDEC VA: 0x24E2DEC
	private void <Setup>b__14_0(ConveyorSlotAddBlockMessage _) { }

	[CompilerGenerated]
	// RVA: 0x24E2DF0 Offset: 0x24DEDF0 VA: 0x24E2DF0
	private void <Setup>b__14_1(ConveyorSlotRemoveBlockMessage _) { }

	[CompilerGenerated]
	// RVA: 0x24E2DF4 Offset: 0x24DEDF4 VA: 0x24E2DF4
	private void <Setup>b__14_2(SlotCreateCompleteMessage _) { }

	[CompilerGenerated]
	// RVA: 0x24E2DF8 Offset: 0x24DEDF8 VA: 0x24E2DF8
	private void <Setup>b__14_3(LevelBuildCompleteMessage _) { }
}

