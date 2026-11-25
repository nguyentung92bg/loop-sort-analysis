// Namespace: 
[CompilerGenerated]
private struct GameMainMenuState.<HandleAreaProgress>d__14 : IAsyncStateMachine // TypeDefIndex: 4738
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncUniTaskMethodBuilder <>t__builder; // 0x8
	public GameMainMenuState <>4__this; // 0x18
	public HomeNavigationMonitor homeNavigationMonitor; // 0x20
	public CancellationToken token; // 0x28
	private int <level>5__2; // 0x30
	private int <fromLevel>5__3; // 0x34
	[TupleElementNames(new[] { "Area", "Elem" })]
	private List<ValueTuple<AreaSheet.Row, AreaSheet.Elem>> <rewards>5__4; // 0x38
	private UniTask.Awaiter <>u__1; // 0x40

	// Methods

	// RVA: 0x24FF0F8 Offset: 0x24FB0F8 VA: 0x24FF0F8 Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x250003C Offset: 0x24FC03C VA: 0x250003C Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}

