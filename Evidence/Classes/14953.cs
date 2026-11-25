// Namespace: 
public sealed class FallbackPurchasingProvider : IPurchasingProvider // TypeDefIndex: 14953
{
	// Fields
	[Inject]
	private IPublisher<PurchaseCompleteMessage> _purchaseCompletePub; // 0x10
	[Inject]
	private IPublisher<RestorePurchasesCompleteMessage> _restorePurchasesCompletePub; // 0x18

	// Methods

	// RVA: 0x22413D4 Offset: 0x223D3D4 VA: 0x22413D4 Slot: 4
	public PurchasingStatus GetStatus() { }

	// RVA: 0x22413DC Offset: 0x223D3DC VA: 0x22413DC Slot: 5
	public void StartPurchase(PurchaseRequest request) { }

	// RVA: 0x224155C Offset: 0x223D55C VA: 0x224155C Slot: 6
	public void StartRestorePurchases() { }

	// RVA: 0x2241604 Offset: 0x223D604 VA: 0x2241604 Slot: 7
	public ProductMetadata GetProductMetadata(string productId) { }

	// RVA: 0x22417D8 Offset: 0x223D7D8 VA: 0x22417D8
	public void .ctor() { }
}

