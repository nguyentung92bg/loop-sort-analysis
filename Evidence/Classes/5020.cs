// Namespace: 
public sealed class NicknameGenerator // TypeDefIndex: 5020
{
	// Fields
	[Inject]
	private SheetContainer _sheetContainer; // 0x10
	private const int MaxLength = 14;
	[TupleElementNames(new[] { "Locale", "Weight" })]
	private static readonly ValueTuple<string, int>[] Locales; // 0x0
	private static readonly string[] PopularNumbers; // 0x8

	// Methods

	// RVA: 0x25501B8 Offset: 0x254C1B8 VA: 0x25501B8
	public string[] Generate(int count, IReadOnlyCollection<string> exclude) { }

	// RVA: 0x2550718 Offset: 0x254C718 VA: 0x2550718
	private string BuildCandidate(List<string> adjectives, List<string> nouns, List<string> prefixes, List<string> suffixes) { }

	// RVA: 0x2550C18 Offset: 0x254CC18 VA: 0x2550C18
	private static string PickLocale() { }

	// RVA: 0x2550D58 Offset: 0x254CD58 VA: 0x2550D58
	private static string Number() { }

	// RVA: 0x2550EAC Offset: 0x254CEAC VA: 0x2550EAC
	private static string Sep() { }

	// RVA: 0x25506AC Offset: 0x254C6AC VA: 0x25506AC
	private List<string> GetPool(string id) { }

	// RVA: 0x2550F14 Offset: 0x254CF14 VA: 0x2550F14
	public void .ctor() { }

	// RVA: 0x2550F1C Offset: 0x254CF1C VA: 0x2550F1C
	private static void .cctor() { }
}

