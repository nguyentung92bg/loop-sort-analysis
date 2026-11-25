// Namespace: 
public sealed class FulfillItemsMonitor : MonitorBase // TypeDefIndex: 5379
{
	// Fields
	[Inject]
	private Shop _shop; // 0x98

	// Methods

	// RVA: 0x243EA38 Offset: 0x243AA38 VA: 0x243EA38
	public void Show(Vector3 worldPosition, IReadOnlyList<FulfillPayout> payouts) { }

	// RVA: 0x243EBF8 Offset: 0x243ABF8 VA: 0x243EBF8
	public void Show(Vector3 worldPosition, IReadOnlyList<RewardInfo> rewards) { }

	[AsyncStateMachine(typeof(FulfillItemsMonitor.<PlayBurst>d__3))]
	// RVA: 0x243EB20 Offset: 0x243AB20 VA: 0x243EB20
	private UniTaskVoid PlayBurst(Vector3 worldPosition, IReadOnlyList<FulfillPayout> payouts) { }

	// RVA: 0x243F078 Offset: 0x243B078 VA: 0x243F078
	private void CreateItemElement(StatefulComponent view, FulfillPayout data) { }

	// RVA: 0x243ECE8 Offset: 0x243ACE8 VA: 0x243ECE8
	private static List<FulfillPayout> ToFulfillPayouts(IReadOnlyList<RewardInfo> rewards) { }

	// RVA: 0x243F16C Offset: 0x243B16C VA: 0x243F16C
	public void .ctor() { }
}

