// Namespace: 
public sealed class FirstLevelTutorial : TutorialBase // TypeDefIndex: 4639
{
	// Fields
	[Inject]
	private SceneModule _sceneModule; // 0xB0
	[Inject]
	private SheetContainer _sheetContainer; // 0xB8
	[Inject]
	private Camera _camera; // 0xC0

	// Methods

	[AsyncStateMachine(typeof(FirstLevelTutorial.<Play>d__3))]
	// RVA: 0x24E2DFC Offset: 0x24DEDFC VA: 0x24E2DFC Slot: 17
	public override UniTask<bool> Play(CancellationToken cancellationToken) { }

	// RVA: 0x24E2F10 Offset: 0x24DEF10 VA: 0x24E2F10 Slot: 18
	public override void Cleanup() { }

	// RVA: 0x24E2F64 Offset: 0x24DEF64 VA: 0x24E2F64
	public void .ctor() { }
}

