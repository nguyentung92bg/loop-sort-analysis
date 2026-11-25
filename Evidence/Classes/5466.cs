// Namespace: 
public sealed class TransitionMonitor : MonitorBase // TypeDefIndex: 5466
{
	// Fields
	[SerializeField]
	private float FadeDuration; // 0x98
	[SerializeField]
	private float EffectDuration; // 0x9C
	[SerializeField]
	private float Delay; // 0xA0
	[Inject]
	private RaycastBlockerMonitor _raycastBlockerMonitor; // 0xA8
	[Inject]
	private InteractionModule _interactionModule; // 0xB0
	[Inject]
	private SceneModule _sceneModule; // 0xB8
	[Inject]
	private IAsyncSubscriber<ScenePreLoadMessage> _scenePreLoad; // 0xC0
	[Inject]
	private IAsyncSubscriber<ScenePostLoadMessage> _scenePostLoad; // 0xC8
	private UIEffect _effect; // 0xD0
	private CanvasGroup _canvasGroup; // 0xD8

	// Methods

	// RVA: 0x2466938 Offset: 0x2462938 VA: 0x2466938
	private void Awake() { }

	// RVA: 0x24669D4 Offset: 0x24629D4 VA: 0x24669D4 Slot: 15
	public override void OnActivated() { }

	// RVA: 0x2466A10 Offset: 0x2462A10 VA: 0x2466A10 Slot: 16
	public override void OnDeactivated() { }

	// RVA: 0x2466A4C Offset: 0x2462A4C VA: 0x2466A4C Slot: 13
	public override void Setup() { }

	[AsyncStateMachine(typeof(TransitionMonitor.<Open>d__14))]
	// RVA: 0x2466C40 Offset: 0x2462C40 VA: 0x2466C40
	public UniTask Open(CancellationToken token) { }

	[AsyncStateMachine(typeof(TransitionMonitor.<Close>d__15))]
	// RVA: 0x2466CF8 Offset: 0x2462CF8 VA: 0x2466CF8
	public UniTask Close(CancellationToken token) { }

	// RVA: 0x2466DB0 Offset: 0x2462DB0 VA: 0x2466DB0
	private UniTask OnScenePreLoad(ScenePreLoadMessage m, CancellationToken token) { }

	// RVA: 0x2466E48 Offset: 0x2462E48 VA: 0x2466E48
	private UniTask OnScenePostLoad(ScenePostLoadMessage m, CancellationToken token) { }

	// RVA: 0x2466EFC Offset: 0x2462EFC VA: 0x2466EFC
	public void .ctor() { }
}

