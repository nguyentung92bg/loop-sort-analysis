// Namespace: 
public static class VoodooAdjustProvider // TypeDefIndex: 14999
{
	// Fields
	private static SheetContainer _sheetContainer; // 0x0
	private static CloudPrefsInt _totalSpentCoins; // 0x8
	private static CloudPrefsInt _useBoosterCount; // 0x28
	private static CloudPrefsInt _shopOpenCount; // 0x48
	private const int LegacyLevelsWonDailyCap = 50;
	private static readonly List<VoodooSauce.AnalyticsProvider> Providers; // 0x68

	// Methods

	// RVA: 0x2251388 Offset: 0x224D388 VA: 0x2251388
	private static AdjustEventSheet GetAdjustEvents() { }

	// RVA: 0x22514A4 Offset: 0x224D4A4 VA: 0x22514A4
	private static void TrackEvent(string eventToken) { }

	// RVA: 0x225153C Offset: 0x224D53C VA: 0x225153C
	private static void TrackEventIfNotTracked(string eventToken) { }

	// RVA: 0x2251628 Offset: 0x224D628 VA: 0x2251628
	public static void StartGame(int levelNumber) { }

	// RVA: 0x22516C0 Offset: 0x224D6C0 VA: 0x22516C0
	public static void CompletePurchase(int purchaseCount, float usdPrice, float totalSpending) { }

	// RVA: 0x2251A54 Offset: 0x224DA54 VA: 0x2251A54
	public static void WatchRewardedVideo() { }

	// RVA: 0x2251ADC Offset: 0x224DADC VA: 0x2251ADC
	public static void SpentCoins(int coins) { }

	// RVA: 0x2251E3C Offset: 0x224DE3C VA: 0x2251E3C
	public static void UseBooster() { }

	// RVA: 0x2251F14 Offset: 0x224DF14 VA: 0x2251F14
	public static void WinGame() { }

	// RVA: 0x2252604 Offset: 0x224E604 VA: 0x2252604
	public static void ShopOpen() { }

	// RVA: 0x2252548 Offset: 0x224E548 VA: 0x2252548
	private static CloudPrefsInt GetWinCount(int cap) { }

	// RVA: 0x225237C Offset: 0x224E37C VA: 0x225237C
	private static CloudPrefsInt GetWinDailyCount(int cap) { }

	// RVA: 0x2252438 Offset: 0x224E438 VA: 0x2252438
	private static CloudPrefsT<DateTimeOffset> GetWinCapTimestamp(int cap) { }

	// RVA: 0x22526E8 Offset: 0x224E6E8 VA: 0x22526E8
	private static void .cctor() { }
}

