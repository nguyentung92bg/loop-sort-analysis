// Namespace: 
public sealed class InteractionModule : ModuleBase, IStartable // TypeDefIndex: 4905
{
	// Fields
	[Inject]
	private Camera _camera; // 0x10
	[Inject]
	private HapticModule _hapticModule; // 0x18
	private IInteractable _currentInteractable; // 0x20
	private IInteractable _restrictedInteractable; // 0x28
	private ITouchInterceptor _touchInterceptor; // 0x30
	private bool _isInteractionRestricted; // 0x38
	private LayerMask _layerMask; // 0x3C
	private UniTaskCompletionSource _onClickAsync; // 0x40
	private readonly HashSet<object> _blockers; // 0x48

	// Methods

	// RVA: 0x2535674 Offset: 0x2531674 VA: 0x2535674 Slot: 4
	public void Start() { }

	// RVA: 0x253581C Offset: 0x253181C VA: 0x253581C
	private void OnFingerDown(LeanFinger finger) { }

	// RVA: 0x2535B30 Offset: 0x2531B30 VA: 0x2535B30
	private void OnFingerUpdate(LeanFinger finger) { }

	// RVA: 0x2535BFC Offset: 0x2531BFC VA: 0x2535BFC
	private void OnFingerUp(LeanFinger finger) { }

	// RVA: 0x2535CC8 Offset: 0x2531CC8 VA: 0x2535CC8
	public void EnableRestriction(object owner) { }

	// RVA: 0x2535D30 Offset: 0x2531D30 VA: 0x2535D30
	public void DisableRestriction(object owner) { }

	// RVA: 0x2535DB4 Offset: 0x2531DB4 VA: 0x2535DB4
	public void SetRestrictedInteractable(IInteractable interactable) { }

	// RVA: 0x2535DBC Offset: 0x2531DBC VA: 0x2535DBC
	public void SetLayerMask(LayerMask layerMask) { }

	[AsyncStateMachine(typeof(InteractionModule.<OnInteractAsync>d__17))]
	// RVA: 0x2535DC4 Offset: 0x2531DC4 VA: 0x2535DC4
	public UniTask OnInteractAsync(CancellationToken token) { }

	// RVA: 0x2535E7C Offset: 0x2531E7C VA: 0x2535E7C
	public void SetTouchInterceptor(ITouchInterceptor blocker) { }

	// RVA: 0x2535E84 Offset: 0x2531E84 VA: 0x2535E84
	public void ClearTouchInterceptor() { }

	// RVA: 0x2535E90 Offset: 0x2531E90 VA: 0x2535E90
	public void .ctor() { }
}

