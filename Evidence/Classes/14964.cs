// Namespace: 
public sealed class NakamaAccountProvider : IAccountProvider, IInitializable // TypeDefIndex: 14964
{
	// Fields
	[Inject]
	private Monitors _monitors; // 0x10

	// Methods

	// RVA: 0x2242E00 Offset: 0x223EE00 VA: 0x2242E00 Slot: 10
	public void Initialize() { }

	[AsyncStateMachine(typeof(NakamaAccountProvider.<IsLinked>d__2))]
	// RVA: 0x2242E8C Offset: 0x223EE8C VA: 0x2242E8C Slot: 4
	public UniTask<bool> IsLinked(AuthType authType, CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(NakamaAccountProvider.<Link>d__3))]
	// RVA: 0x2242F94 Offset: 0x223EF94 VA: 0x2242F94 Slot: 5
	public UniTask<AccountLinkResult> Link(AuthType authType, CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(NakamaAccountProvider.<LinkEmail>d__4))]
	// RVA: 0x224309C Offset: 0x223F09C VA: 0x224309C Slot: 6
	public UniTask<AccountLinkResult> LinkEmail(string email, CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(NakamaAccountProvider.<Unlink>d__5))]
	// RVA: 0x22431B0 Offset: 0x223F1B0 VA: 0x22431B0 Slot: 7
	public UniTask<bool> Unlink(AuthType authType, CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(NakamaAccountProvider.<UnlinkEmail>d__6))]
	// RVA: 0x22432B8 Offset: 0x223F2B8 VA: 0x22432B8 Slot: 8
	public UniTask<bool> UnlinkEmail(CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(NakamaAccountProvider.<MergeAccounts>d__7))]
	// RVA: 0x22433B4 Offset: 0x223F3B4 VA: 0x22433B4 Slot: 9
	public UniTask<AccountMergeResult> MergeAccounts(CancellationToken cancellationToken) { }

	// RVA: 0x22434B0 Offset: 0x223F4B0 VA: 0x22434B0
	public void .ctor() { }
}

