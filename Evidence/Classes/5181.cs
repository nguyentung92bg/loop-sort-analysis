// Namespace: 
public sealed class SheetInstaller : InstallerBase // TypeDefIndex: 5181
{
	// Fields
	private SheetContainer _container; // 0x10
	private CustomFileSystem _customFileSystem; // 0x18
	private bool _isBakeSuccessful; // 0x20

	// Methods

	[AsyncStateMachine(typeof(SheetInstaller.<Initialize>d__3))]
	// RVA: 0x2565F6C Offset: 0x2561F6C VA: 0x2565F6C Slot: 4
	public override UniTask Initialize(Dictionary<string, string> args) { }

	// RVA: 0x2566028 Offset: 0x2562028 VA: 0x2566028 Slot: 6
	public override void Install(IContainerBuilder builder) { }

	[AsyncStateMachine(typeof(SheetInstaller.<BakeContainer>d__5))]
	// RVA: 0x256609C Offset: 0x256209C VA: 0x256609C
	private UniTask BakeContainer(ISheetImporter[] converters) { }

	[AsyncStateMachine(typeof(SheetInstaller.<LoadGoogleSheetConverters>d__6))]
	// RVA: 0x2566150 Offset: 0x2562150 VA: 0x2566150
	private UniTask<ISheetImporter[]> LoadGoogleSheetConverters(string sheetGroupName) { }

	// RVA: 0x2566244 Offset: 0x2562244 VA: 0x2566244
	private UniTask<ISheetImporter[]> LoadLocalSheetConverters() { }

	[AsyncStateMachine(typeof(SheetInstaller.<ValidateSheetGroupName>d__8))]
	// RVA: 0x2566398 Offset: 0x2562398 VA: 0x2566398
	private static UniTask<string> ValidateSheetGroupName(string name) { }

	// RVA: 0x25664A4 Offset: 0x25624A4 VA: 0x25664A4
	public void .ctor() { }
}

