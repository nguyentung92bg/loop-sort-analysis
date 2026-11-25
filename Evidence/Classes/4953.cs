// Namespace: 
public struct AnalyticsLiveOpsEvent // TypeDefIndex: 4953
{
	// Fields
	private readonly string _eventName; // 0x0
	private readonly Dictionary<string, object> _customData; // 0x8
	private readonly Dictionary<string, object> _instanceData; // 0x10

	// Methods

	// RVA: 0x2541140 Offset: 0x253D140 VA: 0x2541140
	public void .ctor(string eventName, LiveOps liveOps) { }

	// RVA: 0x25416E8 Offset: 0x253D6E8 VA: 0x25416E8
	public void SendEvent() { }

	// RVA: 0x2541798 Offset: 0x253D798 VA: 0x2541798
	public void AddGeneralData(LiveOps liveOps) { }

	// RVA: 0x2541D00 Offset: 0x253DD00 VA: 0x2541D00
	public void AddTransactionData() { }

	// RVA: 0x2541F24 Offset: 0x253DF24 VA: 0x2541F24
	public void SetImpressionTrigger(LiveOpsImpressionTrigger trigger) { }

	// RVA: 0x2541FDC Offset: 0x253DFDC VA: 0x2541FDC
	public void SetMilestoneLevel(int level) { }

	// RVA: 0x2542074 Offset: 0x253E074 VA: 0x2542074
	public void SetRewardTrackType(LiveOpsStatus status) { }

	// RVA: 0x254212C Offset: 0x253E12C VA: 0x254212C
	public void SetStageNumber(int stageNumber) { }

	// RVA: 0x25421C4 Offset: 0x253E1C4 VA: 0x25421C4
	public void SetPassStatus(LiveOpsStatus status) { }

	// RVA: 0x254227C Offset: 0x253E27C VA: 0x254227C
	public void SetCurrencyBalance(int quantity) { }

	// RVA: 0x2542314 Offset: 0x253E314 VA: 0x2542314
	public void SetCurrencyCollected(int quantity) { }

	// RVA: 0x25423AC Offset: 0x253E3AC VA: 0x25423AC
	public void SetMaxMilestoneLevel(int level) { }

	// RVA: 0x2542444 Offset: 0x253E444 VA: 0x2542444
	public void SetMaxWinStreak(int winStreak) { }

	// RVA: 0x25424DC Offset: 0x253E4DC VA: 0x25424DC
	public void SetFinalTrackStatus(LiveOpsStatus status) { }

	// RVA: 0x2542594 Offset: 0x253E594 VA: 0x2542594
	public void SetMaxStageCompleted(int stageNumber) { }

	// RVA: 0x254262C Offset: 0x253E62C VA: 0x254262C
	public void SetTournamentPlacement(int tournamentPlacement) { }

	// RVA: 0x25426C4 Offset: 0x253E6C4 VA: 0x25426C4
	public void SetPlacement(string placement) { }

	// RVA: 0x2542734 Offset: 0x253E734 VA: 0x2542734
	public void SetItemName(Item item) { }

	// RVA: 0x25427E0 Offset: 0x253E7E0 VA: 0x25427E0
	public void SetMilestoneType(string milestoneType) { }

	// RVA: 0x2542850 Offset: 0x253E850 VA: 0x2542850
	public void SetUnitNumber(int unitNumber) { }

	// RVA: 0x25428E8 Offset: 0x253E8E8 VA: 0x25428E8
	public void SetTransactionType(TransactionType transactionType) { }
}

