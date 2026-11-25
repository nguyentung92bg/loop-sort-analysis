// Namespace: 
public sealed class GridContainer : GameBehaviourBase // TypeDefIndex: 4768
{
	// Fields
	[Inject]
	private GridConfig _config; // 0xA0
	[Inject]
	private LevelSheet.Level _level; // 0xA8
	private readonly List<Grid> _grids; // 0xB0

	// Methods

	// RVA: 0x2507FDC Offset: 0x2503FDC VA: 0x2507FDC Slot: 6
	protected override void Awake() { }

	// RVA: 0x250803C Offset: 0x250403C VA: 0x250803C
	private void InitializeGrids(Grid[] grids) { }

	// RVA: 0x250814C Offset: 0x250414C VA: 0x250814C
	public List<Grid> GetGrids() { }

	// RVA: 0x2508154 Offset: 0x2504154 VA: 0x2508154
	public void .ctor() { }
}

