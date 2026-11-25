// Namespace: 
public sealed class LiveOpsDeepLink : LiveOpsBase // TypeDefIndex: 4841
{
	// Fields
	[Inject]
	private DeepLinkModule _deepLinkModule; // 0x10
	[Inject]
	private LiveOpsModule _liveOpsModule; // 0x18
	[Inject]
	private GameMachine _gameMachine; // 0x20
	[Inject]
	private Monitors _monitors; // 0x28
	[Inject]
	private SheetContainer _sheetContainer; // 0x30
	[Inject]
	private ISubscriber<DeepLinkActivatedMessage> _deepLinkActivatedSub; // 0x38
	private Nullable<DeepLinkInfo> _deepLinkInfo; // 0x40

	// Methods

	// RVA: 0x2521D5C Offset: 0x251DD5C VA: 0x2521D5C Slot: 5
	public override void Initialize() { }

	[AsyncStateMachine(typeof(LiveOpsDeepLink.<ApplyHomeAction>d__8))]
	// RVA: 0x2521E64 Offset: 0x251DE64 VA: 0x2521E64 Slot: 6
	public override UniTask ApplyHomeAction(CancellationToken cancellationToken) { }

	// RVA: 0x2521EFC Offset: 0x251DEFC VA: 0x2521EFC
	private void HandleDeepLink(DeepLinkInfo info) { }

	// RVA: 0x2522018 Offset: 0x251E018 VA: 0x2522018
	private void OnDeepLinkActivated(DeepLinkActivatedMessage m) { }

	// RVA: 0x25222D8 Offset: 0x251E2D8 VA: 0x25222D8
	public void .ctor() { }
}

