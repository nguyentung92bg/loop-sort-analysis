/* IL2CPP: HapticModule$$PlayWarning
void HapticModule__PlayWarning (HapticModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HapticModule$$PlayWarning
   void HapticModule__PlayWarning (HapticModule_o* __this, const MethodInfo* method); */

void HapticModule__PlayWarning_25355b0(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000004f4bf54 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca178);
    bRam0000000004f4bf54 = 1;
  }
  uVar1 = HapticModule__CanPlay_2535180(param_1,6);
  if (((uVar1 & 1) == 0) || (plVar5 = *(long **)(param_1 + 0x10), plVar5 == (long *)0x0)) {
    return;
  }
  lVar3 = *plVar5;
  uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar1 != 0) {
    piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_049ca178) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 5) * 0x10 + 0x138);
        goto LAB_02635658;
      }
      uVar1 = uVar1 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar1 != 0);
  }
  puVar2 = (undefined8 *)FUN_02229a4c(plVar5,*(long *)PTR_DAT_049ca178,5);
LAB_02635658:
                    /* WARNING: Could not recover jumptable at 0x02635668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar5,puVar2[1]);
  return;
}

