// Namespace: 
public sealed class SecondLevelTutorial : TutorialBase // TypeDefIndex: 4641
{
	// Fields
	[Inject]
	private SceneModule _sceneModule; // 0xB0
	[Inject]
	private SheetContainer _sheetContainer; // 0xB8
	[Inject]
	private Camera _camera; // 0xC0

	// Methods

	[AsyncStateMachine(typeof(SecondLevelTutorial.<Play>d__3))]
	// RVA: 0x24E3A40 Offset: 0x24DFA40 VA: 0x24E3A40 Slot: 17
	public override UniTask<bool> Play(CancellationToken cancellationToken) { }

	// RVA: 0x24E3B58 Offset: 0x24DFB58 VA: 0x24E3B58 Slot: 18
	public override void Cleanup() { }

	// RVA: 0x24E3BAC Offset: 0x24DFBAC VA: 0x24E3BAC
	public void .ctor() { }
}

