/* IL2CPP: DailyChallengeSubMonitor$$GetFillProgress
float DailyChallengeSubMonitor__GetFillProgress (DailyChallengeSubMonitor_o* __this, int32_t completedDayCount, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: DailyChallengeSubMonitor$$GetFillProgress
   float DailyChallengeSubMonitor__GetFillProgress (DailyChallengeSubMonitor_o* __this, int32_t
   completedDayCount, const MethodInfo* method); */

float DailyChallengeSubMonitor__GetFillProgress_24730b8(long param_1,int param_2)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  int iStack_54;
  
                    /* try { // try from 025730cc to 026730ef has its CatchHandler @ 02573410 */
  if ((bRam0000000004f4b9b8 & 1) == 0) {
                    /* try { // try from 025730fc to 02673103 has its CatchHandler @ 02573424 */
    FUN_021f03f8(PTR_DAT_049c5608);
                    /* try { // try from 02573108 to 02673113 has its CatchHandler @ 025733a8 */
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b5fb0);
                    /* try { // try from 02573120 to 0267312b has its CatchHandler @ 025733e4 */
    FUN_021f03f8(PTR_DAT_049c5610);
    FUN_021f03f8(PTR_DAT_049c5618);
    FUN_021f03f8(PTR_DAT_049c5620);
    FUN_021f03f8(PTR_DAT_049c2cf0);
                    /* try { // try from 02573148 to 0267314f has its CatchHandler @ 025733f4 */
    FUN_021f03f8(PTR_DAT_049c5630);
                    /* try { // try from 0257315c to 02673163 has its CatchHandler @ 025733f0 */
    FUN_021f03f8(PTR_DAT_049b5fc8);
    bRam0000000004f4b9b8 = 1;
  }
                    /* try { // try from 02573168 to 02673173 has its CatchHandler @ 025733a4 */
  auStack_a0._0_8_ = 0;
  auStack_a0._8_8_ = 0;
  auStack_b0._0_8_ = 0;
  auStack_b0._8_8_ = 0;
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 0x130), lVar9 != 0)) {
                    /* try { // try from 02573180 to 0267318b has its CatchHandler @ 025733e0 */
    iVar6 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                      (lVar9,*(undefined8 *)PTR_DAT_049c5608);
    puVar5 = PTR_DAT_049c5620;
    puVar4 = PTR_DAT_049c5618;
    puVar3 = PTR_DAT_049c5610;
    puVar2 = PTR_DAT_049c2cf0;
    fVar1 = _UNK_013aa508;
                    /* try { // try from 025731a0 to 026731a7 has its CatchHandler @ 025733a0 */
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (lVar9 = *(long *)(*(long *)(param_1 + 0x48) + 0x130), lVar9 != 0)) {
                    /* try { // try from 025731b4 to 026731bb has its CatchHandler @ 025733d0 */
                    /* try { // try from 025731c0 to 026731cb has its CatchHandler @ 025733ec */
                    /* try { // try from 025731d0 to 026731db has its CatchHandler @ 025733b8 */
      fVar18 = _UNK_013aa508 / (float)iVar6;
      auStack_a0 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___GetEnumerator_2986a68
                             (lVar9,*(undefined8 *)PTR_DAT_049c5630);
      fVar15 = _UNK_013aa698;
                    /* try { // try from 025731f0 to 026731f7 has its CatchHandler @ 025733d4 */
      iVar6 = 0;
                    /* try { // try from 02573204 to 0267320b has its CatchHandler @ 025733cc */
      iVar13 = 0;
      fVar17 = _UNK_013aa698;
      do {
                    /* try { // try from 02573210 to 0267321b has its CatchHandler @ 025733e8 */
        uVar10 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___MoveNext_284cc30
                           (auStack_a0,*(undefined8 *)puVar4);
        if ((uVar10 & 1) == 0) {
          Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___Dispose_284cd24
                    (auStack_a0,*(undefined8 *)puVar3);
          if (param_2 - iVar13 != 0 && iVar13 <= param_2) {
            if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
              FUN_021f0574();
            }
            auStack_b0 = TimeProvider__get_Now_24f4584(0);
            if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
              FUN_021f0574();
            }
                    /* try { // try from 0257335c to 0267335f has its CatchHandler @ 0257340c */
            uVar7 = System_DateTimeOffset__get_Year_30e15d4(auStack_b0,0);
                    /* try { // try from 02573360 to 02673363 has its CatchHandler @ 02573408 */
                    /* try { // try from 02573364 to 02673367 has its CatchHandler @ 02573404 */
                    /* try { // try from 02573368 to 0267336b has its CatchHandler @ 02573400 */
                    /* try { // try from 0257336c to 0267336f has its CatchHandler @ 025733dc */
            uVar8 = System_DateTimeOffset__get_Month_30e1374(auStack_b0,0);
                    /* try { // try from 02573370 to 02673373 has its CatchHandler @ 025733d8 */
                    /* try { // try from 02573374 to 02673377 has its CatchHandler @ 025733c8 */
                    /* try { // try from 02573378 to 0267337b has its CatchHandler @ 025733c4 */
                    /* try { // try from 0257337c to 0267337f has its CatchHandler @ 025733c0 */
                    /* try { // try from 02573380 to 02673383 has its CatchHandler @ 025733bc */
                    /* try { // try from 02573384 to 02673387 has its CatchHandler @ 025733b4 */
            if (*(int *)(*(long *)PTR_DAT_049b5fb0 + 0xe4) == 0) {
                    /* try { // try from 02573388 to 0267338b has its CatchHandler @ 025733ac */
                    /* try { // try from 0257338c to 0267338f has its CatchHandler @ 0257339c */
              FUN_021f0574(*(long *)PTR_DAT_049b5fb0);
            }
                    /* try { // try from 02573390 to 02673393 has its CatchHandler @ 02573398 */
                    /* try { // try from 02573394 to 0267344b has its CatchHandler @ 02572d60 */
                    /* catch() { ... } // from try @ 02573390 with catch @ 02573398 */
                    /* catch() { ... } // from try @ 0257338c with catch @ 0257339c */
            iVar6 = System_DateTime__DaysInMonth_30dc6a0(uVar7,uVar8,0);
                    /* catch() { ... } // from try @ 025731a0 with catch @ 025733a0 */
                    /* catch() { ... } // from try @ 02573168 with catch @ 025733a4 */
                    /* catch() { ... } // from try @ 02573108 with catch @ 025733a8 */
                    /* catch() { ... } // from try @ 02573388 with catch @ 025733ac */
                    /* catch() { ... } // from try @ 0257322c with catch @ 025733b0 */
                    /* catch() { ... } // from try @ 02573384 with catch @ 025733b4 */
            fVar18 = (float)(param_2 - iVar13) / (float)(iVar6 - iVar13);
                    /* catch() { ... } // from try @ 025731d0 with catch @ 025733b8 */
                    /* catch() { ... } // from try @ 02573380 with catch @ 025733bc */
                    /* catch() { ... } // from try @ 0257337c with catch @ 025733c0 */
            fVar15 = 1.0;
            if (fVar18 <= 1.0) {
              fVar15 = fVar18;
            }
                    /* catch() { ... } // from try @ 02573378 with catch @ 025733c4 */
                    /* catch() { ... } // from try @ 02573374 with catch @ 025733c8 */
                    /* catch() { ... } // from try @ 02573204 with catch @ 025733cc */
            fVar17 = fVar1;
                    /* catch() { ... } // from try @ 025731b4 with catch @ 025733d0 */
            if (0.0 <= fVar18) {
              fVar17 = fVar15 * _UNK_013aa440 + fVar1;
            }
          }
                    /* catch() { ... } // from try @ 025731f0 with catch @ 025733d4 */
                    /* catch() { ... } // from try @ 02573370 with catch @ 025733d8 */
                    /* catch() { ... } // from try @ 0257336c with catch @ 025733dc */
                    /* catch() { ... } // from try @ 02573180 with catch @ 025733e0 */
                    /* catch() { ... } // from try @ 02573120 with catch @ 025733e4 */
                    /* catch() { ... } // from try @ 02573210 with catch @ 025733e8 */
                    /* catch() { ... } // from try @ 025731c0 with catch @ 025733ec */
                    /* catch() { ... } // from try @ 0257315c with catch @ 025733f0 */
                    /* catch() { ... } // from try @ 02573148 with catch @ 025733f4 */
                    /* catch() { ... } // from try @ 02573078 with catch @ 025733f8 */
                    /* catch() { ... } // from try @ 02573054 with catch @ 025733fc */
                    /* catch() { ... } // from try @ 02573368 with catch @ 02573400 */
          return fVar17;
        }
        lVar9 = Cathei_BakingSheet_Sheet_Enumerator___Il2CppFullySharedGenericType__object___get_Current_284cc88
                          (auStack_a0,*(undefined8 *)puVar5);
                    /* try { // try from 0257322c to 02673237 has its CatchHandler @ 025733b0 */
        if (param_2 - iVar13 == 0 || param_2 < iVar13) {
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02573364 with catch @ 02573404 */
            FUN_021f06a0();
          }
        }
        else {
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02573360 with catch @ 02573408 */
            FUN_021f06a0();
          }
                    /* try { // try from 02573238 to 0267335b has its CatchHandler @ 02572d60 */
          plVar12 = *(long **)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0);
          uVar7 = *(undefined4 *)(plVar12[1] + 0xfc);
          uVar11 = thunk_FUN_0224e54c(lVar9,*(undefined8 *)(*plVar12 + 0x80));
          func_0x04608620(&iStack_54,uVar11,uVar7);
          fVar14 = (float)(param_2 - iVar13) / (float)(iStack_54 - iVar13);
          fVar17 = 1.0;
          if (fVar14 <= 1.0) {
            fVar17 = fVar14;
          }
          fVar16 = 0.0;
          if (0.0 <= fVar14) {
            fVar16 = fVar17;
          }
          fVar17 = fVar15;
          if (iVar6 != 0) {
            fVar17 = fVar18 * (float)iVar6;
          }
          fVar14 = 0.0;
          if (0.0 <= fVar16) {
            fVar14 = fVar16;
          }
          fVar17 = fVar17 + (fVar18 * (float)(iVar6 + 1) - fVar17) * fVar14;
        }
        plVar12 = *(long **)(*(long *)(*(long *)puVar2 + 0x20) + 0xc0);
        uVar7 = *(undefined4 *)(plVar12[1] + 0xfc);
        uVar11 = thunk_FUN_0224e54c(lVar9,*(undefined8 *)(*plVar12 + 0x80));
        func_0x04608620(&iStack_54,uVar11,uVar7);
        iVar6 = iVar6 + 1;
        iVar13 = iStack_54;
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0257335c with catch @ 0257340c */
  FUN_021f06a0();
}

