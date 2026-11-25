// Namespace: 
public struct CloudPrefsInt : ICloudPrefs, IPrefs // TypeDefIndex: 4667
{
	// Fields
	private readonly PlayerPrefsInt _playerPrefs; // 0x0
	private readonly bool _monotonic; // 0x10
	[CompilerGenerated]
	private readonly string <Key>k__BackingField; // 0x18

	// Properties
	public string Key { get; }
	public bool Monotonic { get; }
	public int Value { get; set; }

	// Methods

	// RVA: 0x24E98A8 Offset: 0x24E58A8 VA: 0x24E98A8
	public void .ctor(string key, int defaultValue = 0, bool monotonic = False) { }

	[IsReadOnly]
	[CompilerGenerated]
	// RVA: 0x24E99B0 Offset: 0x24E59B0 VA: 0x24E99B0 Slot: 7
	public string get_Key() { }

	// RVA: 0x24E99B8 Offset: 0x24E59B8 VA: 0x24E99B8 Slot: 4
	public bool get_Monotonic() { }

	// RVA: 0x24E99C0 Offset: 0x24E59C0 VA: 0x24E99C0
	public int get_Value() { }

	// RVA: 0x24E9A2C Offset: 0x24E5A2C VA: 0x24E9A2C
	public void set_Value(int value) { }

	// RVA: 0x24E9AA8 Offset: 0x24E5AA8 VA: 0x24E9AA8
	public void Set(int value) { }

	// RVA: 0x24E9B24 Offset: 0x24E5B24 VA: 0x24E9B24 Slot: 8
	public bool HasValue() { }

	// RVA: 0x24E9B94 Offset: 0x24E5B94 VA: 0x24E9B94 Slot: 9
	public void DeleteValue() { }

	// RVA: 0x24E9C00 Offset: 0x24E5C00 VA: 0x24E9C00 Slot: 5
	public void WriteTo(ICloudPrefsStore store) { }

	// RVA: 0x24E9EC0 Offset: 0x24E5EC0 VA: 0x24E9EC0 Slot: 6
	public void ReadFrom(ICloudPrefsStore store) { }

	// RVA: 0x24EA0A0 Offset: 0x24E60A0 VA: 0x24EA0A0
	public static int op_Implicit(CloudPrefsInt prefs) { }

	// RVA: 0x24EA0A4 Offset: 0x24E60A4 VA: 0x24EA0A4
	public static PlayerPrefsInt op_Implicit(CloudPrefsInt prefs) { }

	// RVA: 0x24EA0B0 Offset: 0x24E60B0 VA: 0x24EA0B0 Slot: 3
	public override string ToString() { }
}

