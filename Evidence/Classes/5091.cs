// Namespace: 
public sealed class AdjustEventSheet : Sheet<string, AdjustEventSheet.Row> // TypeDefIndex: 5091
{
	// Fields
	private const string CoinsSpentSuffix = "_coins_spent";
	private const string LevelsWonMarker = "_levels_won_capped_";
	private const string LevelsWonDaySuffix = "_day";
	private const string IapCumulativePrefix = "iap_cumulative_";
	private const string RewardedVideoWatchedId = "rv_watched";
	private const string LevelCompletedId = "level_reached";
	[TupleElementNames(new[] { "Threshold", "Token" })]
	private readonly List<ValueTuple<int, string>> _coinsSpentThresholds; // 0x48
	[TupleElementNames(new[] { "Threshold", "Token" })]
	private readonly List<ValueTuple<int, string>> _iapCumulativeThresholds; // 0x50
	private readonly List<int> _levelsWonDailyCaps; // 0x58

	// Properties
	public IReadOnlyList<int> LevelsWonDailyCaps { get; }

	// Methods

	// RVA: 0x2555FB0 Offset: 0x2551FB0 VA: 0x2555FB0
	public IReadOnlyList<int> get_LevelsWonDailyCaps() { }

	// RVA: 0x2555FB8 Offset: 0x2551FB8 VA: 0x2555FB8 Slot: 57
	public override void PostLoad(SheetConvertingContext context) { }

	// RVA: 0x2556B44 Offset: 0x2552B44 VA: 0x2556B44
	private bool TryGetToken(string eventId, out string token) { }

	// RVA: 0x2556C0C Offset: 0x2552C0C VA: 0x2556C0C
	private bool TryGetTokenByFormat(string format, object arg, out string token) { }

	// RVA: 0x2556C44 Offset: 0x2552C44 VA: 0x2556C44
	private bool TryGetTokenByFormat(string format, object arg0, object arg1, out string token) { }

	// RVA: 0x2556C80 Offset: 0x2552C80 VA: 0x2556C80
	private static bool TryGetThresholdTokens(List<ValueTuple<int, string>> thresholds, double total, List<string> tokens) { }

	// RVA: 0x2556DD8 Offset: 0x2552DD8 VA: 0x2556DD8
	public bool TryGetRewardedVideoWatchedToken(out string token) { }

	// RVA: 0x2556E30 Offset: 0x2552E30 VA: 0x2556E30
	public bool TryGetLevelCompletedToken(out string token) { }

	// RVA: 0x2556E88 Offset: 0x2552E88 VA: 0x2556E88
	public bool TryGetPurchasePriceToken(float usdPrice, out string token) { }

	// RVA: 0x2556F54 Offset: 0x2552F54 VA: 0x2556F54
	public bool TryGetIapCumulativeTokens(float totalSpending, List<string> tokens) { }

	// RVA: 0x2556F60 Offset: 0x2552F60 VA: 0x2556F60
	public bool TryGetLevelReachedToken(int level, out string token) { }

	// RVA: 0x2556FF8 Offset: 0x2552FF8 VA: 0x2556FF8
	public bool TryGetPurchaseConsumableToken(int purchaseCount, out string token) { }

	// RVA: 0x25570F4 Offset: 0x25530F4 VA: 0x25570F4
	public bool TryGetIAPCountToken(int iapCount, out string token) { }

	// RVA: 0x255718C Offset: 0x255318C VA: 0x255718C
	public bool TryGetBoostersUsed(int boostersUsed, out string token) { }

	// RVA: 0x2557224 Offset: 0x2553224 VA: 0x2557224
	public bool TryGetCappedLevelsWonToken(int dailyCap, int levelsWon, out string token) { }

	// RVA: 0x25572D8 Offset: 0x25532D8 VA: 0x25572D8
	public bool TryGetShopOpensToken(int shopOpens, out string token) { }

	// RVA: 0x2557370 Offset: 0x2553370 VA: 0x2557370
	public bool TryGetSpentCoinsTokens(int totalSpent, List<string> tokens) { }

	// RVA: 0x2557380 Offset: 0x2553380 VA: 0x2557380
	public void .ctor() { }
}

