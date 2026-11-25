// Namespace: 
public sealed class StreakTournamentSubMonitor : SubMonitorBase // TypeDefIndex: 5516
{
	// Fields
	[CompilerGenerated]
	[SerializeField]
	private IconInfo <FirstRewardSprite>k__BackingField; // 0x40
	[CompilerGenerated]
	[SerializeField]
	private IconInfo <SecondRewardSprite>k__BackingField; // 0x58
	[CompilerGenerated]
	[SerializeField]
	private IconInfo <ThirdRewardSprite>k__BackingField; // 0x70
	[CompilerGenerated]
	[SerializeField]
	private IconInfo <ChestSprite>k__BackingField; // 0x88
	[Inject]
	private StreakTournament _streakTournament; // 0xA0
	[Inject]
	private SheetContainer _sheetContainer; // 0xA8
	[Inject]
	private LiveOpsModule _liveOpsModule; // 0xB0
	[Inject]
	private Shop _shop; // 0xB8
	[Inject]
	private GameMachine _gameMachine; // 0xC0
	[Inject]
	private LifeModule _lifeModule; // 0xC8
	private StatefulComponent _gameView; // 0xD0
	private StatefulComponent _joinView; // 0xD8
	private StatefulComponent _infoView; // 0xE0
	private StatefulComponent _personalView; // 0xE8
	private StatefulComponent _personalBarView; // 0xF0
	private StreakTournamentLeaderboardElement _leaderboardElement; // 0xF8
	private StreakTournamentPersonalRewardsElement _personalRewardsElement; // 0x100
	private CancellationTokenSource _infoCancellation; // 0x108
	private readonly List<RewardInfo> _payouts; // 0x110

	// Properties
	public IconInfo FirstRewardSprite { get; set; }
	public IconInfo SecondRewardSprite { get; set; }
	public IconInfo ThirdRewardSprite { get; set; }
	public IconInfo ChestSprite { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2482660 Offset: 0x247E660 VA: 0x2482660
	public IconInfo get_FirstRewardSprite() { }

	[CompilerGenerated]
	// RVA: 0x2482674 Offset: 0x247E674 VA: 0x2482674
	private void set_FirstRewardSprite(IconInfo value) { }

	[CompilerGenerated]
	// RVA: 0x2482698 Offset: 0x247E698 VA: 0x2482698
	public IconInfo get_SecondRewardSprite() { }

	[CompilerGenerated]
	// RVA: 0x24826AC Offset: 0x247E6AC VA: 0x24826AC
	private void set_SecondRewardSprite(IconInfo value) { }

	[CompilerGenerated]
	// RVA: 0x24826D0 Offset: 0x247E6D0 VA: 0x24826D0
	public IconInfo get_ThirdRewardSprite() { }

	[CompilerGenerated]
	// RVA: 0x24826E4 Offset: 0x247E6E4 VA: 0x24826E4
	private void set_ThirdRewardSprite(IconInfo value) { }

	[CompilerGenerated]
	// RVA: 0x2482708 Offset: 0x247E708 VA: 0x2482708
	public IconInfo get_ChestSprite() { }

	[CompilerGenerated]
	// RVA: 0x248271C Offset: 0x247E71C VA: 0x248271C
	private void set_ChestSprite(IconInfo value) { }

	// RVA: 0x2482740 Offset: 0x247E740 VA: 0x2482740 Slot: 8
	public override void Setup() { }

	// RVA: 0x24834E4 Offset: 0x247F4E4 VA: 0x24834E4 Slot: 9
	public override void Render() { }

	// RVA: 0x248368C Offset: 0x247F68C VA: 0x248368C Slot: 11
	public override void OnDeactivated() { }

	// RVA: 0x24836B0 Offset: 0x247F6B0 VA: 0x24836B0
	public void UpdateRewardView(StatefulComponent view, List<RewardInfo> rewards) { }

	// RVA: 0x248337C Offset: 0x247F37C VA: 0x248337C
	private void UpdateCompletedView(StatefulComponent view) { }

	// RVA: 0x2482D88 Offset: 0x247ED88 VA: 0x2482D88
	private void UpdateMultiplierView(StatefulComponent view) { }

	[AsyncStateMachine(typeof(StreakTournamentSubMonitor.<UpdatePersonalBarView>d__37))]
	// RVA: 0x248302C Offset: 0x247F02C VA: 0x248302C
	private UniTaskVoid UpdatePersonalBarView(StatefulComponent view) { }

	[AsyncStateMachine(typeof(StreakTournamentSubMonitor.<StartPersonalBarClaimMotion>d__38))]
	// RVA: 0x2483A4C Offset: 0x247FA4C VA: 0x2483A4C
	private UniTask StartPersonalBarClaimMotion(StatefulComponent view, int iteration = 0) { }

	// RVA: 0x2483B10 Offset: 0x247FB10 VA: 0x2483B10
	private void UpdatePersonalBarPreviousView(StatefulComponent view) { }

	// RVA: 0x2483CDC Offset: 0x247FCDC VA: 0x2483CDC
	private void StartLevel() { }

	// RVA: 0x2482AE0 Offset: 0x247EAE0 VA: 0x2482AE0
	private void SetupButtons() { }

	// RVA: 0x2483D2C Offset: 0x247FD2C VA: 0x2483D2C
	private void OnCloseClicked() { }

	// RVA: 0x2483D80 Offset: 0x247FD80 VA: 0x2483D80
	private void OnJoinClicked() { }

	// RVA: 0x2483EF8 Offset: 0x247FEF8 VA: 0x2483EF8
	private void OnInfoClicked() { }

	// RVA: 0x2483FAC Offset: 0x247FFAC VA: 0x2483FAC
	private void OnInfoContinueClicked() { }

	// RVA: 0x2483FEC Offset: 0x247FFEC VA: 0x2483FEC
	private void OnGameClaimClicked() { }

	// RVA: 0x2484050 Offset: 0x2480050 VA: 0x2484050
	private void OnPersonalBarSelectClicked() { }

	// RVA: 0x2484258 Offset: 0x2480258 VA: 0x2484258
	private void OnPersonalCloseClicked() { }

	// RVA: 0x2484268 Offset: 0x2480268 VA: 0x2484268
	public void .ctor() { }
}

