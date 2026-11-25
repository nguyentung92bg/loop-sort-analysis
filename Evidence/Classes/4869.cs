// Namespace: 
public sealed class WelcomeBackOffer : LiveOpsBase // TypeDefIndex: 4869
{
	// Fields
	[Inject]
	private SheetContainer _sheetContainer; // 0x10
	[Inject]
	private Monitors _monitors; // 0x18
	[Inject]
	private IObjectResolver _resolver; // 0x20
	[Inject]
	private AnalyticsModule _analyticsModule; // 0x28
	[Inject]
	private LiveOpsModule _liveOpsModule; // 0x30
	private bool _showed; // 0x38
	private CloudPrefsInt _nextOfferIdx; // 0x40

	// Methods

	// RVA: 0x252D6A4 Offset: 0x25296A4 VA: 0x252D6A4 Slot: 5
	public override void Initialize() { }

	// RVA: 0x252D74C Offset: 0x252974C VA: 0x252D74C Slot: 6
	public override UniTask ApplyHomeAction(CancellationToken cancellationToken) { }

	// RVA: 0x252DB68 Offset: 0x2529B68 VA: 0x252DB68
	public void .ctor() { }
}

