// Namespace: 
public sealed class CoreStreakPlayingElement : ElementBase // TypeDefIndex: 5283
{
	// Fields
	[Inject]
	private CoreStreak _coreStreak; // 0x28
	[Inject]
	private IPublisher<CoreStreakRocketFireMessage> _coreStreakRocketFirePub; // 0x30
	private int _itemCount; // 0x38

	// Methods

	// RVA: 0x2418D44 Offset: 0x2414D44 VA: 0x2418D44
	public void OnAnimationEnd() { }

	[AsyncStateMachine(typeof(CoreStreakPlayingElement.<ApplyItemMotion>d__4))]
	// RVA: 0x2418E28 Offset: 0x2414E28 VA: 0x2418E28
	public UniTask ApplyItemMotion() { }

	// RVA: 0x2418EC4 Offset: 0x2414EC4 VA: 0x2418EC4
	public void .ctor() { }
}

