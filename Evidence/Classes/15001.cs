// Namespace: 
public sealed class VoodooPurchasingProvider : IProviderInitialize, IPurchasingProvider, IPurchaseListener, IIAPListener, IStoreListener // TypeDefIndex: 15001
{
	// Fields
	[Inject]
	private Payouts _payouts; // 0x10
	[Inject]
	private SheetContainer _sheetContainer; // 0x18
	[Inject]
	private LifeModule _lifeModule; // 0x20
	[Inject]
	private ProductMasters _productMasters; // 0x28
	[Inject]
	private IPublisher<FulfillPurchaseMessage> _fulfillPurchasePub; // 0x30
	[Inject]
	private IPublisher<PurchaseCompleteMessage> _purchaseCompletePub; // 0x38
	[Inject]
	private IPublisher<RestorePurchasesCompleteMessage> _restorePurchasesCompletePub; // 0x40

	// Methods

	// RVA: 0x2252CEC Offset: 0x224ECEC VA: 0x2252CEC Slot: 4
	public UniTask InitializeSdk() { }

	// RVA: 0x2252D50 Offset: 0x224ED50 VA: 0x2252D50 Slot: 5
	public PurchasingStatus GetStatus() { }

	// RVA: 0x2252DBC Offset: 0x224EDBC VA: 0x2252DBC Slot: 6
	public void StartPurchase(PurchaseRequest request) { }

	// RVA: 0x2253B54 Offset: 0x224FB54 VA: 0x2253B54 Slot: 7
	public void StartRestorePurchases() { }

	// RVA: 0x2253DAC Offset: 0x224FDAC VA: 0x2253DAC Slot: 8
	public ProductMetadata GetProductMetadata(string productId) { }

	// RVA: 0x2254094 Offset: 0x2250094 VA: 0x2254094
	private void OnRestorePurchases(bool result, string errorMessage) { }

	// RVA: 0x225421C Offset: 0x225021C VA: 0x225421C Slot: 12
	public void OnInitializationStateChanged(IdentifiedIAPStatus identifiedStatus) { }

	// RVA: 0x2254220 Offset: 0x2250220 VA: 0x2254220 Slot: 9
	public bool OnPurchaseComplete(ProductReceivedInfo productReceivedInfo) { }

	// RVA: 0x225476C Offset: 0x225076C VA: 0x225476C Slot: 10
	public void OnPurchaseFailure(VoodooPurchaseFailureReason reason, ProductReceivedInfo productReceivedInfo, string description) { }

	// RVA: 0x22549F4 Offset: 0x22509F4 VA: 0x22549F4 Slot: 11
	public void OnPurchaseDeferred(ProductReceivedInfo productInfo) { }

	// RVA: 0x2253554 Offset: 0x224F554 VA: 0x2253554
	private List<FulfillPayout> CreatePayouts(PurchaseRequest request) { }

	// RVA: 0x2253620 Offset: 0x224F620 VA: 0x2253620
	private Dictionary<string, object> GetPurchaseContextProperties(PurchaseRequest request) { }

	// RVA: 0x22549F8 Offset: 0x22509F8 VA: 0x22549F8
	private string GetProductMaster(PurchaseRequest request) { }

	// RVA: 0x2254A48 Offset: 0x2250A48 VA: 0x2254A48
	private string PlacementToProductMaster(string placement) { }

	// RVA: 0x2254BCC Offset: 0x2250BCC VA: 0x2254BCC
	public void .ctor() { }
}

