// Namespace: 
public sealed class OutlineModule : ModuleBase, IStartable, ITickable // TypeDefIndex: 5015
{
	// Fields
	[Inject]
	private Camera _camera; // 0x10
	[Inject]
	private ISubscriber<ScenePostLoadMessage> _scenePostLoad; // 0x18
	private uint _nextEntityIdx; // 0x20
	private bool _isRenderBlocked; // 0x24
	private readonly List<OutlineEntity> _entities; // 0x28
	private readonly HashSet<Mesh> _bakedMeshes; // 0x30
	private readonly Dictionary<Mesh, List<Vector3>> _smoothNormalsByMesh; // 0x38
	private readonly Dictionary<ValueTuple<OutlineLayer, CompareFunction>, Material> _fillMaterials; // 0x40
	private readonly Dictionary<ValueTuple<OutlineLayer, CompareFunction>, Material> _maskMaterials; // 0x48
	private MaterialPropertyBlock _propertyBlock; // 0x50
	private Shader _fillShader; // 0x58
	private Shader _maskShader; // 0x60
	private static readonly int OutlineColor; // 0x0
	private static readonly int OutlineWidth; // 0x4
	private static readonly int ZTest; // 0x8
	private static readonly int StencilBit; // 0xC

	// Methods

	// RVA: 0x254E2EC Offset: 0x254A2EC VA: 0x254E2EC Slot: 4
	public void Start() { }

	// RVA: 0x254E49C Offset: 0x254A49C VA: 0x254E49C Slot: 5
	public void Tick() { }

	// RVA: 0x254E9A4 Offset: 0x254A9A4 VA: 0x254E9A4
	public OutlineEntity Add(GameObject target, Mesh mesh, Color color, float width, OutlineRenderMode renderMode, OutlineLayer layer = 128) { }

	// RVA: 0x254ECD4 Offset: 0x254ACD4 VA: 0x254ECD4
	public void Remove(OutlineEntity outlineEntity) { }

	// RVA: 0x254EC78 Offset: 0x254AC78 VA: 0x254EC78
	private Material GetMaskMaterial(OutlineLayer layer, OutlineRenderMode renderMode) { }

	// RVA: 0x254EC1C Offset: 0x254AC1C VA: 0x254EC1C
	private Material GetFillMaterial(OutlineLayer layer, OutlineRenderMode renderMode) { }

	// RVA: 0x254ED4C Offset: 0x254AD4C VA: 0x254ED4C
	private Material GetMaterial(Dictionary<ValueTuple<OutlineLayer, CompareFunction>, Material> cache, Shader shader, OutlineLayer layer, CompareFunction zTest) { }

	// RVA: 0x254EB88 Offset: 0x254AB88 VA: 0x254EB88
	private void LoadSmoothNormals(Mesh mesh) { }

	// RVA: 0x254EED0 Offset: 0x254AED0 VA: 0x254EED0
	private List<Vector3> GetSmoothNormals(Mesh mesh) { }

	// RVA: 0x254F400 Offset: 0x254B400 VA: 0x254F400
	private void CombineSubmeshes(Mesh mesh) { }

	// RVA: 0x254F48C Offset: 0x254B48C VA: 0x254F48C
	public void ActivateRender() { }

	// RVA: 0x254F494 Offset: 0x254B494 VA: 0x254F494
	public void DeactivateRender() { }

	// RVA: 0x254F4A0 Offset: 0x254B4A0 VA: 0x254F4A0
	private void OnScenePostLoad(ScenePostLoadMessage m) { }

	// RVA: 0x254F53C Offset: 0x254B53C VA: 0x254F53C
	public void .ctor() { }

	// RVA: 0x254F6E4 Offset: 0x254B6E4 VA: 0x254F6E4
	private static void .cctor() { }
}

