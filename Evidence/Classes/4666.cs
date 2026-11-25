// Namespace: 
public static class CloudPrefsRegistry // TypeDefIndex: 4666
{
	// Fields
	private static readonly List<ICloudPrefs> Entries; // 0x0
	private static readonly HashSet<string> Keys; // 0x8
	[CompilerGenerated]
	private static Func<ICloudPrefsStore> <StoreProvider>k__BackingField; // 0x10

	// Properties
	public static Func<ICloudPrefsStore> StoreProvider { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x24E9124 Offset: 0x24E5124 VA: 0x24E9124
	public static Func<ICloudPrefsStore> get_StoreProvider() { }

	[CompilerGenerated]
	// RVA: 0x24E917C Offset: 0x24E517C VA: 0x24E917C
	public static void set_StoreProvider(Func<ICloudPrefsStore> value) { }

	// RVA: 0x24E91DC Offset: 0x24E51DC VA: 0x24E91DC
	public static bool IsRegistered(string key) { }

	// RVA: 0x24E925C Offset: 0x24E525C VA: 0x24E925C
	public static void Register(ICloudPrefs pref) { }

	// RVA: 0x24E93A8 Offset: 0x24E53A8 VA: 0x24E93A8
	private static void RestoreFromStore(ICloudPrefs pref) { }

	// RVA: 0x24E96D4 Offset: 0x24E56D4 VA: 0x24E96D4
	public static PooledObject<List<ICloudPrefs>> GetAllPrefs(out List<ICloudPrefs> prefs) { }

	// RVA: 0x24E97B8 Offset: 0x24E57B8 VA: 0x24E97B8
	private static void .cctor() { }
}

