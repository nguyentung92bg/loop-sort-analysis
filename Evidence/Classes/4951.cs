// Namespace: 
public struct AnalyticsPurchaseEvent // TypeDefIndex: 4951
{
	// Fields
	public string Currency; // 0x0
	public float UsdPrice; // 0x8
	public int Price; // 0xC
	public string ProductId; // 0x10
	public string ItemId; // 0x18
	public string Placement; // 0x20
	public int LevelNumber; // 0x28
	public string Reason; // 0x30

	// Methods

	// RVA: 0x2540CA4 Offset: 0x253CCA4 VA: 0x2540CA4
	public static AnalyticsPurchaseEvent CreateFrom(PurchaseRequest request) { }

	// RVA: 0x2540EB8 Offset: 0x253CEB8 VA: 0x2540EB8 Slot: 3
	public override string ToString() { }
}

