// Namespace: 
public sealed class CustomFileSystem : IFileSystem // TypeDefIndex: 5123
{
	// Fields
	private readonly Dictionary<string, string> _customData; // 0x10
	private readonly string _funnelFolder; // 0x18
	private const string EmptyData = "[{\"Data\":\"\\\"\\\"\"}]";

	// Methods

	// RVA: 0x255D658 Offset: 0x2559658 VA: 0x255D658
	public void .ctor(Dictionary<string, string> args, string funnelFolder) { }

	[IteratorStateMachine(typeof(CustomFileSystem.<GetFiles>d__4))]
	// RVA: 0x255D69C Offset: 0x255969C VA: 0x255D69C Slot: 4
	public IEnumerable<string> GetFiles(string path, string extension) { }

	// RVA: 0x255D750 Offset: 0x2559750 VA: 0x255D750 Slot: 5
	public bool Exists(string path) { }

	// RVA: 0x255D814 Offset: 0x2559814 VA: 0x255D814 Slot: 6
	public Stream OpenRead(string path) { }

	// RVA: 0x255DDE8 Offset: 0x2559DE8 VA: 0x255DDE8 Slot: 7
	public void CreateDirectory(string path) { }

	// RVA: 0x255DE34 Offset: 0x2559E34 VA: 0x255DE34 Slot: 8
	public Stream OpenWrite(string path) { }

	// RVA: 0x255D7E0 Offset: 0x25597E0 VA: 0x255D7E0
	private static string UpdatePath(string path) { }
}

