/* IL2CPP: AnalyticsModule.<>c__DisplayClass28_0$$<TryToShowAppRater>b__1
void AnalyticsModule___c__DisplayClass28_0___TryToShowAppRater_b__1 (AnalyticsModule___c__DisplayClass28_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AnalyticsModule.<>c__DisplayClass28_0$$<TryToShowAppRater>b__1
   void AnalyticsModule___c__DisplayClass28_0___TryToShowAppRater_b__1
   (AnalyticsModule___c__DisplayClass28_0_o* __this, const MethodInfo* method); */

void AnalyticsModule___c__DisplayClass28_0___TryToShowAppRater_b__1_2540bec(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  
  if ((bRam0000000004f4bfc0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca4d8);
    bRam0000000004f4bfc0 = 1;
  }
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  plVar5 = *(long **)(*(long *)(param_1 + 0x18) + 0x10);
  if (plVar5 == (long *)0x0) {
    return;
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_049ca4d8) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 0x11) * 0x10 + 0x138);
        goto LAB_02640c8c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02229a4c(plVar5,*(long *)PTR_DAT_049ca4d8,0x11);
LAB_02640c8c:
                    /* WARNING: Could not recover jumptable at 0x02640c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar5,puVar1[1]);
  return;
}

