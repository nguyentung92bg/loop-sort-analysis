// Namespace: 
public sealed class ChooseOneSubMonitor : SubMonitorBase // TypeDefIndex: 5480
{
	// Fields
	[SerializeField]
	private string SmallProductId; // 0x40
	[SerializeField]
	private string MediumProductId; // 0x48
	[SerializeField]
	private string BigProductId; // 0x50
	[SerializeField]
	private string AllProductId; // 0x58
	[Inject]
	private PurchasingModule _purchasingModule; // 0x60
	[Inject]
	private EconomyModule _economyModule; // 0x68

	// Methods

	// RVA: 0x246FFD8 Offset: 0x246BFD8 VA: 0x246FFD8 Slot: 8
	public override void Setup() { }

	// RVA: 0x24702C4 Offset: 0x246C2C4 VA: 0x24702C4
	private void OnDestroy() { }

	// RVA: 0x247020C Offset: 0x246C20C VA: 0x247020C
	private void UpdatePrice(TextRole textRole, string productId) { }

	// RVA: 0x2470358 Offset: 0x246C358 VA: 0x2470358
	private void OnBuyClicked(string productId) { }

	// RVA: 0x24703C0 Offset: 0x246C3C0 VA: 0x24703C0
	private void OnPurchase(FulfillPurchaseMessage m) { }

	// RVA: 0x2470414 Offset: 0x246C414 VA: 0x2470414
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x247041C Offset: 0x246C41C VA: 0x247041C
	private void <Setup>b__6_0() { }

	[CompilerGenerated]
	// RVA: 0x2470424 Offset: 0x246C424 VA: 0x2470424
	private void <Setup>b__6_1() { }

	[CompilerGenerated]
	// RVA: 0x247042C Offset: 0x246C42C VA: 0x247042C
	private void <Setup>b__6_2() { }

	[CompilerGenerated]
	// RVA: 0x2470434 Offset: 0x246C434 VA: 0x2470434
	private void <Setup>b__6_3() { }
}

