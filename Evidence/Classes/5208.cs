// Namespace: 
public sealed class BoosterContainer : ContainerBase // TypeDefIndex: 5208
{
	// Fields
	[Inject]
	private SceneModule _sceneModule; // 0x28
	[Inject]
	private SheetContainer _sheetContainer; // 0x30
	[Inject]
	private Boosters _boosters; // 0x38
	[Inject]
	private HapticModule _hapticModule; // 0x40
	[Inject]
	private EconomyModule _economyModule; // 0x48
	[Inject]
	private Monitors _monitors; // 0x50
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x58
	[Inject]
	private ISubscriber<BoosterSelectedMessage> _boosterSelectedSub; // 0x60
	[Inject]
	private ISubscriber<BoosterCanceledMessage> _boosterCanceledSub; // 0x68
	[Inject]
	private ISubscriber<BoosterCompletedMessage> _boosterCompletedSub; // 0x70
	private BoosterSystem _boosterSystem; // 0x78
	private EGPConfig _egpConfig; // 0x80
	private RewardedAdsConfig _rewardedAdsConfig; // 0x88
	private readonly Dictionary<BoosterType, StatefulComponent> _boosterViews; // 0x90
	private readonly Dictionary<BoosterType, StateRole> _stateByBoosterType; // 0x98

	// Methods

	// RVA: 0x2569F04 Offset: 0x2565F04 VA: 0x2569F04 Slot: 8
	public override void Setup() { }

	// RVA: 0x256A430 Offset: 0x2566430 VA: 0x256A430 Slot: 9
	public override void Render() { }

	// RVA: 0x256AB24 Offset: 0x2566B24 VA: 0x256AB24
	public void RefreshElements() { }

	// RVA: 0x256AFD4 Offset: 0x2566FD4 VA: 0x256AFD4
	public void OnRefreshElement(StatefulComponent view, BoosterSheet.Booster booster) { }

	// RVA: 0x256B358 Offset: 0x2567358 VA: 0x256B358
	public void OnRefreshReviveElement(StatefulComponent view, BoosterSheet.Booster booster, ReviveSheet.Revive revive) { }

	// RVA: 0x256A644 Offset: 0x2566644 VA: 0x256A644
	private void OnUpdateElement(StatefulComponent view, BoosterSheet.Booster booster) { }

	// RVA: 0x256B618 Offset: 0x2567618 VA: 0x256B618
	private void OnSelectClicked(BoosterSheet.Booster booster, StateRole state) { }

	// RVA: 0x256BC10 Offset: 0x2567C10 VA: 0x256BC10
	private void OnCancelClicked() { }

	// RVA: 0x256BC28 Offset: 0x2567C28 VA: 0x256BC28
	public StatefulComponent GetBoosterView(BoosterType boosterType) { }

	// RVA: 0x256A29C Offset: 0x256629C VA: 0x256A29C
	private void GrantFreeEgp() { }

	// RVA: 0x256BC98 Offset: 0x2567C98 VA: 0x256BC98
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x256BD7C Offset: 0x2567D7C VA: 0x256BD7C
	private void <Setup>b__15_0(BoosterSelectedMessage _) { }

	[CompilerGenerated]
	// RVA: 0x256BD80 Offset: 0x2567D80 VA: 0x256BD80
	private void <Setup>b__15_1(BoosterCanceledMessage _) { }

	[CompilerGenerated]
	// RVA: 0x256BD84 Offset: 0x2567D84 VA: 0x256BD84
	private void <Setup>b__15_2(BoosterCompletedMessage _) { }
}

