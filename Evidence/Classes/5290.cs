// Namespace: 
public sealed class GiftBoxElement : ElementBase // TypeDefIndex: 5290
{
	// Fields
	[Inject]
	private Features _features; // 0x28
	[Inject]
	private SheetContainer _sheetContainer; // 0x30
	[Inject]
	private HapticModule _hapticModule; // 0x38
	[Inject]
	private AudioModule _audioModule; // 0x40

	// Methods

	[AsyncStateMachine(typeof(GiftBoxElement.<ApplyProgressMotion>d__5))]
	// RVA: 0x2419544 Offset: 0x2415544 VA: 0x2419544
	public UniTaskVoid ApplyProgressMotion() { }

	[AsyncStateMachine(typeof(GiftBoxElement.<ApplyCustomMotion>d__6))]
	// RVA: 0x24195D8 Offset: 0x24155D8 VA: 0x24195D8
	public UniTask ApplyCustomMotion(List<GiftBoxElement.Item> items) { }

	[AsyncStateMachine(typeof(GiftBoxElement.<ApplyUnlockMotion>d__7))]
	// RVA: 0x2419690 Offset: 0x2415690 VA: 0x2419690
	private UniTask ApplyUnlockMotion() { }

	// RVA: 0x241972C Offset: 0x241572C VA: 0x241972C
	public void .ctor() { }
}

