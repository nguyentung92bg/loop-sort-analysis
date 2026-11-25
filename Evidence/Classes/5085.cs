// Namespace: 
[DefaultExecutionOrder(-100)]
public sealed class SceneScope : LifetimeScope // TypeDefIndex: 5085
{
	// Fields
	[Inject]
	private BootstrapScope _bootstrapScope; // 0x68
	[Inject]
	private RemoteConfigModule _remoteConfigModule; // 0x70
	private World _world; // 0x78
	private PlaySessionBase _session; // 0x80
	private LevelSheet.Level _currentLevel; // 0x88
	private readonly HashSet<int> _transitionLevels; // 0x90

	// Methods

	// RVA: 0x2554534 Offset: 0x2550534 VA: 0x2554534 Slot: 5
	protected override void Awake() { }

	// RVA: 0x25545AC Offset: 0x25505AC VA: 0x25545AC Slot: 6
	protected override void OnDestroy() { }

	// RVA: 0x25545D8 Offset: 0x25505D8 VA: 0x25545D8 Slot: 7
	protected override void Configure(IContainerBuilder builder) { }

	// RVA: 0x255484C Offset: 0x255084C VA: 0x255484C
	private void HandleSceneComponents(IContainerBuilder builder) { }

	// RVA: 0x2554E5C Offset: 0x2550E5C VA: 0x2554E5C
	private void HandleWorld(IContainerBuilder builder) { }

	// RVA: 0x2554F6C Offset: 0x2550F6C VA: 0x2554F6C
	private void HandleSystems(IContainerBuilder builder) { }

	// RVA: 0x255565C Offset: 0x255165C VA: 0x255565C
	private void HandleSheetContainer(IContainerBuilder builder) { }

	// RVA: 0x2555A14 Offset: 0x2551A14 VA: 0x2555A14
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2555B0C Offset: 0x2551B0C VA: 0x2555B0C
	private bool <HandleSceneComponents>b__9_0(Component x) { }
}

