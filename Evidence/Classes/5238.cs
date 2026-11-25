// Namespace: 
public sealed class Shop : Data // TypeDefIndex: 5238
{
	// Fields
	public List<Shop.Bundle> Bundles; // 0x18
	public List<Shop.Product> Products; // 0x20
	public GenericDictionary<Item, IconInfo> Icons; // 0x28

	// Methods

	// RVA: 0x257016C Offset: 0x256C16C VA: 0x257016C
	public string FormatItemQuantity(Item item, int quantity) { }

	// RVA: 0x2570348 Offset: 0x256C348 VA: 0x2570348
	public string FormatItemQuantity(RewardInfo reward) { }

	// RVA: 0x25702E8 Offset: 0x256C2E8 VA: 0x25702E8
	private string FormatBoosterQuantity(float quantity) { }

	// RVA: 0x2570350 Offset: 0x256C350 VA: 0x2570350
	public void .ctor() { }
}

