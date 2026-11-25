// Namespace: 
public interface IBlockContainer // TypeDefIndex: 4417
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract UniTask AddBlock(Block block, float delay = 0, bool motion = True, int lateralIdx = 0);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void RemoveBlock(Block block);
}

