// Namespace: 
public sealed class AccountModule : ModuleBase // TypeDefIndex: 4933
{
	// Fields
	[Inject]
	private IAccountProvider _provider; // 0x10
	[Inject]
	private Monitors _monitors; // 0x18
	private PlayerPrefsBool _mockAuthLinkStatus; // 0x20

	// Methods

	[AsyncStateMachine(typeof(AccountModule.<IsLinked>d__3))]
	// RVA: 0x253B13C Offset: 0x253713C VA: 0x253B13C
	public UniTask<bool> IsLinked(AuthType authType, CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(AccountModule.<Link>d__4))]
	// RVA: 0x253B260 Offset: 0x2537260 VA: 0x253B260
	public UniTask<AccountLinkResult> Link(AuthType authType, CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(AccountModule.<Unlink>d__5))]
	// RVA: 0x253B384 Offset: 0x2537384 VA: 0x253B384
	public UniTask<bool> Unlink(AuthType authType, CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(AccountModule.<MergeAccounts>d__6))]
	// RVA: 0x253B4AC Offset: 0x25374AC VA: 0x253B4AC
	public UniTask<AccountMergeResult> MergeAccounts(CancellationToken cancellationToken) { }

	// RVA: 0x253B5BC Offset: 0x25375BC VA: 0x253B5BC
	public void .ctor() { }
}

