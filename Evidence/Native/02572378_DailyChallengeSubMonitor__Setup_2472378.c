/* IL2CPP: DailyChallengeSubMonitor$$Setup
void DailyChallengeSubMonitor__Setup (DailyChallengeSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallengeSubMonitor$$Setup
   void DailyChallengeSubMonitor__Setup (DailyChallengeSubMonitor_o* __this, const MethodInfo*
   method); */

void DailyChallengeSubMonitor__Setup_2472378(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [16];
  undefined2 auStack_44 [2];
  undefined1 auStack_40 [16];
  
  puVar1 = PTR_DAT_049b5fc8;
                    /* catch() { ... } // from try @ 02571fdc with catch @ 02572378 */
                    /* try { // try from 02572394 to 02672397 has its CatchHandler @ 025723b8 */
                    /* try { // try from 02572398 to 026723bb has its CatchHandler @ 02571df8 */
  if ((bRam0000000004f4b9b1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c55f8);
    FUN_021f03f8(PTR_DAT_049b5050);
                    /* catch() { ... } // from try @ 02572394 with catch @ 025723b8 */
                    /* try { // try from 025723bc to 026723c3 has its CatchHandler @ 02572444 */
    FUN_021f03f8(PTR_DAT_049c2ea8);
                    /* try { // try from 025723c4 to 02672413 has its CatchHandler @ 02571df8 */
                    /* catch() { ... } // from try @ 025722bc with catch @ 025723c8 */
                    /* catch() { ... } // from try @ 02572214 with catch @ 025723cc */
    FUN_021f03f8(PTR_DAT_049b5310);
                    /* catch() { ... } // from try @ 02572268 with catch @ 025723d0 */
                    /* catch() { ... } // from try @ 025721bc with catch @ 025723d4 */
                    /* catch() { ... } // from try @ 02572280 with catch @ 025723d8 */
    FUN_021f03f8(PTR_DAT_049b5fc8);
                    /* catch() { ... } // from try @ 02572254 with catch @ 025723dc */
                    /* catch() { ... } // from try @ 0257223c with catch @ 025723e0 */
                    /* catch() { ... } // from try @ 02572228 with catch @ 025723e4 */
    FUN_021f03f8(PTR_DAT_049b8d80);
                    /* catch() { ... } // from try @ 02572294 with catch @ 025723e8 */
                    /* catch() { ... } // from try @ 025722ac with catch @ 025723ec */
                    /* catch() { ... } // from try @ 025721d0 with catch @ 025723f0 */
    FUN_021f03f8(PTR_DAT_049c5600);
                    /* catch() { ... } // from try @ 02572200 with catch @ 025723f4 */
    FUN_021f03f8(PTR_DAT_049be810);
    bRam0000000004f4b9b1 = 1;
  }
  puVar2 = PTR_DAT_049c2ea8;
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
                    /* try { // try from 02572414 to 02672417 has its CatchHandler @ 02572430 */
  auStack_44[0] = 0;
                    /* try { // try from 02572418 to 02672433 has its CatchHandler @ 02571df8 */
  auStack_58._0_8_ = 0;
  auStack_58._8_8_ = 0;
  SubMonitorBase__Setup_2481334(param_1,0);
                    /* catch() { ... } // from try @ 02572414 with catch @ 02572430 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 02572434 to 0267243b has its CatchHandler @ 02572444 */
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049b5050;
                    /* try { // try from 0257243c to 02672447 has its CatchHandler @ 02571df8 */
                    /* catch() { ... } // from try @ 025723bc with catch @ 02572444
                       catch() { ... } // from try @ 02572434 with catch @ 02572444 */
  auStack_40 = TimeProvider__get_Now_24f4584(0);
                    /* try { // try from 02572448 to 0267277f has its CatchHandler @ 02572448
                       catch() { ... } // from try @ 02572448 with catch @ 02572448
                       catch() { ... } // from try @ 0257278c with catch @ 02572448
                       catch() { ... } // from try @ 025727dc with catch @ 02572448
                       catch() { ... } // from try @ 0257284c with catch @ 02572448 */
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar2 = PTR_DAT_049c5600;
  uVar6 = Localization__get_Culture_252dc80(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar1);
  }
  lVar7 = System_DateTimeOffset__ToString_30e3768(auStack_40,*(undefined8 *)puVar2,uVar6,0);
  puVar1 = PTR_DAT_049be810;
  if (lVar7 != 0) {
    uVar3 = System_String__get_Chars_2f7736c(lVar7,0,0);
    if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0x88) + 0xe4) == 0) {
      FUN_021f0574(*(long *)(PTR_DAT_049b3bd0 + 0x88));
    }
    auStack_44[0] = System_Char__ToUpper_3071fa8(uVar3,uVar6,0);
    uVar8 = System_Char__ToString_3061a08(auStack_44,0);
    uVar9 = System_String__Substring_2f81c00(lVar7,1,0);
    uVar8 = System_String__Concat_2f72b28(uVar8,uVar9,0);
    StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(param_1,0xd7aa29e4,uVar8,0);
    auStack_58 = System_DateTimeOffset__AddDays_30e174c(0x3ff0000000000000,auStack_40,0);
    uVar6 = System_DateTimeOffset__ToString_30e3768(auStack_58,*(undefined8 *)puVar1,uVar6,0);
    StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(param_1,0xc7c69157,uVar6,0);
    StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,0x5f10e269,0);
    lVar7 = *(long *)(param_1 + 0x40);
    uVar3 = System_DateTimeOffset__get_Day_30e107c(auStack_40,0);
    puVar2 = PTR_DAT_049c55f8;
    puVar1 = PTR_DAT_049b8d80;
    if (lVar7 != 0) {
      uVar10 = DailyChallenge__IsCompleted_25168cc(lVar7,uVar3,0);
      uVar3 = 0x93dbeb55;
      if ((uVar10 & 1) == 0) {
        uVar3 = 0xf5401aea;
      }
      StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,uVar3,0);
      DailyChallengeSubMonitor__FillDayElements_247271c(param_1,auStack_40._0_8_,auStack_40._8_8_);
      DailyChallengeSubMonitor__FillRewardElements_24728fc(param_1);
      uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
      UnityEngine_Events_UnityAction___ctor_3c32934(uVar6,param_1,*(undefined8 *)puVar2,0);
      StatefulUISupport_Scripts_Components_StatefulView__SetButtonListener_3351a64
                (param_1,0x42a43c4,uVar6,0);
      lVar7 = StatefulUISupport_Scripts_Components_StatefulView__GetImage_335188c
                        (param_1,0x2d6d4683,0);
      puVar1 = PTR_DAT_049b5310;
      if (lVar7 != 0) {
        lVar7 = UnityEngine_Component__get_gameObject_3c187f4(lVar7,0);
        lVar11 = *(long *)puVar1;
        if (*(int *)(lVar11 + 0xe4) == 0) {
          FUN_021f0574(lVar11);
          lVar11 = *(long *)puVar1;
        }
        lVar11 = *(long *)(lVar11 + 0xb8);
        uStack_78 = *(undefined8 *)(lVar11 + 0x940);
        uStack_80 = *(undefined8 *)(lVar11 + 0x938);
        uStack_68 = *(undefined8 *)(lVar11 + 0x950);
        uStack_70 = *(undefined8 *)(lVar11 + 0x948);
        uVar4 = CloudPrefsBool__op_Implicit_24eb73c(&uStack_80,0);
        if (lVar7 != 0) {
          UnityEngine_GameObject__SetActive_3c1ce34(lVar7,(uVar4 ^ 0xffffffff) & 1,0);
          CloudPrefsBool__Set_24eb1bc(*(long *)(*(long *)puVar1 + 0xb8) + 0x938,1,0);
          if (*(long *)(param_1 + 0x40) != 0) {
            DailyChallenge__Prepare_25157b4(*(long *)(param_1 + 0x40),0);
            if (*(long *)(param_1 + 0x40) != 0) {
              uVar3 = DailyChallenge__ConsumeProgressFrom_2515e38(*(long *)(param_1 + 0x40),0);
              if (*(long *)(param_1 + 0x40) != 0) {
                uVar5 = DailyChallenge__GetCompletedDayCount_25155b0(*(long *)(param_1 + 0x40),0);
                DailyChallengeSubMonitor__ApplyProgress_2472bb0(param_1,uVar3,uVar5);
                return;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

