/* IL2CPP: LavaQuestSubMonitor$$ApplyJumpMotion
Cysharp_Threading_Tasks_UniTask_o LavaQuestSubMonitor__ApplyJumpMotion (LavaQuestSubMonitor_o* __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, UnityEngine_Vector3_o fromPosition, UnityEngine_Vector3_o toPosition, float rotation, float delay, System_Action_o* onComplete, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuestSubMonitor$$ApplyJumpMotion
   Cysharp_Threading_Tasks_UniTask_o LavaQuestSubMonitor__ApplyJumpMotion (LavaQuestSubMonitor_o*
   __this, StatefulUI_Runtime_Core_StatefulComponent_o* view, UnityEngine_Vector3_o fromPosition,
   UnityEngine_Vector3_o toPosition, float rotation, float delay, System_Action_o* onComplete, const
   MethodInfo* method); */

void LavaQuestSubMonitor__ApplyJumpMotion_247b128
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined4 auStack_108 [2];
  undefined1 auStack_100 [16];
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 auStack_d0 [2];
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined8 auStack_b0 [6];
  
  puVar1 = PTR_DAT_049c5970;
  if ((bRam0000000004f4b9e5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5970);
    bRam0000000004f4b9e5 = 1;
  }
  func_0x04608670(auStack_108,0,0x88);
  thunk_FUN_021f190c(auStack_100,0);
  auStack_d0[0] = param_9;
  thunk_FUN_021f190c(auStack_d0,param_9);
  uStack_c0 = param_10;
  thunk_FUN_021f190c(&uStack_c0,param_10);
  uStack_f0 = param_1;
  uStack_ec = param_2;
  uStack_e8 = param_3;
  uStack_e4 = param_4;
  uStack_e0 = param_5;
  uStack_dc = param_6;
  uStack_d8 = param_8;
  uStack_b8 = param_7;
  auStack_b0[0] = param_11;
  thunk_FUN_021f190c(auStack_b0,param_11);
  auStack_108[0] = 0xffffffff;
  FUN_0235c17c(auStack_100,auStack_108,*(undefined8 *)puVar1);
  FUN_0235acf0(auStack_100,0);
  return;
}

