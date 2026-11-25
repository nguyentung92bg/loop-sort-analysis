// Namespace: 
internal interface IBehaviourSet // TypeDefIndex: 5082
{
	// Properties
	public abstract IEnumerable Raw { get; }
	public abstract int Count { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract IEnumerable get_Raw();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract int get_Count();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract void Add(GameBehaviourBase b);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void Remove(GameBehaviourBase b);

	// RVA: -1 Offset: -1 Slot: 4
	public abstract void Clear();

	// RVA: -1 Offset: -1 Slot: 5
	public abstract bool TryGetFirst(out GameBehaviourBase result);
}

