// Namespace: 
public class AreaOffer : LiveOpsBase // TypeDefIndex: 4783
{
	// Fields
	private static readonly string[] ProductIds; // 0x0
	private static readonly DateTimeOffset TourAnchor; // 0x8
	private static Nullable<AreaType> _previewArea; // 0x18
	[Inject]
	private SheetContainer _sheetContainer; // 0x10
	[Inject]
	private AreaOffers _areaOffers; // 0x18
	[Inject]
	private LiveOpsModule _liveOpsModule; // 0x20
	[Inject]
	private PurchasingModule _purchasingModule; // 0x28
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x30
	private AreaOffersConfig _config; // 0x38
	private AsyncOperationHandle<Sprite> _homeIconHandle; // 0x40
	private object _homeIconKey; // 0x58
	private List<AreaType> _tourAreas; // 0x60
	private DateTimeOffset _tourWindowStart; // 0x68
	private int _tourWindow; // 0x78

	// Properties
	protected virtual LiveOps Id { get; }
	private int Tier { get; }
	public string ProductId { get; }
	public AreaType Area { get; }
	public AreaOffers.Offer Offer { get; }
	public string ReskinName { get; }

	// Methods

	// RVA: 0x25095FC Offset: 0x25055FC VA: 0x25095FC Slot: 19
	protected virtual LiveOps get_Id() { }

	// RVA: 0x2509604 Offset: 0x2505604 VA: 0x2509604
	private int get_Tier() { }

	// RVA: 0x2509624 Offset: 0x2505624 VA: 0x2509624
	public string get_ProductId() { }

	// RVA: 0x25096B8 Offset: 0x25056B8 VA: 0x25096B8
	public AreaType get_Area() { }

	// RVA: 0x2509AEC Offset: 0x2505AEC VA: 0x2509AEC
	public AreaOffers.Offer get_Offer() { }

	// RVA: 0x2509BA0 Offset: 0x2505BA0 VA: 0x2509BA0
	public string get_ReskinName() { }

	// RVA: 0x2509C1C Offset: 0x2505C1C VA: 0x2509C1C Slot: 5
	public override void Initialize() { }

	// RVA: 0x2509D00 Offset: 0x2505D00 VA: 0x2509D00 Slot: 11
	public override bool CanJoin() { }

	// RVA: 0x2509E6C Offset: 0x2505E6C VA: 0x2509E6C Slot: 13
	public override bool CanShow() { }

	// RVA: 0x2509E70 Offset: 0x2505E70 VA: 0x2509E70 Slot: 14
	public override bool CanShowInHome() { }

	// RVA: 0x2509ECC Offset: 0x2505ECC VA: 0x2509ECC Slot: 18
	public override Sprite GetHomeIcon() { }

	// RVA: 0x250A0E8 Offset: 0x25060E8 VA: 0x250A0E8
	public string GetTitle() { }

	// RVA: 0x2509D04 Offset: 0x2505D04 VA: 0x2509D04
	private bool HasOffer() { }

	// RVA: 0x2509788 Offset: 0x2505788 VA: 0x2509788
	private Nullable<AreaType> OfferArea() { }

	// RVA: 0x250A2D0 Offset: 0x25062D0 VA: 0x250A2D0
	private Nullable<AreaType> TourArea() { }

	// RVA: 0x250A604 Offset: 0x2506604 VA: 0x250A604
	private List<AreaType> BuildTourAreas() { }

	// RVA: 0x250A204 Offset: 0x2506204 VA: 0x250A204
	private static bool HasOffers(AreaOffers areaOffers, AreaType area) { }

	// RVA: 0x250A824 Offset: 0x2506824 VA: 0x250A824
	private void OnPurchase(FulfillPurchaseMessage m) { }

	[ConsoleMethod("areaoffer", "Preview an area's offers on Home (none = current area)", new[] { "area" })]
	// RVA: 0x250AA30 Offset: 0x2506A30 VA: 0x250AA30
	public static void PreviewAreaOffers(string areaName) { }

	[ConsoleMethod("areaoffernext", "Preview the next area's offers on Home", new[] {  })]
	// RVA: 0x250B03C Offset: 0x250703C VA: 0x250B03C
	public static void PreviewNextAreaOffers() { }

	// RVA: 0x250AD10 Offset: 0x2506D10 VA: 0x250AD10
	private static void Preview(AreaType area) { }

	// RVA: 0x250AC28 Offset: 0x2506C28 VA: 0x250AC28
	private static void RefreshHome() { }

	// RVA: -1 Offset: -1
	private static T Resolve<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x25A6534 Offset: 0x25A2534 VA: 0x25A6534
	|-AreaOffer.Resolve<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x2509EFC Offset: 0x2505EFC VA: 0x2509EFC
	private Sprite LoadHomeIcon(AssetReferenceSprite reference) { }

	// RVA: 0x250B354 Offset: 0x2507354 VA: 0x250B354
	public void .ctor() { }

	// RVA: 0x250B35C Offset: 0x250735C VA: 0x250B35C
	private static void .cctor() { }
}

