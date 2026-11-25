// Namespace: 
public sealed class LoopSortAccountMergeHandler : INakamaAccountMergeHandler // TypeDefIndex: 14937
{
	// Fields
	private AutoResetUniTaskCompletionSource<AccountMergeResolution> _resolution; // 0x10

	// Methods

	[AsyncStateMachine(typeof(LoopSortAccountMergeHandler.<MergeAccounts>d__1))]
	// RVA: 0x223D2C4 Offset: 0x22392C4 VA: 0x223D2C4 Slot: 4
	public Task<AccountMergeOption> MergeAccounts(MergeClientData oldClient, MergeClientData newClient) { }

	// RVA: 0x223D400 Offset: 0x2239400 VA: 0x223D400
	private void PublishMessage() { }

	// RVA: 0x223D53C Offset: 0x223953C VA: 0x223D53C
	public void .ctor() { }
}

