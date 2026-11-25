// Namespace: 
public sealed class CloudSaveConflict // TypeDefIndex: 4674
{
	// Fields
	public bool Resolved; // 0x10
	public CloudSaveConflictResolution Resolution; // 0x14
	public ICloudPrefsStore LocalSave; // 0x18
	public ICloudPrefsStore CloudSave; // 0x20
	public DateTimeOffset CloudLastWritten; // 0x28
	private bool _isMessagePublished; // 0x38
	public static bool CloudChosen; // 0x0

	// Properties
	public int LocalLevel { get; }
	public int CloudLevel { get; }
	public int LocalCoin { get; }
	public int CloudCoin { get; }
	private static string LevelKey { get; }
	private static string GoldKey { get; }

	// Methods

	// RVA: 0x24EB790 Offset: 0x24E7790 VA: 0x24EB790
	public void Resolve(CloudSaveConflictResolution conflictResolution) { }

	// RVA: 0x24EB7FC Offset: 0x24E77FC VA: 0x24EB7FC
	public bool PublishMessage() { }

	[AsyncStateMachine(typeof(CloudSaveConflict.<OnConflictResolved>d__9))]
	// RVA: 0x24EB8FC Offset: 0x24E78FC VA: 0x24EB8FC
	public UniTask<CloudSaveConflictResolution> OnConflictResolved(CancellationToken cancellationToken) { }

	// RVA: 0x24EBA0C Offset: 0x24E7A0C VA: 0x24EBA0C
	public int get_LocalLevel() { }

	// RVA: 0x24EBB94 Offset: 0x24E7B94 VA: 0x24EBB94
	public int get_CloudLevel() { }

	// RVA: 0x24EBBB0 Offset: 0x24E7BB0 VA: 0x24EBBB0
	public int get_LocalCoin() { }

	// RVA: 0x24EBC34 Offset: 0x24E7C34 VA: 0x24EBC34
	public int get_CloudCoin() { }

	// RVA: 0x24EBA28 Offset: 0x24E7A28 VA: 0x24EBA28
	private static string get_LevelKey() { }

	// RVA: 0x24EBBCC Offset: 0x24E7BCC VA: 0x24EBBCC
	private static string get_GoldKey() { }

	// RVA: 0x24EBA80 Offset: 0x24E7A80 VA: 0x24EBA80
	private static int ReadInt(ICloudPrefsStore store, string key) { }

	// RVA: 0x24EBC50 Offset: 0x24E7C50 VA: 0x24EBC50
	public void .ctor() { }
}

