// Namespace: 
[Extension]
public static class UIMotionExtensions // TypeDefIndex: 5267
{
	// Methods

	// RVA: 0x2412668 Offset: 0x240E668 VA: 0x2412668
	public static MotionHandle ApplyTempColor(Graphic graphic, Color color, float duration) { }

	[Extension]
	// RVA: 0x241287C Offset: 0x240E87C VA: 0x241287C
	public static MotionHandle ApplyTempColor(StatefulComponent view, TextRole role, Color color, float duration) { }

	[Extension]
	// RVA: 0x24128E4 Offset: 0x240E8E4 VA: 0x24128E4
	public static MotionHandle ApplyTempColor(StatefulComponent view, ImageRole role, Color color, float duration) { }

	[Extension]
	// RVA: 0x2412940 Offset: 0x240E940 VA: 0x2412940
	public static MotionHandle ApplyTempColor(StatefulComponent view, ButtonRole role, Color color, float duration) { }

	[Extension]
	// RVA: 0x24129F4 Offset: 0x240E9F4 VA: 0x24129F4
	public static MotionHandle ApplyPunch(StatefulComponent view, ButtonRole role) { }

	[Extension]
	// RVA: 0x2412B20 Offset: 0x240EB20 VA: 0x2412B20
	public static MotionHandle PopIn(Transform target, float delay, float duration) { }

	[AsyncStateMachine(typeof(UIMotionExtensions.<ApplyOrderedOpen>d__6))]
	[Extension]
	// RVA: 0x2412D28 Offset: 0x240ED28 VA: 0x2412D28
	public static UniTask ApplyOrderedOpen(StatefulComponent view, ObjectRole role, float duration, CancellationToken token) { }
}

