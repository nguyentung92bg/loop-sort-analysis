// Namespace: 
public sealed class HighlightMonitor : MonitorBase // TypeDefIndex: 5390
{
	// Fields
	private Image _mask; // 0x98
	private ContainerView _uiMaskContainer; // 0xA0
	private ContainerView _worldMaskContainer; // 0xA8

	// Methods

	// RVA: 0x2443E40 Offset: 0x243FE40 VA: 0x2443E40
	private void Awake() { }

	// RVA: 0x2443EE4 Offset: 0x243FEE4 VA: 0x2443EE4
	public void CreateUIMask(Vector3 worldPoint, Vector2 size, Vector2 offset) { }

	// RVA: 0x2444094 Offset: 0x2440094 VA: 0x2444094
	public void CreateWorldMask(Vector3 worldPoint, Vector2 size) { }

	// RVA: 0x2443FE8 Offset: 0x243FFE8 VA: 0x2443FE8
	public void ShowMask(float alpha = 0.8) { }

	// RVA: 0x2444234 Offset: 0x2440234 VA: 0x2444234
	public void ClearMask() { }

	// RVA: 0x2444284 Offset: 0x2440284 VA: 0x2444284
	public void HideMask() { }

	// RVA: 0x24442B0 Offset: 0x24402B0 VA: 0x24442B0
	public void .ctor() { }
}

