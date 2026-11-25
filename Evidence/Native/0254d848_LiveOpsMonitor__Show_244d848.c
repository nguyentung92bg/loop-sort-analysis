/* IL2CPP: LiveOpsMonitor$$Show
Cysharp_Threading_Tasks_UniTask_StatefulComponent__o LiveOpsMonitor__Show (LiveOpsMonitor_o* __this, int32_t liveOps, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LiveOpsMonitor$$Show
   Cysharp_Threading_Tasks_UniTask_StatefulComponent__o LiveOpsMonitor__Show (LiveOpsMonitor_o*
   __this, int32_t liveOps, const MethodInfo* method); */

void LiveOpsMonitor__Show_244d848(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
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
  
  puVar1 = PTR_DAT_049c4670;
  if ((bRam0000000004f4b8af & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4670);
    FUN_021f03f8(PTR_DAT_049c4678);
    FUN_021f03f8(PTR_DAT_049c4680);
    bRam0000000004f4b8af = 1;
  }
  puVar3 = PTR_DAT_049c4680;
  puVar2 = PTR_DAT_049c4678;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  lVar4 = *(long *)(*(long *)puVar1 + 0x20);
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  func_0x04608670((ulong)&uStack_90 | 8,0,*(undefined4 *)(**(long **)(lVar4 + 0xc0) + 0xfc));
  thunk_FUN_021f190c((ulong)&uStack_90 | 8,0);
  uStack_70 = param_2;
  thunk_FUN_021f190c(&uStack_70,param_2);
  uStack_68 = CONCAT44(uStack_68._4_4_,param_3);
  uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
  FUN_0235b6cc((ulong)&uStack_90 | 8,&uStack_90,*(undefined8 *)puVar2);
  FUN_0235b7ac((ulong)&uStack_90 | 8,&uStack_a8,*(undefined8 *)puVar3);
  param_1[1] = uStack_a0;
  *param_1 = uStack_a8;
  param_1[2] = uStack_98;
  return;
}

