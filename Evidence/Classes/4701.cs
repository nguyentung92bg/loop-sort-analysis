// Namespace: 
public static class Store // TypeDefIndex: 4701
{
	// Fields
	private const string ItunesAppId = "6751101794";
	private const string ItunesUrlFormat = "https://itunes.apple.com/app/id{0}";
	private const string ItunesReviewUrlFormat = "https://itunes.apple.com/app/id{0}?action=write-review";
	private const string PlayUrlFormat = "https://play.google.com/store/apps/details?id={0}";

	// Properties
	private static string PlayBundleId { get; }

	// Methods

	// RVA: 0x24F942C Offset: 0x24F542C VA: 0x24F942C
	private static string get_PlayBundleId() { }

	// RVA: 0x24F947C Offset: 0x24F547C VA: 0x24F947C
	public static void LaunchStorePage() { }

	// RVA: 0x24F9534 Offset: 0x24F5534 VA: 0x24F9534
	public static void LaunchStoreReview() { }

	// RVA: 0x24F94DC Offset: 0x24F54DC VA: 0x24F94DC
	private static string GetStoreUrl() { }

	// RVA: 0x24F9594 Offset: 0x24F5594 VA: 0x24F9594
	private static string GetStoreReviewUrl() { }
}

