// Namespace: 
public sealed class LifeModule : ModuleBase, ITickable // TypeDefIndex: 4972
{
	// Fields
	[Inject]
	private IPublisher<OutOfLivesMessage> _outOfLivesPub; // 0x10
	public const int MaxLife = 5;
	public const double NextLifeMinutes = 30;
	private CloudPrefsInt _life; // 0x18
	private CloudPrefsT<DateTimeOffset> _nextLifeTimestamp; // 0x38
	private CloudPrefsT<DateTimeOffset> _unlimitedLifeTimestamp; // 0x68

	// Methods

	// RVA: 0x2545AE0 Offset: 0x2541AE0 VA: 0x2545AE0 Slot: 4
	public void Tick() { }

	// RVA: 0x2545B30 Offset: 0x2541B30 VA: 0x2545B30
	private void HandleLifeRegeneration() { }

	// RVA: 0x2545B94 Offset: 0x2541B94 VA: 0x2545B94
	private void ScheduleNextLifeRegeneration() { }

	// RVA: 0x2545C5C Offset: 0x2541C5C VA: 0x2545C5C
	private void ProcessLifeRegeneration() { }

	// RVA: 0x25460D4 Offset: 0x25420D4 VA: 0x25460D4
	public bool IsEnabled() { }

	// RVA: 0x2545FC4 Offset: 0x2541FC4 VA: 0x2545FC4
	public int GetCurrentLife() { }

	// RVA: 0x2545B10 Offset: 0x2541B10 VA: 0x2545B10
	public bool IsLifeFull() { }

	// RVA: 0x25460DC Offset: 0x25420DC VA: 0x25460DC
	public bool IsLifeAvailable() { }

	// RVA: 0x25461E8 Offset: 0x25421E8 VA: 0x25461E8
	public int GetMaxLife() { }

	// RVA: 0x2545E88 Offset: 0x2541E88 VA: 0x2545E88
	public TimeSpan GetRemainingTime() { }

	// RVA: 0x2545FD0 Offset: 0x2541FD0 VA: 0x2545FD0
	public void GainLife() { }

	// RVA: 0x25461F0 Offset: 0x25421F0 VA: 0x25461F0
	public void SpendLife() { }

	// RVA: 0x25463C4 Offset: 0x25423C4 VA: 0x25463C4
	public void RefillLife() { }

	// RVA: 0x2546110 Offset: 0x2542110 VA: 0x2546110
	public bool IsUnlimited() { }

	// RVA: 0x2546498 Offset: 0x2542498 VA: 0x2546498
	public TimeSpan GetUnlimitedTime() { }

	// RVA: 0x2543C3C Offset: 0x253FC3C VA: 0x2543C3C
	public void AddUnlimitedTime(TimeSpan time) { }

	// RVA: 0x2546570 Offset: 0x2542570 VA: 0x2546570
	public void .ctor() { }
}

