/* IL2CPP: NotificationReward.<>c__DisplayClass3_0$$<ApplyHomeAction>b__0
void NotificationReward___c__DisplayClass3_0___ApplyHomeAction_b__0 (NotificationReward___c__DisplayClass3_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NotificationReward.<>c__DisplayClass3_0$$<ApplyHomeAction>b__0
   void NotificationReward___c__DisplayClass3_0___ApplyHomeAction_b__0
   (NotificationReward___c__DisplayClass3_0_o* __this, const MethodInfo* method); */

uint NotificationReward___c__DisplayClass3_0___ApplyHomeAction_b__0_2523b6c(long param_1)

{
  short sVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  short *psVar7;
  undefined1 auStack_24 [12];
  
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x18), lVar5 != 0)) {
                    /* try { // try from 02623b88 to 02723bd3 has its CatchHandler @ 02623e54 */
    NotificationModule__SetRespondRewardsClaimed_254cb74(lVar5,0);
    puVar2 = PTR_DAT_049cf670;
    lVar5 = *(long *)(param_1 + 0x18);
    if (lVar5 != 0) {
      if ((bRam0000000004f535f2 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049cf678,0);
        FUN_021f03f8(PTR_DAT_049cf680);
        FUN_021f03f8(PTR_DAT_049cf670);
        bRam0000000004f535f2 = 1;
      }
      sVar1 = *(short *)(lVar5 + 0x40);
      lVar6 = *(long *)(*(long *)puVar2 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02229718();
      }
      psVar7 = (short *)thunk_FUN_0224e54c(lVar5 + 0x18,
                                           *(long *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) +
                                                    0x80) + 0x40);
      puVar3 = PTR_DAT_049cf680;
      puVar2 = PTR_DAT_049cf678;
      if (sVar1 == *psVar7) {
        lVar6 = *(long *)PTR_DAT_049cf678;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          FUN_021f0574();
          lVar6 = *(long *)puVar2;
        }
        auStack_24[0] = **(undefined1 **)(lVar6 + 0xb8);
        uVar4 = Cysharp_Threading_Tasks_UniTaskCompletionSourceCore___Il2CppFullySharedGenericType___TrySetResult_29e0e30
                          (lVar5 + 0x18,auStack_24,*(undefined8 *)puVar3);
      }
      else {
        uVar4 = 0;
      }
      return uVar4 & 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

