// Namespace: 
public sealed class PurchaseProcessMonitor : MonitorBase // TypeDefIndex: 5430
{
	// Fields
	[Inject]
	private ISubscriber<PurchaseStartMessage> _purchaseStartSub; // 0x98
	[Inject]
	private ISubscriber<PurchaseCompleteMessage> _purchaseCompleteSub; // 0xA0
	[Inject]
	private ISubscriber<RestorePurchasesStartMessage> _restorePurchasesStartSub; // 0xA8
	[Inject]
	private ISubscriber<RestorePurchasesCompleteMessage> _restorePurchasesCompleteSub; // 0xB0

	// Methods

	// RVA: 0x2456380 Offset: 0x2452380 VA: 0x2456380 Slot: 13
	public override void Setup() { }

	// RVA: 0x24567B4 Offset: 0x24527B4 VA: 0x24567B4
	public void ShowPopup(PurchaseProcessMonitor.Args args) { }

	// RVA: 0x24568AC Offset: 0x24528AC VA: 0x24568AC
	private void ShowLoading() { }

	// RVA: 0x2456964 Offset: 0x2452964 VA: 0x2456964
	private void OnContinueClicked() { }

	// RVA: 0x2456984 Offset: 0x2452984 VA: 0x2456984
	private void OnPurchaseStart(PurchaseStartMessage m) { }

	// RVA: 0x2456988 Offset: 0x2452988 VA: 0x2456988
	private void OnPurchaseComplete(PurchaseCompleteMessage m) { }

	// RVA: 0x24569B4 Offset: 0x24529B4 VA: 0x24569B4
	private void HandleConfirmedOrder() { }

	// RVA: 0x2456A2C Offset: 0x2452A2C VA: 0x2456A2C
	private void HandleFailedOrder() { }

	// RVA: 0x2456AA8 Offset: 0x2452AA8 VA: 0x2456AA8
	private void OnRestorePurchasesStart(RestorePurchasesStartMessage m) { }

	// RVA: 0x2456AAC Offset: 0x2452AAC VA: 0x2456AAC
	private void OnRestorePurchasesComplete(RestorePurchasesCompleteMessage m) { }

	// RVA: 0x2456B58 Offset: 0x2452B58 VA: 0x2456B58
	public void .ctor() { }
}

