/* IL2CPP: EmailCodeMonitor$$Show
Cysharp_Threading_Tasks_UniTask_string__o EmailCodeMonitor__Show (EmailCodeMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EmailCodeMonitor$$Show
   Cysharp_Threading_Tasks_UniTask_string__o EmailCodeMonitor__Show (EmailCodeMonitor_o* __this,
   const MethodInfo* method); */

void EmailCodeMonitor__Show_243df04(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
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
  
  puVar1 = PTR_DAT_049c3f78;
  if ((bRam0000000004f4b833 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3f78);
    FUN_021f03f8(PTR_DAT_049c3f80);
    FUN_021f03f8(PTR_DAT_049c3f88);
    bRam0000000004f4b833 = 1;
  }
  puVar3 = PTR_DAT_049c3f88;
  puVar2 = PTR_DAT_049c3f80;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  lVar4 = *(long *)(*(long *)puVar1 + 0x20);
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  func_0x04608670((ulong)&uStack_80 | 8,0,*(undefined4 *)(**(long **)(lVar4 + 0xc0) + 0xfc));
  thunk_FUN_021f190c((ulong)&uStack_80 | 8,0);
  uStack_60 = param_2;
  thunk_FUN_021f190c(&uStack_60,param_2);
  uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
  FUN_0235b6cc((ulong)&uStack_80 | 8,&uStack_80,*(undefined8 *)puVar2);
  FUN_0235b7ac((ulong)&uStack_80 | 8,&uStack_98,*(undefined8 *)puVar3);
  param_1[1] = uStack_90;
  *param_1 = uStack_98;
  param_1[2] = uStack_88;
  return;
}

