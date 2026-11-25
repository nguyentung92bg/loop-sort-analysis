// Namespace: 
public static class LifetimeScopeH // TypeDefIndex: 4773
{
	// Fields
	private static readonly Dictionary<Type, LifetimeScope> ScopeByType; // 0x0

	// Methods

	// RVA: -1 Offset: -1
	public static LifetimeScope FindScope<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2654424 Offset: 0x2650424 VA: 0x2654424
	|-LifetimeScopeH.FindScope<object>
	*/

	// RVA: -1 Offset: -1
	public static bool InjectIfNotScoped<T>(Object target) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x26546E4 Offset: 0x26506E4 VA: 0x26546E4
	|-LifetimeScopeH.InjectIfNotScoped<object>
	*/

	// RVA: -1 Offset: -1
	public static bool InjectIfNotScoped<T>(object target) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x26545B0 Offset: 0x26505B0 VA: 0x26545B0
	|-LifetimeScopeH.InjectIfNotScoped<object>
	*/

	// RVA: 0x2508B70 Offset: 0x2504B70 VA: 0x2508B70
	private static void .cctor() { }
}

