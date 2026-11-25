/* IL2CPP: DailyGoldGift.<>c__DisplayClass5_0$$<ApplyHomeAction>b__0
void DailyGoldGift___c__DisplayClass5_0___ApplyHomeAction_b__0 (DailyGoldGift___c__DisplayClass5_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyGoldGift.<>c__DisplayClass5_0$$<ApplyHomeAction>b__0
   void DailyGoldGift___c__DisplayClass5_0___ApplyHomeAction_b__0
   (DailyGoldGift___c__DisplayClass5_0_o* __this, const MethodInfo* method); */

void DailyGoldGift___c__DisplayClass5_0___ApplyHomeAction_b__0_251760c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_30 [16];
  
  puVar1 = PTR_DAT_049b5310;
                    /* try { // try from 0261761c to 0271769f has its CatchHandler @ 02616d60 */
  if ((bRam0000000004f4be24 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5fa0);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    bRam0000000004f4be24 = 1;
  }
  puVar3 = PTR_DAT_049b5fc8;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar2 = PTR_DAT_049b5fa0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_30 = TimeProvider__get_Now_24f4584(0);
                    /* try { // try from 026176ac to 027176b7 has its CatchHandler @ 02617878 */
  CloudPrefsT___Il2CppFullySharedGenericStructType___Set_28025ac
            (*(long *)(*(long *)puVar1 + 0xb8) + 0x408,auStack_30,*(undefined8 *)puVar2);
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 026176b8 to 027177c3 has its CatchHandler @ 0261531c */
    Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource__TrySetResult_37c2bac
              (*(long *)(param_1 + 0x10),0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

