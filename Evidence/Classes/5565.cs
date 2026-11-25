// Namespace: 
public class AutoQualitySetter // TypeDefIndex: 5565
{
	// Fields
	[CompilerGenerated]
	private static AutoQualitySetting <CurrentQualitySetting>k__BackingField; // 0x0
	[Tooltip("Apply quality setting automatically in Start()")]
	[SerializeField]
	private bool applyOnStart; // 0x10
	private static readonly Dictionary<string, AutoQualitySetting> TierToQuality; // 0x8
	private static Dictionary<AutoQualitySetting, string> QualityToTier; // 0x10
	private const AutoQualitySetting defaultQualitySetting = 2;

	// Properties
	public static AutoQualitySetting CurrentQualitySetting { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x24989A0 Offset: 0x24949A0 VA: 0x24989A0
	public static AutoQualitySetting get_CurrentQualitySetting() { }

	[CompilerGenerated]
	// RVA: 0x24989F8 Offset: 0x24949F8 VA: 0x24989F8
	private static void set_CurrentQualitySetting(AutoQualitySetting value) { }

	// RVA: 0x2498A54 Offset: 0x2494A54 VA: 0x2498A54
	public static AutoQualitySetting DetectSetting() { }

	// RVA: 0x24996E0 Offset: 0x24956E0 VA: 0x24996E0
	private static bool DetectTierFromRAM(out AutoQualitySetting detectedTier) { }

	// RVA: 0x2498B1C Offset: 0x2494B1C VA: 0x2498B1C
	private static AutoQualitySetting DetectTierFromHardware() { }

	// RVA: 0x249A96C Offset: 0x249696C VA: 0x249A96C
	private static string Normalize(string s) { }

	// RVA: 0x249A350 Offset: 0x2496350 VA: 0x249A350
	private static string FindTierByExactGpuName(AutoQualitySetter.GpuTierData[] gpuList, string deviceName) { }

	// RVA: 0x249A664 Offset: 0x2496664 VA: 0x249A664
	private static string FindTierByFamilyAndModel(AutoQualitySetter.GpuTierData[] gpuList, string family, string model) { }

	// RVA: 0x249AA18 Offset: 0x2496A18 VA: 0x249AA18
	private static string CleanGpuName(string gpuName) { }

	// RVA: 0x249AB7C Offset: 0x2496B7C VA: 0x249AB7C
	public void .ctor() { }

	// RVA: 0x249AB8C Offset: 0x2496B8C VA: 0x249AB8C
	private static void .cctor() { }
}

