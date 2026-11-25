// Namespace: 
public sealed class HapticModule : ModuleBase // TypeDefIndex: 4901
{
	// Fields
	[Inject]
	private IHapticProvider _provider; // 0x10
	private UniTimer _cooldownTimer; // 0x18
	private HapticType _cooldownHapticType; // 0x28
	private bool _mute; // 0x2C
	private const float CooldownDuration = 0.02;

	// Methods

	// RVA: 0x2535180 Offset: 0x2531180 VA: 0x2535180
	private bool CanPlay(HapticType hapticType) { }

	// RVA: 0x2535200 Offset: 0x2531200 VA: 0x2535200
	public void SetMute(bool mute) { }

	// RVA: 0x2535208 Offset: 0x2531208 VA: 0x2535208
	public void PlaySelection() { }

	// RVA: 0x25352C0 Offset: 0x25312C0 VA: 0x25352C0
	public void PlayLight() { }

	// RVA: 0x253537C Offset: 0x253137C VA: 0x253537C
	public void PlayHeavy() { }

	// RVA: 0x2535438 Offset: 0x2531438 VA: 0x2535438
	public void PlaySoft() { }

	// RVA: 0x25354F4 Offset: 0x25314F4 VA: 0x25354F4
	public void PlaySuccess() { }

	// RVA: 0x25355B0 Offset: 0x25315B0 VA: 0x25355B0
	public void PlayWarning() { }

	// RVA: 0x253566C Offset: 0x253166C VA: 0x253566C
	public void .ctor() { }
}

