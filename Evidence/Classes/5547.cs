// Namespace: 
public abstract class MonitorVariantBase : StatefulView, IMonitor // TypeDefIndex: 5547
{
	// Fields
	[Inject]
	protected Monitors Monitors; // 0x28

	// Methods

	// RVA: 0x2491240 Offset: 0x248D240 VA: 0x2491240 Slot: 8
	public virtual void Setup() { }

	// RVA: 0x24913C8 Offset: 0x248D3C8 VA: 0x24913C8 Slot: 9
	public virtual void Render() { }

	// RVA: 0x24910E0 Offset: 0x248D0E0 VA: 0x24910E0 Slot: 10
	public virtual void OnActivated() { }

	// RVA: 0x2492174 Offset: 0x248E174 VA: 0x2492174 Slot: 11
	public virtual void OnDeactivated() { }

	// RVA: 0x2491560 Offset: 0x248D560 VA: 0x2491560
	protected void .ctor() { }
}

