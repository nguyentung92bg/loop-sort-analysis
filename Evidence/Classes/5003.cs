// Namespace: 
public sealed class TournamentModule : ModuleBase // TypeDefIndex: 5003
{
	// Fields
	[Inject]
	private ITournamentProvider _provider; // 0x10

	// Methods

	[AsyncStateMachine(typeof(TournamentModule.<GetInstance>d__1))]
	// RVA: 0x254B3A4 Offset: 0x25473A4 VA: 0x254B3A4
	public UniTask<TournamentInstance> GetInstance(bool cached = True, CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(TournamentModule.<Submit>d__2))]
	// RVA: 0x254B4E8 Offset: 0x25474E8 VA: 0x254B4E8
	public UniTask<TournamentOperationResult> Submit(long score, CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(TournamentModule.<End>d__3))]
	// RVA: 0x254B608 Offset: 0x2547608 VA: 0x254B608
	public UniTask<TournamentOperationResult> End(CancellationToken cancellationToken) { }

	// RVA: 0x254B718 Offset: 0x2547718 VA: 0x254B718
	public void .ctor() { }
}

