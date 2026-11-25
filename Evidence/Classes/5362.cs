// Namespace: 
public sealed class AssetLoadingMonitor : MonitorBase // TypeDefIndex: 5362
{
	// Fields
	[Inject]
	private ISubscriber<AssetLoadStartMessage> _assetLoadStartSub; // 0x98
	[Inject]
	private ISubscriber<AssetLoadCompleteMessage> _assetLoadCompleteSub; // 0xA0

	// Methods

	// RVA: 0x243A860 Offset: 0x2436860 VA: 0x243A860 Slot: 13
	public override void Setup() { }

	// RVA: 0x243AA54 Offset: 0x2436A54 VA: 0x243AA54
	private void OnAssetLoadStart(AssetLoadStartMessage m) { }

	// RVA: 0x243AAF8 Offset: 0x2436AF8 VA: 0x243AAF8
	private void OnAssetLoadComplete(AssetLoadCompleteMessage m) { }

	// RVA: 0x243AB24 Offset: 0x2436B24 VA: 0x243AB24
	public void .ctor() { }
}

