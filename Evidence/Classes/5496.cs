// Namespace: 
public sealed class GarageSaleSubMonitor : SubMonitorBase // TypeDefIndex: 5496
{
	// Fields
	[Inject]
	private GarageSale _controller; // 0x40
	[Inject]
	private SheetContainer _sheetContainer; // 0x48
	[Inject]
	private Shop _shop; // 0x50
	[Inject]
	private PurchasingModule _purchasingModule; // 0x58
	[Inject]
	private FulfillItemsMonitor _fulfillItemsMonitor; // 0x60
	[SerializeField]
	private List<RectTransform> Containers; // 0x68
	private readonly Queue<StatefulComponent> _progressElements; // 0x70
	private readonly Dictionary<int, string> _productIdByTier; // 0x78

	// Methods

	// RVA: 0x2476EEC Offset: 0x2472EEC VA: 0x2476EEC Slot: 8
	public override void Setup() { }

	// RVA: 0x24772C4 Offset: 0x24732C4 VA: 0x24772C4 Slot: 9
	public override void Render() { }

	// RVA: 0x2476F10 Offset: 0x2472F10 VA: 0x2476F10
	private void FillProductIds() { }

	// RVA: 0x2477194 Offset: 0x2473194 VA: 0x2477194
	private void FillProgressElements() { }

	// RVA: 0x247745C Offset: 0x247345C VA: 0x247745C
	private void CreateProgressElement(StatefulComponent view, GarageSaleSheet.Row data) { }

	// RVA: 0x2477860 Offset: 0x2473860 VA: 0x2477860
	private void OnBuyClicked(GarageSaleSheet.Row data) { }

	[AsyncStateMachine(typeof(GarageSaleSubMonitor.<HandleBuyNextProgress>d__14))]
	// RVA: 0x2477B3C Offset: 0x2473B3C VA: 0x2477B3C
	public UniTaskVoid HandleBuyNextProgress(List<FulfillPayout> payouts) { }

	[AsyncStateMachine(typeof(GarageSaleSubMonitor.<UpdateProgressView>d__15))]
	// RVA: 0x24776C8 Offset: 0x24736C8 VA: 0x24776C8
	private UniTaskVoid UpdateProgressView(bool withMotion = True) { }

	// RVA: 0x2477BE8 Offset: 0x2473BE8 VA: 0x2477BE8
	private MotionHandle ApplyProgressViewMotion(RectTransform view, RectTransform container, Action onComplete) { }

	// RVA: 0x247777C Offset: 0x247377C VA: 0x247777C
	private void FillItemElements(StatefulComponent view, GarageSaleSheet.Row data) { }

	// RVA: 0x2477D10 Offset: 0x2473D10 VA: 0x2477D10
	private void CreateItemElement(StatefulComponent view, RewardInfo data) { }

	// RVA: 0x2477DD8 Offset: 0x2473DD8 VA: 0x2477DD8
	public void .ctor() { }
}

