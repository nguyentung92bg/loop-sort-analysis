// Namespace: 
public interface ITournamentProvider // TypeDefIndex: 5004
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract UniTask<TournamentInstance> GetInstance(bool cached = True, CancellationToken cancellationToken);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract UniTask<TournamentOperationResult> Submit(long score, CancellationToken cancellationToken);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract UniTask<TournamentOperationResult> End(CancellationToken cancellationToken);
}

