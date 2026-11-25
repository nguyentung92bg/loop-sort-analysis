// Namespace: 
public sealed class SupportMonitor : MonitorBase // TypeDefIndex: 5462
{
	// Fields
	private const string URL = "https://docs.google.com/forms/d/e/1FAIpQLSd-MFFPVjmeYsd_R8T7jN0Qw9QzAkcg2pYaANJghWqnkW6wRQ/formResponse";
	private const string EmailId = "entry.1198169766";
	private const string DescId = "entry.1224121136";
	private const string LevelId = "entry.1283283617";
	private const string ApplicationId = "entry.1146677272";
	private const string SystemInfoId = "entry.716948682";
	private const string CohortsId = "entry.2021340210";
	private const string PrefsId = "entry.1545537861";
	private const string ErrorsId = "entry.2096389041";
	private const string PurchaseHistoryId = "entry.598857574";
	private const double SendDelayMinutes = 5;
	private const int MinDescriptionLength = 5;
	private static readonly string LogPrefix; // 0x0
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x98
	[Inject]
	private AnalyticsModule _analyticsModule; // 0xA0

	// Methods

	// RVA: 0x2463B70 Offset: 0x245FB70 VA: 0x2463B70 Slot: 13
	public override void Setup() { }

	// RVA: 0x2463DDC Offset: 0x245FDDC VA: 0x2463DDC Slot: 15
	public override void OnActivated() { }

	// RVA: 0x24640C4 Offset: 0x24600C4 VA: 0x24640C4
	private void OnCloseClicked() { }

	// RVA: 0x24640E4 Offset: 0x24600E4 VA: 0x24640E4
	private void OnSendClicked() { }

	// RVA: 0x2464178 Offset: 0x2460178 VA: 0x2464178
	private void OnInputChanged(string _) { }

	[AsyncStateMachine(typeof(SupportMonitor.<Post>d__20))]
	// RVA: 0x24640E8 Offset: 0x24600E8 VA: 0x24640E8
	private UniTaskVoid Post() { }

	// RVA: 0x246426C Offset: 0x246026C VA: 0x246426C
	private string GetApplicationText(StringBuilder sb) { }

	// RVA: 0x2464A8C Offset: 0x2460A8C VA: 0x2464A8C
	private string GetSystemInfoText(StringBuilder sb) { }

	// RVA: 0x246538C Offset: 0x246138C VA: 0x246538C
	private string GetCohortsText(StringBuilder sb) { }

	// RVA: 0x24654F0 Offset: 0x24614F0 VA: 0x24654F0
	private string GetPrefsText(StringBuilder sb) { }

	// RVA: 0x2465B40 Offset: 0x2461B40 VA: 0x2465B40
	private string GetErrorsText(StringBuilder sb) { }

	// RVA: 0x2465C64 Offset: 0x2461C64 VA: 0x2465C64
	private string GetPurchaseHistoryText(StringBuilder sb) { }

	// RVA: 0x2465E5C Offset: 0x2461E5C VA: 0x2465E5C
	public void .ctor() { }

	// RVA: 0x2465E64 Offset: 0x2461E64 VA: 0x2465E64
	private static void .cctor() { }
}

