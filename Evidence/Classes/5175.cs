// Namespace: 
public sealed class SheetContainer : SheetContainerBase // TypeDefIndex: 5175
{
	// Fields
	[CompilerGenerated]
	private bool <Reloading>k__BackingField; // 0x20
	private readonly ISheetImporter[] _importers; // 0x28
	[CompilerGenerated]
	private ConstantSheet <Constants>k__BackingField; // 0x30
	[CompilerGenerated]
	private FeatureSheet <Features>k__BackingField; // 0x38
	[CompilerGenerated]
	private BoosterSheet <Boosters>k__BackingField; // 0x40
	[CompilerGenerated]
	private ReviveSheet <Revives>k__BackingField; // 0x48
	[CompilerGenerated]
	private AreaSheet <Areas>k__BackingField; // 0x50
	[CompilerGenerated]
	private EconomyConstantSheet <EconomyConstants>k__BackingField; // 0x58
	[CompilerGenerated]
	private LevelSheet <Levels>k__BackingField; // 0x60
	[CompilerGenerated]
	private SplineSheet <Splines>k__BackingField; // 0x68
	[CompilerGenerated]
	private CarrierSheet <Carriers>k__BackingField; // 0x70
	[CompilerGenerated]
	private LevelConstantSheet <LevelConstants>k__BackingField; // 0x78
	[CompilerGenerated]
	private LocalizationSheet <Localization>k__BackingField; // 0x80
	[CompilerGenerated]
	private LiveOpsSheet <LiveOps>k__BackingField; // 0x88
	[CompilerGenerated]
	private HomeLiveOpsSheet <HomeLiveOps>k__BackingField; // 0x90
	[CompilerGenerated]
	private HomePopupSheet <HomePopups>k__BackingField; // 0x98
	[CompilerGenerated]
	private WeeklyMissionSheet <WeeklyMissions>k__BackingField; // 0xA0
	[CompilerGenerated]
	private WeeklyMissionProgressSheet <WeeklyMissionProgress>k__BackingField; // 0xA8
	[CompilerGenerated]
	private BattlePassSheet <BattlePass>k__BackingField; // 0xB0
	[CompilerGenerated]
	private BattlePassConstantSheet <BattlePassConstants>k__BackingField; // 0xB8
	[CompilerGenerated]
	private GarageSaleSheet <GarageSale>k__BackingField; // 0xC0
	[CompilerGenerated]
	private LondonTripSheet <LondonTrip>k__BackingField; // 0xC8
	[CompilerGenerated]
	private CoinRushSheet <CoinRush>k__BackingField; // 0xD0
	[CompilerGenerated]
	private CollectionBarSheet <CollectionBar>k__BackingField; // 0xD8
	[CompilerGenerated]
	private CollectionBarConstantSheet <CollectionBarConstants>k__BackingField; // 0xE0
	[CompilerGenerated]
	private LavaQuestBotSheet <LavaQuestBots>k__BackingField; // 0xE8
	[CompilerGenerated]
	private LavaQuestConstantSheet <LavaQuestConstants>k__BackingField; // 0xF0
	[CompilerGenerated]
	private DailyRewardSheet <DailyRewards>k__BackingField; // 0xF8
	[CompilerGenerated]
	private StreakTowerSheet <StreakTower>k__BackingField; // 0x100
	[CompilerGenerated]
	private StreakTournamentBotSheet <StreakTournamentBots>k__BackingField; // 0x108
	[CompilerGenerated]
	private StreakTournamentConstantSheet <StreakTournamentConstants>k__BackingField; // 0x110
	[CompilerGenerated]
	private StreakTournamentLeaderboardRewardSheet <StreakTournamentLeaderboardRewards>k__BackingField; // 0x118
	[CompilerGenerated]
	private StreakTournamentPersonalRewardSheet <StreakTournamentPersonalRewards>k__BackingField; // 0x120
	[CompilerGenerated]
	private LeaderboardTournamentRewardSheet <LeaderboardTournamentRewards>k__BackingField; // 0x128
	[CompilerGenerated]
	private DailyChallengeRewardSheet <DailyChallengeRewards>k__BackingField; // 0x130
	[CompilerGenerated]
	private AdjustEventSheet <AdjustEvents>k__BackingField; // 0x138
	[CompilerGenerated]
	private NicknameSheet <Nicknames>k__BackingField; // 0x140
	[CompilerGenerated]
	private GridSheet <Grids>k__BackingField; // 0x148

	// Properties
	public bool Reloading { get; set; }
	public ConstantSheet Constants { get; set; }
	public FeatureSheet Features { get; set; }
	public BoosterSheet Boosters { get; set; }
	public ReviveSheet Revives { get; set; }
	public AreaSheet Areas { get; set; }
	public EconomyConstantSheet EconomyConstants { get; set; }
	public LevelSheet Levels { get; set; }
	public SplineSheet Splines { get; set; }
	public CarrierSheet Carriers { get; set; }
	public LevelConstantSheet LevelConstants { get; set; }
	public LocalizationSheet Localization { get; set; }
	public LiveOpsSheet LiveOps { get; set; }
	public HomeLiveOpsSheet HomeLiveOps { get; set; }
	public HomePopupSheet HomePopups { get; set; }
	public WeeklyMissionSheet WeeklyMissions { get; set; }
	public WeeklyMissionProgressSheet WeeklyMissionProgress { get; set; }
	public BattlePassSheet BattlePass { get; set; }
	public BattlePassConstantSheet BattlePassConstants { get; set; }
	public GarageSaleSheet GarageSale { get; set; }
	public LondonTripSheet LondonTrip { get; set; }
	public CoinRushSheet CoinRush { get; set; }
	public CollectionBarSheet CollectionBar { get; set; }
	public CollectionBarConstantSheet CollectionBarConstants { get; set; }
	public LavaQuestBotSheet LavaQuestBots { get; set; }
	public LavaQuestConstantSheet LavaQuestConstants { get; set; }
	public DailyRewardSheet DailyRewards { get; set; }
	public StreakTowerSheet StreakTower { get; set; }
	public StreakTournamentBotSheet StreakTournamentBots { get; set; }
	public StreakTournamentConstantSheet StreakTournamentConstants { get; set; }
	public StreakTournamentLeaderboardRewardSheet StreakTournamentLeaderboardRewards { get; set; }
	public StreakTournamentPersonalRewardSheet StreakTournamentPersonalRewards { get; set; }
	public LeaderboardTournamentRewardSheet LeaderboardTournamentRewards { get; set; }
	public DailyChallengeRewardSheet DailyChallengeRewards { get; set; }
	public AdjustEventSheet AdjustEvents { get; set; }
	public NicknameSheet Nicknames { get; set; }
	public GridSheet Grids { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x256562C Offset: 0x256162C VA: 0x256562C
	public bool get_Reloading() { }

	[CompilerGenerated]
	// RVA: 0x2565634 Offset: 0x2561634 VA: 0x2565634
	private void set_Reloading(bool value) { }

	// RVA: 0x256563C Offset: 0x256163C VA: 0x256563C
	public void .ctor(ILogger logger) { }

	// RVA: 0x2565644 Offset: 0x2561644 VA: 0x2565644
	public void .ctor(ISheetImporter[] importers, ILogger logger) { }

	[CompilerGenerated]
	// RVA: 0x2565678 Offset: 0x2561678 VA: 0x2565678
	public ConstantSheet get_Constants() { }

	[CompilerGenerated]
	// RVA: 0x2565680 Offset: 0x2561680 VA: 0x2565680
	private void set_Constants(ConstantSheet value) { }

	[CompilerGenerated]
	// RVA: 0x2565688 Offset: 0x2561688 VA: 0x2565688
	public FeatureSheet get_Features() { }

	[CompilerGenerated]
	// RVA: 0x2565690 Offset: 0x2561690 VA: 0x2565690
	private void set_Features(FeatureSheet value) { }

	[CompilerGenerated]
	// RVA: 0x2565698 Offset: 0x2561698 VA: 0x2565698
	public BoosterSheet get_Boosters() { }

	[CompilerGenerated]
	// RVA: 0x25656A0 Offset: 0x25616A0 VA: 0x25656A0
	private void set_Boosters(BoosterSheet value) { }

	[CompilerGenerated]
	// RVA: 0x25656A8 Offset: 0x25616A8 VA: 0x25656A8
	public ReviveSheet get_Revives() { }

	[CompilerGenerated]
	// RVA: 0x25656B0 Offset: 0x25616B0 VA: 0x25656B0
	private void set_Revives(ReviveSheet value) { }

	[CompilerGenerated]
	// RVA: 0x25656B8 Offset: 0x25616B8 VA: 0x25656B8
	public AreaSheet get_Areas() { }

	[CompilerGenerated]
	// RVA: 0x25656C0 Offset: 0x25616C0 VA: 0x25656C0
	private void set_Areas(AreaSheet value) { }

	[CompilerGenerated]
	// RVA: 0x25656C8 Offset: 0x25616C8 VA: 0x25656C8
	public EconomyConstantSheet get_EconomyConstants() { }

	[CompilerGenerated]
	// RVA: 0x25656D0 Offset: 0x25616D0 VA: 0x25656D0
	private void set_EconomyConstants(EconomyConstantSheet value) { }

	[CompilerGenerated]
	// RVA: 0x25656D8 Offset: 0x25616D8 VA: 0x25656D8
	public LevelSheet get_Levels() { }

	[CompilerGenerated]
	// RVA: 0x25656E0 Offset: 0x25616E0 VA: 0x25656E0
	private void set_Levels(LevelSheet value) { }

	[CompilerGenerated]
	// RVA: 0x25656E8 Offset: 0x25616E8 VA: 0x25656E8
	public SplineSheet get_Splines() { }

	[CompilerGenerated]
	// RVA: 0x25656F0 Offset: 0x25616F0 VA: 0x25656F0
	private void set_Splines(SplineSheet value) { }

	[CompilerGenerated]
	// RVA: 0x25656F8 Offset: 0x25616F8 VA: 0x25656F8
	public CarrierSheet get_Carriers() { }

	[CompilerGenerated]
	// RVA: 0x2565700 Offset: 0x2561700 VA: 0x2565700
	private void set_Carriers(CarrierSheet value) { }

	[CompilerGenerated]
	// RVA: 0x2565708 Offset: 0x2561708 VA: 0x2565708
	public LevelConstantSheet get_LevelConstants() { }

	[CompilerGenerated]
	// RVA: 0x2565710 Offset: 0x2561710 VA: 0x2565710
	private void set_LevelConstants(LevelConstantSheet value) { }

	[CompilerGenerated]
	// RVA: 0x2565718 Offset: 0x2561718 VA: 0x2565718
	public LocalizationSheet get_Localization() { }

	[CompilerGenerated]
	// RVA: 0x2565720 Offset: 0x2561720 VA: 0x2565720
	private void set_Localization(LocalizationSheet value) { }

	[CompilerGenerated]
	// RVA: 0x2565728 Offset: 0x2561728 VA: 0x2565728
	public LiveOpsSheet get_LiveOps() { }

	[CompilerGenerated]
	// RVA: 0x2565730 Offset: 0x2561730 VA: 0x2565730
	private void set_LiveOps(LiveOpsSheet value) { }

	[CompilerGenerated]
	// RVA: 0x2565738 Offset: 0x2561738 VA: 0x2565738
	public HomeLiveOpsSheet get_HomeLiveOps() { }

	[CompilerGenerated]
	// RVA: 0x2565740 Offset: 0x2561740 VA: 0x2565740
	private void set_HomeLiveOps(HomeLiveOpsSheet value) { }

	[CompilerGenerated]
	// RVA: 0x2565748 Offset: 0x2561748 VA: 0x2565748
	public HomePopupSheet get_HomePopups() { }

	[CompilerGenerated]
	// RVA: 0x2565750 Offset: 0x2561750 VA: 0x2565750
	private void set_HomePopups(HomePopupSheet value) { }

	[CompilerGenerated]
	// RVA: 0x2565758 Offset: 0x2561758 VA: 0x2565758
	public WeeklyMissionSheet get_WeeklyMissions() { }

	[CompilerGenerated]
	// RVA: 0x2565760 Offset: 0x2561760 VA: 0x2565760
	private void set_WeeklyMissions(WeeklyMissionSheet value) { }

	[CompilerGenerated]
	// RVA: 0x2565768 Offset: 0x2561768 VA: 0x2565768
	public WeeklyMissionProgressSheet get_WeeklyMissionProgress() { }

	[CompilerGenerated]
	// RVA: 0x2565770 Offset: 0x2561770 VA: 0x2565770
	private void set_WeeklyMissionProgress(WeeklyMissionProgressSheet value) { }

	[CompilerGenerated]
	// RVA: 0x2565778 Offset: 0x2561778 VA: 0x2565778
	public BattlePassSheet get_BattlePass() { }

	[CompilerGenerated]
	// RVA: 0x2565780 Offset: 0x2561780 VA: 0x2565780
	private void set_BattlePass(BattlePassSheet value) { }

	[CompilerGenerated]
	// RVA: 0x2565788 Offset: 0x2561788 VA: 0x2565788
	public BattlePassConstantSheet get_BattlePassConstants() { }

	[CompilerGenerated]
	// RVA: 0x2565790 Offset: 0x2561790 VA: 0x2565790
	private void set_BattlePassConstants(BattlePassConstantSheet value) { }

	[CompilerGenerated]
	// RVA: 0x2565798 Offset: 0x2561798 VA: 0x2565798
	public GarageSaleSheet get_GarageSale() { }

	[CompilerGenerated]
	// RVA: 0x25657A0 Offset: 0x25617A0 VA: 0x25657A0
	private void set_GarageSale(GarageSaleSheet value) { }

	[CompilerGenerated]
	// RVA: 0x25657A8 Offset: 0x25617A8 VA: 0x25657A8
	public LondonTripSheet get_LondonTrip() { }

	[CompilerGenerated]
	// RVA: 0x25657B0 Offset: 0x25617B0 VA: 0x25657B0
	private void set_LondonTrip(LondonTripSheet value) { }

	[CompilerGenerated]
	// RVA: 0x25657B8 Offset: 0x25617B8 VA: 0x25657B8
	public CoinRushSheet get_CoinRush() { }

	[CompilerGenerated]
	// RVA: 0x25657C0 Offset: 0x25617C0 VA: 0x25657C0
	private void set_CoinRush(CoinRushSheet value) { }

	[CompilerGenerated]
	// RVA: 0x25657C8 Offset: 0x25617C8 VA: 0x25657C8
	public CollectionBarSheet get_CollectionBar() { }

	[CompilerGenerated]
	// RVA: 0x25657D0 Offset: 0x25617D0 VA: 0x25657D0
	private void set_CollectionBar(CollectionBarSheet value) { }

	[CompilerGenerated]
	// RVA: 0x25657D8 Offset: 0x25617D8 VA: 0x25657D8
	public CollectionBarConstantSheet get_CollectionBarConstants() { }

	[CompilerGenerated]
	// RVA: 0x25657E0 Offset: 0x25617E0 VA: 0x25657E0
	private void set_CollectionBarConstants(CollectionBarConstantSheet value) { }

	[CompilerGenerated]
	// RVA: 0x25657E8 Offset: 0x25617E8 VA: 0x25657E8
	public LavaQuestBotSheet get_LavaQuestBots() { }

	[CompilerGenerated]
	// RVA: 0x25657F0 Offset: 0x25617F0 VA: 0x25657F0
	private void set_LavaQuestBots(LavaQuestBotSheet value) { }

	[CompilerGenerated]
	// RVA: 0x25657F8 Offset: 0x25617F8 VA: 0x25657F8
	public LavaQuestConstantSheet get_LavaQuestConstants() { }

	[CompilerGenerated]
	// RVA: 0x2565800 Offset: 0x2561800 VA: 0x2565800
	private void set_LavaQuestConstants(LavaQuestConstantSheet value) { }

	[CompilerGenerated]
	// RVA: 0x2565808 Offset: 0x2561808 VA: 0x2565808
	public DailyRewardSheet get_DailyRewards() { }

	[CompilerGenerated]
	// RVA: 0x2565810 Offset: 0x2561810 VA: 0x2565810
	private void set_DailyRewards(DailyRewardSheet value) { }

	[CompilerGenerated]
	// RVA: 0x2565818 Offset: 0x2561818 VA: 0x2565818
	public StreakTowerSheet get_StreakTower() { }

	[CompilerGenerated]
	// RVA: 0x2565820 Offset: 0x2561820 VA: 0x2565820
	private void set_StreakTower(StreakTowerSheet value) { }

	[CompilerGenerated]
	// RVA: 0x2565830 Offset: 0x2561830 VA: 0x2565830
	public StreakTournamentBotSheet get_StreakTournamentBots() { }

	[CompilerGenerated]
	// RVA: 0x2565838 Offset: 0x2561838 VA: 0x2565838
	private void set_StreakTournamentBots(StreakTournamentBotSheet value) { }

	[CompilerGenerated]
	// RVA: 0x2565848 Offset: 0x2561848 VA: 0x2565848
	public StreakTournamentConstantSheet get_StreakTournamentConstants() { }

	[CompilerGenerated]
	// RVA: 0x2565850 Offset: 0x2561850 VA: 0x2565850
	private void set_StreakTournamentConstants(StreakTournamentConstantSheet value) { }

	[CompilerGenerated]
	// RVA: 0x2565860 Offset: 0x2561860 VA: 0x2565860
	public StreakTournamentLeaderboardRewardSheet get_StreakTournamentLeaderboardRewards() { }

	[CompilerGenerated]
	// RVA: 0x2565868 Offset: 0x2561868 VA: 0x2565868
	private void set_StreakTournamentLeaderboardRewards(StreakTournamentLeaderboardRewardSheet value) { }

	[CompilerGenerated]
	// RVA: 0x2565878 Offset: 0x2561878 VA: 0x2565878
	public StreakTournamentPersonalRewardSheet get_StreakTournamentPersonalRewards() { }

	[CompilerGenerated]
	// RVA: 0x2565880 Offset: 0x2561880 VA: 0x2565880
	private void set_StreakTournamentPersonalRewards(StreakTournamentPersonalRewardSheet value) { }

	[CompilerGenerated]
	// RVA: 0x2565890 Offset: 0x2561890 VA: 0x2565890
	public LeaderboardTournamentRewardSheet get_LeaderboardTournamentRewards() { }

	[CompilerGenerated]
	// RVA: 0x2565898 Offset: 0x2561898 VA: 0x2565898
	private void set_LeaderboardTournamentRewards(LeaderboardTournamentRewardSheet value) { }

	[CompilerGenerated]
	// RVA: 0x25658A8 Offset: 0x25618A8 VA: 0x25658A8
	public DailyChallengeRewardSheet get_DailyChallengeRewards() { }

	[CompilerGenerated]
	// RVA: 0x25658B0 Offset: 0x25618B0 VA: 0x25658B0
	private void set_DailyChallengeRewards(DailyChallengeRewardSheet value) { }

	[CompilerGenerated]
	// RVA: 0x25658C0 Offset: 0x25618C0 VA: 0x25658C0
	public AdjustEventSheet get_AdjustEvents() { }

	[CompilerGenerated]
	// RVA: 0x25658C8 Offset: 0x25618C8 VA: 0x25658C8
	private void set_AdjustEvents(AdjustEventSheet value) { }

	[CompilerGenerated]
	// RVA: 0x25658D8 Offset: 0x25618D8 VA: 0x25658D8
	public NicknameSheet get_Nicknames() { }

	[CompilerGenerated]
	// RVA: 0x25658E0 Offset: 0x25618E0 VA: 0x25658E0
	private void set_Nicknames(NicknameSheet value) { }

	[CompilerGenerated]
	// RVA: 0x25658F0 Offset: 0x25618F0 VA: 0x25658F0
	public GridSheet get_Grids() { }

	[CompilerGenerated]
	// RVA: 0x25658F8 Offset: 0x25618F8 VA: 0x25658F8
	private void set_Grids(GridSheet value) { }

	// RVA: 0x2565908 Offset: 0x2561908 VA: 0x2565908 Slot: 5
	public override void PostLoad() { }

	[AsyncStateMachine(typeof(SheetContainer.<Reload>d__152))]
	// RVA: 0x2565938 Offset: 0x2561938 VA: 0x2565938
	public UniTask Reload() { }

	// RVA: -1 Offset: -1
	public bool IsConverterOfType<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x26B9E6C Offset: 0x26B5E6C VA: 0x26B9E6C
	|-SheetContainer.IsConverterOfType<__Il2CppFullySharedGenericType>
	*/
}

