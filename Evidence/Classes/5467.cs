// Namespace: 
public sealed class TutorialMonitor : MonitorBase // TypeDefIndex: 5467
{
	// Fields
	private RectTransform _fadeRT; // 0x98
	private UIEffect _fadeEffect; // 0xA0
	private MotionHandle _fadeMotion; // 0xA8
	private RectTransform _handRT; // 0xB8
	private TMP_Text _descText; // 0xC0

	// Methods

	// RVA: 0x2468444 Offset: 0x2464444 VA: 0x2468444
	private void Awake() { }

	// RVA: 0x2468588 Offset: 0x2464588 VA: 0x2468588
	public void SetFade(Vector3 worldPoint, float v, Vector2 offset, float duration = 0, float delay = 0) { }

	// RVA: 0x24687F0 Offset: 0x24647F0 VA: 0x24687F0
	public void SetHand(Vector3 worldPoint, Vector2 offset) { }

	// RVA: 0x2468A44 Offset: 0x2464A44 VA: 0x2468A44
	public void HideHand() { }

	// RVA: 0x2468A70 Offset: 0x2464A70 VA: 0x2468A70
	public void SetText(string text, float offset = 0, Vector3 worldPoint) { }

	// RVA: 0x2468DA0 Offset: 0x2464DA0 VA: 0x2468DA0
	public void ClearText() { }

	// RVA: 0x2468DE4 Offset: 0x2464DE4 VA: 0x2468DE4
	public void .ctor() { }
}

