/* IL2CPP: DailyChallengeSubMonitor$$FillDayElements
void DailyChallengeSubMonitor__FillDayElements (DailyChallengeSubMonitor_o* __this, System_DateTimeOffset_o now, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallengeSubMonitor$$FillDayElements
   void DailyChallengeSubMonitor__FillDayElements (DailyChallengeSubMonitor_o* __this,
   System_DateTimeOffset_o now, const MethodInfo* method); */

void DailyChallengeSubMonitor__FillDayElements_247271c
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uStack_60;
  undefined8 uStack_58;
  int iStack_44;
  
  puVar1 = PTR_DAT_049b5050;
  uStack_60 = param_2;
  uStack_58 = param_3;
  if ((bRam0000000004f4b9b4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b5fb0);
    bRam0000000004f4b9b4 = 1;
  }
  puVar2 = PTR_DAT_049b5fb0;
                    /* try { // try from 02572780 to 0267278b has its CatchHandler @ 025727ac */
  iStack_44 = 0;
                    /* try { // try from 0257278c to 026727c3 has its CatchHandler @ 02572448 */
  lVar8 = StatefulUISupport_Scripts_Components_StatefulView__GetContainer_335177c
                    (param_1,0x297c94cc,0);
  lVar12 = *(long *)puVar1;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    FUN_021f0574(lVar12);
  }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02572780 with catch @ 025727ac
                        */
  uVar4 = System_DateTimeOffset__get_Year_30e15d4(&uStack_60,0);
  uVar5 = System_DateTimeOffset__get_Month_30e1374(&uStack_60,0);
                    /* try { // try from 025727c4 to 026727db has its CatchHandler @ 02572844 */
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar2);
  }
                    /* try { // try from 025727dc to 02672833 has its CatchHandler @ 02572448 */
  iVar6 = System_DateTime__DaysInMonth_30dc6a0(uVar4,uVar5,0);
  iStack_44 = 1;
  if (0 < iVar6) {
    if (lVar8 == 0) {
LAB_025728f8:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    do {
      uVar9 = StatefulUI_Runtime_Core_ContainerView__AddStatefulComponent_334710c(lVar8,0);
      uVar10 = System_Int32__ToString_30fbaa0(&iStack_44,0);
                    /* try { // try from 02572834 to 02672843 has its CatchHandler @ 02572844 */
                    /* catch() { ... } // from try @ 025727c4 with catch @ 02572844
                       catch() { ... } // from try @ 02572834 with catch @ 02572844 */
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                (uVar9,0x297c94cc,uVar10,0);
                    /* try { // try from 02572848 to 0267284b has its CatchHandler @ 02572854 */
                    /* try { // try from 0257284c to 02672857 has its CatchHandler @ 02572448 */
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_025728f8;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02572848 with catch @ 02572854
                        */
      uVar11 = DailyChallenge__IsCompleted_25168cc(*(long *)(param_1 + 0x40),iStack_44,0);
      iVar3 = iStack_44;
      if ((uVar11 & 1) == 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          FUN_021f0574();
        }
        iVar7 = System_DateTimeOffset__get_Day_30e107c(&uStack_60,0);
        if (iVar3 == iVar7) {
          uVar4 = 0x2af94178;
        }
        else {
          if (*(long *)(param_1 + 0x40) == 0) goto LAB_025728f8;
          uVar11 = DailyChallenge__IsFailed_251695c(*(long *)(param_1 + 0x40),iStack_44,0);
          uVar4 = 0x18319ff2;
          if ((uVar11 & 1) == 0) {
            uVar4 = 0x5f10e269;
          }
        }
      }
      else {
        uVar4 = 0x93dbeb55;
      }
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetState_3351750
                (uVar9,uVar4,0);
      iStack_44 = iStack_44 + 1;
    } while (iStack_44 <= iVar6);
  }
  return;
}

