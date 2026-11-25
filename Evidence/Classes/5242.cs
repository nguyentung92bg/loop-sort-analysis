// Namespace: 
public sealed class ButtonClickEffect : EffectBase, IPointerDownHandler, IEventSystemHandler, IPointerUpHandler, IPointerClickHandler, IDeselectHandler // TypeDefIndex: 5242
{
	// Fields
	[SerializeField]
	private bool DisableScaleEffect; // 0x21
	[SerializeField]
	private float ChildMoveOffset; // 0x24
	private Button _button; // 0x28
	private MotionHandle _motion; // 0x30
	private Vector3 _mainScale; // 0x3C
	private bool _isButtonDown; // 0x48
	private static HapticModule _hapticModule; // 0x0
	private static AudioModule _audioModule; // 0x8
	private static PointerEventData _emptyPointerEventData; // 0x10
	private readonly List<RectTransform> _rectTransforms; // 0x50

	// Methods

	// RVA: 0x2570624 Offset: 0x256C624 VA: 0x2570624
	private void Awake() { }

	// RVA: 0x2570654 Offset: 0x256C654 VA: 0x2570654
	private void Start() { }

	// RVA: 0x25707AC Offset: 0x256C7AC VA: 0x25707AC
	private void OnDestroy() { }

	// RVA: 0x25707C4 Offset: 0x256C7C4 VA: 0x25707C4
	private void OnClicked() { }

	// RVA: 0x257099C Offset: 0x256C99C VA: 0x257099C Slot: 4
	public void OnPointerDown(PointerEventData eventData) { }

	// RVA: 0x2570D40 Offset: 0x256CD40 VA: 0x2570D40 Slot: 5
	public void OnPointerUp(PointerEventData eventData) { }

	// RVA: 0x25710C4 Offset: 0x256D0C4 VA: 0x25710C4 Slot: 6
	public void OnPointerClick(PointerEventData eventData) { }

	// RVA: 0x25710C8 Offset: 0x256D0C8 VA: 0x25710C8 Slot: 7
	public void OnDeselect(BaseEventData eventData) { }

	// RVA: 0x25709A0 Offset: 0x256C9A0 VA: 0x25709A0
	private void OnButtonDown() { }

	// RVA: 0x2570D44 Offset: 0x256CD44 VA: 0x2570D44
	private void OnButtonUp() { }

	// RVA: 0x2571134 Offset: 0x256D134 VA: 0x2571134
	public void .ctor() { }
}

