// Namespace: 
public interface IAdsProvider // TypeDefIndex: 4945
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract void EnableNoAds();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void DisableNoAds();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void WatchRewardedVideo(string placement, Action<bool> watched);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void WatchInterstitial(string placement, Action<bool> watched);

	// RVA: -1 Offset: -1 Slot: 4
	public abstract bool CanShowInterstitial();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract bool IsRewardedVideoAvailable();

	// RVA: -1 Offset: -1 Slot: 6
	public abstract void OnRewardedButtonShown(string placement);
}

