// Namespace: 
public sealed class EconomyMonitor : MonitorBase // TypeDefIndex: 5374
{
	// Fields
	[Inject]
	private EconomyModule _economyModule; // 0x98
	[Inject]
	private HapticModule _hapticModule; // 0xA0
	[Inject]
	private AudioModule _audioModule; // 0xA8
	[Inject]
	private ISubscriber<EconomyAddMessage> _economyAddSub; // 0xB0
	[Inject]
	private ISubscriber<EconomyConsumeMessage> _economyConsumeSub; // 0xB8
	[Inject]
	private ISubscriber<EconomyUpdateMessage> _economyUpdateSub; // 0xC0
	private readonly Dictionary<Item, List<StatefulComponent>> _viewsByItem; // 0xC8
	private readonly Dictionary<StatefulComponent, MotionHandle> _motionByView; // 0xD0

	// Methods

	// RVA: 0x243C4E4 Offset: 0x24384E4 VA: 0x243C4E4 Slot: 16
	public override void OnDeactivated() { }

	// RVA: 0x243C51C Offset: 0x243851C VA: 0x243C51C Slot: 13
	public override void Setup() { }

	// RVA: 0x243C7E8 Offset: 0x24387E8 VA: 0x243C7E8
	public void AddItemView(Item item, StatefulComponent view, string placement) { }

	// RVA: 0x243CA50 Offset: 0x2438A50 VA: 0x243CA50
	public void UpdateViews(Item item) { }

	// RVA: 0x243C9F8 Offset: 0x24389F8 VA: 0x243C9F8
	public void UpdateView(Item item, StatefulComponent view) { }

	// RVA: 0x243CC34 Offset: 0x2438C34 VA: 0x243CC34
	private void OnShopClicked(string placement) { }

	// RVA: 0x243CC98 Offset: 0x2438C98 VA: 0x243CC98
	private void OnEconomyAdd(EconomyAddMessage m) { }

	// RVA: 0x243D598 Offset: 0x2439598 VA: 0x243D598
	private void OnEconomyConsume(EconomyConsumeMessage m) { }

	// RVA: 0x243D918 Offset: 0x2439918 VA: 0x243D918
	private void OnEconomyUpdate(EconomyUpdateMessage m) { }

	// RVA: 0x243CF64 Offset: 0x2438F64 VA: 0x243CF64
	private void ApplyGoldParticleMotion(StatefulComponent view, int from, int to, Vector3 worldPosition, Nullable<float> particleCount) { }

	// RVA: 0x243D5A8 Offset: 0x24395A8 VA: 0x243D5A8
	private void ApplyItemEconomyChangeMotion(Item item, int from, int to) { }

	// RVA: 0x243D9BC Offset: 0x24399BC VA: 0x243D9BC
	public void .ctor() { }
}

