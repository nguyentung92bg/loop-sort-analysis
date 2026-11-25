// Namespace: 
public abstract class TutorialBase : MonitorBase // TypeDefIndex: 5543
{
	// Fields
	[Inject]
	protected TutorialMonitor Main; // 0x98
	[Inject]
	protected HighlightMonitor Highlight; // 0xA0
	[Inject]
	protected InteractionModule Interaction; // 0xA8

	// Methods

	// RVA: -1 Offset: -1 Slot: 17
	public abstract UniTask<bool> Play(CancellationToken cancellationToken);

	// RVA: 0x2490F88 Offset: 0x248CF88 VA: 0x2490F88 Slot: 18
	public virtual void Cleanup() { }

	// RVA: 0x248FFE0 Offset: 0x248BFE0 VA: 0x248FFE0 Slot: 19
	public virtual void SetCustomScope(LifetimeScope scope) { }

	// RVA: 0x2490F8C Offset: 0x248CF8C VA: 0x2490F8C Slot: 20
	public virtual string GetSaveKey() { }

	// RVA: 0x24900FC Offset: 0x248C0FC VA: 0x24900FC
	protected void .ctor() { }
}

