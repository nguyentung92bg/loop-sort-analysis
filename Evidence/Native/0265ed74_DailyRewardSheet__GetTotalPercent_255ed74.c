/* IL2CPP: DailyRewardSheet$$GetTotalPercent
float DailyRewardSheet__GetTotalPercent (DailyRewardSheet_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0265efe0) */
/* IL2CPP: DailyRewardSheet$$GetTotalPercent
   float DailyRewardSheet__GetTotalPercent (DailyRewardSheet_o* __this, const MethodInfo* method);
    */

float DailyRewardSheet__GetTotalPercent_255ed74(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  float fVar8;
  
                    /* try { // try from 0265ed7c to 0275ed8b has its CatchHandler @ 0265ed8c */
                    /* catch() { ... } // from try @ 0265ed14 with catch @ 0265ed8c
                       catch() { ... } // from try @ 0265ed7c with catch @ 0265ed8c */
                    /* try { // try from 0265ed90 to 0275ed93 has its CatchHandler @ 0265ed9c */
  if ((bRam0000000004f4c105 & 1) == 0) {
                    /* try { // try from 0265ed94 to 0275ed9f has its CatchHandler @ 0265e6a4 */
                    /* catch() { ... } // from try @ 0265eca8 with catch @ 0265ed9c
                       catch() { ... } // from try @ 0265ecdc with catch @ 0265ed9c
                       catch() { ... } // from try @ 0265ed90 with catch @ 0265ed9c */
    FUN_021f03f8(PTR_DAT_049cb830);
    FUN_021f03f8(PTR_DAT_049b3cc8);
                    /* try { // try from 0265edac to 0275ee77 has its CatchHandler @ 0265edac
                       catch() { ... } // from try @ 0265edac with catch @ 0265edac
                       catch() { ... } // from try @ 0265f298 with catch @ 0265edac
                       catch() { ... } // from try @ 0265f308 with catch @ 0265edac
                       catch() { ... } // from try @ 0265f42c with catch @ 0265edac
                       catch() { ... } // from try @ 0265f474 with catch @ 0265edac
                       catch() { ... } // from try @ 0265f4ac with catch @ 0265edac
                       catch() { ... } // from try @ 0265f4d8 with catch @ 0265edac
                       catch() { ... } // from try @ 0265f540 with catch @ 0265edac */
    FUN_021f03f8(PTR_DAT_049cb838);
    FUN_021f03f8(PTR_DAT_049cb840);
    FUN_021f03f8(PTR_DAT_049b4360);
    bRam0000000004f4c105 = 1;
  }
  plVar7 = *(long **)(param_1 + 0x10);
  if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar4 = *plVar7;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049cb838) {
        puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0265ee38;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar3 = (undefined8 *)FUN_02229a4c(plVar7,*(long *)PTR_DAT_049cb838,0);
LAB_0265ee38:
  plVar7 = (long *)(*(code *)*puVar3)(plVar7,puVar3[1]);
  puVar2 = PTR_DAT_049cb840;
  puVar1 = PTR_DAT_049b4360;
  if (plVar7 != (long *)0x0) {
    fVar8 = 0.0;
    do {
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* try { // try from 0265ee78 to 0275ee7b has its CatchHandler @ 0265f320 */
      if (uVar5 != 0) {
                    /* try { // try from 0265ee7c to 0275ee87 has its CatchHandler @ 0265f37c */
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar1) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0265eeb8;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_02229a4c(plVar7,*(long *)puVar1,0);
LAB_0265eeb8:
      uVar5 = (*(code *)*puVar3)(plVar7,puVar3[1]);
      if ((uVar5 & 1) == 0) {
                    /* try { // try from 0265ef44 to 0275ef5b has its CatchHandler @ 0265f398 */
        if (plVar7 == (long *)0x0) {
          return fVar8;
        }
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 == 0) goto LAB_0265ef88;
                    /* try { // try from 0265ef68 to 0275ef6f has its CatchHandler @ 0265f338 */
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_0265ef70;
      }
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)puVar2) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0265ef1c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar3 = (undefined8 *)FUN_02229a4c(plVar7,*(long *)puVar2,0);
                    /* try { // try from 0265ef0c to 0275ef0f has its CatchHandler @ 0265f314 */
LAB_0265ef1c:
                    /* try { // try from 0265ef1c to 0275ef33 has its CatchHandler @ 0265f3a8 */
      lVar4 = (*(code *)*puVar3)(plVar7,puVar3[1]);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      fVar8 = fVar8 + *(float *)(lVar4 + 0x28);
    } while (plVar7 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
                    /* try { // try from 0265ef84 to 0275ef87 has its CatchHandler @ 0265f310 */
    if (uVar5 == 0) break;
LAB_0265ef70:
    if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049b3cc8) {
                    /* try { // try from 0265ef98 to 0275efbb has its CatchHandler @ 0265f378 */
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_0265efa4;
    }
  }
LAB_0265ef88:
                    /* try { // try from 0265ef88 to 0275ef97 has its CatchHandler @ 0265f334 */
  puVar3 = (undefined8 *)FUN_02229a4c(plVar7,*(long *)PTR_DAT_049b3cc8,0);
LAB_0265efa4:
  (*(code *)*puVar3)(plVar7,puVar3[1]);
  return fVar8;
}

