// Namespace: 
public sealed class SceneRegistry : IStartable, IDisposable // TypeDefIndex: 5081
{
	// Fields
	[Inject]
	private ISubscriber<GameBehaviourRentedMessage> _gameBehaviourRentedSub; // 0x10
	[Inject]
	private ISubscriber<GameBehaviourReturnedMessage> _gameBehaviourReturnedSub; // 0x18
	private readonly Dictionary<Type, IBehaviourSet> _map; // 0x20
	private IDisposable _messages; // 0x28

	// Methods

	// RVA: -1 Offset: -1
	public PooledObject<List<T>> ActiveOf<T>(out List<T> result) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x26B5FD0 Offset: 0x26B1FD0 VA: 0x26B5FD0
	|-SceneRegistry.ActiveOf<object>
	*/

	// RVA: -1 Offset: -1
	public PooledObject<List<T>> AllOf<T>(out List<T> result) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x26B63EC Offset: 0x26B23EC VA: 0x26B63EC
	|-SceneRegistry.AllOf<object>
	*/

	// RVA: -1 Offset: -1
	public void ForEach<T>(Action<T> action) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x26B694C Offset: 0x26B294C VA: 0x26B694C
	|-SceneRegistry.ForEach<object>
	*/

	// RVA: -1 Offset: -1
	public T Any<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x26B665C Offset: 0x26B265C VA: 0x26B665C
	|-SceneRegistry.Any<object>
	*/

	// RVA: -1 Offset: -1
	public bool TryAny<T>(out T result) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x26B6CC0 Offset: 0x26B2CC0 VA: 0x26B6CC0
	|-SceneRegistry.TryAny<object>
	*/

	// RVA: -1 Offset: -1
	public int CountOf<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x26B6830 Offset: 0x26B2830 VA: 0x26B6830
	|-SceneRegistry.CountOf<object>
	*/

	// RVA: -1 Offset: -1
	public int ActiveCountOf<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x26B5C88 Offset: 0x26B1C88 VA: 0x26B5C88
	|-SceneRegistry.ActiveCountOf<object>
	*/

	// RVA: 0x2553B14 Offset: 0x254FB14 VA: 0x2553B14 Slot: 4
	public void Start() { }

	// RVA: 0x2553D50 Offset: 0x254FD50 VA: 0x2553D50 Slot: 5
	public void Dispose() { }

	// RVA: 0x2554038 Offset: 0x2550038 VA: 0x2554038
	private void OnGameBehaviourRented(GameBehaviourRentedMessage m) { }

	// RVA: 0x255430C Offset: 0x255030C VA: 0x255430C
	private void OnGameBehaviourReturned(GameBehaviourReturnedMessage m) { }

	// RVA: 0x25544AC Offset: 0x25504AC VA: 0x25544AC
	public void .ctor() { }
}

