/* IL2CPP: TimeModule$$Resume
Cysharp_Threading_Tasks_UniTask_o TimeModule__Resume (TimeModule_o* __this, float duration, float delayInSeconds, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TimeModule$$Resume
   Cysharp_Threading_Tasks_UniTask_o TimeModule__Resume (TimeModule_o* __this, float duration, float
   delayInSeconds, System_Threading_CancellationToken_o cancellationToken, const MethodInfo*
   method); */

void TimeModule__Resume_253a530
               (undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
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
  
  puVar1 = PTR_DAT_049ca398;
  if ((bRam0000000004f4bf80 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca398);
    bRam0000000004f4bf80 = 1;
  }
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  thunk_FUN_021f190c((ulong)&uStack_90 | 8,0);
  uStack_78 = param_3;
  thunk_FUN_021f190c(&uStack_78,param_3);
  uStack_60 = CONCAT44(param_1,0x3f800000);
  uStack_70 = CONCAT44(uStack_70._4_4_,param_2);
  uStack_68 = param_4;
  thunk_FUN_021f190c(&uStack_68,0);
  uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
  FUN_0235c17c((ulong)&uStack_90 | 8,&uStack_90,*(undefined8 *)puVar1);
  FUN_0235acf0((ulong)&uStack_90 | 8,0);
  return;
}

