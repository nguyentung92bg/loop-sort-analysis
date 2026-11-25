// Namespace: 
public sealed class NoInternetMonitor : MonitorBase // TypeDefIndex: 5413
{
	// Fields
	[Inject]
	private ConnectivityModule _connectivityModule; // 0x98
	[Inject]
	private HapticModule _hapticModule; // 0xA0
	private bool _closing; // 0xA8

	// Methods

	// RVA: 0x244EBBC Offset: 0x244ABBC VA: 0x244EBBC Slot: 13
	public override void Setup() { }

	// RVA: 0x244EC9C Offset: 0x244AC9C VA: 0x244EC9C Slot: 15
	public override void OnActivated() { }

	// RVA: 0x244ECB8 Offset: 0x244ACB8 VA: 0x244ECB8
	public void ShowPopup() { }

	// RVA: 0x244ED70 Offset: 0x244AD70 VA: 0x244ED70 Slot: 14
	public override void Render() { }

	[AsyncStateMachine(typeof(NoInternetMonitor.<TryAgain>d__7))]
	// RVA: 0x244EDE0 Offset: 0x244ADE0 VA: 0x244EDE0
	private UniTaskVoid TryAgain() { }

	// RVA: 0x244EDAC Offset: 0x244ADAC VA: 0x244EDAC
	private void Close() { }

	// RVA: 0x244EE70 Offset: 0x244AE70 VA: 0x244EE70
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x244EE78 Offset: 0x244AE78 VA: 0x244EE78
	private void <Setup>b__3_0() { }
}

