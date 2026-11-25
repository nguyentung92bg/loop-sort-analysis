// Namespace: 
public sealed class LevelEnvironmentSystem : SystemBase // TypeDefIndex: 4627
{
	// Fields
	[Inject]
	private PrefabModule _prefabModule; // 0x30
	[Inject]
	private ConveyorConfig _conveyorConfig; // 0x38
	[Inject]
	private Surface _surface; // 0x40
	[Inject]
	private Camera _camera; // 0x48
	[Inject]
	private ISubscriber<CameraUpdateCompleteMessage> _cameraUpdateCompleteSub; // 0x50
	[Inject]
	private ISubscriber<LevelEnvironmentUpdateMessage> _levelEnvironmentUpdateSub; // 0x58
	private GameObject _shineInstance; // 0x60
	private Nullable<Color> _originalBackgroundColor; // 0x68

	// Methods

	// RVA: 0x24DEAC8 Offset: 0x24DAAC8 VA: 0x24DEAC8 Slot: 12
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x24DECD4 Offset: 0x24DACD4 VA: 0x24DECD4
	private void OnCameraUpdateComplete(CameraUpdateCompleteMessage m) { }

	// RVA: 0x24DF10C Offset: 0x24DB10C VA: 0x24DF10C
	private void OnLevelEnvironmentUpdate(LevelEnvironmentUpdateMessage m) { }

	// RVA: 0x24DED94 Offset: 0x24DAD94 VA: 0x24DED94
	private void CreateShineModel(Vector3 center) { }

	// RVA: 0x24DEF44 Offset: 0x24DAF44 VA: 0x24DEF44
	private void SetGreenLevel(bool isGreenLevel) { }

	// RVA: 0x24DF114 Offset: 0x24DB114 VA: 0x24DF114
	public void .ctor() { }
}

