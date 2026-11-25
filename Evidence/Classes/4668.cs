// Namespace: 
public struct CloudPrefsFloat : ICloudPrefs, IPrefs // TypeDefIndex: 4668
{
	// Fields
	private readonly PlayerPrefsFloat _playerPrefs; // 0x0
	private readonly bool _monotonic; // 0x10
	[CompilerGenerated]
	private readonly string <Key>k__BackingField; // 0x18

	// Properties
	public string Key { get; }
	public bool Monotonic { get; }
	public float Value { get; set; }

	// Methods

	// RVA: 0x24EA11C Offset: 0x24E611C VA: 0x24EA11C
	public void .ctor(string key, float defaultValue = 0, bool monotonic = False) { }

	[IsReadOnly]
	[CompilerGenerated]
	// RVA: 0x24EA224 Offset: 0x24E6224 VA: 0x24EA224 Slot: 7
	public string get_Key() { }

	// RVA: 0x24EA22C Offset: 0x24E622C VA: 0x24EA22C Slot: 4
	public bool get_Monotonic() { }

	// RVA: 0x24EA234 Offset: 0x24E6234 VA: 0x24EA234
	public float get_Value() { }

	// RVA: 0x24EA2A0 Offset: 0x24E62A0 VA: 0x24EA2A0
	public void set_Value(float value) { }

	// RVA: 0x24EA31C Offset: 0x24E631C VA: 0x24EA31C
	public void Set(float value) { }

	// RVA: 0x24EA398 Offset: 0x24E6398 VA: 0x24EA398 Slot: 8
	public bool HasValue() { }

	// RVA: 0x24EA408 Offset: 0x24E6408 VA: 0x24EA408 Slot: 9
	public void DeleteValue() { }

	// RVA: 0x24EA474 Offset: 0x24E6474 VA: 0x24EA474 Slot: 5
	public void WriteTo(ICloudPrefsStore store) { }

	// RVA: 0x24EA738 Offset: 0x24E6738 VA: 0x24EA738 Slot: 6
	public void ReadFrom(ICloudPrefsStore store) { }

	// RVA: 0x24EA91C Offset: 0x24E691C VA: 0x24EA91C
	public static float op_Implicit(CloudPrefsFloat prefs) { }

	// RVA: 0x24EA920 Offset: 0x24E6920 VA: 0x24EA920
	public static PlayerPrefsFloat op_Implicit(CloudPrefsFloat prefs) { }

	// RVA: 0x24EA92C Offset: 0x24E692C VA: 0x24EA92C Slot: 3
	public override string ToString() { }
}

