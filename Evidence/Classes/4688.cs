// Namespace: 
public static class ConsoleListener // TypeDefIndex: 4688
{
	// Fields
	private static readonly LinkedList<string> ErrorLogs; // 0x0
	private const int MaxErrorLogs = 3;

	// Methods

	[RuntimeInitializeOnLoadMethod(1)]
	// RVA: 0x24F2230 Offset: 0x24EE230 VA: 0x24F2230
	private static void OnInitialize() { }

	// RVA: 0x24F22D0 Offset: 0x24EE2D0 VA: 0x24F22D0
	private static void OnLogReceived(string message, string stackTrace, LogType type) { }

	// RVA: 0x24F2444 Offset: 0x24EE444 VA: 0x24F2444
	public static void GetErrors(StringBuilder sb) { }

	// RVA: 0x24F2628 Offset: 0x24EE628 VA: 0x24F2628
	private static void .cctor() { }
}

