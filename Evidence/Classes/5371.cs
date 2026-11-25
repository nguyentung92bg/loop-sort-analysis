// Namespace: 
public sealed class DataConflictMonitor : MonitorBase // TypeDefIndex: 5371
{
	// Fields
	[Inject]
	private ISubscriber<CloudSaveConflictMessage> _cloudSaveConflictSub; // 0x98
	private CloudSaveConflict _conflict; // 0xA0

	// Methods

	// RVA: 0x243BD0C Offset: 0x2437D0C VA: 0x243BD0C Slot: 13
	public override void Setup() { }

	// RVA: 0x243BE30 Offset: 0x2437E30 VA: 0x243BE30
	private void OnCloudSaveConflict(CloudSaveConflictMessage m) { }

	// RVA: 0x243BE34 Offset: 0x2437E34 VA: 0x243BE34
	public void Show(CloudSaveConflict conflict) { }

	// RVA: 0x243C078 Offset: 0x2438078 VA: 0x243C078
	private void CreateSaveElement(DataConflictMonitor.SaveElementArgs args) { }

	// RVA: 0x243C454 Offset: 0x2438454 VA: 0x243C454
	private void ResolveConflict(CloudSaveConflictResolution resolution) { }

	// RVA: 0x243C4C0 Offset: 0x24384C0 VA: 0x243C4C0
	public void .ctor() { }
}

