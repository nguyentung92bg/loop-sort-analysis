// Namespace: 
public class CarrierSheet.Row : SheetRow<int> // TypeDefIndex: 5106
{
	// Fields
	[CompilerGenerated]
	private string <ColorData>k__BackingField; // 0x18
	[CompilerGenerated]
	private string <Features>k__BackingField; // 0x20
	private readonly Dictionary<CarrierSheet.CarrierType, List<CarrierSheet.CarrierColorArgs>> _carriers; // 0x28
	private readonly Dictionary<CarrierSheet.CarrierType, List<CarrierSheet.CarrierFeatureArgs>> _features; // 0x30
	private readonly Dictionary<ValueTuple<CarrierSheet.CarrierType, FeatureType>, List<CarrierSheet.CarrierType>> _groups; // 0x38
	private readonly HashSet<CarrierSheet.CarrierType> _carrierKeys; // 0x40
	[CompilerGenerated]
	private List<CarrierSheet.CarrierType> <CarrierTypes>k__BackingField; // 0x48
	[CompilerGenerated]
	private List<ColorType> <ColorTypes>k__BackingField; // 0x50
	[CompilerGenerated]
	private List<FeatureType> <UniqueFeatureTypes>k__BackingField; // 0x58
	[CompilerGenerated]
	private List<FeatureType> <FeatureTypes>k__BackingField; // 0x60

	// Properties
	public string ColorData { get; set; }
	public string Features { get; set; }
	[NonSerialized]
	public List<CarrierSheet.CarrierType> CarrierTypes { get; set; }
	[NonSerialized]
	public List<ColorType> ColorTypes { get; set; }
	[NonSerialized]
	public List<FeatureType> UniqueFeatureTypes { get; set; }
	[NonSerialized]
	public List<FeatureType> FeatureTypes { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x255A140 Offset: 0x2556140 VA: 0x255A140
	public string get_ColorData() { }

	[CompilerGenerated]
	// RVA: 0x255A148 Offset: 0x2556148 VA: 0x255A148
	private void set_ColorData(string value) { }

	[CompilerGenerated]
	// RVA: 0x255A150 Offset: 0x2556150 VA: 0x255A150
	public string get_Features() { }

	[CompilerGenerated]
	// RVA: 0x255A158 Offset: 0x2556158 VA: 0x255A158
	private void set_Features(string value) { }

	[CompilerGenerated]
	// RVA: 0x255A160 Offset: 0x2556160 VA: 0x255A160
	public List<CarrierSheet.CarrierType> get_CarrierTypes() { }

	[CompilerGenerated]
	// RVA: 0x255A168 Offset: 0x2556168 VA: 0x255A168
	private void set_CarrierTypes(List<CarrierSheet.CarrierType> value) { }

	[CompilerGenerated]
	// RVA: 0x255A170 Offset: 0x2556170 VA: 0x255A170
	public List<ColorType> get_ColorTypes() { }

	[CompilerGenerated]
	// RVA: 0x255A178 Offset: 0x2556178 VA: 0x255A178
	private void set_ColorTypes(List<ColorType> value) { }

	[CompilerGenerated]
	// RVA: 0x255A180 Offset: 0x2556180 VA: 0x255A180
	public List<FeatureType> get_UniqueFeatureTypes() { }

	[CompilerGenerated]
	// RVA: 0x255A188 Offset: 0x2556188 VA: 0x255A188
	private void set_UniqueFeatureTypes(List<FeatureType> value) { }

	[CompilerGenerated]
	// RVA: 0x255A190 Offset: 0x2556190 VA: 0x255A190
	public List<FeatureType> get_FeatureTypes() { }

	[CompilerGenerated]
	// RVA: 0x255A198 Offset: 0x2556198 VA: 0x255A198
	private void set_FeatureTypes(List<FeatureType> value) { }

	// RVA: 0x255A1A0 Offset: 0x25561A0 VA: 0x255A1A0 Slot: 7
	public override void PostLoad(SheetConvertingContext context) { }

	// RVA: 0x255A2F8 Offset: 0x25562F8 VA: 0x255A2F8
	private void ParseColors(string data) { }

	// RVA: 0x255AA48 Offset: 0x2556A48 VA: 0x255AA48
	private void ParseFeatures() { }

	// RVA: 0x255AF78 Offset: 0x2556F78 VA: 0x255AF78
	public bool ContainsCarrier(CarrierSheet.CarrierType carrierType) { }

	// RVA: 0x255AFE4 Offset: 0x2556FE4 VA: 0x255AFE4
	public bool TryGetCarrier(CarrierSheet.CarrierType carrierType, out List<CarrierSheet.CarrierColorArgs> carrierColors) { }

	// RVA: 0x255B058 Offset: 0x2557058 VA: 0x255B058
	public bool TryGetCarrierFeature(CarrierSheet.CarrierType carrierType, FeatureType featureType, out CarrierSheet.CarrierFeatureArgs feature) { }

	// RVA: 0x255B274 Offset: 0x2557274 VA: 0x255B274
	public bool TryGetCarrierFeatures(CarrierSheet.CarrierType carrierType, out List<CarrierSheet.CarrierFeatureArgs> carrierFeatures) { }

	// RVA: 0x255B2E8 Offset: 0x25572E8 VA: 0x255B2E8
	public bool TryGetCarrierGroup(CarrierSheet.CarrierType carrierType, FeatureType featureType, out List<CarrierSheet.CarrierType> group) { }

	// RVA: 0x255B3AC Offset: 0x25573AC VA: 0x255B3AC
	public bool TryGetElevatorQueue(CarrierSheet.CarrierType carrierType, List<CarrierSheet.CarrierType> queue) { }

	// RVA: 0x255B53C Offset: 0x255753C VA: 0x255B53C
	public bool HasCarrierFeature(CarrierSheet.CarrierType carrierType, FeatureType featureType) { }

	// RVA: 0x255B710 Offset: 0x2557710 VA: 0x255B710
	private void CheckColorDistribution() { }

	// RVA: 0x255AEC4 Offset: 0x2556EC4 VA: 0x255AEC4
	private void AddFeatureType(FeatureType featureType) { }

	// RVA: 0x255C0AC Offset: 0x25580AC VA: 0x255C0AC
	public void .ctor() { }
}

