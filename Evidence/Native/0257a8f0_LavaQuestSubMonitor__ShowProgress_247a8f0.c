/* IL2CPP: LavaQuestSubMonitor$$ShowProgress
Cysharp_Threading_Tasks_UniTask_o LavaQuestSubMonitor__ShowProgress (LavaQuestSubMonitor_o* __this, LavaQuestGame_o from, LavaQuestGame_o to, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuestSubMonitor$$ShowProgress
   Cysharp_Threading_Tasks_UniTask_o LavaQuestSubMonitor__ShowProgress (LavaQuestSubMonitor_o*
   __this, LavaQuestGame_o from, LavaQuestGame_o to, const MethodInfo* method); */

void LavaQuestSubMonitor__ShowProgress_247a8f0
               (undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined4 auStack_110 [2];
  undefined1 auStack_108 [16];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  
  puVar1 = PTR_DAT_049c5960;
  if ((bRam0000000004f4b9e2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5960);
    bRam0000000004f4b9e2 = 1;
  }
  func_0x04608670(auStack_110,0,0xd0);
  thunk_FUN_021f190c(auStack_108,0);
  uStack_f8 = param_1;
  thunk_FUN_021f190c(&uStack_f8,param_1);
  uStack_c8 = param_2[2];
  uStack_d0 = param_2[1];
  uStack_d8 = *param_2;
  uStack_e8 = param_3[1];
  uStack_f0 = *param_3;
  uStack_e0 = param_3[2];
  auStack_110[0] = 0xffffffff;
  FUN_0235c17c(auStack_108,auStack_110,*(undefined8 *)puVar1);
  FUN_0235acf0(auStack_108,0);
  return;
}

