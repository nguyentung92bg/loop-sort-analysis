/* IL2CPP: HapticModule$$PlaySoft
void HapticModule__PlaySoft (HapticModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HapticModule$$PlaySoft
   void HapticModule__PlaySoft (HapticModule_o* __this, const MethodInfo* method); */

void HapticModule__PlaySoft_2535438(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000004f4bf52 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca178);
    bRam0000000004f4bf52 = 1;
  }
  uVar1 = HapticModule__CanPlay_2535180(param_1,4);
  if (((uVar1 & 1) == 0) || (plVar5 = *(long **)(param_1 + 0x10), plVar5 == (long *)0x0)) {
    return;
  }
  lVar3 = *plVar5;
  uVar1 = (ulong)*(ushort *)(lVar3 + 0x12e);
  if (uVar1 != 0) {
    piVar4 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_049ca178) {
        puVar2 = (undefined8 *)(lVar3 + (long)(*piVar4 + 3) * 0x10 + 0x138);
        goto LAB_026354e0;
      }
      uVar1 = uVar1 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar1 != 0);
  }
  puVar2 = (undefined8 *)FUN_02229a4c(plVar5,*(long *)PTR_DAT_049ca178,3);
LAB_026354e0:
                    /* WARNING: Could not recover jumptable at 0x026354f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar2)(plVar5,puVar2[1]);
  return;
}

