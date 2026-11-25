// Namespace: 
public sealed class PlaySessionModule : ModuleBase // TypeDefIndex: 4914
{
	// Fields
	[Inject]
	private SheetContainer _sheetContainer; // 0x10
	private MainPlaySession _mainPlaySession; // 0x18
	private PlaySessionBase _session; // 0x20

	// Properties
	public PlaySessionBase Current { get; }

	// Methods

	// RVA: 0x2536D5C Offset: 0x2532D5C VA: 0x2536D5C
	public PlaySessionBase get_Current() { }

	// RVA: 0x2536DE8 Offset: 0x2532DE8 VA: 0x2536DE8
	public void Begin(PlaySessionBase session) { }

	// RVA: 0x2536DF0 Offset: 0x2532DF0 VA: 0x2536DF0
	public void End() { }

	// RVA: 0x2536DFC Offset: 0x2532DFC VA: 0x2536DFC
	public void .ctor() { }
}

