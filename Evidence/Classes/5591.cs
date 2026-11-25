// Namespace: 
public struct TimeTracker : IDisposable // TypeDefIndex: 5591
{
	// Fields
	private const string Syntax = "<b>Time Tracker</b>: {0}";
	private const string DefaultFormat = "{0:0.000}s";
	private double _timestamp; // 0x0
	private string _format; // 0x8

	// Properties
	private static double CurrentTime { get; }

	// Methods

	// RVA: 0x24A07B8 Offset: 0x249C7B8 VA: 0x24A07B8
	private static double get_CurrentTime() { }

	// RVA: 0x24A07C0 Offset: 0x249C7C0 VA: 0x24A07C0
	public static TimeTracker Begin(string format) { }

	// RVA: 0x24A0844 Offset: 0x249C844 VA: 0x24A0844 Slot: 4
	public void Dispose() { }
}

