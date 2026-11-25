// Namespace: 
public sealed class RemoteConfigModule : ModuleBase // TypeDefIndex: 5069
{
	// Fields
	[Inject]
	private IRemoteConfigProvider _provider; // 0x10

	// Methods

	// RVA: 0x25536EC Offset: 0x254F6EC VA: 0x25536EC
	public UniTask Fetch() { }

	// RVA: -1 Offset: -1
	public T GetDataClassNew<T>() { }
	/* GenericInstMethod :
	|
	|-RVA: 0x26A494C Offset: 0x26A094C VA: 0x26A494C
	|-RemoteConfigModule.GetDataClassNew<object>
	*/

	// RVA: 0x255378C Offset: 0x254F78C VA: 0x255378C
	public string[] GetActiveCohortNames() { }

	// RVA: 0x2553830 Offset: 0x254F830 VA: 0x2553830
	public void .ctor() { }
}

