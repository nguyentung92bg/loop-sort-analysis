// Namespace: 
public abstract class GameBehaviourBase : MonoBehaviour, IPoolCallbackReceiver // TypeDefIndex: 4692
{
	// Fields
	private CompositeMotionHandle _objectMotionHandle; // 0x20
	[Inject]
	protected Colors Colors; // 0x28
	[Inject]
	protected PrefabModule PrefabModule; // 0x30
	[Inject]
	protected SceneModule SceneModule; // 0x38
	[Inject]
	protected ThemeType Theme; // 0x40
	[Inject]
	protected MaterialPropertyBlock PropertyBlock; // 0x48
	private readonly List<RendererPropertyRegistry> _rendererPropertyRegistries; // 0x50
	private readonly List<RendererThemeRegistry> _rendererThemeRegistries; // 0x58
	private static readonly Dictionary<int, Entity> InstanceIDToEntity; // 0x0
	private Entity _entity; // 0x60
	private bool _isRented; // 0x68
	private IDisposable _messageDisposable; // 0x70
	private CancellationTokenSource _returnCts; // 0x78
	[CompilerGenerated]
	private World <World>k__BackingField; // 0x80
	[Inject]
	private IPublisher<GameBehaviourRentedMessage> _gameBehaviourRentedPub; // 0x88
	[Inject]
	private IPublisher<GameBehaviourReturnedMessage> _gameBehaviourReturnedPub; // 0x90
	[CompilerGenerated]
	private CancellationToken <SceneLoadToken>k__BackingField; // 0x98

	// Properties
	private int EntityID { get; }
	[Inject]
	protected World World { get; set; }
	public CancellationToken ReturnToken { get; }
	public CancellationToken SceneLoadToken { get; set; }

	// Methods

	// RVA: 0x24F4CE4 Offset: 0x24F0CE4 VA: 0x24F4CE4
	public void Register(MotionHandle handle) { }

	// RVA: 0x24F4D78 Offset: 0x24F0D78 VA: 0x24F4D78
	public void InjectColorType(ColorType colorType, Color colorOffset) { }

	// RVA: 0x24F5670 Offset: 0x24F1670 VA: 0x24F5670
	public void InjectColorType(ColorType colorType, GameObject targetGameObject, Color colorOffset) { }

	// RVA: 0x24F4FA0 Offset: 0x24F0FA0 VA: 0x24F4FA0
	public void InjectColorType(ColorType colorType, RendererPropertyRegistry propertyRegistry, Color colorOffset) { }

	// RVA: 0x24F5894 Offset: 0x24F1894 VA: 0x24F5894
	public void InjectTheme(ThemeType themeType) { }

	// RVA: 0x24F5A90 Offset: 0x24F1A90 VA: 0x24F5A90
	public void InjectMaterial(Material material) { }

	// RVA: 0x24F6168 Offset: 0x24F2168 VA: 0x24F6168
	public void GetCutoutRenderers(List<Renderer> cutoutRenderers) { }

	// RVA: 0x24F67DC Offset: 0x24F27DC VA: 0x24F67DC
	private int get_EntityID() { }

	[CompilerGenerated]
	// RVA: 0x24F6808 Offset: 0x24F2808 VA: 0x24F6808
	protected World get_World() { }

	[CompilerGenerated]
	// RVA: 0x24F6810 Offset: 0x24F2810 VA: 0x24F6810
	private void set_World(World value) { }

	// RVA: 0x24F6818 Offset: 0x24F2818 VA: 0x24F6818
	public CancellationToken get_ReturnToken() { }

	[CompilerGenerated]
	// RVA: 0x24F6894 Offset: 0x24F2894 VA: 0x24F6894
	public CancellationToken get_SceneLoadToken() { }

	[CompilerGenerated]
	// RVA: 0x24F689C Offset: 0x24F289C VA: 0x24F689C
	private void set_SceneLoadToken(CancellationToken value) { }

	// RVA: 0x24F68A8 Offset: 0x24F28A8 VA: 0x24F68A8 Slot: 6
	protected virtual void Awake() { }

	// RVA: 0x24F68B4 Offset: 0x24F28B4 VA: 0x24F68B4 Slot: 7
	protected virtual void Start() { }

	// RVA: 0x24F68B8 Offset: 0x24F28B8 VA: 0x24F68B8 Slot: 8
	protected virtual void OnEnable() { }

	// RVA: 0x24F69C0 Offset: 0x24F29C0 VA: 0x24F69C0 Slot: 9
	protected virtual void OnDisable() { }

	// RVA: 0x24F6AC8 Offset: 0x24F2AC8 VA: 0x24F6AC8 Slot: 10
	protected virtual void OnDestroy() { }

	// RVA: 0x24F6C1C Offset: 0x24F2C1C VA: 0x24F6C1C Slot: 11
	public virtual void OnRent() { }

	// RVA: 0x24F6EA8 Offset: 0x24F2EA8 VA: 0x24F6EA8 Slot: 12
	public virtual void OnReturn() { }

	// RVA: 0x24F70F8 Offset: 0x24F30F8 VA: 0x24F70F8 Slot: 13
	protected virtual void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: -1 Offset: -1
	public void RegisterView<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x261A35C Offset: 0x261635C VA: 0x261A35C
	|-GameBehaviourBase.RegisterView<object>
	*/

	// RVA: 0x24F68BC Offset: 0x24F28BC VA: 0x24F68BC
	private void SetEntityViewEnabled() { }

	// RVA: 0x24F69C4 Offset: 0x24F29C4 VA: 0x24F69C4
	private void SetEntityViewDisabled() { }

	// RVA: 0x24F70FC Offset: 0x24F30FC VA: 0x24F70FC
	public static Entity op_Implicit(GameBehaviourBase b) { }

	// RVA: 0x24F7110 Offset: 0x24F3110 VA: 0x24F7110
	protected void .ctor() { }

	// RVA: 0x24F71EC Offset: 0x24F31EC VA: 0x24F71EC
	private static void .cctor() { }
}

