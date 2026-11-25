// Namespace: 
public sealed class GameMachine : StateMachine, IInitializable, ITickable // TypeDefIndex: 4726
{
	// Fields
	[Inject]
	private IObjectResolver _resolver; // 0x90

	// Methods

	// RVA: 0x24FB24C Offset: 0x24F724C VA: 0x24FB24C Slot: 25
	public void Initialize() { }

	// RVA: 0x24FB684 Offset: 0x24F7684 VA: 0x24FB684 Slot: 26
	public void Tick() { }

	// RVA: -1 Offset: -1
	public bool RequestStateChange<TState>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x261A650 Offset: 0x2616650 VA: 0x261A650
	|-GameMachine.RequestStateChange<object>
	*/

	// RVA: -1 Offset: -1
	public bool CanEnter<TState>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x261A478 Offset: 0x2616478 VA: 0x261A478
	|-GameMachine.CanEnter<object>
	*/

	// RVA: -1 Offset: -1
	public bool IsInState<TState>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x261A580 Offset: 0x2616580 VA: 0x261A580
	|-GameMachine.IsInState<object>
	*/

	// RVA: 0x24FB690 Offset: 0x24F7690 VA: 0x24FB690
	public void .ctor() { }
}

