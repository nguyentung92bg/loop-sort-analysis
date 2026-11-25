/* IL2CPP: NakamaBootstrapper$$OnNakamaInitFinished
void NakamaBootstrapper__OnNakamaInitFinished (NakamaBootstrapper_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaBootstrapper$$OnNakamaInitFinished
   void NakamaBootstrapper__OnNakamaInitFinished (NakamaBootstrapper_o* __this, const MethodInfo*
   method); */

void NakamaBootstrapper__OnNakamaInitFinished_2245330(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long *plVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_30 [16];
  
                    /* catch() { ... } // from try @ 02345438 with catch @ 02345334 */
  if ((bRam0000000004f49b3e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5578);
    bRam0000000004f49b3e = 1;
  }
  plVar5 = *(long **)(param_1 + 0x20);
  auStack_30._0_8_ = 0;
  auStack_30._8_8_ = 0;
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar2 = *plVar5;
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)PTR_DAT_049b5578) {
        puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 2) * 0x10 + 0x138);
        goto LAB_023453c4;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_02229a4c(plVar5,*(long *)PTR_DAT_049b5578,2);
LAB_023453c4:
                    /* try { // try from 023453c4 to 024453cf has its CatchHandler @ 02345478 */
  uVar3 = (*(code *)*puVar1)(plVar5,puVar1[1]);
  if (((uVar3 & 1) == 0) &&
     (fVar6 = (float)UniTimer__get_RemainingTime_3f0f0ac(param_1 + 0x30,0), 12.0 < fVar6)) {
    auStack_30 = UniTimer__CreateFromSeconds_3f0f2f4(0x41400000,0);
    auVar7 = UniTimer__SetUnscaled_3f0f260(auStack_30,0);
    *(undefined1 (*) [16])(param_1 + 0x30) = auVar7;
  }
                    /* try { // try from 0234540c to 02445417 has its CatchHandler @ 02345464 */
  return;
}

