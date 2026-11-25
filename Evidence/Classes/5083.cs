// Namespace: 
internal sealed class BehaviourSet<T> : IBehaviourSet // TypeDefIndex: 5083
{
	// Fields
	private readonly HashSet<T> _set; // 0x0

	// Properties
	public IEnumerable Raw { get; }
	public int Count { get; }

	// Methods

	// RVA: -1 Offset: -1 Slot: 4
	public IEnumerable get_Raw() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x27F3360 Offset: 0x27EF360 VA: 0x27F3360
	|-BehaviourSet<object>.get_Raw
	*/

	// RVA: -1 Offset: -1 Slot: 5
	public int get_Count() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x27F3368 Offset: 0x27EF368 VA: 0x27F3368
	|-BehaviourSet<object>.get_Count
	*/

	// RVA: -1 Offset: -1 Slot: 6
	public void Add(GameBehaviourBase b) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x27F3380 Offset: 0x27EF380 VA: 0x27F3380
	|-BehaviourSet<object>.Add
	*/

	// RVA: -1 Offset: -1 Slot: 7
	public void Remove(GameBehaviourBase b) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x27F340C Offset: 0x27EF40C VA: 0x27F340C
	|-BehaviourSet<object>.Remove
	*/

	// RVA: -1 Offset: -1 Slot: 8
	public void Clear() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x27F3498 Offset: 0x27EF498 VA: 0x27F3498
	|-BehaviourSet<object>.Clear
	*/

	// RVA: -1 Offset: -1 Slot: 9
	public bool TryGetFirst(out GameBehaviourBase result) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x27F34B8 Offset: 0x27EF4B8 VA: 0x27F34B8
	|-BehaviourSet<object>.TryGetFirst
	*/

	// RVA: -1 Offset: -1
	public void .ctor() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x27F3650 Offset: 0x27EF650 VA: 0x27F3650
	|-BehaviourSet<object>..ctor
	*/
}

