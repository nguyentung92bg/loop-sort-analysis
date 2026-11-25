// Namespace: 
[Serializable]
public struct PurchaseRequest // TypeDefIndex: 4989
{
	// Fields
	public string ProductId; // 0x0
	public ProductType ProductType; // 0x8
	public string Placement; // 0x10
	public string Currency; // 0x18
	public float UsdPrice; // 0x20
	public Decimal LocalizedPrice; // 0x28
	public List<FulfillPayout> AdditionalPayouts; // 0x38
	public string Reskin; // 0x40
	private static readonly JsonSerializerSettings SerializerSettings; // 0x0

	// Methods

	// RVA: 0x254AB08 Offset: 0x2546B08 VA: 0x254AB08 Slot: 3
	public override string ToString() { }

	// RVA: 0x254AB5C Offset: 0x2546B5C VA: 0x254AB5C
	public string ToJson() { }

	// RVA: 0x254AC40 Offset: 0x2546C40 VA: 0x254AC40
	public static PurchaseRequest FromJson(string json) { }

	// RVA: 0x254AD64 Offset: 0x2546D64 VA: 0x254AD64
	private static void .cctor() { }
}

