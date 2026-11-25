// Namespace: 
public interface IAccountProvider // TypeDefIndex: 4934
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract UniTask<bool> IsLinked(AuthType authType, CancellationToken cancellationToken);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract UniTask<AccountLinkResult> Link(AuthType authType, CancellationToken cancellationToken);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract UniTask<AccountLinkResult> LinkEmail(string email, CancellationToken cancellationToken);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract UniTask<bool> Unlink(AuthType authType, CancellationToken cancellationToken);

	// RVA: -1 Offset: -1 Slot: 4
	public abstract UniTask<bool> UnlinkEmail(CancellationToken cancellationToken);

	// RVA: -1 Offset: -1 Slot: 5
	public abstract UniTask<AccountMergeResult> MergeAccounts(CancellationToken cancellationToken);
}

