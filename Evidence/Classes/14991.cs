// Namespace: 
[CompilerGenerated]
private struct NakamaPlayerProvider.<GetPlayers>d__3 : IAsyncStateMachine // TypeDefIndex: 14991
{
	// Fields
	public int <>1__state; // 0x0
	public AsyncUniTaskMethodBuilder<Dictionary<string, PlayerInfo>> <>t__builder; // 0x8
	public IEnumerable<string> userIds; // 0x20
	public CancellationToken cancellationToken; // 0x28
	private IPlayerProfileService <service>5__2; // 0x30
	private Dictionary<string, PlayerData> <profiles>5__3; // 0x38
	private TaskAwaiter<Result<Dictionary<string, PlayerData>, PlayerProfileError>> <>u__1; // 0x40
	private TaskAwaiter<Result<PlayerData, PlayerProfileError>> <>u__2; // 0x48

	// Methods

	// RVA: 0x224FACC Offset: 0x224BACC VA: 0x224FACC Slot: 4
	private void MoveNext() { }

	[DebuggerHidden]
	// RVA: 0x2250308 Offset: 0x224C308 VA: 0x2250308 Slot: 5
	private void SetStateMachine(IAsyncStateMachine stateMachine) { }
}

