// Namespace: 
public interface IPurchasingProvider // TypeDefIndex: 4987
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract PurchasingStatus GetStatus();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void StartPurchase(PurchaseRequest request);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void StartRestorePurchases();

	// RVA: -1 Offset: -1 Slot: 3
	public abstract ProductMetadata GetProductMetadata(string productId);
}

