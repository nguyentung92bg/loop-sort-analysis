// Namespace: 
public sealed class SceneModule : ModuleBase // TypeDefIndex: 4919
{
	// Fields
	[CompilerGenerated]
	private SceneScope <Scope>k__BackingField; // 0x10
	[CompilerGenerated]
	private IObjectResolver <Container>k__BackingField; // 0x18
	[CompilerGenerated]
	private bool <IsSceneReady>k__BackingField; // 0x20
	private CancellationTokenSource _sceneLoadCts; // 0x28
	[Inject]
	private IPublisher<ScenePreLoadMessage> _scenePreLoad; // 0x30
	[Inject]
	private IPublisher<ScenePostLoadMessage> _scenePostLoad; // 0x38
	[Inject]
	private IAsyncPublisher<ScenePreLoadMessage> _scenePreLoadAsync; // 0x40
	[Inject]
	private IAsyncPublisher<ScenePostLoadMessage> _scenePostLoadAsync; // 0x48

	// Properties
	public SceneScope Scope { get; set; }
	public IObjectResolver Container { get; set; }
	public bool IsSceneReady { get; set; }
	public CancellationToken SceneLoadToken { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x25389B0 Offset: 0x25349B0 VA: 0x25389B0
	public SceneScope get_Scope() { }

	[CompilerGenerated]
	// RVA: 0x25389B8 Offset: 0x25349B8 VA: 0x25389B8
	private void set_Scope(SceneScope value) { }

	[CompilerGenerated]
	// RVA: 0x25389C0 Offset: 0x25349C0 VA: 0x25389C0
	public IObjectResolver get_Container() { }

	[CompilerGenerated]
	// RVA: 0x25389C8 Offset: 0x25349C8 VA: 0x25389C8
	private void set_Container(IObjectResolver value) { }

	[CompilerGenerated]
	// RVA: 0x25389D0 Offset: 0x25349D0 VA: 0x25389D0
	public bool get_IsSceneReady() { }

	[CompilerGenerated]
	// RVA: 0x25389D8 Offset: 0x25349D8 VA: 0x25389D8
	private void set_IsSceneReady(bool value) { }

	// RVA: 0x25389E0 Offset: 0x25349E0 VA: 0x25389E0
	public CancellationToken get_SceneLoadToken() { }

	[AsyncStateMachine(typeof(SceneModule.<Load>d__19))]
	// RVA: 0x25389F8 Offset: 0x25349F8 VA: 0x25389F8
	public UniTask Load(SceneIndexRefs target, bool waitPostLoad = False, bool cleanUpResources = False) { }

	// RVA: 0x2538AC4 Offset: 0x2534AC4 VA: 0x2538AC4
	public void .ctor() { }
}

