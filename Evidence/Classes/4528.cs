// Namespace: 
public sealed class HiddenCarrier : GameBehaviourBase, IFeatureProcessor // TypeDefIndex: 4528
{
	// Fields
	[SerializeField]
	private SkinnedMeshRenderer Model; // 0xA0
	[SerializeField]
	private StatefulComponent View; // 0xA8
	[SerializeField]
	private Animator Animator; // 0xB0
	[Inject]
	private Level _level; // 0xB8
	[Inject]
	private SettingsModule _settingsModule; // 0x100
	[Inject]
	private ISubscriber<ColorBlindUpdateMessage> _colorBlindUpdateSub; // 0x108
	private Carrier _carrier; // 0x110
	private bool _isRevealed; // 0x118
	private ColorType _requiredColorType; // 0x11C
	private static readonly int BaseColorId; // 0x0
	private static readonly int RevealHash; // 0x4
	private static readonly int ResetHash; // 0x8

	// Methods

	// RVA: 0x24A4D14 Offset: 0x24A0D14 VA: 0x24A4D14 Slot: 11
	public override void OnRent() { }

	// RVA: 0x24A4DB0 Offset: 0x24A0DB0 VA: 0x24A4DB0 Slot: 12
	public override void OnReturn() { }

	// RVA: 0x24A4E70 Offset: 0x24A0E70 VA: 0x24A4E70 Slot: 13
	protected override void BuildMessages(DisposableBagBuilder bag) { }

	// RVA: 0x24A4FA0 Offset: 0x24A0FA0 VA: 0x24A4FA0 Slot: 14
	public void ProcessFeature(FeatureType featureType, string data) { }

	// RVA: 0x24A506C Offset: 0x24A106C VA: 0x24A506C
	private void UpdateIconView() { }

	// RVA: 0x24A5294 Offset: 0x24A1294 VA: 0x24A5294
	public bool IsRevealed() { }

	// RVA: 0x24A529C Offset: 0x24A129C VA: 0x24A529C
	public ColorType GetRequiredColorType() { }

	// RVA: 0x24A52A8 Offset: 0x24A12A8 VA: 0x24A52A8
	public void Reveal() { }

	// RVA: 0x24A5388 Offset: 0x24A1388 VA: 0x24A5388
	private void OnColorBlindUpdate(ColorBlindUpdateMessage m) { }

	// RVA: 0x24A538C Offset: 0x24A138C VA: 0x24A538C
	public void .ctor() { }

	// RVA: 0x24A53E4 Offset: 0x24A13E4 VA: 0x24A53E4
	private static void .cctor() { }
}

