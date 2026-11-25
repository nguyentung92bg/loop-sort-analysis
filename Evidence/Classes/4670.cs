// Namespace: 
public struct CloudPrefsBool : ICloudPrefs, IPrefs // TypeDefIndex: 4670
{
	// Fields
	private readonly PlayerPrefsBool _playerPrefs; // 0x0
	private readonly bool _monotonic; // 0x10
	[CompilerGenerated]
	private readonly string <Key>k__BackingField; // 0x18

	// Properties
	public string Key { get; }
	public bool Monotonic { get; }
	public bool Value { get; set; }

	// Methods

	// RVA: 0x24EAFB8 Offset: 0x24E6FB8 VA: 0x24EAFB8
	public void .ctor(string key, bool defaultValue = False, bool monotonic = False) { }

	[IsReadOnly]
	[CompilerGenerated]
	// RVA: 0x24EB0C0 Offset: 0x24E70C0 VA: 0x24EB0C0 Slot: 7
	public string get_Key() { }

	// RVA: 0x24EB0C8 Offset: 0x24E70C8 VA: 0x24EB0C8 Slot: 4
	public bool get_Monotonic() { }

	// RVA: 0x24EB0D0 Offset: 0x24E70D0 VA: 0x24EB0D0
	public bool get_Value() { }

	// RVA: 0x24EB140 Offset: 0x24E7140 VA: 0x24EB140
	public void set_Value(bool value) { }

	// RVA: 0x24EB1BC Offset: 0x24E71BC VA: 0x24EB1BC
	public void Set(bool value) { }

	// RVA: 0x24EB238 Offset: 0x24E7238 VA: 0x24EB238 Slot: 8
	public bool HasValue() { }

	// RVA: 0x24EB2A8 Offset: 0x24E72A8 VA: 0x24EB2A8 Slot: 9
	public void DeleteValue() { }

	// RVA: 0x24EB314 Offset: 0x24E7314 VA: 0x24EB314 Slot: 5
	public void WriteTo(ICloudPrefsStore store) { }

	// RVA: 0x24EB598 Offset: 0x24E7598 VA: 0x24EB598 Slot: 6
	public void ReadFrom(ICloudPrefsStore store) { }

	// RVA: 0x24EB73C Offset: 0x24E773C VA: 0x24EB73C
	public static bool op_Implicit(CloudPrefsBool prefs) { }

	// RVA: 0x24EB740 Offset: 0x24E7740 VA: 0x24EB740
	public static PlayerPrefsBool op_Implicit(CloudPrefsBool prefs) { }

	// RVA: 0x24EB74C Offset: 0x24E774C VA: 0x24EB74C Slot: 3
	public override string ToString() { }
}

