// Namespace: 
public class ResourcesFileSystem : IFileSystem // TypeDefIndex: 5171
{
	// Methods

	[IteratorStateMachine(typeof(ResourcesFileSystem.<GetFiles>d__0))]
	// RVA: 0x2564EB0 Offset: 0x2560EB0 VA: 0x2564EB0 Slot: 9
	public virtual IEnumerable<string> GetFiles(string path, string extension) { }

	// RVA: 0x2564F64 Offset: 0x2560F64 VA: 0x2564F64 Slot: 10
	public virtual bool Exists(string path) { }

	// RVA: 0x2564FF0 Offset: 0x2560FF0 VA: 0x2564FF0 Slot: 11
	public virtual Stream OpenRead(string path) { }

	// RVA: 0x2565124 Offset: 0x2561124 VA: 0x2565124 Slot: 12
	public virtual void CreateDirectory(string path) { }

	// RVA: 0x2565170 Offset: 0x2561170 VA: 0x2565170 Slot: 13
	public virtual Stream OpenWrite(string path) { }

	// RVA: 0x25651BC Offset: 0x25611BC VA: 0x25651BC
	public void .ctor() { }
}

