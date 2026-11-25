// Namespace: 
[Serializable]
public struct ColorType : IEquatable<ColorType> // TypeDefIndex: 4707
{
	// Fields
	[CompilerGenerated]
	[SerializeField]
	private BaseColor <Base>k__BackingField; // 0x0
	[CompilerGenerated]
	[SerializeField]
	private ColorShade <Shade>k__BackingField; // 0x4

	// Properties
	public BaseColor Base { get; set; }
	public ColorShade Shade { get; set; }

	// Methods

	[IsReadOnly]
	[CompilerGenerated]
	// RVA: 0x24F9BB8 Offset: 0x24F5BB8 VA: 0x24F9BB8
	public BaseColor get_Base() { }

	[CompilerGenerated]
	// RVA: 0x24F9BC0 Offset: 0x24F5BC0 VA: 0x24F9BC0
	private void set_Base(BaseColor value) { }

	[IsReadOnly]
	[CompilerGenerated]
	// RVA: 0x24F9BC8 Offset: 0x24F5BC8 VA: 0x24F9BC8
	public ColorShade get_Shade() { }

	[CompilerGenerated]
	// RVA: 0x24F9BD0 Offset: 0x24F5BD0 VA: 0x24F9BD0
	private void set_Shade(ColorShade value) { }

	// RVA: 0x24F9BD8 Offset: 0x24F5BD8 VA: 0x24F9BD8
	public void .ctor(BaseColor baseColor, ColorShade shade = 0) { }

	// RVA: 0x24F9BE0 Offset: 0x24F5BE0 VA: 0x24F9BE0
	public void .ctor(string color) { }

	// RVA: 0x24F57B0 Offset: 0x24F17B0 VA: 0x24F57B0 Slot: 3
	public override string ToString() { }

	// RVA: 0x24F9D88 Offset: 0x24F5D88 VA: 0x24F9D88 Slot: 4
	public bool Equals(ColorType other) { }

	// RVA: 0x24F9DB0 Offset: 0x24F5DB0 VA: 0x24F9DB0
	public static bool op_Equality(ColorType left, ColorType right) { }

	// RVA: 0x24F9DBC Offset: 0x24F5DBC VA: 0x24F9DBC
	public static bool op_Inequality(ColorType left, ColorType right) { }

	// RVA: 0x24F9DC8 Offset: 0x24F5DC8 VA: 0x24F9DC8 Slot: 0
	public override bool Equals(object obj) { }

	// RVA: 0x24F9E50 Offset: 0x24F5E50 VA: 0x24F9E50 Slot: 2
	public override int GetHashCode() { }
}

