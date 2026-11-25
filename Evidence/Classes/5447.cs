// Namespace: 
public sealed class RewardClaimMonitor : MonitorBase // TypeDefIndex: 5447
{
	// Fields
	[Inject]
	private Shop _shop; // 0x98
	[Inject]
	private FulfillModule _fulfillModule; // 0xA0
	private Action _claimCallback; // 0xA8
	private RewardClaimMonitor.ShowArgs _showArgs; // 0xB0

	// Methods

	// RVA: 0x245C680 Offset: 0x2458680 VA: 0x245C680 Slot: 13
	public override void Setup() { }

	// RVA: 0x245C718 Offset: 0x2458718 VA: 0x245C718
	private void OnClaimClicked() { }

	// RVA: 0x245C78C Offset: 0x245878C VA: 0x245C78C
	private void FulfillItems() { }

	// RVA: 0x245C954 Offset: 0x2458954 VA: 0x245C954
	public void Show(RewardClaimMonitor.ShowArgs args) { }

	// RVA: 0x245CA08 Offset: 0x2458A08 VA: 0x245CA08
	private void FillItemElements(List<RewardClaimMonitor.ItemArgs> items) { }

	// RVA: 0x245CAD0 Offset: 0x2458AD0 VA: 0x245CAD0
	private void CreateItemElement(StatefulComponent view, RewardClaimMonitor.ItemArgs data) { }

	// RVA: 0x245CB98 Offset: 0x2458B98 VA: 0x245CB98
	public void AddClaimListener(Action listener) { }

	// RVA: 0x245CC28 Offset: 0x2458C28 VA: 0x245CC28
	public void .ctor() { }
}

