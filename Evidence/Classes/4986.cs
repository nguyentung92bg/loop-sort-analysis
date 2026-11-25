// Namespace: 
public sealed class PurchasingModule : ModuleBase, IInitializable // TypeDefIndex: 4986
{
	// Fields
	[Inject]
	private IPurchasingProvider _provider; // 0x10
	[Inject]
	private Monitors _monitors; // 0x18
	[Inject]
	private AnalyticsModule _analyticsModule; // 0x20
	[Inject]
	private CloudSaveModule _cloudSaveModule; // 0x28
	[Inject]
	private ISubscriber<FulfillPurchaseMessage> _fulfillPurchaseSub; // 0x30
	[Inject]
	private ISubscriber<PurchaseCompleteMessage> _purchaseCompleteSub; // 0x38
	[Inject]
	private IPublisher<PurchaseStartMessage> _purchaseStartPub; // 0x40
	[Inject]
	private IPublisher<RestorePurchasesStartMessage> _restorePurchasesStartPub; // 0x48
	private readonly Dictionary<string, Action<FulfillPurchaseMessage>> _productIdPurchaseListeners; // 0x50
	private readonly Dictionary<ProductType, Action<FulfillPurchaseMessage>> _productTypePurchaseListeners; // 0x58
	private PlayerPrefsString _purchasingLog; // 0x60
	private const int PurchasingLogMaxLength = 4000;

	// Methods

	// RVA: 0x2549540 Offset: 0x2545540 VA: 0x2549540 Slot: 4
	public void Initialize() { }

	// RVA: 0x2549498 Offset: 0x2545498 VA: 0x2549498
	public PurchasingStatus GetStatus() { }

	// RVA: 0x2549728 Offset: 0x2545728 VA: 0x2549728
	public void StartPurchase(string productId, string placement, ProductType productType = 0, List<FulfillPayout> payouts, string reskin) { }

	// RVA: 0x2549988 Offset: 0x2545988 VA: 0x2549988
	private void StartPurchase(PurchaseRequest request) { }

	// RVA: 0x2549B64 Offset: 0x2545B64 VA: 0x2549B64
	private void OnPurchaseComplete(PurchaseCompleteMessage m) { }

	// RVA: 0x254A10C Offset: 0x254610C VA: 0x254A10C
	public void StartRestorePurchases() { }

	// RVA: 0x254A228 Offset: 0x2546228 VA: 0x254A228
	private void OnFulfillPurchase(FulfillPurchaseMessage m) { }

	// RVA: 0x254A360 Offset: 0x2546360 VA: 0x254A360
	public void AddPurchaseListener(string productId, Action<FulfillPurchaseMessage> onPurchase) { }

	// RVA: 0x254A4B0 Offset: 0x25464B0 VA: 0x254A4B0
	public void RemovePurchaseListener(string productId, Action<FulfillPurchaseMessage> onPurchase) { }

	// RVA: 0x254A610 Offset: 0x2546610 VA: 0x254A610
	public void AddPurchaseListener(ProductType productType, Action<FulfillPurchaseMessage> onPurchase) { }

	// RVA: 0x254A770 Offset: 0x2546770 VA: 0x254A770
	public void RemovePurchaseListener(ProductType productType, Action<FulfillPurchaseMessage> onPurchase) { }

	// RVA: 0x2549880 Offset: 0x2545880 VA: 0x2549880
	public ProductMetadata GetProductMetadata(string productId) { }

	// RVA: 0x2549E70 Offset: 0x2545E70 VA: 0x2549E70
	private void LogPurchaseComplete(PurchaseCompleteMessage m, AnalyticsPurchaseEvent e) { }

	// RVA: 0x254A8EC Offset: 0x25468EC VA: 0x254A8EC
	private void AppendPurchasingLog(string line) { }

	// RVA: 0x254A9E0 Offset: 0x25469E0 VA: 0x254A9E0
	public void .ctor() { }
}

