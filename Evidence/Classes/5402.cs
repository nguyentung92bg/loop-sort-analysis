// Namespace: 
public sealed class SwipeablePageLayout // TypeDefIndex: 5402
{
	// Fields
	private readonly Monitors _monitors; // 0x10
	private readonly List<PageMonitorBase> _pageMonitors; // 0x18
	private readonly CompositeMotionHandle _motions; // 0x20
	private int _currentIdx; // 0x28
	private bool _isFingerDown; // 0x2C
	private bool _isSlideDirectionChecked; // 0x2D
	private bool _isSlideBlocked; // 0x2E
	private int _targetFingerIdx; // 0x30
	private float _slideAmount; // 0x34
	private float _slideOffset; // 0x38
	private bool _isSwipeBlocked; // 0x3C
	private bool _isInputActive; // 0x3D
	private Action<PageMonitorBase> _onPageChange; // 0x40

	// Methods

	// RVA: 0x244ABB0 Offset: 0x2446BB0 VA: 0x244ABB0
	public void .ctor(Monitors monitors) { }

	// RVA: 0x2449C2C Offset: 0x2445C2C VA: 0x2449C2C
	public void Activate() { }

	// RVA: 0x244A050 Offset: 0x2446050 VA: 0x244A050
	public void Deactivate() { }

	// RVA: 0x244AC98 Offset: 0x2446C98 VA: 0x244AC98
	public void AddPage(PageMonitorBase page) { }

	// RVA: 0x244C140 Offset: 0x2448140 VA: 0x244C140
	public void TransitionTo(int idx) { }

	// RVA: 0x244C42C Offset: 0x244842C VA: 0x244C42C
	public void TransitionTo(PageMonitorBase monitor) { }

	// RVA: -1 Offset: -1
	public void TransitionTo<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x26D9E4C Offset: 0x26D5E4C VA: 0x26D9E4C
	|-SwipeablePageLayout.TransitionTo<object>
	*/

	// RVA: 0x244C200 Offset: 0x2448200 VA: 0x244C200
	public bool CanTransitionTo(int idx) { }

	// RVA: -1 Offset: -1
	public bool CanTransitionTo<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x26D9DC8 Offset: 0x26D5DC8 VA: 0x26D9DC8
	|-SwipeablePageLayout.CanTransitionTo<object>
	*/

	// RVA: 0x244C26C Offset: 0x244826C VA: 0x244C26C
	private void ApplyTransitionMotion(Ease ease) { }

	// RVA: 0x244C508 Offset: 0x2448508 VA: 0x244C508
	public void CompleteMotion() { }

	// RVA: 0x244C520 Offset: 0x2448520 VA: 0x244C520
	private void TransitionToClosest() { }

	// RVA: 0x244C81C Offset: 0x244881C VA: 0x244C81C
	private void OnFingerSwipe(LeanFinger finger) { }

	// RVA: 0x244C9B4 Offset: 0x24489B4 VA: 0x244C9B4
	private void OnFingerDown(LeanFinger finger) { }

	// RVA: 0x244CB4C Offset: 0x2448B4C VA: 0x244CB4C
	private void OnFingerUp(LeanFinger finger) { }

	// RVA: 0x244CC34 Offset: 0x2448C34 VA: 0x244CC34
	private void OnFingerUpdate(LeanFinger finger) { }

	// RVA: 0x244CA38 Offset: 0x2448A38 VA: 0x244CA38
	private float GetSlideOffset() { }

	// RVA: 0x244C8E4 Offset: 0x24488E4 VA: 0x244C8E4
	private bool IsInputBlocked(LeanFinger finger) { }

	// RVA: 0x244ACF0 Offset: 0x2446CF0 VA: 0x244ACF0
	public void AddListener(Action<PageMonitorBase> listener) { }

	// RVA: 0x244C490 Offset: 0x2448490 VA: 0x244C490
	private Vector2 GetPageTargetPosition(int idx) { }

	// RVA: 0x244CEBC Offset: 0x2448EBC VA: 0x244CEBC
	private float GetPageWidth(int idx) { }

	// RVA: 0x244B890 Offset: 0x2447890 VA: 0x244B890
	public void EnableInput() { }

	// RVA: 0x244B7F8 Offset: 0x24477F8 VA: 0x244B7F8
	public void DisableInput() { }

	// RVA: 0x244B910 Offset: 0x2447910 VA: 0x244B910
	public PageMonitorBase GetCurrentPageMonitor() { }

	// RVA: 0x244B994 Offset: 0x2447994 VA: 0x244B994
	public bool IsInTransition() { }
}

