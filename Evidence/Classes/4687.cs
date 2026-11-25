// Namespace: 
public sealed class BootstrapScope : LifetimeScope // TypeDefIndex: 4687
{
	// Fields
	[CompilerGenerated]
	private static bool <IsInitialized>k__BackingField; // 0x0
	[CompilerGenerated]
	private static readonly Dictionary<string, string> <InitializeArgs>k__BackingField; // 0x8
	private readonly List<InstallerBase> _installers; // 0x68

	// Properties
	public static bool IsInitialized { get; set; }
	public static Dictionary<string, string> InitializeArgs { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x24F043C Offset: 0x24EC43C VA: 0x24F043C
	public static bool get_IsInitialized() { }

	[CompilerGenerated]
	// RVA: 0x24F0494 Offset: 0x24EC494 VA: 0x24F0494
	private static void set_IsInitialized(bool value) { }

	[CompilerGenerated]
	// RVA: 0x24F04F4 Offset: 0x24EC4F4 VA: 0x24F04F4
	public static Dictionary<string, string> get_InitializeArgs() { }

	// RVA: 0x24F054C Offset: 0x24EC54C VA: 0x24F054C Slot: 5
	protected override void Awake() { }

	// RVA: 0x24F0550 Offset: 0x24EC550 VA: 0x24F0550
	private void Start() { }

	[AsyncStateMachine(typeof(BootstrapScope.<InitializeInstallers>d__10))]
	// RVA: 0x24F0574 Offset: 0x24EC574 VA: 0x24F0574
	private UniTaskVoid InitializeInstallers() { }

	// RVA: 0x24F0608 Offset: 0x24EC608 VA: 0x24F0608 Slot: 7
	protected override void Configure(IContainerBuilder builder) { }

	// RVA: 0x24F09C4 Offset: 0x24EC9C4 VA: 0x24F09C4
	public void .ctor() { }

	// RVA: 0x24F0A70 Offset: 0x24ECA70 VA: 0x24F0A70
	private static void .cctor() { }

	[CompilerGenerated]
	[DebuggerHidden]
	// RVA: 0x24F0B00 Offset: 0x24ECB00 VA: 0x24F0B00
	private void <>n__0() { }
}

