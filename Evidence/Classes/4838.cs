// Namespace: 
public abstract class LiveOpsBase : IInitializable // TypeDefIndex: 4838
{
	// Methods

	// RVA: 0x2521C88 Offset: 0x251DC88 VA: 0x2521C88 Slot: 5
	public virtual void Initialize() { }

	// RVA: 0x2521C8C Offset: 0x251DC8C VA: 0x2521C8C Slot: 6
	public virtual UniTask ApplyHomeAction(CancellationToken cancellationToken) { }

	// RVA: 0x2521CE4 Offset: 0x251DCE4 VA: 0x2521CE4 Slot: 7
	public virtual bool CanSkipHomeAction() { }

	// RVA: 0x2521CEC Offset: 0x251DCEC VA: 0x2521CEC Slot: 8
	public virtual void Complete() { }

	// RVA: 0x2521CF0 Offset: 0x251DCF0 VA: 0x2521CF0 Slot: 9
	public virtual bool CanComplete() { }

	// RVA: 0x2521CF8 Offset: 0x251DCF8 VA: 0x2521CF8 Slot: 10
	public virtual void Join() { }

	// RVA: 0x2521CFC Offset: 0x251DCFC VA: 0x2521CFC Slot: 11
	public virtual bool CanJoin() { }

	// RVA: 0x2521D04 Offset: 0x251DD04 VA: 0x2521D04 Slot: 12
	public virtual bool CanAutoJoin() { }

	// RVA: 0x2521D0C Offset: 0x251DD0C VA: 0x2521D0C Slot: 13
	public virtual bool CanShow() { }

	// RVA: 0x2521D14 Offset: 0x251DD14 VA: 0x2521D14 Slot: 14
	public virtual bool CanShowInHome() { }

	// RVA: 0x2521D1C Offset: 0x251DD1C VA: 0x2521D1C Slot: 15
	public virtual Dictionary<string, object> GetAnalyticsData() { }

	// RVA: 0x2521D24 Offset: 0x251DD24 VA: 0x2521D24 Slot: 16
	public virtual LiveOpsEventCompletedArgs GetEventCompletedData() { }

	// RVA: 0x2521D34 Offset: 0x251DD34 VA: 0x2521D34 Slot: 17
	public virtual string GetHomeText() { }

	// RVA: 0x2521D4C Offset: 0x251DD4C VA: 0x2521D4C Slot: 18
	public virtual Sprite GetHomeIcon() { }

	// RVA: 0x2521D54 Offset: 0x251DD54 VA: 0x2521D54
	protected void .ctor() { }
}

