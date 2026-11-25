// Namespace: 
public sealed class LoopSortConflictResolver : IConflictResolver // TypeDefIndex: 14942
{
	// Fields
	[CompilerGenerated]
	private static CloudSaveConflict <Conflict>k__BackingField; // 0x0
	[CompilerGenerated]
	private static bool <Enabled>k__BackingField; // 0x8
	[CompilerGenerated]
	private static bool <HasException>k__BackingField; // 0x9

	// Properties
	public static CloudSaveConflict Conflict { get; set; }
	public static bool Enabled { get; set; }
	public static bool HasException { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x223D9D8 Offset: 0x22399D8 VA: 0x223D9D8
	public static CloudSaveConflict get_Conflict() { }

	[CompilerGenerated]
	// RVA: 0x223DA20 Offset: 0x2239A20 VA: 0x223DA20
	private static void set_Conflict(CloudSaveConflict value) { }

	[CompilerGenerated]
	// RVA: 0x223DA78 Offset: 0x2239A78 VA: 0x223DA78
	public static bool get_Enabled() { }

	[CompilerGenerated]
	// RVA: 0x223DAC0 Offset: 0x2239AC0 VA: 0x223DAC0
	private static void set_Enabled(bool value) { }

	[CompilerGenerated]
	// RVA: 0x223DB10 Offset: 0x2239B10 VA: 0x223DB10
	public static bool get_HasException() { }

	[CompilerGenerated]
	// RVA: 0x223DB58 Offset: 0x2239B58 VA: 0x223DB58
	private static void set_HasException(bool value) { }

	[AsyncStateMachine(typeof(LoopSortConflictResolver.<Resolve>d__12))]
	// RVA: 0x223DBA8 Offset: 0x2239BA8 VA: 0x223DBA8 Slot: 4
	public Task<ConflictResolution> Resolve(List<ConflictInfo> conflicts, CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(LoopSortConflictResolver.<HandleResolve>d__13))]
	// RVA: 0x223DCE4 Offset: 0x2239CE4 VA: 0x223DCE4
	private Task<ConflictResolution> HandleResolve(List<ConflictInfo> conflicts, CancellationToken cancellationToken) { }

	// RVA: 0x223DE20 Offset: 0x2239E20 VA: 0x223DE20
	public static void SetEnabled(bool enabled) { }

	// RVA: 0x223DE70 Offset: 0x2239E70 VA: 0x223DE70
	public static void ClearException() { }

	// RVA: 0x223DEB0 Offset: 0x2239EB0 VA: 0x223DEB0
	private static bool TryBuildConflict(List<ConflictInfo> conflicts, out CloudSaveConflict cloudSaveConflict) { }

	// RVA: 0x223E26C Offset: 0x223A26C VA: 0x223E26C
	private bool TryAutoResolve(CloudSaveConflict conflict, out ConflictResolution resolution) { }

	// RVA: 0x223E328 Offset: 0x223A328 VA: 0x223E328
	public void .ctor() { }
}

