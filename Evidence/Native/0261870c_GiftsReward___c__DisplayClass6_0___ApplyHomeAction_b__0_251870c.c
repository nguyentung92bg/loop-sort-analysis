/* IL2CPP: GiftsReward.<>c__DisplayClass6_0$$<ApplyHomeAction>b__0
void GiftsReward___c__DisplayClass6_0___ApplyHomeAction_b__0 (GiftsReward___c__DisplayClass6_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GiftsReward.<>c__DisplayClass6_0$$<ApplyHomeAction>b__0
   void GiftsReward___c__DisplayClass6_0___ApplyHomeAction_b__0 (GiftsReward___c__DisplayClass6_0_o*
   __this, const MethodInfo* method); */

void GiftsReward___c__DisplayClass6_0___ApplyHomeAction_b__0_251870c(long param_1)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined1 auStack_14 [4];
  
  auStack_14[0] = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
    uStack_28 = *(undefined8 *)(param_1 + 0x18);
    uStack_30 = *(undefined8 *)(param_1 + 0x10);
    uStack_20 = *(undefined8 *)(param_1 + 0x20);
    auStack_14[0] = GiftsReward__ClaimAndGrant_2518464(*(long *)(param_1 + 0x30),&uStack_30);
    Cysharp_Threading_Tasks_UniTaskVoid__Forget_380210c(auStack_14,0);
    if (*(long *)(param_1 + 0x28) != 0) {
      Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource__TrySetResult_37c2bac
                (*(long *)(param_1 + 0x28),0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

