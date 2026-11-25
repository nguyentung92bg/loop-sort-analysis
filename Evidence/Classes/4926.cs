// Namespace: 
public sealed class TimeModule : ModuleBase // TypeDefIndex: 4926
{
	// Fields
	private CancellationTokenSource _cts; // 0x10

	// Methods

	// RVA: 0x253A43C Offset: 0x253643C VA: 0x253A43C
	public UniTask Pause(float duration = 0, float delayInSeconds = 0, CancellationToken cancellationToken) { }

	// RVA: 0x253A530 Offset: 0x2536530 VA: 0x253A530
	public UniTask Resume(float duration = 0, float delayInSeconds = 0, CancellationToken cancellationToken) { }

	[AsyncStateMachine(typeof(TimeModule.<AdjustTimeScale>d__3))]
	// RVA: 0x253A454 Offset: 0x2536454 VA: 0x253A454
	public UniTask AdjustTimeScale(float newTimeScale, float duration = 0, float delayInSeconds = 0, CancellationToken cancellationToken) { }

	// RVA: 0x253A548 Offset: 0x2536548 VA: 0x253A548
	private void CancelCurrentTransition() { }

	// RVA: 0x253A584 Offset: 0x2536584 VA: 0x253A584
	public void .ctor() { }
}

