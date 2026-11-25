// Namespace: 
public sealed class EmailCodeMonitor : MonitorBase // TypeDefIndex: 5376
{
	// Fields
	private AutoResetUniTaskCompletionSource<string> _result; // 0x98

	// Methods

	// RVA: 0x243DBAC Offset: 0x2439BAC VA: 0x243DBAC Slot: 13
	public override void Setup() { }

	// RVA: 0x243DDD8 Offset: 0x2439DD8 VA: 0x243DDD8
	public UniTask<string> RequestEmail() { }

	// RVA: 0x243E014 Offset: 0x243A014 VA: 0x243E014
	public UniTask<string> RequestCode() { }

	// RVA: 0x243E100 Offset: 0x243A100 VA: 0x243E100
	public void Cancel() { }

	[AsyncStateMachine(typeof(EmailCodeMonitor.<Show>d__5))]
	// RVA: 0x243DF04 Offset: 0x2439F04 VA: 0x243DF04
	private UniTask<string> Show() { }

	// RVA: 0x243E15C Offset: 0x243A15C VA: 0x243E15C
	private void OnSendClicked() { }

	// RVA: 0x243E224 Offset: 0x243A224 VA: 0x243E224
	private void OnConfirmClicked() { }

	// RVA: 0x243E2C0 Offset: 0x243A2C0 VA: 0x243E2C0
	private void OnCloseClicked() { }

	// RVA: 0x243DE74 Offset: 0x2439E74 VA: 0x243DE74
	private void OnEmailInputChanged(string email) { }

	// RVA: 0x243E0B0 Offset: 0x243A0B0 VA: 0x243E0B0
	private void OnCodeInputChanged(string code) { }

	// RVA: 0x243E2C4 Offset: 0x243A2C4 VA: 0x243E2C4
	public void .ctor() { }
}

