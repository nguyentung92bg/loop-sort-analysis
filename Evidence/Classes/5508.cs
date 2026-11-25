// Namespace: 
public sealed class LondonTripSubMonitor : SubMonitorBase // TypeDefIndex: 5508
{
	// Fields
	[Inject]
	private LondonTrip _controller; // 0x40
	[Inject]
	private SheetContainer _sheetContainer; // 0x48
	[Inject]
	private Shop _shop; // 0x50
	[Inject]
	private PurchasingModule _purchasingModule; // 0x58
	[Inject]
	private FulfillItemsMonitor _fulfillItemsMonitor; // 0x60
	[Inject]
	private FulfillModule _fulfillModule; // 0x68
	[SerializeField]
	private List<RectTransform> Containers; // 0x70
	[SerializeField]
	private List<Sprite> GiftSprites; // 0x78
	[SerializeField]
	private GenericDictionary<Sprite, StateRole> ColorStateByGiftSprite; // 0x80
	private readonly Queue<StatefulComponent> _progressElements; // 0x88
	private readonly Dictionary<int, string> _productIdByTier; // 0x90

	// Methods

	// RVA: 0x247EBD8 Offset: 0x247ABD8 VA: 0x247EBD8 Slot: 8
	public override void Setup() { }

	// RVA: 0x247EFFC Offset: 0x247AFFC VA: 0x247EFFC Slot: 9
	public override void Render() { }

	// RVA: 0x247EC10 Offset: 0x247AC10 VA: 0x247EC10
	private void FillProductIds() { }

	// RVA: 0x247EE94 Offset: 0x247AE94 VA: 0x247EE94
	private void FillProgressElements() { }

	// RVA: 0x247F194 Offset: 0x247B194 VA: 0x247F194
	private void CreateProgressElement(StatefulComponent view, LondonTripSheet.Row data) { }

	// RVA: 0x247F598 Offset: 0x247B598 VA: 0x247F598
	private void CreateNextProgressElement() { }

	// RVA: 0x247F6A4 Offset: 0x247B6A4 VA: 0x247F6A4
	private void OnBuyClicked(LondonTripSheet.Row data) { }

	[AsyncStateMachine(typeof(LondonTripSubMonitor.<HandleBuyNextProgress>d__18))]
	// RVA: 0x247F980 Offset: 0x247B980 VA: 0x247F980
	public UniTaskVoid HandleBuyNextProgress(List<FulfillPayout> payouts) { }

	[AsyncStateMachine(typeof(LondonTripSubMonitor.<UpdateProgressView>d__19))]
	// RVA: 0x247F400 Offset: 0x247B400 VA: 0x247F400
	private UniTaskVoid UpdateProgressView(bool withMotion = True) { }

	// RVA: 0x247FA2C Offset: 0x247BA2C VA: 0x247FA2C
	private void ApplyProgressBarMotion(bool withMotion) { }

	// RVA: 0x247FB6C Offset: 0x247BB6C VA: 0x247FB6C
	private MotionHandle ApplyProgressViewMotion(RectTransform view, RectTransform container, Action onComplete) { }

	// RVA: 0x247F4B4 Offset: 0x247B4B4 VA: 0x247F4B4
	private void FillItemElements(StatefulComponent view, LondonTripSheet.Row data) { }

	// RVA: 0x247FC94 Offset: 0x247BC94 VA: 0x247FC94
	private void CreateItemElement(StatefulComponent view, RewardInfo data) { }

	// RVA: 0x247FD5C Offset: 0x247BD5C VA: 0x247FD5C
	public void .ctor() { }
}

