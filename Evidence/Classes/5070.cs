// Namespace: 
public interface IRemoteConfigProvider // TypeDefIndex: 5070
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract UniTask Fetch();

	// RVA: -1 Offset: -1 Slot: 1
	public abstract T GetDataClassNew<T>();

	// RVA: -1 Offset: -1 Slot: 2
	public abstract string[] GetActiveCohortNames();
}

