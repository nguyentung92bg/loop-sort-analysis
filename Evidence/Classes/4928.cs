// Namespace: 
public sealed class TutorialModule : ModuleBase // TypeDefIndex: 4928
{
	// Fields
	[Inject]
	private Monitors _monitors; // 0x10
	[Inject]
	private GameMachine _gameMachine; // 0x18
	[Inject]
	private InteractionModule _interactionModule; // 0x20
	private bool _playing; // 0x28
	private CancellationTokenSource _playCts; // 0x30

	// Methods

	[AsyncStateMachine(typeof(TutorialModule.<TryPlay>d__5<TTutorial>))]
	// RVA: -1 Offset: -1
	public UniTask<bool> TryPlay<TTutorial>(Action<IContainerBuilder> installation, int playCount = 1, CancellationToken cancellationToken) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x26E2054 Offset: 0x26DE054 VA: 0x26E2054
	|-TutorialModule.TryPlay<object>
	*/

	// RVA: 0x253B134 Offset: 0x2537134 VA: 0x253B134
	public void .ctor() { }
}

