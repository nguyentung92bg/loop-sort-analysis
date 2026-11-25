// Namespace: 
public sealed class LiveOpsData : Data // TypeDefIndex: 5232
{
	// Fields
	public GenericDictionary<LiveOps, LiveOpsData.Data> DataByType; // 0x18
	public GenericDictionary<string, GenericDictionary<LiveOps, LiveOpsData.Data>> Skins; // 0x20

	// Methods

	// RVA: 0x256FF6C Offset: 0x256BF6C VA: 0x256FF6C
	public LiveOpsData.Data GetData(LiveOps type, string skin) { }

	// RVA: 0x257007C Offset: 0x256C07C VA: 0x257007C
	public void .ctor() { }
}

