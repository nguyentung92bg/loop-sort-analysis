// Namespace: 
public sealed class NakamaGiftsProvider : IGiftsProvider // TypeDefIndex: 14980
{
	// Methods

	[AsyncStateMachine(typeof(NakamaGiftsProvider.<FetchPendingGifts>d__0))]
	// RVA: 0x2249F80 Offset: 0x2245F80 VA: 0x2249F80 Slot: 4
	public UniTask<List<Gift>> FetchPendingGifts(CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(NakamaGiftsProvider.<ClaimGifts>d__1))]
	// RVA: 0x224A090 Offset: 0x2246090 VA: 0x224A090 Slot: 5
	public UniTask<bool> ClaimGifts(List<Gift> gifts, Action<Gift> grant, CancellationToken cancellationToken) { }

	// RVA: 0x224A1BC Offset: 0x22461BC VA: 0x224A1BC
	public void .ctor() { }
}

