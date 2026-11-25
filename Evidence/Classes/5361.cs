// Namespace: 
public sealed class AreasMonitor : PageMonitorBase, LoopScrollPrefabSource, LoopScrollDataSource, LoopScrollSizeHelper // TypeDefIndex: 5361
{
	// Fields
	[Inject]
	private SheetContainer _sheetContainer; // 0x98
	[Inject]
	private Areas _areas; // 0xA0
	[Inject]
	private Shop _shop; // 0xA8
	[Inject]
	private HomeMonitor _homeMonitor; // 0xB0
	[SerializeField]
	private GameObject _journeyItemPrefab; // 0xB8
	private const float LastPoleExtra = 170;
	private const float JointBelowReward = 92;
	private const float JointBelowCard = 34;
	private const float FillTopHideMargin = 40;
	private const float FollowSharpness = 10;
	private const float FinishDuration = 1.8;
	private const float ScrollDuration = 0.5;
	private const float CloudSpace = 430;
	private const string LevelLabelColor = "#9A7660";
	private const string LevelNumberColor = "#3E2A1F";
	private readonly Dictionary<StatefulComponent, AreasMonitor.AreaView> _areaViews; // 0xC0
	private readonly Dictionary<StatefulComponent, StateRole> _stateByView; // 0xC8
	private AreasScrollRect _scrollRect; // 0xD0
	private RectTransform _viewportT; // 0xD8
	private bool _isJourney; // 0xE0
	private float _cardHeight; // 0xE4
	private float _lineOverflow; // 0xE8
	private float _lineBottom; // 0xEC
	private float _capBottom; // 0xF0
	private float _capTop; // 0xF4
	private float _plateHeight; // 0xF8
	private RectOffset _rewardsPadding; // 0x100
	private float _rewardsSpacing; // 0x108
	private Vector2 _lockPosition; // 0x10C
	private float _darkAlpha; // 0x114
	private Nullable<float> _displayLevel; // 0x118
	private float _finishFill; // 0x120
	private CanvasGroup _topBottomGroup; // 0x128
	private UniTimer _topBottomTimer; // 0x130
	private MotionHandle _topBottomMotion; // 0x140
	private MotionHandle _scrollMotion; // 0x14C

	// Properties
	private float DisplayLevel { get; }

	// Methods

	// RVA: 0x2434050 Offset: 0x2430050 VA: 0x2434050
	private float get_DisplayLevel() { }

	// RVA: 0x24341A0 Offset: 0x24301A0 VA: 0x24341A0 Slot: 13
	public override void Setup() { }

	// RVA: 0x243484C Offset: 0x243084C VA: 0x243484C Slot: 15
	public override void OnActivated() { }

	// RVA: 0x2434C28 Offset: 0x2430C28 VA: 0x2434C28 Slot: 17
	public override void OnTransition() { }

	// RVA: 0x24349B0 Offset: 0x24309B0 VA: 0x24349B0
	private void FocusLevel(AreaSheet.Row area) { }

	// RVA: 0x2434E68 Offset: 0x2430E68 VA: 0x2434E68
	private ValueTuple<StatefulComponent, AreasMonitor.AreaView> FindAreaView(AreaSheet.Row area) { }

	// RVA: 0x2434624 Offset: 0x2430624 VA: 0x2434624
	private void SetupTopBottom() { }

	// RVA: 0x24353BC Offset: 0x24313BC VA: 0x24353BC
	private void ScrollToEnd(bool top) { }

	[AsyncStateMachine(typeof(AreasMonitor.<ShowTopBottom>d__46))]
	// RVA: 0x2435520 Offset: 0x2431520 VA: 0x2435520
	private UniTaskVoid ShowTopBottom() { }

	// RVA: 0x24355AC Offset: 0x24315AC VA: 0x24355AC Slot: 18
	public GameObject GetObject(int index) { }

	// RVA: 0x24355E0 Offset: 0x24315E0 VA: 0x24355E0 Slot: 19
	public void ReturnObject(Transform t) { }

	// RVA: 0x2435660 Offset: 0x2431660 VA: 0x2435660 Slot: 20
	public void ProvideData(Transform t, int idx) { }

	// RVA: 0x2435728 Offset: 0x2431728 VA: 0x2435728
	private void CreateElement(StatefulComponent view, AreaSheet.Row data, int idx) { }

	// RVA: 0x2436A04 Offset: 0x2432A04 VA: 0x2436A04
	private void OnUseClicked(AreaSheet.Row area) { }

	// RVA: 0x2435A6C Offset: 0x2431A6C VA: 0x2435A6C
	private void CreateRewards(StatefulComponent view, AreaSheet.Row data) { }

	// RVA: 0x2436CF8 Offset: 0x2432CF8 VA: 0x2436CF8
	private bool IsClouded(AreaSheet.Row area) { }

	// RVA: 0x24370D8 Offset: 0x24330D8 VA: 0x24370D8 Slot: 21
	public Vector2 GetItemsSize(int itemsCount) { }

	// RVA: 0x2436E0C Offset: 0x2432E0C VA: 0x2436E0C
	private void PlaceJoints(StatefulComponent view, AreasMonitor.AreaView areaView, bool isLast) { }

	// RVA: 0x2436B34 Offset: 0x2432B34 VA: 0x2436B34
	private static string FormatJourneyLevel(int level) { }

	// RVA: 0x2436DBC Offset: 0x2432DBC VA: 0x2436DBC
	private static float GetHeightFromBottom(RectTransform parent, RectTransform child) { }

	// RVA: 0x2434C48 Offset: 0x2430C48 VA: 0x2434C48
	private void RenderElements(bool animate) { }

	// RVA: 0x243650C Offset: 0x243250C VA: 0x243650C
	private void RenderElement(StatefulComponent view, bool animate) { }

	// RVA: 0x24374F4 Offset: 0x24334F4 VA: 0x24374F4
	private void RenderMarker(StatefulComponent view, AreasMonitor.AreaView areaView, float level, float fill) { }

	// RVA: 0x243517C Offset: 0x243117C VA: 0x243517C
	private float GetFill(AreasMonitor.AreaView areaView, float level) { }

	// RVA: 0x24373C8 Offset: 0x24333C8 VA: 0x24373C8
	private void SetState(StatefulComponent view, StateRole state, bool animate) { }

	// RVA: 0x24377AC Offset: 0x24337AC VA: 0x24377AC
	private void PlayComplete(StatefulComponent view, float scale) { }

	[AsyncStateMachine(typeof(AreasMonitor.<PlayPop>d__64))]
	// RVA: 0x2437934 Offset: 0x2433934 VA: 0x2437934
	private UniTaskVoid PlayPop(Transform t, float scale) { }

	[AsyncStateMachine(typeof(AreasMonitor.<PlayUnlock>d__65))]
	// RVA: 0x24376FC Offset: 0x24336FC VA: 0x24376FC
	private UniTaskVoid PlayUnlock(StatefulComponent view) { }

	[AsyncStateMachine(typeof(AreasMonitor.<PlayProgress>d__66))]
	// RVA: 0x24379F0 Offset: 0x24339F0 VA: 0x24379F0
	public UniTask PlayProgress(int fromLevel, int toLevel, CancellationToken token) { }

	// RVA: 0x2437ABC Offset: 0x2433ABC VA: 0x2437ABC
	private int GetLastLevel() { }

	// RVA: 0x2437B6C Offset: 0x2433B6C VA: 0x2437B6C
	private void FollowFill(float level) { }

	// RVA: 0x2437D38 Offset: 0x2433D38 VA: 0x2437D38
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x2437E1C Offset: 0x2433E1C VA: 0x2437E1C
	private void <SetupTopBottom>b__44_0() { }

	[CompilerGenerated]
	// RVA: 0x2437E24 Offset: 0x2433E24 VA: 0x2437E24
	private void <SetupTopBottom>b__44_1() { }

	[CompilerGenerated]
	// RVA: 0x2437E2C Offset: 0x2433E2C VA: 0x2437E2C
	private void <SetupTopBottom>b__44_2(Vector2 _) { }

	[CompilerGenerated]
	// RVA: 0x2437E50 Offset: 0x2433E50 VA: 0x2437E50
	private void <SetupTopBottom>b__44_3() { }

	[CompilerGenerated]
	// RVA: 0x2437E6C Offset: 0x2433E6C VA: 0x2437E6C
	private void <ScrollToEnd>b__45_0(float d) { }
}

