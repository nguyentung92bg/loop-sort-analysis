// Namespace: 
public struct ProductMetadata // TypeDefIndex: 4992
{
	// Fields
	public float UsdPrice; // 0x0
	public string LocalizedTitle; // 0x8
	public string Currency; // 0x10
	public Decimal LocalizedPrice; // 0x18
	public string LocalizedPriceString; // 0x28
	public List<FulfillPayout> Payouts; // 0x30
	public CloudPrefsInt PurchaseCount; // 0x38

	// Properties
	public bool IsPurchased { get; }

	// Methods

	// RVA: 0x254B044 Offset: 0x2547044 VA: 0x254B044
	public bool get_IsPurchased() { }

	// RVA: 0x254B080 Offset: 0x2547080 VA: 0x254B080
	public void .ctor(string productId) { }
}

