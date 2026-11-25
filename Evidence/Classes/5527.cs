// Namespace: 
public abstract class SubMonitorBase : StatefulView, IMonitor // TypeDefIndex: 5527
{
	// Fields
	[Inject]
	protected Monitors Monitors; // 0x28
	[SerializeField]
	protected string Reskin; // 0x30
	private ElementBase[] _elements; // 0x38

	// Methods

	// RVA: 0x2481334 Offset: 0x247D334 VA: 0x2481334 Slot: 8
	public virtual void Setup() { }

	// RVA: 0x248253C Offset: 0x247E53C VA: 0x248253C Slot: 9
	public virtual void Render() { }

	// RVA: 0x248ACD4 Offset: 0x2486CD4 VA: 0x248ACD4 Slot: 10
	public virtual void OnActivated() { }

	// RVA: 0x24836AC Offset: 0x247F6AC VA: 0x24836AC Slot: 11
	public virtual void OnDeactivated() { }

	// RVA: 0x2481634 Offset: 0x247D634 VA: 0x2481634
	protected void .ctor() { }
}

