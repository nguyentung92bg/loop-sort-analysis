// Namespace: 
public sealed class CollectItems : LiveOpsBase, ITickable // TypeDefIndex: 4798
{
	// Fields
	[Inject]
	private Monitors _monitors; // 0x10
	[Inject]
	private Shop _shop; // 0x18
	private readonly List<LiveOps> _collectItemLiveOps; // 0x20
	private readonly List<StatefulComponent> _collectViews; // 0x28
	private HomeMonitor _homeMonitor; // 0x30
	private WinMonitor _winMonitor; // 0x38

	// Methods

	[AsyncStateMachine(typeof(CollectItems.<ApplyHomeAction>d__6))]
	// RVA: 0x250E750 Offset: 0x250A750 VA: 0x250E750 Slot: 6
	public override UniTask ApplyHomeAction(CancellationToken cancellationToken) { }

	// RVA: 0x250E808 Offset: 0x250A808 VA: 0x250E808 Slot: 7
	public override bool CanSkipHomeAction() { }

	// RVA: 0x250E810 Offset: 0x250A810 VA: 0x250E810
	private void TryCollectItem(HomeLiveOpsSlot slot) { }

	[AsyncStateMachine(typeof(CollectItems.<ApplyCollectItemMotions>d__9))]
	// RVA: 0x250EA4C Offset: 0x250AA4C VA: 0x250EA4C
	private UniTaskVoid ApplyCollectItemMotions(HomeLiveOpsSlot slot, int count, Item item) { }

	[AsyncStateMachine(typeof(CollectItems.<ApplyCollectItemJumpMotion>d__10))]
	// RVA: 0x250EB1C Offset: 0x250AB1C VA: 0x250EB1C
	private UniTask ApplyCollectItemJumpMotion(StatefulComponent view, RectTransform t, HomeLiveOpsSlot slot) { }

	[AsyncStateMachine(typeof(CollectItems.<ApplyCollectTextMotion>d__11))]
	// RVA: 0x250EBF4 Offset: 0x250ABF4 VA: 0x250EBF4
	private UniTask ApplyCollectTextMotion(int count, StatefulComponent collectView, Vector2 direction) { }

	// RVA: 0x250ECB4 Offset: 0x250ACB4 VA: 0x250ECB4 Slot: 19
	public void Tick() { }

	// RVA: 0x250ECB8 Offset: 0x250ACB8 VA: 0x250ECB8
	public void .ctor() { }
}

