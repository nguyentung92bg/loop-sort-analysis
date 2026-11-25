// Namespace: 
public sealed class MockAccountLinkMonitor : MonitorBase // TypeDefIndex: 5411
{
	// Fields
	private AutoResetUniTaskCompletionSource<AccountLinkResult> _linkResult; // 0x98

	// Methods

	// RVA: 0x244E4C4 Offset: 0x244A4C4 VA: 0x244E4C4 Slot: 13
	public override void Setup() { }

	[AsyncStateMachine(typeof(MockAccountLinkMonitor.<Show>d__2))]
	// RVA: 0x244E5F4 Offset: 0x244A5F4 VA: 0x244E5F4
	public UniTask<AccountLinkResult> Show() { }

	// RVA: 0x244E6F4 Offset: 0x244A6F4 VA: 0x244E6F4
	private void OnSuccessClicked() { }

	// RVA: 0x244E750 Offset: 0x244A750 VA: 0x244E750
	private void OnFailClicked() { }

	// RVA: 0x244E7B0 Offset: 0x244A7B0 VA: 0x244E7B0
	private void OnCancelClicked() { }

	// RVA: 0x244E810 Offset: 0x244A810 VA: 0x244E810
	public void .ctor() { }
}

