// Namespace: 
public sealed class Monitors : MonoBehaviour // TypeDefIndex: 5218
{
	// Fields
	private readonly Dictionary<Type, MonitorBase> _monitorByType; // 0x20
	private readonly Dictionary<IMonitor, CancellationTokenSource> _transitionCtsByMonitor; // 0x28
	private readonly Dictionary<MonitorBase, int> _sortingOrderByMonitor; // 0x30
	private readonly List<MonitorBase> _activeMonitors; // 0x38
	private readonly HashSet<object> _draggingOwners; // 0x40
	private CanvasGroup _canvasGroup; // 0x48
	private EventSystem _eventSystem; // 0x50
	private int _originalPixelDragThreshold; // 0x58
	private int _highestSortingOrder; // 0x5C
	private bool _isAlphaVisible; // 0x60

	// Methods

	// RVA: 0x256E158 Offset: 0x256A158 VA: 0x256E158
	private void Awake() { }

	// RVA: 0x256E004 Offset: 0x256A004 VA: 0x256E004
	public void Register(MonitorBase monitor) { }

	// RVA: 0x256E2D8 Offset: 0x256A2D8 VA: 0x256E2D8
	private void SetActive(Type monitorType, ITransition transition) { }

	// RVA: 0x256E3CC Offset: 0x256A3CC VA: 0x256E3CC
	public void Activate(Type monitorType, ITransition transition) { }

	// RVA: 0x256E54C Offset: 0x256A54C VA: 0x256E54C
	public void Additive(Type monitorType, ITransition transition, bool sorting = True) { }

	// RVA: 0x256E630 Offset: 0x256A630 VA: 0x256E630
	public void Deactivate(Type monitorType, ITransition transition) { }

	// RVA: -1 Offset: -1
	public void Activate<TMonitor>(ITransition transition) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x268887C Offset: 0x268487C VA: 0x268887C
	|-Monitors.Activate<object>
	*/

	// RVA: -1 Offset: -1
	public void Additive<TMonitor>(ITransition transition, bool sorting = True) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x26888E8 Offset: 0x26848E8 VA: 0x26888E8
	|-Monitors.Additive<object>
	*/

	// RVA: -1 Offset: -1
	public void Deactivate<TMonitor>(ITransition transition) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2688964 Offset: 0x2684964 VA: 0x2688964
	|-Monitors.Deactivate<object>
	*/

	[AsyncStateMachine(typeof(Monitors.<Deactivate>d__19))]
	// RVA: 0x256E214 Offset: 0x256A214 VA: 0x256E214
	public UniTaskVoid Deactivate(MonitorBase monitor, ITransition transition) { }

	// RVA: 0x256E4A0 Offset: 0x256A4A0 VA: 0x256E4A0
	public void DeactivateAll() { }

	// RVA: -1 Offset: -1
	public TMonitor Get<TMonitor>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x26889D0 Offset: 0x26849D0 VA: 0x26889D0
	|-Monitors.Get<object>
	*/

	// RVA: -1 Offset: -1
	public bool IsActive<TMonitor>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2688AB4 Offset: 0x2684AB4 VA: 0x2688AB4
	|-Monitors.IsActive<object>
	*/

	// RVA: 0x256E6AC Offset: 0x256A6AC VA: 0x256E6AC
	public PooledObject<List<MonitorBase>> GetActiveMonitors(out List<MonitorBase> activeMonitors) { }

	// RVA: 0x256E764 Offset: 0x256A764 VA: 0x256E764
	public int GetActiveMonitorCount() { }

	// RVA: 0x256E91C Offset: 0x256A91C VA: 0x256E91C
	public void DisableDragging(object owner) { }

	// RVA: 0x256E990 Offset: 0x256A990 VA: 0x256E990
	public void RestoreDragging(object owner) { }

	// RVA: 0x256EA20 Offset: 0x256AA20 VA: 0x256EA20
	public void DisableRaycaster(object owner) { }

	// RVA: 0x256EAFC Offset: 0x256AAFC VA: 0x256EAFC
	public void RestoreRaycaster(object owner) { }

	// RVA: 0x256EBD8 Offset: 0x256ABD8 VA: 0x256EBD8
	public bool IsRaycasterActive() { }

	// RVA: 0x256EC2C Offset: 0x256AC2C VA: 0x256EC2C
	public void SetClickableArea(RectTransform clickableArea) { }

	// RVA: 0x256D6F4 Offset: 0x25696F4 VA: 0x256D6F4
	public void ApplyActivateMonitorTransition(IMonitor monitor, ITransition transition) { }

	// RVA: 0x256EFA4 Offset: 0x256AFA4 VA: 0x256EFA4
	public void SetAlphaVisibility(bool visibility) { }

	// RVA: 0x256EFD4 Offset: 0x256AFD4 VA: 0x256EFD4
	public void ToggleAlphaVisibility() { }

	// RVA: 0x256EFE4 Offset: 0x256AFE4 VA: 0x256EFE4
	public void .ctor() { }
}

