// Namespace: 
public sealed class RateUsMonitor : MonitorBase // TypeDefIndex: 5439
{
	// Fields
	private const string URL = "https://docs.google.com/forms/d/e/1FAIpQLSfwtUF7rOsjlSCP6tgGJheJjA6-Ic3MYzfrcjAWqffi7EqJMA/formResponse";
	private const string RateId = "entry.173813721";
	private const string DescriptionId = "entry.233918770";
	private const string PlatformId = "entry.907098454";
	private const string AppVersionId = "entry.625813953";
	private const string AppBuildNoId = "entry.955646196";
	private const string DeviceGuidId = "entry.692333420";
	private const string CountryId = "entry.365347806";
	private const string DeviceId = "entry.519345478";
	private static readonly string LogPrefix; // 0x0
	[Inject]
	private AnalyticsModule _analyticsModule; // 0x98
	private Button[] _starButtons; // 0xA0
	private Image[] _starImages; // 0xA8
	private int _starRating; // 0xB0
	private Action<bool> _onRated; // 0xB8
	private Action _onNativeStoreCallback; // 0xC0

	// Methods

	// RVA: 0x245ABD4 Offset: 0x2456BD4 VA: 0x245ABD4 Slot: 13
	public override void Setup() { }

	// RVA: 0x245AE6C Offset: 0x2456E6C VA: 0x245AE6C Slot: 15
	public override void OnActivated() { }

	// RVA: 0x245AF50 Offset: 0x2456F50 VA: 0x245AF50
	public void Show(Action<bool> rated, Action nativeStoreCallback) { }

	// RVA: 0x245B024 Offset: 0x2457024 VA: 0x245B024
	private void OnRateClicked() { }

	// RVA: 0x245B1A8 Offset: 0x24571A8 VA: 0x245B1A8
	private void OnMaybeClicked() { }

	// RVA: 0x245B1FC Offset: 0x24571FC VA: 0x245B1FC
	private void OnCloseClicked() { }

	// RVA: 0x245AED4 Offset: 0x2456ED4 VA: 0x245AED4
	private void ResetStarRating() { }

	// RVA: 0x245B250 Offset: 0x2457250 VA: 0x245B250
	private void OnStarClicked(int starRating) { }

	[AsyncStateMachine(typeof(RateUsMonitor.<Post>d__24))]
	// RVA: 0x245B0F8 Offset: 0x24570F8 VA: 0x245B0F8
	private UniTaskVoid Post(string comment) { }

	// RVA: 0x245B330 Offset: 0x2457330 VA: 0x245B330
	public void .ctor() { }

	// RVA: 0x245B338 Offset: 0x2457338 VA: 0x245B338
	private static void .cctor() { }
}

