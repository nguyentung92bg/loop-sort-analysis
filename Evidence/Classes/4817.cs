// Namespace: 
public sealed class GiftsReward : LiveOpsBase // TypeDefIndex: 4817
{
	// Fields
	[Inject]
	private Monitors _monitors; // 0x10
	[Inject]
	private GiftsModule _giftsModule; // 0x18
	[Inject]
	private FulfillModule _fulfillModule; // 0x20
	[Inject]
	private ISubscriber<AccountSwitchedMessage> _accountSwitchedSub; // 0x28
	private DateTime _nextFetchUtc; // 0x30

	// Methods

	// RVA: 0x2518294 Offset: 0x2514294 VA: 0x2518294 Slot: 5
	public override void Initialize() { }

	[AsyncStateMachine(typeof(GiftsReward.<ApplyHomeAction>d__6))]
	// RVA: 0x25183A8 Offset: 0x25143A8 VA: 0x25183A8 Slot: 6
	public override UniTask ApplyHomeAction(CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(GiftsReward.<ClaimAndGrant>d__7))]
	// RVA: 0x2518464 Offset: 0x2514464 VA: 0x2518464
	private UniTaskVoid ClaimAndGrant(Gift gift) { }

	// RVA: 0x251851C Offset: 0x251451C VA: 0x251851C
	private void GrantGift(Gift gift) { }

	// RVA: 0x25186F4 Offset: 0x25146F4 VA: 0x25186F4
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x25186FC Offset: 0x25146FC VA: 0x25186FC
	private void <Initialize>b__5_0(AccountSwitchedMessage _) { }
}

