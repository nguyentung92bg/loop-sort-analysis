/* IL2CPP: PlayingMonitor.<>c__DisplayClass55_0$$<HandleHoldInput>b__1
void PlayingMonitor___c__DisplayClass55_0___HandleHoldInput_b__1 (PlayingMonitor___c__DisplayClass55_0_o* __this, int32_t __, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayingMonitor.<>c__DisplayClass55_0$$<HandleHoldInput>b__1
   void PlayingMonitor___c__DisplayClass55_0___HandleHoldInput_b__1
   (PlayingMonitor___c__DisplayClass55_0_o* __this, int32_t __, const MethodInfo* method); */

void PlayingMonitor___c__DisplayClass55_0___HandleHoldInput_b__1_2451efc(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int *piVar4;
  long *plVar5;
  
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 200), lVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f4bf52 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca178,0);
    bRam0000000004f4bf52 = 1;
  }
  uVar2 = HapticModule__CanPlay_2535180(lVar1,4);
  if (((uVar2 & 1) == 0) || (plVar5 = *(long **)(lVar1 + 0x10), plVar5 == (long *)0x0)) {
    return;
  }
  lVar1 = *plVar5;
  uVar2 = (ulong)*(ushort *)(lVar1 + 0x12e);
  if (uVar2 != 0) {
    piVar4 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_049ca178) {
        puVar3 = (undefined8 *)(lVar1 + (long)(*piVar4 + 3) * 0x10 + 0x138);
        goto LAB_026354e0;
      }
      uVar2 = uVar2 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar2 != 0);
  }
  puVar3 = (undefined8 *)FUN_02229a4c(plVar5,*(long *)PTR_DAT_049ca178,3);
LAB_026354e0:
                    /* WARNING: Could not recover jumptable at 0x026354f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(plVar5,puVar3[1]);
  return;
}

