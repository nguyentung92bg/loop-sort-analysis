/* IL2CPP: ConsoleMethods$$PlayDailyChallenge
void ConsoleMethods__PlayDailyChallenge (int32_t day, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConsoleMethods$$PlayDailyChallenge
   void ConsoleMethods__PlayDailyChallenge (int32_t day, const MethodInfo* method); */

void ConsoleMethods__PlayDailyChallenge_24f4648(int param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [16];
  long lStack_28;
  
  puVar1 = PTR_DAT_049b5fc8;
                    /* try { // try from 025f4668 to 026f4677 has its CatchHandler @ 025f4780 */
  if ((bRam0000000004f4bd15 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5050);
                    /* try { // try from 025f4680 to 026f468f has its CatchHandler @ 025f4784 */
    FUN_021f03f8(PTR_DAT_049b5fb0);
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049c8380);
                    /* try { // try from 025f46a0 to 026f46a7 has its CatchHandler @ 025f4778 */
    FUN_021f03f8(PTR_DAT_049b5f80);
                    /* try { // try from 025f46ac to 026f46bb has its CatchHandler @ 025f4770 */
    FUN_021f03f8(PTR_DAT_049b5228);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    FUN_021f03f8(PTR_DAT_049c8388);
    bRam0000000004f4bd15 = 1;
  }
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  auStack_44[0] = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_40 = TimeProvider__get_Now_24f4584();
  puVar2 = PTR_DAT_049b5fb0;
  puVar1 = PTR_DAT_049b5050;
                    /* try { // try from 025f46f8 to 026f4717 has its CatchHandler @ 025f4794 */
  if (0 < param_1) {
    if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* try { // try from 025f4724 to 026f4727 has its CatchHandler @ 025f4790 */
                    /* try { // try from 025f4728 to 026f474f has its CatchHandler @ 025f4560 */
    uVar3 = System_DateTimeOffset__get_Year_30e15d4(auStack_40,0);
    uVar4 = System_DateTimeOffset__get_Month_30e1374(auStack_40,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                    /* try { // try from 025f4750 to 026f4753 has its CatchHandler @ 025f478c */
      FUN_021f0574(*(long *)puVar2);
    }
                    /* try { // try from 025f4754 to 026f4757 has its CatchHandler @ 025f4788 */
                    /* try { // try from 025f4758 to 026f475b has its CatchHandler @ 025f477c */
                    /* try { // try from 025f475c to 026f475f has its CatchHandler @ 025f4774 */
                    /* try { // try from 025f4760 to 026f4763 has its CatchHandler @ 025f476c */
    iVar5 = System_DateTime__DaysInMonth_30dc6a0(uVar3,uVar4,0);
                    /* try { // try from 025f4764 to 026f4767 has its CatchHandler @ 025f4768 */
                    /* catch() { ... } // from try @ 025f4764 with catch @ 025f4768
                       try { // try from 025f4768 to 026f47af has its CatchHandler @ 025f4560 */
    if (param_1 <= iVar5) {
                    /* catch() { ... } // from try @ 025f4630 with catch @ 025f476c
                       catch() { ... } // from try @ 025f4760 with catch @ 025f476c */
                    /* catch() { ... } // from try @ 025f46ac with catch @ 025f4770 */
                    /* catch() { ... } // from try @ 025f475c with catch @ 025f4774 */
                    /* catch() { ... } // from try @ 025f46a0 with catch @ 025f4778 */
                    /* catch() { ... } // from try @ 025f4758 with catch @ 025f477c */
      if (*(int *)(*(long *)PTR_DAT_049b5228 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 025f4668 with catch @ 025f4780 */
        FUN_021f0574();
      }
                    /* catch() { ... } // from try @ 025f4680 with catch @ 025f4784 */
                    /* catch() { ... } // from try @ 025f4754 with catch @ 025f4788 */
                    /* catch() { ... } // from try @ 025f4750 with catch @ 025f478c */
                    /* catch() { ... } // from try @ 025f4724 with catch @ 025f4790 */
      lVar6 = LifetimeScopeH__FindScope_object__2654424(*(undefined8 *)PTR_DAT_049b5f80);
                    /* catch() { ... } // from try @ 025f46f8 with catch @ 025f4794 */
      if (lVar6 != 0) {
        FUN_0235c744(*(undefined8 *)(lVar6 + 0x50),&lStack_28,*(undefined8 *)PTR_DAT_049c8380);
        lVar6 = lStack_28;
                    /* try { // try from 025f47b0 to 026f47b3 has its CatchHandler @ 025f47cc */
                    /* try { // try from 025f47b4 to 026f47cf has its CatchHandler @ 025f4560 */
        if (lStack_28 != 0) {
          uVar7 = DailyChallenge__IsCompleted_25168cc(lStack_28,param_1,0);
          if ((uVar7 & 1) != 0) {
                    /* catch() { ... } // from try @ 025f47b0 with catch @ 025f47cc */
                    /* try { // try from 025f47d0 to 026f47d7 has its CatchHandler @ 025f47e0 */
                    /* try { // try from 025f47d8 to 026f47e3 has its CatchHandler @ 025f4560 */
            lStack_28 = CONCAT44(lStack_28._4_4_,param_1);
                    /* catch() { ... } // from try @ 025f47d0 with catch @ 025f47e0 */
            uVar8 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&lStack_28);
            uVar8 = System_String__Format_2f73700(*(undefined8 *)PTR_DAT_049c8388,uVar8,0);
            if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
              FUN_021f0574(*(long *)PTR_DAT_049b3c58);
            }
            UnityEngine_Debug__LogWarning_3bcf90c(uVar8,0);
            return;
          }
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar3 = System_DateTimeOffset__get_Year_30e15d4(auStack_40,0);
          uVar4 = System_DateTimeOffset__get_Month_30e1374(auStack_40,0);
          lStack_28 = 0;
          System_DateTime___ctor_30db00c(&lStack_28,uVar3,uVar4,param_1,0);
          auStack_44[0] = DailyChallenge__Play_25158f0(lVar6,lStack_28,0);
          Cysharp_Threading_Tasks_UniTaskVoid__Forget_380210c(auStack_44,0);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  return;
}

