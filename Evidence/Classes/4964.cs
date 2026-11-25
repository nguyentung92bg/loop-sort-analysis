// Namespace: 
public interface IGiftsProvider // TypeDefIndex: 4964
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract UniTask<List<Gift>> FetchPendingGifts(CancellationToken cancellationToken);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract UniTask<bool> ClaimGifts(List<Gift> gifts, Action<Gift> grant, CancellationToken cancellationToken);
}

