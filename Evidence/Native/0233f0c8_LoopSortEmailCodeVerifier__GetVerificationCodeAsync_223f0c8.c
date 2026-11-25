/* IL2CPP: LoopSortEmailCodeVerifier$$GetVerificationCodeAsync
System_Threading_Tasks_Task_string__o* LoopSortEmailCodeVerifier__GetVerificationCodeAsync (LoopSortEmailCodeVerifier_o* __this, System_String_o* email, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoopSortEmailCodeVerifier$$GetVerificationCodeAsync
   System_Threading_Tasks_Task_string__o* LoopSortEmailCodeVerifier__GetVerificationCodeAsync
   (LoopSortEmailCodeVerifier_o* __this, System_String_o* email,
   System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

void LoopSortEmailCodeVerifier__GetVerificationCodeAsync_223f0c8
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = PTR_DAT_049b5140;
  if ((bRam0000000004f49af6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5148);
    FUN_021f03f8(PTR_DAT_049b5150);
    FUN_021f03f8(PTR_DAT_049b5158);
    FUN_021f03f8(PTR_DAT_049b5140);
    bRam0000000004f49af6 = 1;
  }
  puVar4 = PTR_DAT_049b5158;
  puVar3 = PTR_DAT_049b5150;
  puVar2 = PTR_DAT_049b5148;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder___Il2CppFullySharedGenericType___Create_27d0368
            (&uStack_c8,*(undefined8 *)puVar2);
  uStack_a0 = uStack_c0;
  uStack_a8 = uStack_c8;
  uStack_98 = uStack_b8;
  thunk_FUN_021f190c((ulong)&uStack_b0 | 8,0);
  uStack_80 = param_1;
  thunk_FUN_021f190c(&uStack_80,param_1);
  uStack_90 = param_3;
  thunk_FUN_021f190c(&uStack_90,0);
  uStack_b0 = CONCAT44(uStack_b0._4_4_,0xffffffff);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder___Il2CppFullySharedGenericType___Start___Il2CppFullySharedGenericType__25875b8
            ((ulong)&uStack_b0 | 8,&uStack_b0,*(undefined8 *)puVar3);
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder___Il2CppFullySharedGenericType___get_Task_27d037c
            ((ulong)&uStack_b0 | 8,*(undefined8 *)puVar4);
  return;
}

