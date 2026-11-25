// Namespace: 
public struct AnalyticsCustomEvent // TypeDefIndex: 4952
{
	// Fields
	private readonly string _eventName; // 0x0
	private readonly Dictionary<string, object> _customData; // 0x8

	// Methods

	// RVA: 0x253FF58 Offset: 0x253BF58 VA: 0x253FF58
	public void .ctor(string eventName) { }

	// RVA: 0x25410D0 Offset: 0x253D0D0 VA: 0x25410D0
	public AnalyticsCustomEvent AddCustom(string key, object value) { }

	// RVA: 0x253FFE8 Offset: 0x253BFE8 VA: 0x253FFE8
	public AnalyticsCustomEvent AddGameLevel() { }

	// RVA: 0x25400B4 Offset: 0x253C0B4 VA: 0x25400B4
	public AnalyticsCustomEvent AddDaysSinceInstall() { }

	// RVA: 0x2540228 Offset: 0x253C228 VA: 0x2540228
	public AnalyticsCustomEvent AddGameCoinBalance() { }

	// RVA: 0x2540338 Offset: 0x253C338 VA: 0x2540338
	public void SendEvent() { }
}

