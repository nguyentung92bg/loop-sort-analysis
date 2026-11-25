// Namespace: 
private sealed class NakamaGiftsProvider.GrantHandler : IGiftItemGrantHandler // TypeDefIndex: 14977
{
	// Fields
	private readonly Dictionary<string, Gift> _giftsById; // 0x10
	private readonly Action<Gift> _grant; // 0x18

	// Methods

	// RVA: 0x224A1C4 Offset: 0x22461C4 VA: 0x224A1C4
	public void .ctor(Dictionary<string, Gift> giftsById, Action<Gift> grant) { }

	// RVA: 0x224A208 Offset: 0x2246208 VA: 0x224A208 Slot: 4
	public Task GrantItemsAsync(Gift gift, CancellationToken cancellationToken) { }
}

