// Namespace: 
public sealed class AccountMergeMonitor : MonitorBase // TypeDefIndex: 5349
{
	// Fields
	[Inject]
	private ISubscriber<AccountMergeMessage> _accountMergePub; // 0x98
	private AccountMergeMessage _accountMergeMessage; // 0xA0

	// Methods

	// RVA: 0x2432788 Offset: 0x242E788 VA: 0x2432788 Slot: 13
	public override void Setup() { }

	// RVA: 0x2432960 Offset: 0x242E960 VA: 0x2432960
	public void Show(AccountMergeMessage m) { }

	// RVA: 0x2432A18 Offset: 0x242EA18 VA: 0x2432A18
	private void Resolve(AccountMergeResolution resolution) { }

	// RVA: 0x2432AA8 Offset: 0x242EAA8 VA: 0x2432AA8
	private void OnAccountMerge(AccountMergeMessage m) { }

	// RVA: 0x2432AAC Offset: 0x242EAAC VA: 0x2432AAC
	private void OnKeepOtherClicked() { }

	// RVA: 0x2432AB4 Offset: 0x242EAB4 VA: 0x2432AB4
	private void OnCloseClicked() { }

	// RVA: 0x2432ABC Offset: 0x242EABC VA: 0x2432ABC
	public void .ctor() { }
}

