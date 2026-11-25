// Namespace: 
public sealed class RendererPropertyRegistry : MonoBehaviour // TypeDefIndex: 5582
{
	// Fields
	[SerializeField]
	private List<Renderer> Renderers; // 0x20
	[SerializeField]
	private List<RendererPropertyRegistry.PropertyDefinition> PropertyDefinitions; // 0x28
	private readonly List<RendererPropertyRegistry.ShaderPropertyTarget> _shaderPropertyTargets; // 0x30

	// Methods

	// RVA: 0x249C98C Offset: 0x249898C VA: 0x249C98C
	public List<RendererPropertyRegistry.ShaderPropertyTarget> GetTargets(string propertyKey) { }

	// RVA: 0x249CC44 Offset: 0x2498C44 VA: 0x249CC44
	public void AddRenderer(Renderer r) { }

	// RVA: 0x249CC9C Offset: 0x2498C9C VA: 0x249CC9C
	public void RemoveRenderer(Renderer r) { }

	// RVA: 0x249CCF4 Offset: 0x2498CF4 VA: 0x249CCF4
	public void RemoveAllRenderers() { }

	// RVA: 0x249CD90 Offset: 0x2498D90 VA: 0x249CD90
	public void .ctor() { }
}

