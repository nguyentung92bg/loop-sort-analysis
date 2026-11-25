// Namespace: 
public abstract class MonitorBase : StatefulView, IMonitor, IInitializable, ITickable // TypeDefIndex: 5212
{
	// Fields
	[CompilerGenerated]
	[SerializeField]
	private bool <AlwaysActivated>k__BackingField; // 0x28
	[Inject]
	protected Monitors Monitors; // 0x30
	[Inject]
	protected Camera Camera; // 0x38
	[Inject]
	protected AssetModule AssetModule; // 0x40
	[CompilerGenerated]
	private Canvas <Canvas>k__BackingField; // 0x48
	[CompilerGenerated]
	private CanvasScaler <CanvasScaler>k__BackingField; // 0x50
	private bool _setup; // 0x58
	private MonitorVariantBase _monitorVariant; // 0x60
	private ContainerBase[] _containers; // 0x68
	private ElementBase[] _elements; // 0x70
	private SubMonitorBase _subMonitor; // 0x78
	private AsyncOperationHandle _subMonitorAssetHandle; // 0x80

	// Properties
	public bool AlwaysActivated { get; set; }
	public Canvas Canvas { get; set; }
	public CanvasScaler CanvasScaler { get; set; }
	public RectTransform RectTransform { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x256C3CC Offset: 0x25683CC VA: 0x256C3CC
	public bool get_AlwaysActivated() { }

	[CompilerGenerated]
	// RVA: 0x256C3D4 Offset: 0x25683D4 VA: 0x256C3D4
	private void set_AlwaysActivated(bool value) { }

	[CompilerGenerated]
	// RVA: 0x256C3DC Offset: 0x25683DC VA: 0x256C3DC
	public Canvas get_Canvas() { }

	[CompilerGenerated]
	// RVA: 0x256C3E4 Offset: 0x25683E4 VA: 0x256C3E4
	private void set_Canvas(Canvas value) { }

	[CompilerGenerated]
	// RVA: 0x256C3EC Offset: 0x25683EC VA: 0x256C3EC
	public CanvasScaler get_CanvasScaler() { }

	[CompilerGenerated]
	// RVA: 0x256C3F4 Offset: 0x25683F4 VA: 0x256C3F4
	private void set_CanvasScaler(CanvasScaler value) { }

	// RVA: 0x256C3FC Offset: 0x25683FC VA: 0x256C3FC
	public RectTransform get_RectTransform() { }

	// RVA: 0x256C45C Offset: 0x256845C VA: 0x256C45C Slot: 10
	protected virtual void OnEnable() { }

	// RVA: 0x256C478 Offset: 0x2568478 VA: 0x256C478 Slot: 11
	protected virtual void OnDisable() { }

	// RVA: 0x256C494 Offset: 0x2568494 VA: 0x256C494 Slot: 8
	public void Initialize() { }

	// RVA: 0x256C4A4 Offset: 0x25684A4 VA: 0x256C4A4 Slot: 12
	public virtual void Tick() { }

	// RVA: 0x256C4E8 Offset: 0x25684E8 VA: 0x256C4E8 Slot: 13
	public virtual void Setup() { }

	// RVA: 0x256C914 Offset: 0x2568914 VA: 0x256C914 Slot: 14
	public virtual void Render() { }

	// RVA: 0x256C9F4 Offset: 0x25689F4 VA: 0x256C9F4 Slot: 15
	public virtual void OnActivated() { }

	// RVA: 0x256CA84 Offset: 0x2568A84 VA: 0x256CA84 Slot: 16
	public virtual void OnDeactivated() { }

	// RVA: 0x256C8FC Offset: 0x25688FC VA: 0x256C8FC
	public void SetRenderMode(RenderMode renderMode) { }

	// RVA: 0x256CB14 Offset: 0x2568B14 VA: 0x256CB14
	public void SetScaleMode(CanvasScaler.ScaleMode scaleMode) { }

	// RVA: 0x256CB2C Offset: 0x2568B2C VA: 0x256CB2C
	public Vector3 WorldToCanvasSpace(Vector3 worldPosition) { }

	// RVA: 0x256CC8C Offset: 0x2568C8C VA: 0x256CC8C
	public void WorldToCanvasSpace(Transform t, Vector3 worldPosition) { }

	// RVA: 0x256CD2C Offset: 0x2568D2C VA: 0x256CD2C
	public Vector3 ScreenToCanvasSpace(Vector3 screenPosition) { }

	// RVA: 0x256CE5C Offset: 0x2568E5C VA: 0x256CE5C
	public void ScreenToCanvasSpace(Transform t, Vector3 screenPosition) { }

	[AsyncStateMachine(typeof(MonitorBase.<AddSubMonitor>d__37))]
	// RVA: 0x256CEFC Offset: 0x2568EFC VA: 0x256CEFC
	public UniTask<StatefulComponent> AddSubMonitor(AssetReferenceGameObject subMonitorPrefabRef) { }

	// RVA: 0x256D028 Offset: 0x2569028 VA: 0x256D028
	public void RemoveSubMonitor() { }

	// RVA: -1 Offset: -1
	public T GetSubMonitor<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2688828 Offset: 0x2684828 VA: 0x2688828
	|-MonitorBase.GetSubMonitor<object>
	*/

	// RVA: 0x256D130 Offset: 0x2569130 VA: 0x256D130
	protected void .ctor() { }
}

