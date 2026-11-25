// Namespace: 
public sealed class TitlePopInEffect : MonoBehaviour // TypeDefIndex: 5264
{
	// Fields
	[SerializeField]
	private float Delay; // 0x20
	[SerializeField]
	private float Stagger; // 0x24
	[SerializeField]
	private float Duration; // 0x28
	[SerializeField]
	private float Rise; // 0x2C
	private CancellationTokenSource _cancellation; // 0x30

	// Methods

	// RVA: 0x2573AF8 Offset: 0x256FAF8 VA: 0x2573AF8
	private void OnEnable() { }

	// RVA: 0x2573C4C Offset: 0x256FC4C VA: 0x2573C4C
	private void OnDisable() { }

	[AsyncStateMachine(typeof(TitlePopInEffect.<Play>d__7))]
	// RVA: 0x2573B9C Offset: 0x256FB9C VA: 0x2573B9C
	private UniTaskVoid Play(CancellationToken cancellationToken) { }

	// RVA: 0x2573C8C Offset: 0x256FC8C VA: 0x2573C8C
	private void ApplyFrame(TMP_Text text, Vector3[][] original, float time) { }

	// RVA: 0x2573F14 Offset: 0x256FF14 VA: 0x2573F14
	public void .ctor() { }
}

