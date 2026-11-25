// Namespace: 
public sealed class DeepLinkModule : ModuleBase, IStartable // TypeDefIndex: 4884
{
	// Fields
	[Inject]
	private IPublisher<DeepLinkActivatedMessage> _deepLinkActivatedPub; // 0x10
	[Inject]
	private AnalyticsModule _analyticsModule; // 0x18
	public const string Scheme = "loopsort://";

	// Methods

	// RVA: 0x2532964 Offset: 0x252E964 VA: 0x2532964 Slot: 4
	public void Start() { }

	// RVA: 0x2532A3C Offset: 0x252EA3C VA: 0x2532A3C
	private void OnDeepLinkActivated(string absoluteURL) { }

	// RVA: 0x2532A40 Offset: 0x252EA40 VA: 0x2532A40
	public void Activate(string absoluteURL) { }

	// RVA: 0x2532D74 Offset: 0x252ED74 VA: 0x2532D74
	public void .ctor() { }
}

