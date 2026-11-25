// Namespace: 
public sealed class LoopSortEmailCodeVerifier : IEmailCodeVerifier // TypeDefIndex: 14945
{
	// Fields
	private readonly Monitors _monitors; // 0x10

	// Methods

	// RVA: 0x223F098 Offset: 0x223B098 VA: 0x223F098
	public void .ctor(Monitors monitors) { }

	[AsyncStateMachine(typeof(LoopSortEmailCodeVerifier.<GetVerificationCodeAsync>d__2))]
	// RVA: 0x223F0C8 Offset: 0x223B0C8 VA: 0x223F0C8 Slot: 4
	public Task<string> GetVerificationCodeAsync(string email, CancellationToken cancellationToken) { }
}

