// Namespace: 
public sealed class HomeReturnOffer : LiveOpsBase // TypeDefIndex: 4818
{
	// Fields
	[Inject]
	private Monitors _monitors; // 0x10
	[Inject]
	private SheetContainer _sheetContainer; // 0x18
	[Inject]
	private IObjectResolver _resolver; // 0x20
	[Inject]
	private AnalyticsModule _analyticsModule; // 0x28
	[Inject]
	private LiveOpsModule _liveOpsModule; // 0x30
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x38
	[Inject]
	private ISubscriber<LevelWinMessage> _levelWinSub; // 0x40
	private bool _checkHomeAction; // 0x48
	private AreaOffersConfig _areaOffersConfig; // 0x50

	// Methods

	// RVA: 0x2519A78 Offset: 0x2515A78 VA: 0x2519A78 Slot: 5
	public override void Initialize() { }

	// RVA: 0x2519BC4 Offset: 0x2515BC4 VA: 0x2519BC4 Slot: 6
	public override UniTask ApplyHomeAction(CancellationToken cancellationToken) { }

	// RVA: 0x2519E28 Offset: 0x2515E28 VA: 0x2519E28
	private LiveOps GetOpenAreaOffer() { }

	// RVA: 0x2519E74 Offset: 0x2515E74 VA: 0x2519E74
	private void OnLevelWin(LevelWinMessage m) { }

	// RVA: 0x2519E80 Offset: 0x2515E80 VA: 0x2519E80
	public void .ctor() { }
}

