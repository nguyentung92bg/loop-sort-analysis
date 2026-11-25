// Namespace: 
public sealed class GarageSale : LiveOpsBase // TypeDefIndex: 4813
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

	// RVA: 0x2517D58 Offset: 0x2513D58 VA: 0x2517D58 Slot: 5
	public override void Initialize() { }

	// RVA: 0x2517DF8 Offset: 0x2513DF8 VA: 0x2517DF8 Slot: 8
	public override void Complete() { }

	// RVA: 0x2517E18 Offset: 0x2513E18 VA: 0x2517E18 Slot: 13
	public override bool CanShow() { }

	// RVA: 0x2517E8C Offset: 0x2513E8C VA: 0x2517E8C
	public void BuyNextProgress() { }

	// RVA: 0x2518218 Offset: 0x2514218 VA: 0x2518218
	private void OnProgressPurchase(FulfillPurchaseMessage m) { }

	// RVA: 0x251821C Offset: 0x251421C VA: 0x251821C
	public void .ctor() { }
}

