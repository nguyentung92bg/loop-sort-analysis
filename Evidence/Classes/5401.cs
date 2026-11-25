// Namespace: 
public sealed class HomeNavigationMonitor : MonitorBase // TypeDefIndex: 5401
{
	// Fields
	private readonly Dictionary<Type, InnerComponentRole> _viewByMonitorType; // 0x98
	private StatefulComponent _activeView; // 0xA0
	private MotionHandle _selectionMotion; // 0xA8
	private SwipeablePageLayout _pageLayout; // 0xB8
	private float _elementNormalSizeX; // 0xC0
	private float _elementSelectedSizeX; // 0xC4
	private readonly List<StatefulComponent> _views; // 0xC8
	private readonly Dictionary<StatefulComponent, CompositeMotionHandle> _motionsByView; // 0xD0
	private readonly HashSet<object> _navigationBlockers; // 0xD8

	// Methods

	// RVA: 0x2449C00 Offset: 0x2445C00 VA: 0x2449C00 Slot: 15
	public override void OnActivated() { }

	// RVA: 0x244A01C Offset: 0x244601C VA: 0x244A01C Slot: 16
	public override void OnDeactivated() { }

	// RVA: 0x244A1BC Offset: 0x24461BC VA: 0x244A1BC Slot: 13
	public override void Setup() { }

	// RVA: 0x244AD98 Offset: 0x2446D98 VA: 0x244AD98
	private void OnRectTransformDimensionsChange() { }

	// RVA: 0x244A59C Offset: 0x244659C VA: 0x244A59C
	private void SetElementSizes() { }

	// RVA: 0x244AA1C Offset: 0x2446A1C VA: 0x244AA1C
	private void SetNavigationButton(StatefulComponent view, UnityAction onClicked) { }

	[AsyncStateMachine(typeof(HomeNavigationMonitor.<TransitionToDefault>d__15))]
	// RVA: 0x2449F8C Offset: 0x2445F8C VA: 0x2449F8C
	private UniTaskVoid TransitionToDefault() { }

	// RVA: -1 Offset: -1
	public void TransitionTo<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2641638 Offset: 0x263D638 VA: 0x2641638
	|-HomeNavigationMonitor.TransitionTo<object>
	*/

	// RVA: -1 Offset: -1
	public void TransitionTo<T>(bool motion) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2641674 Offset: 0x263D674 VA: 0x2641674
	|-HomeNavigationMonitor.TransitionTo<object>
	*/

	// RVA: 0x244AD9C Offset: 0x2446D9C VA: 0x244AD9C
	private void OnPageChange(PageMonitorBase pageMonitor) { }

	// RVA: 0x244B5B0 Offset: 0x24475B0 VA: 0x244B5B0
	private void ApplySelectionMotion(StatefulComponent view) { }

	// RVA: 0x244AE64 Offset: 0x2446E64 VA: 0x244AE64
	private void ApplySelectedMotion(StatefulComponent view) { }

	// RVA: 0x244B20C Offset: 0x244720C VA: 0x244B20C
	private void ApplyDeselectedMotion(StatefulComponent view) { }

	// RVA: 0x24435B4 Offset: 0x243F5B4 VA: 0x24435B4
	public void DisableNavigation(object owner) { }

	// RVA: 0x244B800 Offset: 0x2447800 VA: 0x244B800
	public void RestoreNavigation(object owner) { }

	// RVA: -1 Offset: -1
	public bool IsCurrentPageOfType<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x2641554 Offset: 0x263D554 VA: 0x2641554
	|-HomeNavigationMonitor.IsCurrentPageOfType<object>
	*/

	// RVA: 0x244B89C Offset: 0x244789C VA: 0x244B89C
	public bool HasCurrentPage() { }

	// RVA: 0x2443620 Offset: 0x243F620 VA: 0x2443620
	public bool IsInTransition() { }

	// RVA: 0x244B9F0 Offset: 0x24479F0 VA: 0x244B9F0
	public void .ctor() { }
}

