// Namespace: 
public sealed class PrefabReturnerOnDisable : MonoBehaviour // TypeDefIndex: 5577
{
	// Fields
	private static PrefabModule _prefabModule; // 0x0

	// Methods

	// RVA: 0x249C240 Offset: 0x2498240 VA: 0x249C240
	private void OnDisable() { }

	[AsyncStateMachine(typeof(PrefabReturnerOnDisable.<ReturnPrefabAfterDelay>d__2))]
	// RVA: 0x249C264 Offset: 0x2498264 VA: 0x249C264
	private UniTaskVoid ReturnPrefabAfterDelay() { }

	// RVA: 0x249C2F4 Offset: 0x24982F4 VA: 0x249C2F4
	private static void ResolvePrefabModule() { }

	// RVA: 0x249C40C Offset: 0x249840C VA: 0x249C40C
	public void .ctor() { }
}

