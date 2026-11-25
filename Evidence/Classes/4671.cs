// Namespace: 
public struct CloudPrefsEnum<T> : ICloudPrefs, IPrefs // TypeDefIndex: 4671
{
	// Fields
	private readonly PlayerPrefsEnum<T> _playerPrefs; // 0x0
	[CompilerGenerated]
	private readonly string <Key>k__BackingField; // 0x0

	// Properties
	public string Key { get; }
	public bool Monotonic { get; }
	public T Value { get; set; }

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(string key, T defaultValue) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2800A40 Offset: 0x27FCA40 VA: 0x2800A40
	|-CloudPrefsEnum<__Il2CppFullySharedGenericStructType>..ctor
	*/

	[IsReadOnly]
	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 7
	public string get_Key() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2800CC8 Offset: 0x27FCCC8 VA: 0x2800CC8
	|-CloudPrefsEnum<__Il2CppFullySharedGenericStructType>.get_Key
	*/

	// RVA: -1 Offset: -1 Slot: 4
	public bool get_Monotonic() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2800D10 Offset: 0x27FCD10 VA: 0x2800D10
	|-CloudPrefsEnum<__Il2CppFullySharedGenericStructType>.get_Monotonic
	*/

	// RVA: -1 Offset: -1
	public T get_Value() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2800D18 Offset: 0x27FCD18 VA: 0x2800D18
	|-CloudPrefsEnum<__Il2CppFullySharedGenericStructType>.get_Value
	*/

	// RVA: -1 Offset: -1
	public void set_Value(T value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2800E8C Offset: 0x27FCE8C VA: 0x2800E8C
	|-CloudPrefsEnum<__Il2CppFullySharedGenericStructType>.set_Value
	*/

	// RVA: -1 Offset: -1
	public void Set(T value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2801000 Offset: 0x27FD000 VA: 0x2801000
	|-CloudPrefsEnum<__Il2CppFullySharedGenericStructType>.Set
	*/

	// RVA: -1 Offset: -1 Slot: 8
	public bool HasValue() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2801174 Offset: 0x27FD174 VA: 0x2801174
	|-CloudPrefsEnum<__Il2CppFullySharedGenericStructType>.HasValue
	*/

	// RVA: -1 Offset: -1 Slot: 9
	public void DeleteValue() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x280128C Offset: 0x27FD28C VA: 0x280128C
	|-CloudPrefsEnum<__Il2CppFullySharedGenericStructType>.DeleteValue
	*/

	// RVA: -1 Offset: -1 Slot: 5
	public void WriteTo(ICloudPrefsStore store) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x28013A0 Offset: 0x27FD3A0 VA: 0x28013A0
	|-CloudPrefsEnum<__Il2CppFullySharedGenericStructType>.WriteTo
	*/

	// RVA: -1 Offset: -1 Slot: 6
	public void ReadFrom(ICloudPrefsStore store) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x28017B0 Offset: 0x27FD7B0 VA: 0x28017B0
	|-CloudPrefsEnum<__Il2CppFullySharedGenericStructType>.ReadFrom
	*/

	// RVA: -1 Offset: -1
	public static T op_Implicit(CloudPrefsEnum<T> prefs) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2801B78 Offset: 0x27FDB78 VA: 0x2801B78
	|-CloudPrefsEnum<__Il2CppFullySharedGenericStructType>.op_Implicit
	*/

	// RVA: -1 Offset: -1
	public static PlayerPrefsEnum<T> op_Implicit(CloudPrefsEnum<T> prefs) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2801C54 Offset: 0x27FDC54 VA: 0x2801C54
	|-CloudPrefsEnum<__Il2CppFullySharedGenericStructType>.op_Implicit
	*/

	// RVA: -1 Offset: -1 Slot: 3
	public override string ToString() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2801D74 Offset: 0x27FDD74 VA: 0x2801D74
	|-CloudPrefsEnum<__Il2CppFullySharedGenericStructType>.ToString
	*/
}

