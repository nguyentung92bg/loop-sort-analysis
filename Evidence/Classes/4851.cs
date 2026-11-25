// Namespace: 
public sealed class PiggyBank : LiveOpsBase // TypeDefIndex: 4851
{
	// Fields
	[Inject]
	private Monitors _monitors; // 0x10
	[Inject]
	private SheetContainer _sheetContainer; // 0x18
	[Inject]
	private EconomyModule _economyModule; // 0x20
	[Inject]
	private LiveOpsModule _liveOpsModule; // 0x28
	private PlayerPrefsInt _popupLevel; // 0x30
	private PlayerPrefsInt _breakCount; // 0x40
	private PlayerPrefsInt _earlyPopup; // 0x50

	// Methods

	// RVA: 0x2523C6C Offset: 0x251FC6C VA: 0x2523C6C Slot: 6
	public override UniTask ApplyHomeAction(CancellationToken cancellationToken) { }

	// RVA: 0x2523EC8 Offset: 0x251FEC8 VA: 0x2523EC8 Slot: 13
	public override bool CanShow() { }

	// RVA: 0x2523E4C Offset: 0x251FE4C VA: 0x2523E4C
	public bool IsFull() { }

	// RVA: 0x2523F58 Offset: 0x251FF58 VA: 0x2523F58
	public void .ctor() { }
}

