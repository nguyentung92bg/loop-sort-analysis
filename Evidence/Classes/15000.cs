// Namespace: 
public static class VoodooMetaProvider // TypeDefIndex: 15000
{
	// Fields
	private const string AdImpressionValueKey = "_valueToSum";
	private const string AdImpressionCurrencyKey = "fb_currency";
	private const string AdImpressionNetworkKey = "network";
	private const string AdImpressionPlacementKey = "placement";
	private const string AdImpressionAdUnitKey = "ad_unit";

	// Properties
	private static string AdImpressionToken { get; }

	// Methods

	// RVA: 0x22528DC Offset: 0x224E8DC VA: 0x22528DC
	private static string get_AdImpressionToken() { }

	// RVA: 0x225291C Offset: 0x224E91C VA: 0x225291C
	public static void OnImpressionTracked(ImpressionAnalyticsInfo impressionInfo) { }

	// RVA: 0x2252C64 Offset: 0x224EC64 VA: 0x2252C64
	private static void AddParameter(Dictionary<string, object> parameters, string key, string value) { }
}

