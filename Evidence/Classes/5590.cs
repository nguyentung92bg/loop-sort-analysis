// Namespace: 
[ExecuteAlways]
[DisallowMultipleComponent]
[RequireComponent(typeof(TMP_Text))]
public class TMP_CurvedText : MonoBehaviour // TypeDefIndex: 5590
{
	// Fields
	private const float MinTextWidth = 0.001;
	[SerializeField]
	[Range(-180, 180)]
	[Tooltip("The arc angle of the text. 0 = flat text, 180 = half circle")]
	private float _arcDegrees; // 0x20
	private TMP_Text _tmp; // 0x28
	private bool _isSubscribed; // 0x30
	private float _appliedArcDegrees; // 0x34

	// Methods

	// RVA: 0x249FB38 Offset: 0x249BB38 VA: 0x249FB38
	private void Awake() { }

	// RVA: 0x249FBD4 Offset: 0x249BBD4 VA: 0x249FBD4
	private void Update() { }

	// RVA: 0x249FCE4 Offset: 0x249BCE4 VA: 0x249FCE4
	private void OnEnable() { }

	// RVA: 0x249FDE4 Offset: 0x249BDE4 VA: 0x249FDE4
	private void OnDisable() { }

	// RVA: 0x249FEC4 Offset: 0x249BEC4 VA: 0x249FEC4
	private void OnDestroy() { }

	// RVA: 0x249FEC8 Offset: 0x249BEC8 VA: 0x249FEC8
	private void OnValidate() { }

	// RVA: 0x249FB3C Offset: 0x249BB3C VA: 0x249FB3C
	private void CacheTextComponent() { }

	// RVA: 0x249FD04 Offset: 0x249BD04 VA: 0x249FD04
	private void SubscribeToTextMesh() { }

	// RVA: 0x249FDE8 Offset: 0x249BDE8 VA: 0x249FDE8
	private void UnsubscribeFromTextMesh() { }

	// RVA: 0x249FBD8 Offset: 0x249BBD8 VA: 0x249FBD8
	private void SetTextDirty() { }

	// RVA: 0x249FECC Offset: 0x249BECC VA: 0x249FECC
	private void ApplyCurve(TMP_TextInfo textInfo) { }

	// RVA: 0x24A025C Offset: 0x249C25C VA: 0x24A025C
	private static bool TryGetVisibleTextBounds(TMP_TextInfo textInfo, out Vector3 boundsMin, out Vector3 boundsMax) { }

	// RVA: 0x24A0584 Offset: 0x249C584 VA: 0x24A0584
	private static void OffsetVisibleVerticesToCenter(TMP_TextInfo textInfo, Vector3 textCenter) { }

	// RVA: 0x24A03A0 Offset: 0x249C3A0 VA: 0x24A03A0
	private Matrix4x4 ComputeCircleTransformationMatrix(float zeroToOnePos, TMP_TextInfo textInfo, int charIdx, float textWidth) { }

	// RVA: 0x24A07B0 Offset: 0x249C7B0 VA: 0x24A07B0
	public void .ctor() { }
}

