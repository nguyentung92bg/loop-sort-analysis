/* IL2CPP: LoopSortConflictResolver.<Resolve>d__12$$MoveNext
void LoopSortConflictResolver__Resolve_d__12__MoveNext (LoopSortConflictResolver__Resolve_d__12_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoopSortConflictResolver.<Resolve>d__12$$MoveNext
   void LoopSortConflictResolver__Resolve_d__12__MoveNext (LoopSortConflictResolver__Resolve_d__12_o
   __this, const MethodInfo* method); */

void LoopSortConflictResolver__Resolve_d__12__MoveNext_223eba0(int *param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_58;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_24 [4];
  
  if ((bRam0000000004f49af4 & 1) == 0) {
                    /* try { // try from 0233ebc8 to 0243ee3f has its CatchHandler @ 0233ee74 */
    FUN_021f03f8(PTR_DAT_049b5110);
    FUN_021f03f8(PTR_DAT_049b5118);
    FUN_021f03f8(PTR_DAT_049b5098);
    FUN_021f03f8(PTR_DAT_049b5020);
    FUN_021f03f8(PTR_DAT_049b5120);
    FUN_021f03f8(PTR_DAT_049b5128);
    FUN_021f03f8(PTR_DAT_049b5130);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f49af4 = 1;
  }
  puVar2 = PTR_DAT_049b5020;
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  lVar5 = *(long *)(param_1 + 10);
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  auVar1 = ZEXT816(0);
  uStack_58 = 0;
  if (*param_1 == 0) {
    auStack_40 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      uStack_58 = *(undefined8 *)(param_1 + 0x12);
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *param_1 = -1;
      auStack_50 = ZEXT816(0);
      auStack_40 = ZEXT816(0);
      goto LAB_0233ed20;
    }
    uVar6 = *(undefined8 *)(param_1 + 8);
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_50 = Cysharp_Threading_Tasks_UniTask__SwitchToMainThread_37cb170(uVar6,0);
    auStack_40 = Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable__GetAwaiter_37d5a6c
                           (auStack_50,0);
    uVar4 = Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable_Awaiter__get_IsCompleted_37d5ab4
                      (auStack_40,0);
    auVar1 = auStack_50;
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xe) = auStack_40;
      thunk_FUN_021f190c(param_1 + 0x10,0);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
      System_Runtime_CompilerServices_AsyncTaskMethodBuilder___Il2CppFullySharedGenericType___AwaitUnsafeOnCompleted___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__25872a8
                (param_1 + 2,auStack_40,param_1,*(undefined8 *)PTR_DAT_049b5110);
      return;
    }
  }
  auStack_50 = auVar1;
  Cysharp_Threading_Tasks_SwitchToMainThreadAwaitable_Awaiter__GetResult_37d5b64(auStack_40,0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar5 = LoopSortConflictResolver__HandleResolve_223dce4
                    (lVar5,*(undefined8 *)(param_1 + 0xc),*(undefined8 *)(param_1 + 8));
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uStack_58 = System_Threading_Tasks_Task___Il2CppFullySharedGenericType___GetAwaiter_29bc448
                        (lVar5,*(undefined8 *)PTR_DAT_049b5130);
  uVar4 = System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___get_IsCompleted_29b922c
                    (&uStack_58,*(undefined8 *)PTR_DAT_049b5128);
  if ((uVar4 & 1) == 0) {
    *param_1 = 1;
    *(undefined8 *)(param_1 + 0x12) = uStack_58;
    thunk_FUN_021f190c(param_1 + 0x12,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    System_Runtime_CompilerServices_AsyncTaskMethodBuilder___Il2CppFullySharedGenericType___AwaitUnsafeOnCompleted___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType__25872a8
              (param_1 + 2,&uStack_58,param_1,*(undefined8 *)PTR_DAT_049b5118);
    return;
  }
LAB_0233ed20:
  System_Runtime_CompilerServices_TaskAwaiter___Il2CppFullySharedGenericType___GetResult_29b926c
            (&uStack_58,auStack_24,*(undefined8 *)PTR_DAT_049b5120);
  *param_1 = -2;
  puVar3 = PTR_DAT_049b5098;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  System_Runtime_CompilerServices_AsyncTaskMethodBuilder___Il2CppFullySharedGenericType___SetResult_27d0414
            (param_1 + 2,auStack_24,*(undefined8 *)puVar3);
  return;
}

