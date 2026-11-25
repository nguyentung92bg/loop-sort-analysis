// Namespace: 
public sealed class PointerHoldElement : MonoBehaviour, IPointerDownHandler, IEventSystemHandler, IPointerUpHandler, IDeselectHandler // TypeDefIndex: 5294
{
	// Fields
	private AutoResetUniTaskCompletionSource _completionSource; // 0x20
	private Action _startListeners; // 0x28
	private Action _updateListeners; // 0x30

	// Methods

	[AsyncStateMachine(typeof(PointerHoldElement.<HandleListeners>d__3))]
	// RVA: 0x241D1B8 Offset: 0x24191B8 VA: 0x241D1B8
	private UniTaskVoid HandleListeners() { }

	// RVA: 0x241D248 Offset: 0x2419248 VA: 0x241D248 Slot: 4
	public void OnPointerDown(PointerEventData eventData) { }

	// RVA: 0x241D2E0 Offset: 0x24192E0 VA: 0x241D2E0 Slot: 5
	public void OnPointerUp(PointerEventData eventData) { }

	// RVA: 0x241D2F4 Offset: 0x24192F4 VA: 0x241D2F4 Slot: 6
	public void OnDeselect(BaseEventData eventData) { }

	// RVA: 0x241D308 Offset: 0x2419308 VA: 0x241D308
	public UniTask OnReleaseAsync() { }

	// RVA: 0x241D320 Offset: 0x2419320 VA: 0x241D320
	public void AddStartListener(Action listener) { }

	// RVA: 0x241D3B0 Offset: 0x24193B0 VA: 0x241D3B0
	public void AddUpdateListener(Action listener) { }

	// RVA: 0x241D440 Offset: 0x2419440 VA: 0x241D440
	public void .ctor() { }
}

