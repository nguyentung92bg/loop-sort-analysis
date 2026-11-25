// Namespace: 
public interface ICloudSaveProvider // TypeDefIndex: 4684
{
	// Properties
	public abstract ICloudPrefsStore Store { get; }
	public abstract bool IsNewAccount { get; }
	public abstract string Baseline { get; }
	public abstract string UserId { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract ICloudPrefsStore get_Store();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract bool get_IsNewAccount();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract string get_Baseline();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract string get_UserId();

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 4
	public abstract void add_Reloaded(Action value);

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 5
	public abstract void remove_Reloaded(Action value);

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 6
	public abstract void add_Authenticated(Action value);

	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 7
	public abstract void remove_Authenticated(Action value);

	// RVA: -1 Offset: -1 Slot: 8
	public abstract UniTask<bool> EnsureAuthenticated(CancellationToken cancellationToken);

	// RVA: -1 Offset: -1 Slot: 9
	public abstract UniTask<bool> TryInitialize(CancellationToken cancellationToken);

	// RVA: -1 Offset: -1 Slot: 10
	public abstract void MarkDirty();

	// RVA: -1 Offset: -1 Slot: 11
	public abstract UniTask<CloudSaveFlushResult> FlushDirty(CancellationToken cancellationToken);

	// RVA: -1 Offset: -1 Slot: 12
	public abstract void SetConflictResolver(bool enabled);

	// RVA: -1 Offset: -1 Slot: 13
	public abstract UniTask DeleteAll(CancellationToken cancellationToken);
}

