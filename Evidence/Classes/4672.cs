// Namespace: 
public struct CloudPrefsT<T> : ICloudPrefs, IPrefs // TypeDefIndex: 4672
{
	// Fields
	private readonly PlayerPrefsT<T> _playerPrefs; // 0x0
	private readonly IPrefsSerializer<T> _serializer; // 0x0
	[CompilerGenerated]
	private readonly string <Key>k__BackingField; // 0x0

	// Properties
	public string Key { get; }
	public bool Monotonic { get; }
	public T Value { get; set; }

	// Methods

	// RVA: -1 Offset: -1
	public void .ctor(string key, IPrefsSerializer<T> serializer, T defaultValue) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2801F24 Offset: 0x27FDF24 VA: 0x2801F24
	|-CloudPrefsT<__Il2CppFullySharedGenericStructType>..ctor
	*/

	[IsReadOnly]
	[CompilerGenerated]
	// RVA: -1 Offset: -1 Slot: 7
	public string get_Key() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x28021E8 Offset: 0x27FE1E8 VA: 0x28021E8
	|-CloudPrefsT<__Il2CppFullySharedGenericStructType>.get_Key
	*/

	// RVA: -1 Offset: -1 Slot: 4
	public bool get_Monotonic() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2802230 Offset: 0x27FE230 VA: 0x2802230
	|-CloudPrefsT<__Il2CppFullySharedGenericStructType>.get_Monotonic
	*/

	// RVA: -1 Offset: -1
	public T get_Value() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2802238 Offset: 0x27FE238 VA: 0x2802238
	|-CloudPrefsT<__Il2CppFullySharedGenericStructType>.get_Value
	*/

	// RVA: -1 Offset: -1
	public void set_Value(T value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x28023E4 Offset: 0x27FE3E4 VA: 0x28023E4
	|-CloudPrefsT<__Il2CppFullySharedGenericStructType>.set_Value
	*/

	// RVA: -1 Offset: -1
	public void Set(T value) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x28025AC Offset: 0x27FE5AC VA: 0x28025AC
	|-CloudPrefsT<__Il2CppFullySharedGenericStructType>.Set
	*/

	// RVA: -1 Offset: -1 Slot: 8
	public bool HasValue() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2802774 Offset: 0x27FE774 VA: 0x2802774
	|-CloudPrefsT<__Il2CppFullySharedGenericStructType>.HasValue
	*/

	// RVA: -1 Offset: -1 Slot: 9
	public void DeleteValue() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x28028C4 Offset: 0x27FE8C4 VA: 0x28028C4
	|-CloudPrefsT<__Il2CppFullySharedGenericStructType>.DeleteValue
	*/

	// RVA: -1 Offset: -1 Slot: 5
	public void WriteTo(ICloudPrefsStore store) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2802A10 Offset: 0x27FEA10 VA: 0x2802A10
	|-CloudPrefsT<__Il2CppFullySharedGenericStructType>.WriteTo
	*/

	// RVA: -1 Offset: -1 Slot: 6
	public void ReadFrom(ICloudPrefsStore store) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2802EC0 Offset: 0x27FEEC0 VA: 0x2802EC0
	|-CloudPrefsT<__Il2CppFullySharedGenericStructType>.ReadFrom
	*/

	// RVA: -1 Offset: -1
	public static T op_Implicit(CloudPrefsT<T> prefs) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2803534 Offset: 0x27FF534 VA: 0x2803534
	|-CloudPrefsT<__Il2CppFullySharedGenericStructType>.op_Implicit
	*/

	// RVA: -1 Offset: -1
	public static PlayerPrefsT<T> op_Implicit(CloudPrefsT<T> prefs) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2803610 Offset: 0x27FF610 VA: 0x2803610
	|-CloudPrefsT<__Il2CppFullySharedGenericStructType>.op_Implicit
	*/

	// RVA: -1 Offset: -1 Slot: 3
	public override string ToString() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2803730 Offset: 0x27FF730 VA: 0x2803730
	|-CloudPrefsT<__Il2CppFullySharedGenericStructType>.ToString
	*/
}

