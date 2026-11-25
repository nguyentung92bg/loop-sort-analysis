// Namespace: 
public static class TimeProvider // TypeDefIndex: 4702
{
	// Fields
	public static CloudPrefsT<TimeSpan> Offset; // 0x0

	// Properties
	public static DateTimeOffset UtcNow { get; }
	public static DateTimeOffset Now { get; }

	// Methods

	// RVA: 0x24F95EC Offset: 0x24F55EC VA: 0x24F95EC
	public static DateTimeOffset get_UtcNow() { }

	// RVA: 0x24F4584 Offset: 0x24F0584 VA: 0x24F4584
	public static DateTimeOffset get_Now() { }

	// RVA: 0x24F96B0 Offset: 0x24F56B0 VA: 0x24F96B0
	private static void .cctor() { }
}

