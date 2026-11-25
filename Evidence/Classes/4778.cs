// Namespace: 
public abstract class InstallerBase // TypeDefIndex: 4778
{
	// Methods

	// RVA: 0x25090DC Offset: 0x25050DC VA: 0x25090DC Slot: 4
	public virtual UniTask Initialize(Dictionary<string, string> args) { }

	// RVA: 0x25090E8 Offset: 0x25050E8 VA: 0x25090E8 Slot: 5
	public virtual UniTask PostBuild() { }

	// RVA: 0x25090F4 Offset: 0x25050F4 VA: 0x25090F4 Slot: 6
	public virtual void Install(IContainerBuilder builder) { }

	// RVA: 0x2508DC4 Offset: 0x2504DC4 VA: 0x2508DC4
	protected void .ctor() { }
}

