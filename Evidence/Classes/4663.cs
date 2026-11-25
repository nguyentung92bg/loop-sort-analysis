// Namespace: 
[Extension]
public static class Extensions // TypeDefIndex: 4663
{
	// Fields
	private const int MinColor = 1;
	private const int MaxColor = 13;
	private const int ColorCount = 13;
	private static readonly Dictionary<BoosterType, Item> BoosterItemByBoosterType; // 0x0
	private static readonly MaterialPropertyBlock PropertyBlock; // 0x8
	private static readonly StringBuilder Builder; // 0x10
	private static readonly char[] DigitBuffer; // 0x18

	// Methods

	[Extension]
	// RVA: 0x24E5DF4 Offset: 0x24E1DF4 VA: 0x24E5DF4
	public static string ToAnalyticsName(BoosterType booster) { }

	[Extension]
	// RVA: 0x24E5F54 Offset: 0x24E1F54 VA: 0x24E5F54
	public static string ToInGamePurchasePlacement(BoosterType booster) { }

	[Extension]
	// RVA: 0x24E5FE8 Offset: 0x24E1FE8 VA: 0x24E5FE8
	public static string ToLocalizedName(BoosterType booster) { }

	[Extension]
	// RVA: 0x24E60D4 Offset: 0x24E20D4 VA: 0x24E60D4
	public static string ToLocalizedDesc(BoosterType booster) { }

	[Extension]
	// RVA: 0x24E61C0 Offset: 0x24E21C0 VA: 0x24E61C0
	public static ColorType ShiftColor(ColorType colorType, int shift) { }

	// RVA: 0x24E626C Offset: 0x24E226C VA: 0x24E626C
	private static BaseColor WrapBaseColor(BaseColor baseColor, int shift) { }

	[Extension]
	// RVA: 0x24E62A8 Offset: 0x24E22A8 VA: 0x24E62A8
	public static string ToAnalyticsName(FeatureType feature) { }

	[Extension]
	// RVA: 0x24E63C8 Offset: 0x24E23C8 VA: 0x24E63C8
	public static Vector2Int ToVector2Int(Direction direction) { }

	[Extension]
	// RVA: 0x24E6420 Offset: 0x24E2420 VA: 0x24E6420
	public static Quaternion ToLookRotation(Direction direction) { }

	[Extension]
	// RVA: 0x24E65EC Offset: 0x24E25EC VA: 0x24E65EC
	public static double TravelUnclamped(SplineFollower f, double start, float distance, Spline.Direction direction = 1) { }

	[Extension]
	// RVA: 0x24E666C Offset: 0x24E266C VA: 0x24E666C
	public static double TravelUnclamped(SplineComputer s, double start, float distance, Spline.Direction direction = 1) { }

	[Extension]
	// RVA: 0x24E6704 Offset: 0x24E2704 VA: 0x24E6704
	public static float CalculateLengthUnclamped(SplineComputer s, double from, double to) { }

	[Extension]
	// RVA: 0x24E6778 Offset: 0x24E2778 VA: 0x24E6778
	public static bool IsInRange(SplineComputer s, double current, double from, double to) { }

	[Extension]
	// RVA: 0x24E67A8 Offset: 0x24E27A8 VA: 0x24E67A8
	public static float DistanceTo(SplineComputer s, double from, double to) { }

	[Extension]
	// RVA: 0x24E6818 Offset: 0x24E2818 VA: 0x24E6818
	public static float Angle(SplineComputer s, double from, double to) { }

	[Extension]
	// RVA: 0x24E6960 Offset: 0x24E2960 VA: 0x24E6960
	public static float SignedAngle(SplineComputer s, double from, double to) { }

	[Extension]
	// RVA: 0x24E5D5C Offset: 0x24E1D5C VA: 0x24E5D5C
	public static Item ToEconomyItem(BoosterType boosterType) { }

	[Extension]
	// RVA: 0x24E6A2C Offset: 0x24E2A2C VA: 0x24E6A2C
	public static bool IsBooster(Item item) { }

	[Extension]
	// RVA: 0x24E6AC0 Offset: 0x24E2AC0 VA: 0x24E6AC0
	public static TextRole ToTextRole(Item item) { }

	[Extension]
	// RVA: 0x24E6AE4 Offset: 0x24E2AE4 VA: 0x24E6AE4
	public static ObjectRole ToObjectRole(Item item) { }

	[Extension]
	// RVA: 0x24E6B08 Offset: 0x24E2B08 VA: 0x24E6B08
	public static void RebuildLayout(LayoutGroup layoutGroup) { }

	[Extension]
	// RVA: -1 Offset: -1
	public static MotionHandle BindToLocalScaleNonNegative<TOptions, TAdapter>(MotionBuilder<Vector3, TOptions, TAdapter> builder, Transform transform) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x25EEBEC Offset: 0x25EABEC VA: 0x25EEBEC
	|-Extensions.BindToLocalScaleNonNegative<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>
	*/

	[Extension]
	// RVA: -1 Offset: -1
	public static MotionHandle BindToBlendShape<TOptions, TAdapter>(MotionBuilder<float, TOptions, TAdapter> builder, SkinnedMeshRenderer renderer, int idx) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x25EE300 Offset: 0x25EA300 VA: 0x25EE300
	|-Extensions.BindToBlendShape<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>
	*/

	[Extension]
	// RVA: -1 Offset: -1
	public static MotionHandle BindToFollowerSpeed<TOptions, TAdapter>(MotionBuilder<float, TOptions, TAdapter> builder, SplineFollower follower) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x25EE624 Offset: 0x25EA624 VA: 0x25EE624
	|-Extensions.BindToFollowerSpeed<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>
	*/

	[Extension]
	// RVA: -1 Offset: -1
	public static MotionHandle BindToTransitionRate<TOptions, TAdapter>(MotionBuilder<float, TOptions, TAdapter> builder, UIEffect uiEffect) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x25EF0B8 Offset: 0x25EB0B8 VA: 0x25EF0B8
	|-Extensions.BindToTransitionRate<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>
	*/

	[Extension]
	// RVA: -1 Offset: -1
	public static MotionHandle BindToCenterOffset<TOptions, TAdapter>(MotionBuilder<Vector2, TOptions, TAdapter> builder, CinemachineGroupFraming groupFraming) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x25EE4B8 Offset: 0x25EA4B8 VA: 0x25EE4B8
	|-Extensions.BindToCenterOffset<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>
	*/

	[Extension]
	// RVA: -1 Offset: -1
	public static MotionHandle BindToTimeScale<TOptions, TAdapter>(MotionBuilder<float, TOptions, TAdapter> builder) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x25EEF5C Offset: 0x25EAF5C VA: 0x25EEF5C
	|-Extensions.BindToTimeScale<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>
	*/

	[Extension]
	// RVA: -1 Offset: -1
	public static MotionHandle BindToPropertyBlock<TOptions, TAdapter>(MotionBuilder<float, TOptions, TAdapter> builder, Renderer r, string propertyName, int idx = 0) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x25EED58 Offset: 0x25EAD58 VA: 0x25EED58
	|-Extensions.BindToPropertyBlock<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>
	*/

	[Extension]
	// RVA: -1 Offset: -1
	public static MotionHandle BindToJump<TOptions, TAdapter>(MotionBuilder<float, TOptions, TAdapter> builder, Transform transform, Vector3 toPosition, float jumpPower) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x25EE790 Offset: 0x25EA790 VA: 0x25EE790
	|-Extensions.BindToJump<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>
	*/

	[Extension]
	// RVA: -1 Offset: -1
	public static MotionHandle BindToLocalScaleAround<TOptions, TAdapter>(MotionBuilder<Vector3, TOptions, TAdapter> builder, Transform t, Vector3 pivot) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x25EE9DC Offset: 0x25EA9DC VA: 0x25EE9DC
	|-Extensions.BindToLocalScaleAround<__Il2CppFullySharedGenericStructType, __Il2CppFullySharedGenericStructType>
	*/

	[Extension]
	// RVA: 0x24D83F4 Offset: 0x24D43F4 VA: 0x24D83F4
	public static MotionHandle AddTo(MotionHandle handle, GameBehaviourBase target) { }

	[Extension]
	// RVA: 0x24E6BCC Offset: 0x24E2BCC VA: 0x24E6BCC
	public static bool HasPlayingMotions(CompositeMotionHandle motions) { }

	[AsyncStateMachine(typeof(Extensions.<WaitUntilComplete>d__37))]
	[Extension]
	// RVA: 0x24E6D68 Offset: 0x24E2D68 VA: 0x24E6D68
	public static UniTask WaitUntilComplete(TrackEntry trackEntry, CancellationToken token) { }

	[AsyncStateMachine(typeof(Extensions.<WaitUntilFirstEvent>d__38))]
	[Extension]
	// RVA: 0x24E6E20 Offset: 0x24E2E20 VA: 0x24E6E20
	public static UniTask WaitUntilFirstEvent(TrackEntry trackEntry, CancellationToken token) { }

	[Extension]
	// RVA: 0x24E6ED4 Offset: 0x24E2ED4 VA: 0x24E6ED4
	public static void SetTextWithoutInvalidChars(TMP_Text text, string sourceText) { }

	[Extension]
	// RVA: 0x24E7038 Offset: 0x24E3038 VA: 0x24E7038
	public static string ToReadableString(TimeSpan timeSpan, int maxUnits = 2) { }

	// RVA: 0x24E726C Offset: 0x24E326C VA: 0x24E726C
	private static void AppendUnit(int value, string locKey, int maxUnits, ref int count) { }

	// RVA: 0x24E73A8 Offset: 0x24E33A8 VA: 0x24E73A8
	private static void AppendInt(int value) { }

	[Extension]
	// RVA: 0x24E74E4 Offset: 0x24E34E4 VA: 0x24E74E4
	public static string ToAnalyticsName(Item item) { }

	[Extension]
	// RVA: 0x24E7680 Offset: 0x24E3680 VA: 0x24E7680
	public static CloudPrefsInt GetPrefs(Item item, int defaultValue = 0) { }

	[Extension]
	// RVA: 0x24E7724 Offset: 0x24E3724 VA: 0x24E7724
	public static string ToDisplayName(AuthType authType) { }

	[Extension]
	// RVA: 0x24E7828 Offset: 0x24E3828 VA: 0x24E7828
	public static bool IsAutoLinkType(AuthType authType) { }

	[Extension]
	// RVA: 0x24E7838 Offset: 0x24E3838 VA: 0x24E7838
	public static bool HasTracking(LiveOps liveOps) { }

	[Extension]
	// RVA: 0x24E78AC Offset: 0x24E38AC VA: 0x24E78AC
	public static string ToAnalyticsName(LiveOps liveOps) { }

	[Extension]
	// RVA: 0x24E79A8 Offset: 0x24E39A8 VA: 0x24E79A8
	public static Item ToItem(LiveOps liveOps) { }

	[Extension]
	// RVA: 0x24E79D0 Offset: 0x24E39D0 VA: 0x24E79D0
	public static LiveOpsBase ToClassInstance(LiveOps liveOps) { }

	[Extension]
	// RVA: 0x24E7B3C Offset: 0x24E3B3C VA: 0x24E7B3C
	public static Type ToClassType(LiveOps liveOps) { }

	[Extension]
	// RVA: 0x24E8090 Offset: 0x24E4090 VA: 0x24E8090
	public static string ToProductId(LiveOps liveOps) { }

	[Extension]
	// RVA: 0x24E8184 Offset: 0x24E4184 VA: 0x24E8184
	public static string ToLocalizedName(LiveOps liveOps) { }

	[Extension]
	// RVA: 0x24E8258 Offset: 0x24E4258 VA: 0x24E8258
	public static string ToLocalizedName(AreaType type) { }

	[Extension]
	// RVA: 0x24E832C Offset: 0x24E432C VA: 0x24E832C
	public static string ToDescription(WeeklyMissionSheet.MissionArgs args) { }

	[Extension]
	// RVA: 0x24E842C Offset: 0x24E442C VA: 0x24E842C
	public static TextRole ToTextRole(AuthType authType) { }

	// RVA: 0x24E84B8 Offset: 0x24E44B8 VA: 0x24E84B8
	private static void .cctor() { }
}

