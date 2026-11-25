// Namespace: 
public sealed class CollectionBar : LiveOpsBase // TypeDefIndex: 4799
{
	// Fields
	[Inject]
	private SheetContainer _sheetContainer; // 0x10
	[Inject]
	private EconomyModule _economyModule; // 0x18
	[Inject]
	private AnalyticsModule _analyticsModule; // 0x20
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x28
	[Inject]
	private LiveOpsModule _liveOpsModule; // 0x30
	[Inject]
	private IAsyncPublisher<CollectionBarUpdateMessage> _collectionBarUpdatePub; // 0x38
	[Inject]
	private ISubscriber<ReviveContinueResultUpdateMessage> _reviveContinueResultUpdateSub; // 0x40
	private CollectionBarConfig _collectionBarConfig; // 0x48

	// Methods

	// RVA: 0x2511AF4 Offset: 0x250DAF4 VA: 0x2511AF4 Slot: 5
	public override void Initialize() { }

	// RVA: 0x2511C40 Offset: 0x250DC40 VA: 0x2511C40 Slot: 13
	public override bool CanShow() { }

	// RVA: 0x2511C58 Offset: 0x250DC58 VA: 0x2511C58 Slot: 14
	public override bool CanShowInHome() { }

	// RVA: 0x2511C70 Offset: 0x250DC70 VA: 0x2511C70 Slot: 15
	public override Dictionary<string, object> GetAnalyticsData() { }

	// RVA: 0x2511E00 Offset: 0x250DE00 VA: 0x2511E00 Slot: 6
	public override UniTask ApplyHomeAction(CancellationToken cancellationToken) { }

	// RVA: 0x2511EB0 Offset: 0x250DEB0 VA: 0x2511EB0 Slot: 7
	public override bool CanSkipHomeAction() { }

	// RVA: 0x25121EC Offset: 0x250E1EC VA: 0x25121EC Slot: 8
	public override void Complete() { }

	// RVA: 0x2512390 Offset: 0x250E390 VA: 0x2512390 Slot: 16
	public override LiveOpsEventCompletedArgs GetEventCompletedData() { }

	// RVA: 0x25124BC Offset: 0x250E4BC VA: 0x25124BC
	public int GetTotalTokenCount() { }

	// RVA: 0x25124D8 Offset: 0x250E4D8 VA: 0x25124D8
	public int GetCurrentProgress() { }

	// RVA: 0x2511D90 Offset: 0x250DD90 VA: 0x2511D90
	public CollectionBarSheet.Row GetCurrentProgressData() { }

	// RVA: 0x251276C Offset: 0x250E76C VA: 0x251276C
	public int GetCurrentTokenCount() { }

	// RVA: 0x25126D8 Offset: 0x250E6D8 VA: 0x25126D8
	private CollectionBarSheet.Row GetLastProgressData() { }

	// RVA: 0x2511F44 Offset: 0x250DF44 VA: 0x2511F44
	public List<CollectionBarSheet.Row> GetClaimableProgresses() { }

	// RVA: 0x2511F18 Offset: 0x250DF18 VA: 0x2511F18
	public bool IsLocked() { }

	// RVA: 0x2512904 Offset: 0x250E904 VA: 0x2512904 Slot: 11
	public override bool CanJoin() { }

	// RVA: 0x251291C Offset: 0x250E91C VA: 0x251291C
	public bool IsProgressComplete() { }

	// RVA: 0x2512A1C Offset: 0x250EA1C VA: 0x2512A1C
	private void OnReviveContinueResultUpdate(ReviveContinueResultUpdateMessage m) { }

	// RVA: 0x2512A20 Offset: 0x250EA20 VA: 0x2512A20
	public void .ctor() { }
}

