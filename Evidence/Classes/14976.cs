// Namespace: 
public sealed class NakamaCloudSaveProvider : ICloudSaveProvider // TypeDefIndex: 14976
{
	// Fields
	private IStorageService _storage; // 0x10
	private LoopSortSave _save; // 0x18
	private LoopSortSaveStore _store; // 0x20
	[CompilerGenerated]
	private bool <IsNewAccount>k__BackingField; // 0x28
	[CompilerGenerated]
	private bool <IsLoading>k__BackingField; // 0x29
	[CompilerGenerated]
	private Action Reloaded; // 0x30
	[CompilerGenerated]
	private Action Authenticated; // 0x38
	private static readonly string LogPrefix; // 0x0

	// Properties
	public ICloudPrefsStore Store { get; }
	public bool IsNewAccount { get; set; }
	public bool IsLoading { get; set; }
	public string Baseline { get; }
	public string UserId { get; }

	// Methods

	// RVA: 0x2247134 Offset: 0x2243134 VA: 0x2247134 Slot: 4
	public ICloudPrefsStore get_Store() { }

	[CompilerGenerated]
	// RVA: 0x224713C Offset: 0x224313C VA: 0x224713C Slot: 5
	public bool get_IsNewAccount() { }

	[CompilerGenerated]
	// RVA: 0x2247144 Offset: 0x2243144 VA: 0x2247144
	private void set_IsNewAccount(bool value) { }

	[CompilerGenerated]
	// RVA: 0x224714C Offset: 0x224314C VA: 0x224714C
	public bool get_IsLoading() { }

	[CompilerGenerated]
	// RVA: 0x2247154 Offset: 0x2243154 VA: 0x2247154
	private void set_IsLoading(bool value) { }

	// RVA: 0x224715C Offset: 0x224315C VA: 0x224715C Slot: 6
	public string get_Baseline() { }

	// RVA: 0x22471A8 Offset: 0x22431A8 VA: 0x22471A8 Slot: 7
	public string get_UserId() { }

	[CompilerGenerated]
	// RVA: 0x2247264 Offset: 0x2243264 VA: 0x2247264 Slot: 8
	public void add_Reloaded(Action value) { }

	[CompilerGenerated]
	// RVA: 0x2247300 Offset: 0x2243300 VA: 0x2247300 Slot: 9
	public void remove_Reloaded(Action value) { }

	[CompilerGenerated]
	// RVA: 0x224739C Offset: 0x224339C VA: 0x224739C Slot: 10
	public void add_Authenticated(Action value) { }

	[CompilerGenerated]
	// RVA: 0x2247438 Offset: 0x2243438 VA: 0x2247438 Slot: 11
	public void remove_Authenticated(Action value) { }

	[AsyncStateMachine(typeof(NakamaCloudSaveProvider.<EnsureAuthenticated>d__24))]
	// RVA: 0x22474D4 Offset: 0x22434D4 VA: 0x22474D4 Slot: 12
	public UniTask<bool> EnsureAuthenticated(CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(NakamaCloudSaveProvider.<TryInitialize>d__25))]
	// RVA: 0x22475D0 Offset: 0x22435D0 VA: 0x22475D0 Slot: 13
	public UniTask<bool> TryInitialize(CancellationToken cancellationToken) { }

	// RVA: 0x22476E4 Offset: 0x22436E4 VA: 0x22476E4 Slot: 14
	public void MarkDirty() { }

	[AsyncStateMachine(typeof(NakamaCloudSaveProvider.<FlushDirty>d__27))]
	// RVA: 0x2247830 Offset: 0x2243830 VA: 0x2247830 Slot: 15
	public UniTask<CloudSaveFlushResult> FlushDirty(CancellationToken cancellationToken) { }

	// RVA: 0x2247944 Offset: 0x2243944 VA: 0x2247944 Slot: 16
	public void SetConflictResolver(bool enabled) { }

	[AsyncStateMachine(typeof(NakamaCloudSaveProvider.<DeleteAll>d__29))]
	// RVA: 0x2247994 Offset: 0x2243994 VA: 0x2247994 Slot: 17
	public UniTask DeleteAll(CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(NakamaCloudSaveProvider.<LoadSave>d__30))]
	// RVA: 0x2247A4C Offset: 0x2243A4C VA: 0x2247A4C
	private UniTask LoadSave(CancellationToken cancellationToken) { }

	// RVA: 0x2247B00 Offset: 0x2243B00 VA: 0x2247B00
	private void OnStorageSynced() { }

	[AsyncStateMachine(typeof(NakamaCloudSaveProvider.<ReloadAsync>d__32))]
	// RVA: 0x2247B24 Offset: 0x2243B24 VA: 0x2247B24
	private UniTaskVoid ReloadAsync() { }

	// RVA: 0x2247BB8 Offset: 0x2243BB8 VA: 0x2247BB8
	private void OnAuthenticationCompleted(string userId, bool recovered) { }

	// RVA: 0x2247C60 Offset: 0x2243C60 VA: 0x2247C60
	private void OnStorageInvalidated(IReadOnlyList<Type> invalidatedTypes) { }

	// RVA: 0x2247C64 Offset: 0x2243C64 VA: 0x2247C64
	public void .ctor() { }

	// RVA: 0x2247C6C Offset: 0x2243C6C VA: 0x2247C6C
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x2247CD4 Offset: 0x2243CD4 VA: 0x2247CD4
	private bool <TryInitialize>b__25_0() { }

	[CompilerGenerated]
	// RVA: 0x2247CDC Offset: 0x2243CDC VA: 0x2247CDC
	private void <OnAuthenticationCompleted>b__33_0() { }
}

