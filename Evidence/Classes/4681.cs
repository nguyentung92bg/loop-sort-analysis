// Namespace: 
public sealed class CloudSaveModule : ModuleBase, IProviderInitialize // TypeDefIndex: 4681
{
	// Fields
	[Inject]
	private ICloudSaveProvider _provider; // 0x10
	[Inject]
	private IAdsProvider _adsProvider; // 0x18
	[Inject]
	private IPublisher<AccountSwitchedMessage> _accountSwitchedPub; // 0x20
	private bool _flushInFlight; // 0x28
	private bool _dirtyDeferred; // 0x29
	private bool _flushRequested; // 0x2A
	private bool _lifecycleSubscribed; // 0x2B
	private bool _reconnecting; // 0x2C
	private DateTime _nextReconnectUtc; // 0x30
	private static readonly string LogPrefix; // 0x0

	// Methods

	[AsyncStateMachine(typeof(CloudSaveModule.<InitializeSdk>d__10))]
	// RVA: 0x24EC0D4 Offset: 0x24E80D4 VA: 0x24EC0D4 Slot: 4
	public UniTask InitializeSdk() { }

	// RVA: 0x24EC16C Offset: 0x24E816C VA: 0x24EC16C
	private void SubscribeToLifecycle() { }

	// RVA: 0x24EC274 Offset: 0x24E8274 VA: 0x24EC274
	private void OnFocusChanged(bool hasFocus) { }

	// RVA: 0x24EC438 Offset: 0x24E8438 VA: 0x24EC438
	private void OnProviderAuthenticated() { }

	[AsyncStateMachine(typeof(CloudSaveModule.<TryReconnect>d__14))]
	// RVA: 0x24EC37C Offset: 0x24E837C VA: 0x24EC37C
	private UniTaskVoid TryReconnect(bool force = False) { }

	// RVA: 0x24EC460 Offset: 0x24E8460 VA: 0x24EC460
	private void OnQuitting() { }

	// RVA: 0x24EC564 Offset: 0x24E8564 VA: 0x24EC564
	private void ReconcileAccountSwitch() { }

	// RVA: 0x24ECCEC Offset: 0x24E8CEC VA: 0x24ECCEC
	private void RecordUserId() { }

	// RVA: 0x24ECE0C Offset: 0x24E8E0C VA: 0x24ECE0C
	private bool ShouldPushLocal() { }

	// RVA: 0x24ED14C Offset: 0x24E914C VA: 0x24ED14C
	private void OnProviderReloaded() { }

	// RVA: 0x24ECB08 Offset: 0x24E8B08 VA: 0x24ECB08
	private int StoreLevel() { }

	// RVA: 0x24ED184 Offset: 0x24E9184 VA: 0x24ED184
	public void MarkDirty() { }

	[AsyncStateMachine(typeof(CloudSaveModule.<FlushDirty>d__22))]
	// RVA: 0x24EE1E8 Offset: 0x24EA1E8 VA: 0x24EE1E8
	public UniTask FlushDirty() { }

	// RVA: 0x24EC420 Offset: 0x24E8420 VA: 0x24EC420
	public UniTask Flush() { }

	[AsyncStateMachine(typeof(CloudSaveModule.<DeleteAll>d__24))]
	// RVA: 0x24EE284 Offset: 0x24EA284 VA: 0x24EE284
	public UniTask DeleteAll() { }

	// RVA: 0x24EDA5C Offset: 0x24E9A5C VA: 0x24EDA5C
	public void SyncCloudPrefs() { }

	// RVA: 0x24ECF84 Offset: 0x24E8F84 VA: 0x24ECF84
	private bool IsStoreUnchangedSinceBaseline() { }

	// RVA: 0x24EE31C Offset: 0x24EA31C VA: 0x24EE31C
	private void RecordBaseline() { }

	// RVA: 0x24EE470 Offset: 0x24EA470 VA: 0x24EE470
	public void .ctor() { }

	// RVA: 0x24EE478 Offset: 0x24EA478 VA: 0x24EE478
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x24EE4E0 Offset: 0x24EA4E0 VA: 0x24EE4E0
	private ICloudPrefsStore <InitializeSdk>b__10_0() { }
}

