// Namespace: 
public sealed class HighlightModule : ModuleBase, IStartable, ITickable // TypeDefIndex: 5013
{
	// Fields
	[Inject]
	private Camera _camera; // 0x10
	[Inject]
	private ISubscriber<ScenePostLoadMessage> _scenePostLoad; // 0x18
	private uint _nextEntityIdx; // 0x20
	private bool _isRenderActive; // 0x24
	private Shader _stencilWriterShader; // 0x28
	private Material _stencilWriterMat; // 0x30
	private readonly List<HighlightEntity> _entities; // 0x38
	private readonly HashSet<Mesh> _bakedMeshes; // 0x40

	// Methods

	// RVA: 0x254D98C Offset: 0x254998C VA: 0x254D98C Slot: 4
	public void Start() { }

	// RVA: 0x254DB10 Offset: 0x2549B10 VA: 0x254DB10 Slot: 5
	public void Tick() { }

	// RVA: 0x254DE98 Offset: 0x2549E98 VA: 0x254DE98
	public HighlightEntity Add(GameObject target, Mesh mesh) { }

	// RVA: 0x254E058 Offset: 0x254A058 VA: 0x254E058
	public void Remove(HighlightEntity highlightEntity) { }

	// RVA: 0x254DF88 Offset: 0x2549F88 VA: 0x254DF88
	private void CombineSubmeshes(Mesh mesh) { }

	// RVA: 0x254E0CC Offset: 0x254A0CC VA: 0x254E0CC
	public void ActivateRender() { }

	// RVA: 0x254E0D8 Offset: 0x254A0D8 VA: 0x254E0D8
	public void DeactivateRender() { }

	// RVA: 0x254E0E0 Offset: 0x254A0E0 VA: 0x254E0E0
	private void OnScenePostLoad(ScenePostLoadMessage m) { }

	// RVA: 0x254E17C Offset: 0x254A17C VA: 0x254E17C
	public void .ctor() { }
}

