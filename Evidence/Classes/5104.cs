// Namespace: 
public class BoosterSheet.Booster : SheetRow<BoosterType> // TypeDefIndex: 5104
{
	// Fields
	[CompilerGenerated]
	private int <UnlockLevel>k__BackingField; // 0x18
	[CompilerGenerated]
	private int <Cost>k__BackingField; // 0x1C
	[CompilerGenerated]
	private int <PurchaseUnits>k__BackingField; // 0x20
	[CompilerGenerated]
	private int <FreeAtStart>k__BackingField; // 0x24
	private CloudPrefsInt _count; // 0x28
	private CloudPrefsBool _lock; // 0x48
	private bool _freeUse; // 0x68

	// Properties
	public int UnlockLevel { get; set; }
	public int Cost { get; set; }
	public int PurchaseUnits { get; set; }
	public int FreeAtStart { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2559D7C Offset: 0x2555D7C VA: 0x2559D7C
	public int get_UnlockLevel() { }

	[CompilerGenerated]
	// RVA: 0x2559D84 Offset: 0x2555D84 VA: 0x2559D84
	private void set_UnlockLevel(int value) { }

	[CompilerGenerated]
	// RVA: 0x2559D8C Offset: 0x2555D8C VA: 0x2559D8C
	public int get_Cost() { }

	[CompilerGenerated]
	// RVA: 0x2559D94 Offset: 0x2555D94 VA: 0x2559D94
	private void set_Cost(int value) { }

	[CompilerGenerated]
	// RVA: 0x2559D9C Offset: 0x2555D9C VA: 0x2559D9C
	public int get_PurchaseUnits() { }

	[CompilerGenerated]
	// RVA: 0x2559DA4 Offset: 0x2555DA4 VA: 0x2559DA4
	private void set_PurchaseUnits(int value) { }

	[CompilerGenerated]
	// RVA: 0x2559DAC Offset: 0x2555DAC VA: 0x2559DAC
	public int get_FreeAtStart() { }

	[CompilerGenerated]
	// RVA: 0x2559DB4 Offset: 0x2555DB4 VA: 0x2559DB4
	private void set_FreeAtStart(int value) { }

	// RVA: 0x2559DBC Offset: 0x2555DBC VA: 0x2559DBC
	public bool IsUnlocked() { }

	// RVA: 0x2559DDC Offset: 0x2555DDC VA: 0x2559DDC
	public bool IsAtUnlockLevel() { }

	// RVA: 0x2559E50 Offset: 0x2555E50 VA: 0x2559E50
	public void Unlock() { }

	// RVA: 0x2559E60 Offset: 0x2555E60 VA: 0x2559E60
	public bool IsAvailable() { }

	// RVA: 0x2559E80 Offset: 0x2555E80 VA: 0x2559E80
	public int GetCount() { }

	// RVA: 0x2559E8C Offset: 0x2555E8C VA: 0x2559E8C
	public void AllowFreeUse() { }

	// RVA: 0x2559E98 Offset: 0x2555E98 VA: 0x2559E98
	public void DisallowFreeUse() { }

	// RVA: 0x2559EA0 Offset: 0x2555EA0 VA: 0x2559EA0
	public bool IsFreeUseAllowed() { }

	// RVA: 0x2559EA8 Offset: 0x2555EA8 VA: 0x2559EA8
	public void AddCount(int count) { }

	// RVA: 0x2559EE0 Offset: 0x2555EE0 VA: 0x2559EE0 Slot: 7
	public override void PostLoad(SheetConvertingContext context) { }

	// RVA: 0x255A0B0 Offset: 0x25560B0 VA: 0x255A0B0
	public void .ctor() { }
}

