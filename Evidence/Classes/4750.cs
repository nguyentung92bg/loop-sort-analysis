// Namespace: 
public abstract class GameStateBase : State // TypeDefIndex: 4750
{
	// Fields
	[Inject]
	protected GameMachine Machine; // 0x58
	[Inject]
	private IPublisher<GameStateEnterMessage> _gameStateEnterPub; // 0x60
	[Inject]
	private IPublisher<GameStateExitMessage> _gameStateExitPub; // 0x68

	// Methods

	// RVA: 0x24FC1DC Offset: 0x24F81DC VA: 0x24FC1DC
	protected void .ctor() { }

	// RVA: 0x2503BC8 Offset: 0x24FFBC8 VA: 0x2503BC8 Slot: 14
	public virtual bool CanEnter() { }

	// RVA: 0x24FC200 Offset: 0x24F8200 VA: 0x24FC200 Slot: 6
	public override void OnEnter() { }

	// RVA: 0x24FE228 Offset: 0x24FA228 VA: 0x24FE228 Slot: 8
	public override void OnExit() { }

	// RVA: 0x2503BD0 Offset: 0x24FFBD0 VA: 0x2503BD0 Slot: 9
	public override void OnExitRequest() { }
}

