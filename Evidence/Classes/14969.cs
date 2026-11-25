// Namespace: 
public sealed class NakamaBootstrapper : MonoBehaviour // TypeDefIndex: 14969
{
	// Fields
	[CompilerGenerated]
	private static NakamaInitEventArgs <Result>k__BackingField; // 0x0
	private INakamaApiService _apiService; // 0x20
	private CancellationTokenSource _cts; // 0x28
	private UniTimer _timeoutTimer; // 0x30
	private NakamaConfig _nakamaConfig; // 0x40
	private bool _initEventSubscribed; // 0x48
	private bool _sceneLoadRequested; // 0x49
	private const float InitTimeoutSeconds = 20;
	private const float RetryGraceSeconds = 12;
	private const float LinkTimeoutSeconds = 15;
	private static readonly string LogPrefix; // 0x8

	// Properties
	public static NakamaInitEventArgs Result { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2244D04 Offset: 0x2240D04 VA: 0x2244D04
	public static NakamaInitEventArgs get_Result() { }

	[CompilerGenerated]
	// RVA: 0x2244D5C Offset: 0x2240D5C VA: 0x2244D5C
	private static void set_Result(NakamaInitEventArgs value) { }

	// RVA: 0x2244DC4 Offset: 0x2240DC4 VA: 0x2244DC4
	private void Start() { }

	// RVA: 0x2244F1C Offset: 0x2240F1C VA: 0x2244F1C
	private void Update() { }

	// RVA: 0x224503C Offset: 0x224103C VA: 0x224503C
	private void OnDestroy() { }

	// RVA: 0x224513C Offset: 0x224113C VA: 0x224513C
	private void OnApplicationPause(bool isPaused) { }

	// RVA: 0x224501C Offset: 0x224101C VA: 0x224501C
	private void LoadNextSceneOnce() { }

	// RVA: 0x2245154 Offset: 0x2241154 VA: 0x2245154
	private void OnApiServiceReady(INakamaApiService apiService) { }

	[AsyncStateMachine(typeof(NakamaBootstrapper.<InitializeApiService>d__20))]
	// RVA: 0x22452A0 Offset: 0x22412A0 VA: 0x22452A0
	private UniTaskVoid InitializeApiService() { }

	// RVA: 0x2245330 Offset: 0x2241330 VA: 0x2245330
	private void OnNakamaInitFinished() { }

	[AsyncStateMachine(typeof(NakamaBootstrapper.<FinalizeNakamaInit>d__22))]
	// RVA: 0x2245420 Offset: 0x2241420 VA: 0x2245420
	private UniTask FinalizeNakamaInit(NakamaInitEventArgs result) { }

	[AsyncStateMachine(typeof(NakamaBootstrapper.<TryAutoLinkAccountAsync>d__23))]
	// RVA: 0x22454D8 Offset: 0x22414D8 VA: 0x22454D8
	private UniTask<LinkResult> TryAutoLinkAccountAsync() { }

	[AsyncStateMachine(typeof(NakamaBootstrapper.<TryAutoMergeAccountsAsync>d__24))]
	// RVA: 0x22455D8 Offset: 0x22415D8 VA: 0x22455D8
	private UniTask TryAutoMergeAccountsAsync(string authToken) { }

	// RVA: 0x22451A0 Offset: 0x22411A0 VA: 0x22451A0
	private void SubscribeToNakamaInit() { }

	// RVA: 0x2245040 Offset: 0x2241040 VA: 0x2245040
	private void UnsubscribeFromNakamaInit() { }

	// RVA: 0x224568C Offset: 0x224168C VA: 0x224568C
	private static NakamaLoginType GetLoginType() { }

	// RVA: 0x2245694 Offset: 0x2241694 VA: 0x2245694
	public void .ctor() { }

	// RVA: 0x224569C Offset: 0x224169C VA: 0x224569C
	private static void .cctor() { }
}

