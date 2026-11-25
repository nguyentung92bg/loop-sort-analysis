// Namespace: 
public sealed class AssetModule : ModuleBase // TypeDefIndex: 4875
{
	// Fields
	[Inject]
	private IPublisher<AssetLoadStartMessage> _assetLoadStartPub; // 0x10
	[Inject]
	private IPublisher<AssetLoadCompleteMessage> _assetLoadCompletePub; // 0x18
	private readonly HashSet<AsyncOperationHandle> _assetHandles; // 0x20

	// Methods

	// RVA: 0x252FAD8 Offset: 0x252BAD8 VA: 0x252FAD8
	public void AddAssetHandle(AsyncOperationHandle handle) { }

	[AsyncStateMachine(typeof(AssetModule.<WaitLoad>d__4))]
	// RVA: 0x252FC1C Offset: 0x252BC1C VA: 0x252FC1C
	private UniTaskVoid WaitLoad(AsyncOperationHandle handle) { }

	// RVA: 0x252FCD4 Offset: 0x252BCD4 VA: 0x252FCD4
	public void .ctor() { }
}

