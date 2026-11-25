// Namespace: 
public sealed class ToggleElement : MonoBehaviour // TypeDefIndex: 5301
{
	// Fields
	[SerializeField]
	private Button Button; // 0x20
	[SerializeField]
	private RectTransform MotionTarget; // 0x28
	[SerializeField]
	private Image Image; // 0x30
	[SerializeField]
	private Image Background; // 0x38
	[SerializeField]
	private TMP_Text StatusText; // 0x40
	[SerializeField]
	private GameObject DisabledItem; // 0x48
	[Space]
	[SerializeField]
	private Sprite ActiveSprite; // 0x50
	[SerializeField]
	private Sprite PassiveSprite; // 0x58
	[SerializeField]
	private Sprite ActiveBackgroundSprite; // 0x60
	[SerializeField]
	private Sprite PassiveBackgroundSprite; // 0x68
	[SerializeField]
	private Vector2 ActivePosition; // 0x70
	[SerializeField]
	private Vector2 PassivePosition; // 0x78
	[SerializeField]
	private Ease Ease; // 0x80
	[SerializeField]
	private float Duration; // 0x84
	private bool _isActive; // 0x88
	private MotionHandle _motion; // 0x8C
	[CompilerGenerated]
	private Action<bool> OnChange; // 0x98

	// Methods

	[CompilerGenerated]
	// RVA: 0x241EA64 Offset: 0x241AA64 VA: 0x241EA64
	private void add_OnChange(Action<bool> value) { }

	[CompilerGenerated]
	// RVA: 0x241EB14 Offset: 0x241AB14 VA: 0x241EB14
	private void remove_OnChange(Action<bool> value) { }

	// RVA: 0x241EBC4 Offset: 0x241ABC4 VA: 0x241EBC4
	private void Awake() { }

	// RVA: 0x241EC54 Offset: 0x241AC54 VA: 0x241EC54
	private void OnClicked() { }

	// RVA: 0x241ECB0 Offset: 0x241ACB0 VA: 0x241ECB0
	public void Initialize(bool isActive) { }

	// RVA: 0x241EC64 Offset: 0x241AC64 VA: 0x241EC64
	public void Set(bool isActive) { }

	// RVA: 0x241ECC0 Offset: 0x241ACC0 VA: 0x241ECC0
	private void UpdateView(bool motion = True) { }

	// RVA: 0x241F060 Offset: 0x241B060 VA: 0x241F060
	public void AddSubscribe(Action<bool> onChange) { }

	// RVA: 0x241F064 Offset: 0x241B064 VA: 0x241F064
	public void .ctor() { }
}

