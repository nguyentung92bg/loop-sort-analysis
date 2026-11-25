// Namespace: 
public sealed class Colors : Data // TypeDefIndex: 4704
{
	// Fields
	public GenericDictionary<ColorType, Colors.Data> Collection; // 0x18
	private readonly Dictionary<Material, ColorType> _colorTypeByMaterial; // 0x20

	// Methods

	// RVA: 0x24F5718 Offset: 0x24F1718 VA: 0x24F5718
	public Colors.Data Get(ColorType colorType) { }

	// RVA: 0x24F97A4 Offset: 0x24F57A4 VA: 0x24F97A4
	public ColorType FindColorType(Material material) { }

	// RVA: 0x24F9B28 Offset: 0x24F5B28 VA: 0x24F9B28
	public void .ctor() { }
}

