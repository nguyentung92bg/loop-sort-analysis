// Namespace: 
public sealed class LondonTrip : LiveOpsBase // TypeDefIndex: 4844
{
	// Fields
	[Inject]
	private SheetContainer _sheetContainer; // 0x10
	[Inject]
	private PurchasingModule _purchasingModule; // 0x18
	[Inject]
	private FulfillModule _fulfillModule; // 0x20
	[Inject]
	private Monitors _monitors; // 0x28
	public CloudPrefsInt Progress; // 0x30

	// Methods

	// RVA: 0x252294C Offset: 0x251E94C VA: 0x252294C Slot: 5
	public override void Initialize() { }

	// RVA: 0x25229E0 Offset: 0x251E9E0 VA: 0x25229E0 Slot: 8
	public override void Complete() { }

	// RVA: 0x25229EC Offset: 0x251E9EC VA: 0x25229EC Slot: 13
	public override bool CanShow() { }

	// RVA: 0x2522A60 Offset: 0x251EA60 VA: 0x2522A60
	public void BuyNextProgress() { }

	// RVA: 0x2522DEC Offset: 0x251EDEC VA: 0x2522DEC
	private void OnProgressPurchase(FulfillPurchaseMessage m) { }

	// RVA: 0x2522DF0 Offset: 0x251EDF0 VA: 0x2522DF0
	public void .ctor() { }
}

