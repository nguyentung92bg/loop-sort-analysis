// Namespace: 
public sealed class AdBreakMonitor : MonitorBase // TypeDefIndex: 5351
{
	// Fields
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x98
	[Inject]
	private IAsyncSubscriber<InterstitialPreShowMessage> _interstitialPreShowSub; // 0xA0
	private InterstitialAdsConfig _interstitialAdsConfig; // 0xA8

	// Methods

	// RVA: 0x2432AC4 Offset: 0x242EAC4 VA: 0x2432AC4 Slot: 13
	public override void Setup() { }

	[AsyncStateMachine(typeof(AdBreakMonitor.<OnInterstitialPreShow>d__4))]
	// RVA: 0x2432C10 Offset: 0x242EC10 VA: 0x2432C10
	private UniTask OnInterstitialPreShow(InterstitialPreShowMessage m, CancellationToken token) { }

	// RVA: 0x2432CC8 Offset: 0x242ECC8 VA: 0x2432CC8
	public void .ctor() { }
}

