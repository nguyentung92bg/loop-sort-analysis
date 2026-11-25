// Namespace: 
public sealed class PrefabModule : ModuleBase, IInitializable // TypeDefIndex: 4915
{
	// Fields
	private readonly Dictionary<GameObject, Stack<GameObject>> _pools; // 0x10
	private readonly Dictionary<GameObject, Stack<GameObject>> _cloneReferences; // 0x18
	private Transform _rootParent; // 0x20
	private readonly Dictionary<GameObject, Transform> _poolParents; // 0x28
	private readonly Dictionary<GameObject, Transform> _poolReferences; // 0x30
	[Inject]
	private ISubscriber<ScenePreLoadMessage> _scenePreLoadSub; // 0x38

	// Properties
	private static Scene ActiveScene { get; }

	// Methods

	// RVA: 0x2536E04 Offset: 0x2532E04 VA: 0x2536E04
	private static Scene get_ActiveScene() { }

	// RVA: 0x2536E54 Offset: 0x2532E54 VA: 0x2536E54 Slot: 4
	public void Initialize() { }

	// RVA: 0x2536F5C Offset: 0x2532F5C VA: 0x2536F5C
	private void OnScenePreLoad(ScenePreLoadMessage m) { }

	// RVA: 0x2537380 Offset: 0x2533380 VA: 0x2537380
	public GameObject Rent(GameObject original) { }

	// RVA: 0x2537BC4 Offset: 0x2533BC4 VA: 0x2537BC4
	public GameObject Rent(GameObject original, Transform parent) { }

	// RVA: 0x2537DE8 Offset: 0x2533DE8 VA: 0x2537DE8
	public GameObject Rent(GameObject original, Vector3 position, Quaternion rotation) { }

	// RVA: 0x25380D0 Offset: 0x25340D0 VA: 0x25380D0
	public GameObject Rent(GameObject original, Vector3 position, Quaternion rotation, Transform parent) { }

	// RVA: 0x2537164 Offset: 0x2533164 VA: 0x2537164
	public void Return(GameObject instance) { }

	// RVA: 0x25386AC Offset: 0x25346AC VA: 0x25386AC
	public void Prewarm(GameObject original, int maxCount) { }

	// RVA: 0x25375E0 Offset: 0x25335E0 VA: 0x25375E0
	private Stack<GameObject> GetOrCreatePool(GameObject original) { }

	// RVA: 0x25376C0 Offset: 0x25336C0 VA: 0x25376C0
	private Transform GetOrCreatePoolParent(GameObject original) { }

	// RVA: 0x2538834 Offset: 0x2534834 VA: 0x2538834
	public bool IsGameObjectPooled(GameObject instance) { }

	// RVA: 0x253888C Offset: 0x253488C VA: 0x253888C
	public void .ctor() { }
}

