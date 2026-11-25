// Namespace: 
public sealed class EditorHelperModule : ModuleBase, ITickable // TypeDefIndex: 4900
{
	// Fields
	[Inject]
	private GameMachine _gameMachine; // 0x10
	private CloudPrefsInt _level; // 0x18
	private float _pausedTimeScale; // 0x38

	// Methods

	// RVA: 0x2534B00 Offset: 0x2530B00 VA: 0x2534B00 Slot: 4
	public void Tick() { }

	[AsyncStateMachine(typeof(EditorHelperModule.<StepOneFrame>d__4))]
	// RVA: 0x2534D5C Offset: 0x2530D5C VA: 0x2534D5C
	private UniTaskVoid StepOneFrame() { }

	// RVA: 0x2534DD4 Offset: 0x2530DD4 VA: 0x2534DD4
	public void .ctor() { }
}

