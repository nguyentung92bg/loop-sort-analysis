// Namespace: 
public sealed class CollectionBarSubMonitor : SubMonitorBase, LoopScrollPrefabSource, LoopScrollDataSource // TypeDefIndex: 5483
{
	// Fields
	[SerializeField]
	private Sprite ChestSprite; // 0x40
	[Inject]
	private CollectionBar _controller; // 0x48
	[Inject]
	private SheetContainer _sheetContainer; // 0x50
	[Inject]
	private Shop _shop; // 0x58
	private StatefulComponent _infoView; // 0x60
	private CancellationTokenSource _infoCancellation; // 0x68
	private CollectionBarSheet.Row _currentProgressData; // 0x70

	// Methods

	// RVA: 0x24713C8 Offset: 0x246D3C8 VA: 0x24713C8 Slot: 8
	public override void Setup() { }

	// RVA: 0x2471A54 Offset: 0x246DA54 VA: 0x2471A54 Slot: 9
	public override void Render() { }

	// RVA: 0x2471BEC Offset: 0x246DBEC VA: 0x2471BEC Slot: 12
	public GameObject GetObject(int index) { }

	// RVA: 0x2471CB4 Offset: 0x246DCB4 VA: 0x2471CB4 Slot: 13
	public void ReturnObject(Transform t) { }

	// RVA: 0x2471D14 Offset: 0x246DD14 VA: 0x2471D14 Slot: 14
	public void ProvideData(Transform t, int idx) { }

	// RVA: 0x2471E00 Offset: 0x246DE00 VA: 0x2471E00
	private void FillProgressElement(StatefulComponent view, CollectionBarSheet.Row data) { }

	// RVA: 0x247179C Offset: 0x246D79C VA: 0x247179C
	private void FillProgressBarElement(StatefulComponent view) { }

	// RVA: 0x2472184 Offset: 0x246E184 VA: 0x2472184
	private void OnInfoClicked() { }

	// RVA: 0x247223C Offset: 0x246E23C VA: 0x247223C
	private void OnInfoContinueClicked() { }

	// RVA: 0x247227C Offset: 0x246E27C VA: 0x247227C
	public void .ctor() { }
}

