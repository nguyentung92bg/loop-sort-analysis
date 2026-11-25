// Namespace: 
public struct CloudPrefsString : ICloudPrefs, IPrefs // TypeDefIndex: 4669
{
	// Fields
	private readonly PlayerPrefsString _playerPrefs; // 0x0
	[CompilerGenerated]
	private readonly string <Key>k__BackingField; // 0x10

	// Properties
	public string Key { get; }
	public bool Monotonic { get; }
	public string Value { get; set; }

	// Methods

	// RVA: 0x24EA950 Offset: 0x24E6950 VA: 0x24EA950
	public void .ctor(string key, string defaultValue) { }

	[IsReadOnly]
	[CompilerGenerated]
	// RVA: 0x24EAA50 Offset: 0x24E6A50 VA: 0x24EAA50 Slot: 7
	public string get_Key() { }

	// RVA: 0x24EAA58 Offset: 0x24E6A58 VA: 0x24EAA58 Slot: 4
	public bool get_Monotonic() { }

	// RVA: 0x24EAA60 Offset: 0x24E6A60 VA: 0x24EAA60
	public string get_Value() { }

	// RVA: 0x24EAACC Offset: 0x24E6ACC VA: 0x24EAACC
	public void set_Value(string value) { }

	// RVA: 0x24EAB48 Offset: 0x24E6B48 VA: 0x24EAB48
	public void Set(string value) { }

	// RVA: 0x24EABC4 Offset: 0x24E6BC4 VA: 0x24EABC4 Slot: 8
	public bool HasValue() { }

	// RVA: 0x24EAC34 Offset: 0x24E6C34 VA: 0x24EAC34 Slot: 9
	public void DeleteValue() { }

	// RVA: 0x24EACA0 Offset: 0x24E6CA0 VA: 0x24EACA0 Slot: 5
	public void WriteTo(ICloudPrefsStore store) { }

	// RVA: 0x24EAE38 Offset: 0x24E6E38 VA: 0x24EAE38 Slot: 6
	public void ReadFrom(ICloudPrefsStore store) { }

	// RVA: 0x24EAFA4 Offset: 0x24E6FA4 VA: 0x24EAFA4
	public static string op_Implicit(CloudPrefsString prefs) { }

	// RVA: 0x24EAFA8 Offset: 0x24E6FA8 VA: 0x24EAFA8
	public static PlayerPrefsString op_Implicit(CloudPrefsString prefs) { }

	// RVA: 0x24EAFB4 Offset: 0x24E6FB4 VA: 0x24EAFB4 Slot: 3
	public override string ToString() { }
}

