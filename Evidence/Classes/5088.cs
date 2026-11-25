// Namespace: 
public abstract class SystemBase : ISystem, IInitializer, IDisposable // TypeDefIndex: 5088
{
	// Fields
	[Inject]
	private SceneModule _sceneModule; // 0x10
	[CompilerGenerated]
	private World <World>k__BackingField; // 0x18
	[CompilerGenerated]
	private CancellationToken <SceneLoadToken>k__BackingField; // 0x20
	private IDisposable _messageDisposable; // 0x28

	// Properties
	public World World { get; set; }
	public CancellationToken SceneLoadToken { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2555E00 Offset: 0x2551E00 VA: 0x2555E00 Slot: 5
	public World get_World() { }

	[CompilerGenerated]
	// RVA: 0x2555E08 Offset: 0x2551E08 VA: 0x2555E08 Slot: 6
	public void set_World(World value) { }

	[CompilerGenerated]
	// RVA: 0x2555E10 Offset: 0x2551E10 VA: 0x2555E10
	public CancellationToken get_SceneLoadToken() { }

	[CompilerGenerated]
	// RVA: 0x2555E18 Offset: 0x2551E18 VA: 0x2555E18
	private void set_SceneLoadToken(CancellationToken value) { }

	// RVA: 0x2555E24 Offset: 0x2551E24 VA: 0x2555E24 Slot: 9
	public virtual void OnAwake() { }

	// RVA: 0x2555EF8 Offset: 0x2551EF8 VA: 0x2555EF8 Slot: 10
	public virtual void OnUpdate(float deltaTime) { }

	// RVA: 0x2555EFC Offset: 0x2551EFC VA: 0x2555EFC Slot: 11
	public virtual void Dispose() { }

	// RVA: 0x2555FA4 Offset: 0x2551FA4 VA: 0x2555FA4 Slot: 12
	protected virtual void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x2555FA8 Offset: 0x2551FA8 VA: 0x2555FA8
	protected void .ctor() { }
}

