// Namespace: 
public sealed class SkinModule : ModuleBase // TypeDefIndex: 4924
{
	// Fields
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x10
	private SkinConfig _config; // 0x18

	// Properties
	public string Active { get; }

	// Methods

	// RVA: 0x253A090 Offset: 0x2536090 VA: 0x253A090
	public string get_Active() { }

	[ConsoleMethod("skin", "Force a skin (none = back to VT)", new[] { "skin" })]
	// RVA: 0x253A1A8 Offset: 0x25361A8 VA: 0x253A1A8
	public static void SetSkin(string skin) { }

	// RVA: 0x253A434 Offset: 0x2536434 VA: 0x253A434
	public void .ctor() { }
}

