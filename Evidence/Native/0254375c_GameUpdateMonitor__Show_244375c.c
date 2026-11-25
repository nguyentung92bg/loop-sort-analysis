/* IL2CPP: GameUpdateMonitor$$Show
Cysharp_Threading_Tasks_UniTask_o GameUpdateMonitor__Show (GameUpdateMonitor_o* __this, int32_t requirement, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GameUpdateMonitor$$Show
   Cysharp_Threading_Tasks_UniTask_o GameUpdateMonitor__Show (GameUpdateMonitor_o* __this, int32_t
   requirement, const MethodInfo* method); */

void GameUpdateMonitor__Show_244375c(long param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  if ((bRam0000000004f4b855 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4180);
    bRam0000000004f4b855 = 1;
  }
  puVar3 = PTR_DAT_049c4180;
  if (param_2 != 0) {
    uVar1 = 0x21dc10b5;
    if (param_2 != 2) {
      uVar1 = 0x544baef0;
    }
    uVar2 = 0x17f57706;
    if (param_2 != 1) {
      uVar2 = uVar1;
    }
    StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,uVar2,0);
    lVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
    Cysharp_Threading_Tasks_UniTaskCompletionSource___ctor_37beca4(lVar4,0);
    plVar5 = (long *)(param_1 + 0xa0);
    *plVar5 = lVar4;
    thunk_FUN_021f190c(plVar5,lVar4);
    if (*plVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Cysharp_Threading_Tasks_UniTaskCompletionSource__get_Task_37bf128(*plVar5,0);
  }
  return;
}

