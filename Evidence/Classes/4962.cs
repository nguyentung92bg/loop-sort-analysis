// Namespace: 
public sealed class GiftsModule : ModuleBase // TypeDefIndex: 4962
{
	// Fields
	[Inject]
	private IGiftsProvider _provider; // 0x10
	private const int FetchTimeoutSeconds = 3;

	// Methods

	[AsyncStateMachine(typeof(GiftsModule.<FetchPendingGifts>d__2))]
	// RVA: 0x2543EA8 Offset: 0x253FEA8 VA: 0x2543EA8
	public UniTask<List<Gift>> FetchPendingGifts(CancellationToken cancellationToken) { }

	// RVA: 0x2543FD8 Offset: 0x253FFD8 VA: 0x2543FD8
	public UniTask<bool> ClaimGifts(List<Gift> gifts, Action<Gift> grant, CancellationToken cancellationToken) { }

	// RVA: 0x254409C Offset: 0x254009C VA: 0x254409C
	public void .ctor() { }
}

