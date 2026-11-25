// Namespace: 
public sealed class AdsModule : ModuleBase, IInitializable // TypeDefIndex: 4944
{
	// Fields
	[Inject]
	private IAdsProvider _provider; // 0x10
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x18
	[Inject]
	private Monitors _monitors; // 0x20
	[Inject]
	private LiveOpsModule _liveOpsModule; // 0x28
	[Inject]
	private SceneModule _sceneModule; // 0x30
	[Inject]
	private IAsyncPublisher<InterstitialPreShowMessage> _interstitialPreShowPub; // 0x38
	[Inject]
	private IPublisher<RewardedVideoPostShowMessage> _rewardedVideoPostShowPub; // 0x40
	private InterstitialAdsConfig _interstitialAdsConfig; // 0x48

	// Methods

	// RVA: 0x253CFD0 Offset: 0x2538FD0 VA: 0x253CFD0 Slot: 4
	public void Initialize() { }

	// RVA: 0x253D030 Offset: 0x2539030 VA: 0x253D030
	public void EnableNoAds() { }

	// RVA: 0x253D114 Offset: 0x2539114 VA: 0x253D114
	public void DisableNoAds() { }

	// RVA: 0x253D1FC Offset: 0x25391FC VA: 0x253D1FC
	public void WatchRewardedVideo(string placement, Action<bool> watched) { }

	// RVA: 0x253D3A8 Offset: 0x25393A8 VA: 0x253D3A8
	public void WatchInterstitial(string placement, Action<bool> watched, Action completed) { }

	[AsyncStateMachine(typeof(AdsModule.<WatchInterstitialAsync>d__13))]
	// RVA: 0x253D704 Offset: 0x2539704 VA: 0x253D704
	private UniTaskVoid WatchInterstitialAsync(string placement, Action<bool> watched, Action completed) { }

	[AsyncStateMachine(typeof(AdsModule.<HandleInterstitialCompleted>d__14))]
	// RVA: 0x253D7E4 Offset: 0x25397E4 VA: 0x253D7E4
	private UniTaskVoid HandleInterstitialCompleted(bool watched, Action completed) { }

	// RVA: 0x253D654 Offset: 0x2539654 VA: 0x253D654
	public bool CanShowInterstitial() { }

	// RVA: 0x253D89C Offset: 0x253989C VA: 0x253D89C
	public bool IsRewardedVideoAvailable() { }

	// RVA: 0x253D94C Offset: 0x253994C VA: 0x253D94C
	public void OnRewardedButtonShown(string placement) { }

	// RVA: 0x253D454 Offset: 0x2539454 VA: 0x253D454
	private bool AreInterstitialConditionsMet(string placement) { }

	// RVA: 0x253DA00 Offset: 0x2539A00 VA: 0x253DA00
	private bool IsPlacementEligibleForInterstitial(string placement) { }

	// RVA: 0x253DD90 Offset: 0x2539D90 VA: 0x253DD90
	private bool AreNoAdsOfferConditionsMet() { }

	// RVA: 0x253DE54 Offset: 0x2539E54 VA: 0x253DE54
	public void .ctor() { }
}

