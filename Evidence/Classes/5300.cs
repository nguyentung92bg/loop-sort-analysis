// Namespace: 
public sealed class ReviveOfferElement : ElementBase // TypeDefIndex: 5300
{
	// Fields
	[SerializeField]
	private string ProductId; // 0x28
	[SerializeField]
	private LiveOps LiveOps; // 0x30
	[Inject]
	private PurchasingModule _purchasingModule; // 0x38
	[Inject]
	private Shop _shop; // 0x40
	[Inject]
	private SheetContainer _sheetContainer; // 0x48

	// Methods

	// RVA: 0x241E350 Offset: 0x241A350 VA: 0x241E350 Slot: 8
	public override void Setup() { }

	// RVA: 0x241E3DC Offset: 0x241A3DC VA: 0x241E3DC Slot: 10
	public override void OnActivated() { }

	// RVA: 0x241E760 Offset: 0x241A760 VA: 0x241E760 Slot: 11
	public override void OnDeactivated() { }

	// RVA: 0x241E7F8 Offset: 0x241A7F8 VA: 0x241E7F8 Slot: 9
	public override void Render() { }

	// RVA: 0x241E47C Offset: 0x241A47C VA: 0x241E47C
	private void UpdateView() { }

	// RVA: 0x241E9D4 Offset: 0x241A9D4 VA: 0x241E9D4
	private void OnBuyClicked() { }

	// RVA: 0x241EA38 Offset: 0x241AA38 VA: 0x241EA38
	private void OnPurchase(FulfillPurchaseMessage m) { }

	// RVA: 0x241EA5C Offset: 0x241AA5C VA: 0x241EA5C
	public void .ctor() { }
}

