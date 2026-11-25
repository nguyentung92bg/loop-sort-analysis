// Namespace: 
public sealed class GameBootstrapState : GameStateBase // TypeDefIndex: 4732
{
	// Fields
	[Inject]
	private IPublisher<LoginMessage> _loginPub; // 0x70
	[Inject]
	private IPublisher<LevelLoseMessage> _levelLosePub; // 0x78
	[Inject]
	private IReadOnlyList<IProviderInitialize> _providers; // 0x80
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x88
	[Inject]
	private IGameUpdateProvider _gameUpdateProvider; // 0x90
	[Inject]
	private AnalyticsModule _analyticsModule; // 0x98
	[Inject]
	private Monitors _monitors; // 0xA0
	private const int UpdateCheckTimeoutMilliseconds = 5000;

	// Methods

	[AsyncStateMachine(typeof(GameBootstrapState.<OnEnter>d__8))]
	// RVA: 0x24FBCF4 Offset: 0x24F7CF4 VA: 0x24FBCF4 Slot: 6
	public override void OnEnter() { }

	// RVA: 0x24FBD9C Offset: 0x24F7D9C VA: 0x24FBD9C
	private bool GateGameMaintenance() { }

	[AsyncStateMachine(typeof(GameBootstrapState.<GateGameUpdate>d__10))]
	// RVA: 0x24FBED4 Offset: 0x24F7ED4 VA: 0x24FBED4
	private UniTask<bool> GateGameUpdate() { }

	// RVA: 0x24FBFD4 Offset: 0x24F7FD4 VA: 0x24FBFD4
	private void HandleGameExitLose() { }

	// RVA: 0x24FC1BC Offset: 0x24F81BC VA: 0x24FC1BC
	public void .ctor() { }

	[CompilerGenerated]
	[DebuggerHidden]
	// RVA: 0x24FC1FC Offset: 0x24F81FC VA: 0x24FC1FC
	private void <>n__0() { }
}

